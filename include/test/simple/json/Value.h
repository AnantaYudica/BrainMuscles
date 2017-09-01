#ifndef TEST_SIMPLE_JSON_VALUE_H_
#define TEST_SIMPLE_JSON_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				class Value :
					private BrainMuscles::test::simple::json::Memory<Value>
				{
				private:
					typedef BrainMuscles::test::simple::json::Memory<Value>			BaseType;
				public:
					typedef typename BaseType::SharedPointerType					SharedPointerType;
				protected:
					Value() = default;
				public:
					Value(const Value& copy) = default;
					Value(Value&& move) = default;
					virtual ~Value() = default;
				public:
					virtual SharedPointerType MakeShared() const = 0;
				};
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_H_