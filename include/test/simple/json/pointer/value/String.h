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
							public BrainMuscles::test::simple::json::Memory<
								BrainMuscles::test::simple::json::value::String>::SharedPointerType
						{
						public:
							typedef BrainMuscles::test::simple::json::value::String				ValueStringType;
							typedef BrainMuscles::test::simple::json::Memory<ValueStringType>	MemoryValueStringType;
							typedef typename MemoryValueStringType::SharedPointerType			BaseType;
						public:
							String() = default;
							String(const ValueStringType& value);
							String(const String& copy);
						};

						String::String(const ValueStringType& value) :
							BaseType(new ValueStringType(value))
						{}

						String::String(const String& copy) :
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