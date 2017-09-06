#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_OBJECT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_OBJECT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\Object.h"

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
						class Object :
							public BrainMuscles::test::simple::json::Memory<
								BrainMuscles::test::simple::json::value::Object>::SharedPointerType
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Object				ValueObjectType;
							typedef BrainMuscles::test::simple::json::Memory<ValueObjectType>	MemoryValueObjectType;
							typedef typename MemoryValueObjectType::SharedPointerType			BaseType;
						public:
							Object() = default;
							Object(const ValueObjectType& value);
							Object(const Object& copy);
						};

						Object::Object(const ValueObjectType& value) :
							BaseType(new ValueObjectType(value))
						{}

						Object::Object(const Object& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_OBJECT_H_