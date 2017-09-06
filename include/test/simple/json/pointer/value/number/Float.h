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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::Float>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Float										ValueNumberFloatType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberFloatType>								MemoryValueNumberFloatType;
								typedef typename MemoryValueNumberFloatType
									::SharedPointerType									BaseType;
							public:
								Float() = default;
								Float(const ValueNumberFloatType& value);
								Float(const Float& copy);
							};

							Float::Float(const ValueNumberFloatType& value) :
								BaseType(new ValueNumberFloatType(value))
							{}

							Float::Float(const Float& copy) :
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