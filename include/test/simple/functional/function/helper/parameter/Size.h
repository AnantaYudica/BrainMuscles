#ifndef TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_SIZE_H_
#define TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_SIZE_H_

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
							template<typename FUNCTION_TYPE>
							class Size;

							template<typename RETURN_TYPE, typename... FUNCTION_ARGS>
							class Size<BrainMuscles::test::simple::functional::Function<RETURN_TYPE, FUNCTION_ARGS...>>
							{
								Size() = delete;
							public:
								static constexpr std::size_t Value = sizeof...(FUNCTION_ARGS);
							};
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_FUNCTIONAL_FUNCTION_HELPER_PARAMETER_SIZE_H_