#ifndef TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_ELEMENT_H_
#define TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_ELEMENT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\functional\Function.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace functional
			{
				namespace function
				{
					namespace helper
					{
						namespace parameter
						{
							template<std::size_t INDEX, typename FUNCTION_TYPE>
							class Element;

							template<std::size_t INDEX, typename RETURN_TYPE, typename FUNCTION_ARG, typename... FUNCTION_ARGS>
							class Element<INDEX, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, FUNCTION_ARG, FUNCTION_ARGS...>> :
								public Element<INDEX - 1, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, FUNCTION_ARGS...>>
							{
								Element() = delete;
							public:
								typedef typename Element<INDEX - 1, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, FUNCTION_ARGS...>>::Type Type;
							};

							template<typename RETURN_TYPE, typename FUNCTION_ARG, typename... FUNCTION_ARGS>
							class Element<0, BrainMuscles::test::simple::functional::Function<RETURN_TYPE, FUNCTION_ARG, FUNCTION_ARGS...>>
							{
								Element() = delete;
							public:
								typedef FUNCTION_ARG Type;
							};
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_ELEMENT_H_