#ifndef TEST_SOURCE_ENVIRONMENT_H_
#define TEST_SOURCE_ENVIRONMENT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <cstdio>

#include "test\source\Result.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Environment final
			{
			public:
				typedef BrainMuscles::test::source::Result ResultType;
			private:
				ResultType m_result;
				std::FILE* m_file;
			private:
				inline Environment();
			private:
				static inline Environment& Instance();
			public:
				static inline bool IsPass();
			public:
				static inline const Environment& GetInstance();
				static inline const ResultType& Result();
				template<typename... ARGS>
				static inline void SetError(const char* file, const std::size_t& line, const char* message, ARGS... args);
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

			template<typename... ARGS>
			inline void Environment::SetError(const char* file, const std::size_t& line, const char* message, ARGS... args)
			{
				if (Result() != ResultType::error)
				{
					Instance().m_result = ResultType::error;
					std::string format = "Assertion failed: ";
					format += message;
					format += ", file %s, line %zu\n";
					std::fprintf(Instance().m_file, format.c_str(), args..., file, line);
				}
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_H_