#ifndef TRAIT_STORAGE_GETSIZE_H
#define TRAIT_STORAGE_GETSIZE_H

namespace BrainMuscles
{
	namespace trait
	{
		namespace storage
		{
			template <typename STORAGE, size_t COUNTER = 0>
			struct GetSize;
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
			template <typename STORAGE, size_t COUNTER>
			struct GetSize
			{
				constexpr static size_t Value = GetSize<typename STORAGE::Next, COUNTER + 1>::Value;
			};

			template <size_t COUNTER>
			struct GetSize<void, COUNTER>
			{
				constexpr static size_t Value = COUNTER;
			};
		}
	}
}

#endif // !TRAIT_STORAGE_GETSIZE_H
