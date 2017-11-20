#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_CHAR_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_CHAR_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Char.h"

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
							class Char :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Char>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Char										ValueNumberCharType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberCharType>								BaseType;
							public:
								Char() = default;
								inline Char(const ValueNumberCharType& value);
								inline Char(const Char& copy);
							};

							inline Char::Char(const ValueNumberCharType& value) :
								BaseType(new ValueNumberCharType(value))
							{}

							inline Char::Char(const Char& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_CHAR_H_