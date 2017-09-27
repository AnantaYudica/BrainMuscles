#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_FLOAT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_FLOAT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Float.h"

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
							class Float :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Float>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Float										ValueNumberFloatType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberFloatType>								BaseType;
							public:
								Float() = default;
								inline Float(const ValueNumberFloatType& value);
								inline Float(const Float& copy);
							};

							inline Float::Float(const ValueNumberFloatType& value) :
								BaseType(new ValueNumberFloatType(value))
							{}

							inline Float::Float(const Float& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_FLOAT_H_