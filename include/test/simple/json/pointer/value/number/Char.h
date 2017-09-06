#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_CHAR_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_CHAR_H_

#include "test\Configure.h"

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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::Char>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Char										ValueNumberCharType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberCharType>								MemoryValueNumberCharType;
								typedef typename MemoryValueNumberCharType
									::SharedPointerType									BaseType;
							public:
								Char() = default;
								Char(const ValueNumberCharType& value);
								Char(const Char& copy);
							};

							Char::Char(const ValueNumberCharType& value) :
								BaseType(new ValueNumberCharType(value))
							{}

							Char::Char(const Char& copy) :
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