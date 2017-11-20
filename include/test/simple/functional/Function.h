#ifndef TEST_SIMPLE_FUNCTIONAL_FUNCTION_H_
#define TEST_SIMPLE_FUNCTIONAL_FUNCTION_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <functional>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace functional
			{
				template<typename RETURN_TYPE, typename... ARGS>
				class Function :
					public std::function<RETURN_TYPE(ARGS...)>
				{
				public:
					typedef Function<RETURN_TYPE, ARGS...> FunctionType;
					typedef RETURN_TYPE(*PointerFunctionType)(ARGS...);
					typedef std::function<RETURN_TYPE(ARGS...)> BaseType;
				public:
					Function();
					Function(PointerFunctionType function);
					Function(const BaseType& function);
					Function(const FunctionType& copy);
					Function(FunctionType&& move);
				};

				template<typename RETURN_TYPE, typename... ARGS>
				Function<RETURN_TYPE, ARGS...>::Function()
				{}

				template<typename RETURN_TYPE, typename... ARGS>
				Function<RETURN_TYPE, ARGS...>::Function(PointerFunctionType function) :
					BaseType(function)
				{}

				template<typename RETURN_TYPE, typename... ARGS>
				Function<RETURN_TYPE, ARGS...>::Function(const BaseType& function) :
					BaseType(function)
				{}

				template<typename RETURN_TYPE, typename... ARGS>
				Function<RETURN_TYPE, ARGS...>::Function(const FunctionType& copy) :
					BaseType(static_cast<BaseType&>(const_cast<FunctionType&>(copy)))
				{}

				template<typename RETURN_TYPE, typename... ARGS>
				Function<RETURN_TYPE, ARGS...>::Function(FunctionType&& move) :
					BaseType(static_cast<BaseType&&>(move))
				{}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_FUNCTIONAL_FUNCTION_H_