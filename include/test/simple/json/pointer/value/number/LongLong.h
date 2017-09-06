#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGLONG_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGLONG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\LongLong.h"

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
							class LongLong :
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::LongLong>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::LongLong									ValueNumberLongLongType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberLongLongType>							MemoryValueNumberLongLongType;
								typedef typename MemoryValueNumberLongLongType
									::SharedPointerType									BaseType;
							public:
								LongLong() = default;
								LongLong(const ValueNumberLongLongType& value);
								LongLong(const LongLong& copy);
							};

							LongLong::LongLong(const ValueNumberLongLongType& value) :
								BaseType(new ValueNumberLongLongType(value))
							{}

							LongLong::LongLong(const LongLong& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGLONG_H_