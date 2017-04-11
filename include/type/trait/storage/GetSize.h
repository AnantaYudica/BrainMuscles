#ifndef TYPE_TRAIT_STORAGE_GETSIZE_H
#define TYPE_TRAIT_STORAGE_GETSIZE_H

namespace BrainMuscles
{
	namespace type
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
}

#endif // !TYPE_TRAIT_STORAGE_GETSIZE_H
