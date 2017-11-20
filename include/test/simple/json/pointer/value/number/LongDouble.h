#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGDOUBLE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGDOUBLE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\LongDouble.h"

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
							class LongDouble :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::LongDouble>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::LongDouble								ValueNumberLongDoubleType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberLongDoubleType>							BaseType;
							public:
								LongDouble() = default;
								inline LongDouble(const ValueNumberLongDoubleType& value);
								inline LongDouble(const LongDouble& copy);
							};

							inline LongDouble::LongDouble(const ValueNumberLongDoubleType& value) :
								BaseType(new ValueNumberLongDoubleType(value))
							{}

							inline LongDouble::LongDouble(const LongDouble& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGDOUBLE_H_