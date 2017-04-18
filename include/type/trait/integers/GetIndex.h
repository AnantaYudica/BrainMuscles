#ifndef TYPE_TRAIT_INTEGERS_GETINDEX_H_
#define TYPE_TRAIT_INTEGERS_GETINDEX_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace integers
			{
				template <typename INTEGERS, size_t INDEX>
				struct GetIndex;
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
				template <typename INTEGERS, size_t INDEX>
				struct GetIndex
				{
					typedef typename GetIndex<typename INTEGERS::Next, INDEX - 1>::Type Type;
				};

				template <typename INTEGERS>
				struct GetIndex<INTEGERS, 0>
				{
					typedef INTEGERS Type;
				};
			}
		}
	}
}



#endif // !TYPE_TRAIT_INTEGERS_GETINDEX_H_
