#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONG_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Long.h"

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
							class Long :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Long>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Long										ValueNumberLongType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberLongType>								BaseType;
							public:
								Long() = default;
								Long(const ValueNumberLongType& value);
								Long(const Long& copy);
							};

							Long::Long(const ValueNumberLongType& value) :
								BaseType(new ValueNumberLongType(value))
							{}

							Long::Long(const Long& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_LONG_H_