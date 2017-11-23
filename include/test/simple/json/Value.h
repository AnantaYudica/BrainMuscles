#ifndef TEST_SIMPLE_JSON_VALUE_H_
#define TEST_SIMPLE_JSON_VALUE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Memory.h"

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
				private:
					typedef BrainMuscles::test::simple::json::Memory				MemoryType;
				public:
					typedef typename MemoryType::SharedPointerType<Value>			SharedPointerType;
				protected:
					Value() = default;
					Value(const Value& copy) = default;
					Value(Value&& move) = default;
				public:
					virtual ~Value() = default;
				};
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_H_