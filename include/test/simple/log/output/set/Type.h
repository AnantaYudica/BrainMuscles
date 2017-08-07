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
						enum Type : unsigned char
						{
							local_value = 1,
							global_value = 1 << 1,
							local_and_global_value = (local_value | global_value)
						};

						bool operator==(Type a, Type b)
						{
							return (a & b);
						}

						bool operator!=(Type a, Type b)
						{
							return !(operator==(a,b));
						}
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_SET_TYPE_H_