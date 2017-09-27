#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_INT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_INT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Int.h"

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
							class Int :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Int>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Int										ValueNumberIntType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberIntType>									BaseType;
							public:
								Int() = default;
								inline Int(const ValueNumberIntType& value);
								inline Int(const Int& copy);
							};

							inline Int::Int(const ValueNumberIntType& value) :
								BaseType(new ValueNumberIntType(value))
							{}

							inline Int::Int(const Int& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_INT_H_