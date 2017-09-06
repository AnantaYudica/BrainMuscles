#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_FALSE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_FALSE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\False.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace pointer
				{
					namespace value
					{
						class False :
							public BrainMuscles::test::simple::json::Memory<
								BrainMuscles::test::simple::json::value::False>::SharedPointerType
						{
						public:
							typedef BrainMuscles::test::simple::json::value::False				ValueFalseType;
							typedef BrainMuscles::test::simple::json::Memory<ValueFalseType>	MemoryValueFalseType;
							typedef typename MemoryValueFalseType::SharedPointerType			BaseType;
						public:
							False() = default;
							False(const ValueFalseType& value);
							False(const False& copy);
						};

						False::False(const ValueFalseType& value) :
							BaseType(new ValueFalseType(value))
						{}

						False::False(const False& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_FALSE_H_