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
						Value(const ValueType& value);
						Value(const Value& copy);
					};

					Value::Value(const ValueType& value) :
						BaseType(value.MakeShared())
					{}

					Value::Value(const Value& copy) :
						BaseType(copy)
					{}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_H_