#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDINT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDINT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\UnsignedInt.h"

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
							class UnsignedInt :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::UnsignedInt>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedInt								ValueNumberUnsignedIntType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberUnsignedIntType>							BaseType;
							public:
								UnsignedInt() = default;
								inline UnsignedInt(const ValueNumberUnsignedIntType& value);
								inline UnsignedInt(const UnsignedInt& copy);
							};

							inline UnsignedInt::UnsignedInt(const ValueNumberUnsignedIntType& value) :
								BaseType(new ValueNumberUnsignedIntType(value))
							{}

							inline UnsignedInt::UnsignedInt(const UnsignedInt& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDINT_H_