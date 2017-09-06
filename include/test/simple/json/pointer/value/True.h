#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_TRUE_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_TRUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\True.h"

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
						class True :
							public BrainMuscles::test::simple::json::Memory<
								BrainMuscles::test::simple::json::value::True>::SharedPointerType
						{
						public:
							typedef BrainMuscles::test::simple::json::value::True				ValueTrueType;
							typedef BrainMuscles::test::simple::json::Memory<ValueTrueType>		MemoryValueTrueType;
							typedef typename MemoryValueTrueType::SharedPointerType				BaseType;
						public:
							True() = default;
							True(const ValueTrueType& value);
							True(const True& copy);
						};

						True::True(const ValueTrueType& value) :
							BaseType(new ValueTrueType(value))
						{}

						True::True(const True& copy) :
							BaseType(copy)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_TRUE_H_