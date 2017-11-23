#ifndef TEST_SIMPLE_LOG_OUTPUT_CONSTANT_H_
#define TEST_SIMPLE_LOG_OUTPUT_CONSTANT_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					class Constant final
					{
						Constant() = delete;
					public:
						typedef const char * LoopConjunctionDefaultType;
						typedef const char * LoopBeforePrintDefaultType;
						typedef const char * LoopAfterPrintDefaultType;
					public:
						static constexpr const char * BooleanLowerString[2] = { "false", "true" };
						static constexpr const char * BooleanUpperString[2] = { "FALSE", "TRUE" };

						static constexpr LoopConjunctionDefaultType LoopConjunctionDefault = ", ";
						static constexpr LoopBeforePrintDefaultType LoopBeforePrintDefault = "[";
						static constexpr LoopAfterPrintDefaultType LoopAfterPrintDefault = "]";
					};
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_CONSTANT_H_