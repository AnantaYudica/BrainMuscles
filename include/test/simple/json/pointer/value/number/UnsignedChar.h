#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDCHAR_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDCHAR_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Memory.h"
#include "test/simple/json/value/number/UnsignedChar.h"

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
						namespace number
						{
							class UnsignedChar :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::UnsignedChar>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedChar								ValueNumberUnsignedCharType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberUnsignedCharType>						BaseType;
							public:
								UnsignedChar() = default;
								inline UnsignedChar(const ValueNumberUnsignedCharType& value);
								inline UnsignedChar(const UnsignedChar& copy);
							};

							inline UnsignedChar::UnsignedChar(const ValueNumberUnsignedCharType& value) :
								BaseType(new ValueNumberUnsignedCharType(value))
							{}

							inline UnsignedChar::UnsignedChar(const UnsignedChar& copy) :
								BaseType(copy)
							{}
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDCHAR_H_