#ifndef TYPE_TRAIT_TYPES_FILLER_H_
#define TYPE_TRAIT_TYPES_FILLER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename RETURN, typename FUNCTION, typename TYPES, typename... ARGS>
				class Filler;
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
				template<typename RETURN, typename FUNCTION, typename TYPES, typename... ARGS>
				class Filler :
					public Filler<RETURN, FUNCTION, typename TYPES::Next, ARGS..., TYPES::Type>
				{
				public:
					
				};

				
			}
		}
	}
}

#endif // !TYPE_TRAIT_TYPES_FILLER_H_