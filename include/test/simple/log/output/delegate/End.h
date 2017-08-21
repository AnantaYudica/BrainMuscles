#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_END_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_END_H_

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
						class End :
							public BrainMuscles::test::simple::log::output::Arguments<End, void>
						{};
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_END_H_