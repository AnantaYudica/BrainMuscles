#ifndef TYPE_TRAIT_STORAGE_H
#define TYPE_TRAIT_STORAGE_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename TYPE, TYPE VALUE, TYPE ... VALUES>
			struct Storage;
		}
	}
	
}

#include "type\trait\storage\ToTypeArray.h"
#include "type\trait\storage\GetIndex.h"
#include "type\trait\storage\GetSize.h"
#include "type\trait\storage\IsContainValue.h"

namespace BrainMuscles
{
	namespace type
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
}

#endif // !TYPE_TRAIT_STORAGE_H
