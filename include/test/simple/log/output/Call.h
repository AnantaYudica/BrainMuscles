#ifndef TEST_SIMPLE_LOG_OUTPUT_CALL_H_
#define TEST_SIMPLE_LOG_OUTPUT_CALL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\functional\Function.h"

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
					template<typename CALLER_TYPE, typename FUNCTION_TYPE>
					class Call;

					template<typename CALLER_TYPE, typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					class Call<CALLER_TYPE, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, OBJECT_TYPE, ARGS...>> :
						public BrainMuscles::test::simple::functional::Function<RETURN_TYPE, OBJECT_TYPE, ARGS...>
					{
					public:
						typedef BrainMuscles::test::simple::functional
							::Function<RETURN_TYPE, OBJECT_TYPE, ARGS...> FunctionType;
					protected:
						Call(FunctionType function);
					};

					template<typename CALLER_TYPE, typename RETURN_TYPE, typename OBJECT_TYPE, typename... ARGS>
					Call<CALLER_TYPE, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, OBJECT_TYPE, ARGS...>>
						::Call(FunctionType function) :
						FunctionType(function)
					{}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_CALL_H_