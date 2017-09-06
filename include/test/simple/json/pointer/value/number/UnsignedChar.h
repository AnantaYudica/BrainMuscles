#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDCHAR_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDCHAR_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\UnsignedChar.h"

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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::UnsignedChar>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedChar								ValueNumberUnsignedCharType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberUnsignedCharType>						MemoryValueNumberUnsignedCharType;
								typedef typename MemoryValueNumberUnsignedCharType
									::SharedPointerType									BaseType;
							public:
								UnsignedChar() = default;
								UnsignedChar(const ValueNumberUnsignedCharType& value);
								UnsignedChar(const UnsignedChar& copy);
							};

							UnsignedChar::UnsignedChar(const ValueNumberUnsignedCharType& value) :
								BaseType(new ValueNumberUnsignedCharType(value))
							{}

							UnsignedChar::UnsignedChar(const UnsignedChar& copy) :
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