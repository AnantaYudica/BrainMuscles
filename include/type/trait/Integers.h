#ifndef TYPE_TRAIT_INTEGERS_H
#define TYPE_TRAIT_INTEGERS_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename TYPE, TYPE VALUE, TYPE ... VALUES>
			struct Integers;
		}
	}
	
}

#include "type/trait/integers/ToTypeArray.h"
#include "type/trait/integers/GetIndex.h"
#include "type/trait/integers/GetSize.h"
#include "type/trait/integers/IsContainValue.h"
#include "type/trait/integers/Filler.h"
#include "type/trait/integers/Function.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename TYPE, TYPE VALUE, TYPE ... VALUES>
			struct Integers :
				public Integers<TYPE, VALUES ...>
			{
				typedef Integers<TYPE, VALUES ...> Next;
				typedef TYPE Type;
				constexpr static TYPE Value = VALUE;
			};

			template <typename TYPE, TYPE VALUE>
			struct Integers<TYPE, VALUE>
			{
				typedef void Next;
				typedef TYPE Type;
				constexpr static TYPE Value = VALUE;
			};
		}
	}
}

#endif // !TYPE_TRAIT_INTEGERS_H
