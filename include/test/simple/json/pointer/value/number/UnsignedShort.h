#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDSHORT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDSHORT_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\UnsignedShort.h"

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
							class UnsignedShort :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::UnsignedShort>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedShort								ValueNumberUnsignedShortType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberUnsignedShortType>						BaseType;
							public:
								UnsignedShort() = default;
								inline UnsignedShort(const ValueNumberUnsignedShortType& value);
								inline UnsignedShort(const UnsignedShort& copy);
							};

							inline UnsignedShort::UnsignedShort(const ValueNumberUnsignedShortType& value) :
								BaseType(new ValueNumberUnsignedShortType(value))
							{}

							inline UnsignedShort::UnsignedShort(const UnsignedShort& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDSHORT_H_