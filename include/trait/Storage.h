#ifndef TRAIT_STORAGE_H
#define TRAIT_STORAGE_H

namespace BrainMuscles
{
	namespace trait
	{
		template <typename TYPE, TYPE VALUE, TYPE ... VALUES>
		struct Storage;
	}
}

#include "trait\storage\ToTypeArray.h"
#include "trait\storage\GetIndex.h"
#include "trait\storage\GetSize.h"
#include "trait\storage\IsContainValue.h"

namespace BrainMuscles
{
	namespace trait
	{
		template <typename TYPE, TYPE VALUE, TYPE ... VALUES>
		struct Storage :
			public Storage<TYPE, VALUES ...>
		{
			typedef Storage<TYPE, VALUES ...> Next;
			typedef TYPE Type;
			constexpr static TYPE Value = VALUE;
		};

		template <typename TYPE, TYPE VALUE>
		struct Storage<TYPE, VALUE>
		{
			typedef void Next;
			typedef TYPE Type;
			constexpr static TYPE Value = VALUE;
		};
	}
}

#endif // !TRAIT_STORAGE_H
