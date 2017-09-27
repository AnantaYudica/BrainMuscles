#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_STRING_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_STRING_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\String.h"

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
						class String :
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::String>
						{
						public:
							typedef BrainMuscles::test::simple::json::value::String				ValueStringType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueStringType>		BaseType;
						public:
							String() = default;
							inline String(const ValueStringType& value);
							inline String(const String& copy);
						};

						inline String::String(const ValueStringType& value) :
							BaseType(new ValueStringType(value))
						{}

						inline String::String(const String& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_STRING_H_