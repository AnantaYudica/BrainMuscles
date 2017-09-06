#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDSHORT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDSHORT_H_

#include "test\Configure.h"

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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::UnsignedShort>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedShort								ValueNumberUnsignedShortType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberUnsignedShortType>						MemoryValueNumberUnsignedShortType;
								typedef typename MemoryValueNumberUnsignedShortType
									::SharedPointerType									BaseType;
							public:
								UnsignedShort() = default;
								UnsignedShort(const ValueNumberUnsignedShortType& value);
								UnsignedShort(const UnsignedShort& copy);
							};

							UnsignedShort::UnsignedShort(const ValueNumberUnsignedShortType& value) :
								BaseType(new ValueNumberUnsignedShortType(value))
							{}

							UnsignedShort::UnsignedShort(const UnsignedShort& copy) :
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