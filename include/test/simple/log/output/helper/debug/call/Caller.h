#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_CALLER_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_CALLER_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_DEBUG_)

#include <utility>

#include "test/simple/log/output/Call.h"

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
					namespace helper
					{
						namespace debug
						{
							namespace call
							{
								template<typename TYPE>
								class Caller
								{
								private:
									template<typename CALLER_TYPE, typename FUNCTION_TYPE>
									static CALLER_TYPE CallerTypeImpl(const BrainMuscles::test::simple::log::output::Call<CALLER_TYPE, FUNCTION_TYPE>&);

									static void CallerTypeImpl(...);
								public:
									typedef decltype(CallerTypeImpl(std::declval<TYPE>())) Type;
								};
							}
						}
					}
				}
			}
		}
	}
}

#endif 

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_CALLER_H_