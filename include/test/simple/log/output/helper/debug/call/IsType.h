#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_ISTYPE_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_ISTYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_DEBUG_)

#include <utility>

#include "test\simple\log\output\Call.h"

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
								class IsType
								{
								private:
									template<typename CALLER_TYPE, typename FUNCTION_TYPE>
									static std::true_type IsTypeImpl(const BrainMuscles::test::simple::log::output::Call<CALLER_TYPE, FUNCTION_TYPE>&);

									static std::false_type IsTypeImpl(...);
								public:
									static constexpr bool Value = decltype(IsTypeImpl(std::declval<TYPE>()))::value;
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_ISTYPE_H_