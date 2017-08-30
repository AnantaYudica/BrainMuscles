#ifndef TEST_SIMPLE_JSON_VALUE_H_
#define TEST_SIMPLE_JSON_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				class Value
				{
				protected:
					Value();
				public:
					Value(const Value& copy);
					Value(Value&& move);
					virtual ~Value();
				};

				Value::Value()
				{}

				Value::Value(const Value& copy)
				{}

				Value::Value(Value&& move)
				{}

				Value::~Value()
				{}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_H_