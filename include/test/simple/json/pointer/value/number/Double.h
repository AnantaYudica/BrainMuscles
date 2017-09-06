#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_DOUBLE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_DOUBLE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Double.h"

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
							class Double :
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::Double>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Double									ValueNumberDoubleType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberDoubleType>								MemoryValueNumberDoubleType;
								typedef typename MemoryValueNumberDoubleType
									::SharedPointerType									BaseType;
							public:
								Double() = default;
								Double(const ValueNumberDoubleType& value);
								Double(const Double& copy);
							};

							Double::Double(const ValueNumberDoubleType& value) :
								BaseType(new ValueNumberDoubleType(value))
							{}

							Double::Double(const Double& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_DOUBLE_H_