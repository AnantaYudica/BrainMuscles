#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_OUTPUT_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_OUTPUT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_DEBUG_)

#include <utility>

#include "test\simple\log\output\call\Handle.h"

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
								namespace handle
								{
									template<typename TYPE>
									class Output
									{
									private:
										template<typename CALLER_TYPE, typename OUTPUT_TYPE>
										static OUTPUT_TYPE OutputTypeImpl(const BrainMuscles::test::simple::log::output::call::Handle<CALLER_TYPE, OUTPUT_TYPE>&);

										static void OutputTypeImpl(...);
									public:
										typedef decltype(OutputTypeImpl(std::declval<TYPE>())) Type;
									};
								}
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_OUTPUT_H_