#ifndef TEST_SIMPLE_LOG_OUTPUT_SET_TYPE_H_
#define TEST_SIMPLE_LOG_OUTPUT_SET_TYPE_H_

#include "test\Configure.h"

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
					namespace set
					{
						enum Type
						{
							local_value = 0,
							global_value = 1
						};
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_SET_TYPE_H_