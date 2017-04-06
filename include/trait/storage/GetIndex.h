#ifndef TRAIT_STORAGE_GETINDEX_H_
#define TRAIT_STORAGE_GETINDEX_H_

namespace BrainMuscles
{
	namespace trait
	{
		namespace storage
		{
			template <typename STORAGE, size_t INDEX>
			struct GetIndex;
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
			template <typename STORAGE, size_t INDEX>
			struct GetIndex
			{
				typedef typename GetIndex<typename STORAGE::Next, INDEX - 1>::Type Type;
			};

			template <typename STORAGE>
			struct GetIndex<STORAGE, 0>
			{
				typedef STORAGE Type;
			};
		}
	}
}



#endif // !TRAIT_STORAGE_GETINDEX_H_
