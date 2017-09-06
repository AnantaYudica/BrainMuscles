#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGDOUBLE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONGDOUBLE_H_

#include "test\Configure.h"

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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::LongDouble>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::LongDouble								ValueNumberLongDoubleType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberLongDoubleType>							MemoryValueNumberLongDoubleType;
								typedef typename MemoryValueNumberLongDoubleType
									::SharedPointerType									BaseType;
							public:
								LongDouble() = default;
								LongDouble(const ValueNumberLongDoubleType& value);
								LongDouble(const LongDouble& copy);
							};

							LongDouble::LongDouble(const ValueNumberLongDoubleType& value) :
								BaseType(new ValueNumberLongDoubleType(value))
							{}

							LongDouble::LongDouble(const LongDouble& copy) :
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