#ifndef TYPE_TRAIT_TYPES_GETSIZE_H
#define TYPE_TRAIT_TYPES_GETSIZE_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename TYPES, size_t COUNTER = 0>
				struct GetIndex;
			}
		}
	}
}

#include "type\trait\Types.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename TYPES, size_t COUNTER>
				struct GetIndex
				{
				
				};

				template<size_t COUNTER>
				struct GetIndex<void, COUNTER>
				{

				};
			}
		}
	}
}
#endif //! TYPE_TRAIT_TYPES_GETSIZE_H