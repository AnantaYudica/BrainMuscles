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
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::Object>
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Object				ValueObjectType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueObjectType>		BaseType;
						public:
							Object() = default;
							inline Object(const ValueObjectType& value);
							inline Object(const Object& copy);
						};

						inline Object::Object(const ValueObjectType& value) :
							BaseType(new ValueObjectType(value))
						{}

						inline Object::Object(const Object& copy) :
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