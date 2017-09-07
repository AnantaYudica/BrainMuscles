#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\Number.h"

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
						class Number :
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::Number>
						{
						public:
							typedef BrainMuscles::test::simple::json::Value						ValueType;
							typedef BrainMuscles::test::simple::json::value::Number				ValueNumberType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueNumberType>		BaseType;
						public:
							Number() = default;
							Number(const ValueNumberType& value);
							Number(const Number& copy);
						};

						Number::Number(const ValueNumberType& value) :
							BaseType(MemoryType::DynamicPointerCast<ValueType, ValueNumberType>(value.MakeShared()))
						{}

						Number::Number(const Number& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_