#ifndef TYPE_TRAIT_INTEGERS_ISCOINTAINVALUE_H_
#define TYPE_TRAIT_INTEGERS_ISCOINTAINVALUE_H_

#include "type\trait\integers\GetSize.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template<typename INTEGERS, typename INTEGER_TYPE, INTEGER_TYPE VALUE, size_t INDEX = 0, size_t SIZE = GetSize<INTEGERS>::Value>
				struct IsContainValue;
			}
		}
	}
}

#include "type\trait\Integers.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template<typename INTEGERS, typename INTEGER_TYPE, INTEGER_TYPE VALUE, size_t INDEX, size_t SIZE>
				struct IsContainValue
				{
					typedef typename GetIndex <INTEGERS, INDEX>::Type IntegerIndex;
					constexpr static bool Value = IntegerIndex::Value == VALUE ? true : IsContainValue<INTEGERS, INTEGER_TYPE, VALUE, INDEX + 1, SIZE>::Value;
				};

				template<typename INTEGERS, typename INTEGER_TYPE, INTEGER_TYPE VALUE, size_t SIZE>
				struct IsContainValue<INTEGERS, INTEGER_TYPE, VALUE, SIZE, SIZE>
				{
					constexpr static bool Value = false;
				};
			}
		}
	}
}

#endif // !TYPE_TRAIT_INTEGERS_ISCOINTAINVALUE_H_
