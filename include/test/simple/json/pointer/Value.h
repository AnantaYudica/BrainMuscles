#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

#include "test\simple\json\Value.h"

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
					class Value :
						public BrainMuscles::test::simple::json::Memory::SharedPointerType<
							BrainMuscles::test::simple::json::Value>
					{
					public:
						typedef BrainMuscles::test::simple::json::Value					ValueType;
						typedef BrainMuscles::test::simple::json::Memory				MemoryType;
						typedef typename MemoryType::SharedPointerType<ValueType>		BaseType;
					public:
						Value() = default;
						template<typename VALUE_TYPE>
						Value(const VALUE_TYPE& value);
						Value(const Value& copy);
					private:
						template<typename VALUE_TYPE>
						static BaseType MakeShared(const VALUE_TYPE& value);
					};

					template<typename VALUE_TYPE>
					Value::Value(const VALUE_TYPE& value) :
						BaseType(MakeShared<VALUE_TYPE>(value))
					{}

					Value::Value(const Value& copy) :
						BaseType(copy)
					{}

					template<typename VALUE_TYPE>
					typename Value::BaseType Value::MakeShared(const VALUE_TYPE& value)
					{
						static_assert(std::is_base_of<ValueType, VALUE_TYPE>::value, "VALUE_TYPE is not base of BrainMuscles::test::simple::json::Value");
						return BaseType(new VALUE_TYPE(value));
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_H_