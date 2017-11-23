#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_FUNCTION_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_FUNCTION_H_

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
								class Function
								{
								private:
									template<typename CALLER_TYPE, typename FUNCTION_TYPE>
									static FUNCTION_TYPE FunctionTypeImpl(const BrainMuscles::test::simple::log::output::Call<CALLER_TYPE, FUNCTION_TYPE>&);

									static void FunctionTypeImpl(...);
								public:
									typedef decltype(FunctionTypeImpl(std::declval<TYPE>())) Type;
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_FUNCTION_H_