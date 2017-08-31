#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>
#include <memory>

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
						public std::shared_ptr<BrainMuscles::test::simple::json::Value>
					{
					public:
						typedef BrainMuscles::test::simple::json::Value ValueType;
						typedef std::shared_ptr<ValueType>				BaseType;
					public:
						Value();
						template<typename VALUE_TYPE = BrainMuscles::test::simple::json::Value>
						Value(const typename std::enable_if<std::is_base_of<ValueType, VALUE_TYPE>::value, VALUE_TYPE>::type& value);
						Value(const Value& copy);
					};

					Value::Value()
					{}

					template<typename VALUE_TYPE>
					Value::Value(const typename std::enable_if<std::is_base_of<ValueType, VALUE_TYPE>::value, VALUE_TYPE>::type& value) :
						BaseType(new VALUE_TYPE(value))
					{}

					Value::Value(const Value& copy) :
						BaseType(copy)
					{
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_H_