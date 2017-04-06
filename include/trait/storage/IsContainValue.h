#ifndef TRAIT_STORAGE_ISCOINTAINVALUE_H_
#define TRAIT_STORAGE_ISCOINTAINVALUE_H_

#include "trait\storage\GetSize.h"

namespace BrainMuscles
{
	namespace trait
	{
		namespace storage
		{
			template<typename STORAGE, typename STORAGE_TYPE, STORAGE_TYPE VALUE, size_t INDEX = 0, size_t SIZE = GetSize<STORAGE>::Value>
			struct IsContainValue;
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
			template<typename STORAGE, typename STORAGE_TYPE, STORAGE_TYPE VALUE, size_t INDEX, size_t SIZE>
			struct IsContainValue
			{
				typedef typename GetIndex <STORAGE, INDEX>::Type StorageIndex;
				constexpr static bool Value = StorageIndex::Value == VALUE ? true : IsContainValue<STORAGE, STORAGE_TYPE, VALUE, INDEX + 1, SIZE>::Value;
			};

			template<typename STORAGE, typename STORAGE_TYPE, STORAGE_TYPE VALUE, size_t SIZE>
			struct IsContainValue<STORAGE, STORAGE_TYPE, VALUE, SIZE, SIZE>
			{
				constexpr static bool Value = false;
			};
		}
	}
}

#endif // !TRAIT_STORAGE_ISCOINTAINVALUE_H_
