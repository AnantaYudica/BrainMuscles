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
				struct GetSize;
			}
		}
	}
}

#include "type/trait/Types.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename TYPES, size_t COUNTER>
				struct GetSize
				{
					static constexpr size_t Value = GetSize<typename TYPES::Next, COUNTER + 1>::Value;
				};

				template<size_t COUNTER>
				struct GetSize<void, COUNTER>
				{
					static constexpr size_t Value = COUNTER;
				};
			}
		}
	}
}
#endif //! TYPE_TRAIT_TYPES_GETSIZE_H