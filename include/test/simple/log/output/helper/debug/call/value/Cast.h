#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_VALUE_CAST_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_VALUE_CAST_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_DEBUG_)

#include <type_traits>

#include "test\simple\log\output\call\Value.h"

#include "test\simple\log\output\helper\debug\call\value\Caller.h"

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
								namespace value
								{
									template<typename TYPE>
									class Cast
									{
									public:
										typedef typename BrainMuscles::test::simple::log::output::helper
											::debug::call::value::Caller<TYPE>::Type						CallerType;
										typedef typename std::conditional<std::is_void<CallerType>::value, 
											TYPE, BrainMuscles::test::simple::log::output::call::Value<
											CallerType>>::type												Type;
									public:
										static Type& Value(TYPE& type);
									};

									template<typename TYPE>
									typename Cast<TYPE>::Type&
										Cast<TYPE>::Value(TYPE& type)
									{
										return static_cast<Type&>(type);
									}
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_VALUE_CAST_H_