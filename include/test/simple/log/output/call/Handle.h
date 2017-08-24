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
						template<typename DERIVED_TYPE>
						class Handle :
							public BrainMuscles::test::simple::log::output::Call<
								BrainMuscles::test::simple::functional::Function<
									void, BrainMuscles::test::simple::log::output::Handle<DERIVED_TYPE>*>>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::Handle<
								DERIVED_TYPE>												HandleType;
							typedef BrainMuscles::test::simple::functional::Function<
								void, HandleType*>									FunctionType;
							typedef BrainMuscles::test::simple::log::output::Call<
								FunctionType>												BaseType;
						public:
							Handle(FunctionType function);
							Handle(std::function<void(HandleType*)> function);
						};

						template<typename DERIVED_TYPE>
						Handle<DERIVED_TYPE>::Handle(FunctionType function) :
							BaseType(function)
						{}

						template<typename DERIVED_TYPE>
						Handle<DERIVED_TYPE>::Handle(std::function<void(HandleType*)> function) :
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