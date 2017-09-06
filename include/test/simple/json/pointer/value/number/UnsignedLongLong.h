#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONGLONG_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONGLONG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\UnsignedLongLong.h"

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
							class UnsignedLongLong :
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::UnsignedLongLong>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedLongLong							ValueNumberUnsignedLongLongType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberUnsignedLongLongType>					MemoryValueNumberUnsignedLongLongType;
								typedef typename MemoryValueNumberUnsignedLongLongType
									::SharedPointerType									BaseType;
							public:
								UnsignedLongLong() = default;
								UnsignedLongLong(const ValueNumberUnsignedLongLongType& value);
								UnsignedLongLong(const UnsignedLongLong& copy);
							};

							UnsignedLongLong::UnsignedLongLong(const ValueNumberUnsignedLongLongType& value) :
								BaseType(new ValueNumberUnsignedLongLongType(value))
							{}

							UnsignedLongLong::UnsignedLongLong(const UnsignedLongLong& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONGLONG_H_