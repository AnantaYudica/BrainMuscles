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
							public BrainMuscles::test::simple::json::Memory::SharedPointerType<
								BrainMuscles::test::simple::json::value::True>
						{
						public:
							typedef BrainMuscles::test::simple::json::value::True				ValueTrueType;
							typedef BrainMuscles::test::simple::json::Memory					MemoryType;
							typedef typename MemoryType::SharedPointerType<ValueTrueType>		BaseType;
						public:
							True() = default;
							inline True(const ValueTrueType& value);
							inline True(const True& copy);
						};

						inline True::True(const ValueTrueType& value) :
							BaseType(new ValueTrueType(value))
						{}

						inline True::True(const True& copy) :
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