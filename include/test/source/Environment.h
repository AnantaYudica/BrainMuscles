#ifndef TEST_SOURCE_ENVIRONMENT_H_
#define TEST_SOURCE_ENVIRONMENT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>
#include <cstdio>

#include "test\source\Info.h"
#include "test\source\error\Message.h"
#include "test\source\info\Delegate.h"
#include "test\source\result\Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Environment final
			{
			public:
				typedef BrainMuscles::test::source::result::Flags	ResultFlagsType;
				typedef BrainMuscles::test::source::error::Message	ErrorMessageType;
				typedef BrainMuscles::test::source::Info	InfoType;
				typedef typename InfoType::FlagsType		InfoFlagsType;
				typedef typename InfoType::FlagsIntegerType	InfoFlagsIntegerType;
			public:
				typedef BrainMuscles::test::source::info::Delegate<Environment> DelegateType;
			private:
				ResultFlagsType m_result;
				std::FILE* m_file;
				std::stack<std::string> m_trace;
				int m_skipTrace;
				std::stack<std::string> m_callerFunction;
				InfoType m_info;
			private:
				inline Environment();
			private:
				static inline Environment& Instance();
			public:
				static inline bool IsPass();
			public:
				static inline const Environment& GetInstance();
				static inline const ResultFlagsType& Result();
				static inline void Error(const ErrorMessageType& error_message);
			public:
				static inline InfoType& Info();
				static inline void Info(InfoFlagsIntegerType flag);
				static inline DelegateType Info(const char* file, const std::size_t& line, InfoFlagsIntegerType flag, std::size_t buffer_allocation = DelegateType::BufferAllocation);
				template<typename... ARGS>
				static void Info(const char* file, const std::size_t& line, const char* format, ARGS... args);
				template<typename... ARGS>
				static void Info(InfoFlagsIntegerType info_flag, const char* file, const std::size_t& line, const char* format, ARGS... args);
			public:
				static inline void Trace(std::string caller, const char* file = NULL, const std::size_t& line = 0);
				static inline void PopTrace();
			public:
				static inline void CallerFunction(std::string caller);
				static inline std::string CallerFunction();
				static inline void PopCallerFunction();
			public:
				static inline ErrorMessageType ErrorMessage(const char* file, const std::size_t& line, std::string title, std::string message);
				template<typename... ARGS>
				static inline ErrorMessageType ErrorMessage(const char* file, const std::size_t& line, std::string title, const char* format, ARGS... args);
			};

			inline Environment::Environment() :
				m_result(ResultFlagsType::pass),
				m_file(stderr),
				m_skipTrace(0),
				m_info()
			{}

			inline Environment& Environment::Instance()
			{
				static Environment instance = Environment();
				return instance;
			}

			inline bool Environment::IsPass()
			{
				return Result() == ResultFlagsType::pass;
			}

			inline const Environment& Environment::GetInstance()
			{
				return Instance();
			}

			inline const typename Environment::ResultFlagsType& Environment::Result()
			{
				return GetInstance().m_result;
			}

			inline void Environment::Error(const ErrorMessageType& error)
			{
				fprintf(Instance().m_file, "%s\n", std::to_string(error).c_str());
				std::stack<std::string> trace(error.Trace);
				while (trace.size() != 0)
				{
					fprintf(Instance().m_file, "%s\n", trace.top().c_str());
					trace.pop();
				}
				Instance().m_result = ResultFlagsType::error;
			}

			inline typename Environment::InfoType& Environment::Info()
			{
				return Instance().m_info;
			}

			inline void Environment::Info(InfoFlagsIntegerType flag)
			{
				Info().Enable(flag);
			}

			inline typename Environment::DelegateType 
				Environment::Info(const char* file, const std::size_t& line, 
					InfoFlagsIntegerType flag, std::size_t buffer_allocation)
			{
				return DelegateType(&Info(), file, line, flag, buffer_allocation);
			}

			template<typename... ARGS>
			void Environment::Info(const char* file, const std::size_t& line, 
				const char* format, ARGS... args)
			{
				fprintf(Instance().m_file, "Info : ");
				fprintf(Instance().m_file, format, args...);
				fprintf(Instance().m_file, " file %s, line %zu\n", file, line);
			}

			template<typename... ARGS>
			void Environment::Info(InfoFlagsIntegerType info_flag, 
				const char* file, const std::size_t& line, 
				const char* format, ARGS... args)
			{
				if (Info().IsEnable(info_flag))
				{
					Info(file, line, format, args);
				}
			}

			inline void Environment::Trace(std::string caller, const char* file, const std::size_t& line)
			{
				std::string msg = "";
				if (!caller.empty())
				{
					msg += caller;
					if (file != NULL)
					{
						msg += ", file ";
						msg += file;
						msg += ", line ";
						msg += std::to_string(line);
					}
					Instance().m_trace.push(msg);
				}
				else
				{
					++Instance().m_skipTrace;
				}
			}

			inline void Environment::PopTrace()
			{
				if (Instance().m_skipTrace == 0)
				{
					if (!Instance().m_trace.empty())
					{
						Instance().m_trace.pop();
					}
				}
				else
				{
					--Instance().m_skipTrace;
				}
			}

			inline void Environment::CallerFunction(std::string caller)
			{
				if (!caller.empty())
				{
					Instance().m_callerFunction.push(caller);
				}
				else
				{
					Instance().m_callerFunction.push("call unknown function");
				}
			}

			inline std::string Environment::CallerFunction()
			{
				if (!Instance().m_callerFunction.empty())
				{
					return Instance().m_callerFunction.top();
				}
				return "";
			}

			inline void Environment::PopCallerFunction()
			{
				if (!Instance().m_callerFunction.empty())
				{
					Instance().m_callerFunction.pop();
				}
			}

			inline typename Environment::ErrorMessageType
				Environment::ErrorMessage(const char* file, const std::size_t& line, std::string title, std::string message)
			{
				std::string cause = title;
				cause += ": ";
				cause += message;
				std::string information = "file ";
				information += file;
				information += ", line ";
				information += std::to_string(line);
				return ErrorMessageType(cause, information, Instance().m_trace);
			}

			template<typename... ARGS>
			inline typename Environment::ErrorMessageType
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
				return ErrorMessageType(cause, information, Instance().m_trace);
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_H_