#ifndef TYPE_TRAIT_STORAGE_TOTYPEARRAY_H_
#define TYPE_TRAIT_STORAGE_TOTYPEARRAY_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace storage
			{
				template <typename STORAGE, typename TYPE, TYPE ... VALUES>
				struct ToTypeArray;
			}
		}
	}
}

#include "type\trait\Storage.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace storage
			{
				template <typename STORAGE, typename TYPE, TYPE ... VALUES>
				struct ToTypeArray
				{
					constexpr static const TYPE * Value = ToTypeArray<STORAGE::Next, TYPE, VALUES ..., STORAGE::Value>::Value;
				};

				template <typename TYPE, TYPE ... VALUES>
				struct ToTypeArray<void, TYPE, VALUES ...>
				{
					constexpr static TYPE Value[sizeof...(VALUES)] = { VALUES ... };
				};

				template <typename STORAGE, typename TYPE>
				struct ToTypeArray<STORAGE, TYPE>
				{
					constexpr static const TYPE * Value = ToTypeArray<STORAGE::Next, TYPE, STORAGE::Value>::Value;
				};
			}
		}
	}
}

#endif // !TYPE_TRAIT_STORAGE_TOTYPEARRAY_H_
