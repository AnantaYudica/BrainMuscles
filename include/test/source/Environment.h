#ifndef TEST_SOURCE_ENVIRONMENT_H_
#define TEST_SOURCE_ENVIRONMENT_H_

#ifdef _USING_TEST_SOURCE_

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
				static inline const Environment& GetInstance();
				static inline const ResultType& Result();
				static inline void SetError(const char* message, const char* file, const std::size_t& line);
			};

			inline Environment& Environment::Instance()
			{
				static Environment instance = Environment();
				return instance;
			}

			inline Environment::Environment() :
				m_result(ResultType::pass),
				m_file(stderr)
			{}

			inline const Environment& Environment::GetInstance()
			{
				return Instance();
			}

			inline const typename Environment::ResultType& Environment::Result()
			{
				return GetInstance().m_result;
			}

			inline void Environment::SetError(const char* message, const char* file, const std::size_t& line)
			{
				if (Result() != ResultType::error)
				{
					Instance().m_result = ResultType::error;
					std::fprintf(Instance().m_file, "Assertion failed: %s, file %s, line %zu\n", message, file, line);
				}
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_H_