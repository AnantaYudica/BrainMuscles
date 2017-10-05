#ifndef TEST_SOURCE_ENVIRONMENT_H_
#define TEST_SOURCE_ENVIRONMENT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>
#include <cstdio>

#include "test\source\Result.h"
#include "test\source\Error.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Environment final
			{
			public:
				typedef BrainMuscles::test::source::Result	ResultType;
				typedef BrainMuscles::test::source::Error	ErrorType;
			private:
				ResultType m_result;
				std::FILE* m_file;
				std::stack<std::string> m_trace;
			private:
				inline Environment();
			private:
				static inline Environment& Instance();
			public:
				static inline bool IsPass();
			public:
				static inline const Environment& GetInstance();
				static inline const ResultType& Result();
				static inline void Error(const ErrorType& error);
			public:
				static inline void Trace(std::string caller, const char* file = NULL, const std::size_t& line = 0);
				static inline void PopTrace();
			public:
				static inline ErrorType ErrorMessage(const char* file, const std::size_t& line, std::string title, std::string message);
				template<typename... ARGS>
				static inline ErrorType ErrorMessage(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args);
			};

			inline Environment::Environment() :
				m_result(ResultType::pass),
				m_file(stderr)
			{}

			inline Environment& Environment::Instance()
			{
				static Environment instance = Environment();
				return instance;
			}

			inline bool Environment::IsPass()
			{
				return Result() == ResultType::pass;
			}

			inline const Environment& Environment::GetInstance()
			{
				return Instance();
			}

			inline const typename Environment::ResultType& Environment::Result()
			{
				return GetInstance().m_result;
			}

			inline void Environment::Error(const ErrorType& error)
			{
				fprintf(Instance().m_file, "%s\n", std::to_string(error).c_str());
				std::stack<std::string> trace(error.Trace);
				while (trace.size() != 0)
				{
					fprintf(Instance().m_file, "%s\n", trace.top().c_str());
					trace.pop();
				}
			}

			inline void Environment::Trace(std::string caller, const char* file, const std::size_t& line)
			{
				std::string msg = "";
				if (!caller.empty())
				{
					msg += caller;
				}
				else
				{
					msg += "call unknown function";
				}
				if (file != NULL)
				{
					msg += ", file ";
					msg += file;
					msg += ", line ";
					msg += std::to_string(line);
				}
				Instance().m_trace.push(msg);
			}

			inline void Environment::PopTrace()
			{
				Instance().m_trace.pop();
			}

			inline typename Environment::ErrorType
				Environment::ErrorMessage(const char* file, const std::size_t& line, std::string title, std::string message)
			{
				std::string cause = title;
				cause += ": ";
				cause += message;
				std::string information = "file ";
				information += file;
				information += ", line ";
				information += std::to_string(line);
				return ErrorType(cause, information, Instance().m_trace);
			}

			template<typename... ARGS>
			inline typename Environment::ErrorType
				Environment::ErrorMessage(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args)
			{
				char buffer[1024];
#if ((defined(_WIN32) || defined(_WIN64)) && !defined(_CRT_SECURE_NO_WARNINGS))
				sprintf_s(buffer, format, args...);
#else
				std::sprintf(buffer, format, args...);
#endif
				std::string cause = title;
				cause += ": ";
				cause += buffer;
				std::string information = "file ";
				information += file;
				information += ", line ";
				information += std::to_string(line);
				return ErrorType(cause, information, Instance().m_trace);
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_H_