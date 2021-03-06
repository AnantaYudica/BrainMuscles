#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_FALSE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_FALSE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Memory.h"
#include "test/simple/json/value/False.h"

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
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::False>
						{
						public:
							typedef BrainMuscles::test::simple::json::value::False				ValueFalseType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueFalseType>		BaseType;
						public:
							False() = default;
							inline False(const ValueFalseType& value);
							inline False(const False& copy);
						};

						inline False::False(const ValueFalseType& value) :
							BaseType(new ValueFalseType(value))
						{}

						inline False::False(const False& copy) :
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