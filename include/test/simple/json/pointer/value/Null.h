#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NULL_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NULL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\Null.h"

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
						class Null :
							public BrainMuscles::test::simple::json::Memory<
							BrainMuscles::test::simple::json::value::Null>::SharedPointerType
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Null				ValueNullType;
							typedef BrainMuscles::test::simple::json::Memory<ValueNullType>		MemoryValueNullType;
							typedef typename MemoryValueNullType::SharedPointerType				BaseType;
						public:
							Null() = default;
							Null(const ValueNullType& value);
							Null(const Null& copy);
						};

						Null::Null(const ValueNullType& value) :
							BaseType(new ValueNullType(value))
						{}

						Null::Null(const Null& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NULL_H_