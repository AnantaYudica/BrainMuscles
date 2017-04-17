#ifndef TYPE_TRAIT_TYPES_H
#define TYPE_TRAIT_TYPES_H

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename... TYPES>
			class Types;
		}
	}

}


namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template <typename CURRENT_TYPE, typename... TYPES>
			class Types:
				public Types<TYPES...>
			{

			};
		}
	}
}


#endif //! TYPE_TRAIT_TYPES_H