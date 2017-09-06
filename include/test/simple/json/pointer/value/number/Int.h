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
								public BrainMuscles::test::simple::json::Memory<
									BrainMuscles::test::simple::json::value::number::Int>::SharedPointerType
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Int										ValueNumberIntType;
								typedef BrainMuscles::test::simple::json::Memory<
									ValueNumberIntType>									MemoryValueNumberIntType;
								typedef typename MemoryValueNumberIntType
									::SharedPointerType									BaseType;
							public:
								Int() = default;
								Int(const ValueNumberIntType& value);
								Int(const Int& copy);
							};

							Int::Int(const ValueNumberIntType& value) :
								BaseType(new ValueNumberIntType(value))
							{}

							Int::Int(const Int& copy) :
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