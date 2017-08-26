#ifndef TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_CAST_H_
#define TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_CAST_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_DEBUG_)

#include <type_traits>

#include "test\simple\log\output\helper\debug\call\handle\Caller.h"
#include "test\simple\log\output\helper\debug\call\handle\Output.h"

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
									class Cast
									{
									public:
										typedef typename BrainMuscles::test::simple::log::output::helper
											::debug::call::handle::Caller<TYPE>::Type						CallerType;
										typedef typename BrainMuscles::test::simple::log::output::helper
											::debug::call::handle::Output<TYPE>::Type						OutputType;
										typedef typename std::conditional<std::is_void<CallerType>::value
											|| std::is_void<OutputType>::value, TYPE,
											BrainMuscles::test::simple::log::output::Call<
											CallerType, OutputType>>::type									Type;
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HELPER_DEBUG_CALL_HANDLE_CAST_H_