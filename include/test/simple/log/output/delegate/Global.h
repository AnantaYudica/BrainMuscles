#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_GLOBAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_GLOBAL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\Arguments.h"

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
					namespace handle
					{
						class Global :
							public BrainMuscles::test::simple::log::output::Arguments<Global, void>
						{};
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_GLOBAL_H_