#ifndef TYPE_TRAIT_TYPES_GETINDEX_H_
#define TYPE_TRAIT_TYPES_GETINDEX_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace types
			{
				template<typename TYPES, size_t INDEX>
				class GetIndex;
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
				template<typename TYPES, size_t INDEX>
				class GetIndex
				{
				private:
				public:
					typedef typename GetIndex<typename TYPES::Next, INDEX - 1>::Type Type;
					static constexpr Type Cast(Type types);
				};

				template<size_t INDEX>
				class GetIndex<void, INDEX>
				{
				private:
				public:
					typedef void Type;
					static constexpr void Cast();
				};

				template<typename TYPES>
				class GetIndex<TYPES, 0>
				{
				private:
				public:
					typedef typename TYPES::Current Type;
					static constexpr Type Cast(Type types);
				};

				

				template<typename TYPES, size_t INDEX>
				constexpr typename GetIndex<TYPES, INDEX>::Type GetIndex<TYPES, INDEX>::Cast(Type types)
				{
					return types;
				}

				template<typename TYPES>
				constexpr typename GetIndex<TYPES, 0>::Type GetIndex<TYPES, 0>::Cast(Type types)
				{
					return types;
				}

				template<size_t INDEX>
				 constexpr void GetIndex<void, INDEX>::Cast()
				{
				}

			}
		}
	}
}

#endif //! TYPE_TRAIT_TYPES_GETINDEX_H_