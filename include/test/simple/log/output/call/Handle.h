#ifndef TEST_SIMPLE_LOG_OUTPUT_CALL_HANDLE_H_
#define TEST_SIMPLE_LOG_OUTPUT_CALL_HANDLE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\Call.h"
#include "test\simple\log\output\Handle.h"
#include "test\simple\log\output\format\Value.h"

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
					namespace call
					{
						template<typename... ARGS>
						class Handle :
							public BrainMuscles::test::simple::log::output::Call<
								BrainMuscles::test::simple::functional::Function<
									void, BrainMuscles::test::simple::log::output::Handle*, ARGS...>>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::Handle			HandleType;
							typedef BrainMuscles::test::simple::functional::Function<
								void, HandleType*, ARGS...>									FunctionType;
							typedef BrainMuscles::test::simple::log::output::Call<
								FunctionType>												BaseType;
						public:
							Handle(FunctionType function);
							Handle(std::function<void(HandleType*, ARGS...)> function);
						};

						template<typename... ARGS>
						Handle<ARGS...>::Handle(FunctionType function) :
							BaseType(function)
						{}

						template<typename... ARGS>
						Handle<ARGS...>::Handle(std::function<void(HandleType*, ARGS...)> function) :
							BaseType(function)
						{}
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_CALL_HANDLE_H_