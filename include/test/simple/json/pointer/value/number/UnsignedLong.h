#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONG_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONG_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Memory.h"
#include "test/simple/json/value/number/UnsignedLong.h"

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
							class UnsignedLong :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::UnsignedLong>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::UnsignedLong								ValueNumberUnsignedLongType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberUnsignedLongType>						BaseType;
							public:
								UnsignedLong() = default;
								inline UnsignedLong(const ValueNumberUnsignedLongType& value);
								inline UnsignedLong(const UnsignedLong& copy);
							};

							inline UnsignedLong::UnsignedLong(const ValueNumberUnsignedLongType& value) :
								BaseType(new ValueNumberUnsignedLongType(value))
							{}

							inline UnsignedLong::UnsignedLong(const UnsignedLong& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_UNSIGNEDLONG_H_