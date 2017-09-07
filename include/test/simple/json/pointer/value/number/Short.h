#ifndef TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_SHORT_H_
#define TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_SHORT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"
#include "test\simple\json\value\number\Short.h"

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
							class Short :
								public BrainMuscles::test::simple::json::Memory::SharedPointerType<
									BrainMuscles::test::simple::json::value::number::Short>
							{
							public:
								typedef BrainMuscles::test::simple::json::value
									::number::Short										ValueNumberShortType;
								typedef BrainMuscles::test::simple::json::Memory		MemoryType;
								typedef typename MemoryType::SharedPointerType<
									ValueNumberShortType>								BaseType;
							public:
								Short() = default;
								Short(const ValueNumberShortType& value);
								Short(const Short& copy);
							};

							Short::Short(const ValueNumberShortType& value) :
								BaseType(new ValueNumberShortType(value))
							{}

							Short::Short(const Short& copy) :
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

#endif //!TEST_SIMPLE_JSON_POINTER_VALUE_NUMBER_SHORT_H_