#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_ARRAY_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_ARRAY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\Array.h"

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
						class Array :
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::Array>
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Array				ValueArrayType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueArrayType>		BaseType;
						public:
							Array() = default;
							Array(const ValueArrayType& value);
							Array(const Array& copy);
						};

						Array::Array(const ValueArrayType& value) :
							BaseType(new ValueArrayType(value))
						{}

						Array::Array(const Array& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_ARRAY_H_