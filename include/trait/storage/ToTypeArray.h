#ifndef TRAIT_STORAGE_TOTYPEARRAY_H_
#define TRAIT_STORAGE_TOTYPEARRAY_H_

namespace BrainMuscles
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

#include "trait\Storage.h"

namespace BrainMuscles
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

#endif // !TRAIT_STORAGE_TOTYPEARRAY_H_
