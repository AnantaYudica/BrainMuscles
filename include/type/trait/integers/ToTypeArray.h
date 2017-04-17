#ifndef TYPE_TRAIT_INTEGERS_TOTYPEARRAY_H_
#define TYPE_TRAIT_INTEGERS_TOTYPEARRAY_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template <typename INTEGERS, typename TYPE, TYPE ... VALUES>
				struct ToTypeArray;
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
				template <typename INTEGERS, typename TYPE, TYPE ... VALUES>
				struct ToTypeArray
				{
					constexpr static const TYPE * Value = ToTypeArray<INTEGERS::Next, TYPE, VALUES ..., INTEGERS::Value>::Value;
				};

				template <typename TYPE, TYPE ... VALUES>
				struct ToTypeArray<void, TYPE, VALUES ...>
				{
					constexpr static TYPE Value[sizeof...(VALUES)] = { VALUES ... };
				};

				template <typename INTEGERS, typename TYPE>
				struct ToTypeArray<INTEGERS, TYPE>
				{
					constexpr static const TYPE * Value = ToTypeArray<INTEGERS::Next, TYPE, INTEGERS::Value>::Value;
				};
			}
		}
	}
}

#endif // !TYPE_TRAIT_INTEGERS_TOTYPEARRAY_H_
