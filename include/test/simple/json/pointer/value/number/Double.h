#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_DOUBLE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_DOUBLE_H_

#include "test/Configure.h"

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
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Double>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Double									ValueNumberDoubleType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberDoubleType>								BaseType;
							public:
								Double() = default;
								inline Double(const ValueNumberDoubleType& value);
								inline Double(const Double& copy);
							};

							inline Double::Double(const ValueNumberDoubleType& value) :
								BaseType(new ValueNumberDoubleType(value))
							{}

							inline Double::Double(const Double& copy) :
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