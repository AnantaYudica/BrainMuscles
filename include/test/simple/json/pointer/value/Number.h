#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_

#include "test/Configure.h"

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
							template<typename VALUE_NUMBER_TYPE>
							inline Number(const VALUE_NUMBER_TYPE& value);
							inline Number(const Number& copy);
						private:
							template<typename VALUE_NUMBER_TYPE>
							static inline BaseType MakeShared(const VALUE_NUMBER_TYPE& value);
						};

						template<typename VALUE_NUMBER_TYPE>
						inline Number::Number(const VALUE_NUMBER_TYPE& value) :
							BaseType(MakeShared(value))
						{}

						inline Number::Number(const Number& copy) :
							BaseType(copy)
						{}

						template<typename VALUE_NUMBER_TYPE>
						inline typename Number::BaseType Number::MakeShared(const VALUE_NUMBER_TYPE& value)
						{
							static_assert(std::is_base_of<ValueNumberType, VALUE_NUMBER_TYPE>::value, "VALUE_NUMBER_TYPE is not base of BrainMuscles::test::simple::json::value::Number");
							static_assert(!std::is_abstract<VALUE_NUMBER_TYPE>::value, "VALUE_NUMBER_TYPE is abstract");
							return BaseType(new VALUE_NUMBER_TYPE(value));
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_H_