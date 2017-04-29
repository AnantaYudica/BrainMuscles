#ifndef TYPE_TRAIT_CONDITIONAL_AND_H_
#define TYPE_TRAIT_CONDITIONAL_AND_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace conditional
			{
				template<bool CONDITIONAL, bool ... OTHER_CONDITIONAL>
				struct And;
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace conditional
			{
				template<bool CONDITIONAL, bool ... OTHER_CONDITIONAL>
				struct And :
					public And<OTHER_CONDITIONAL...>
				{
					static constexpr bool value = And<OTHER_CONDITIONAL...>::value;
				};

				template<bool... OTHER_CONDITIONAL>
				struct And<false, OTHER_CONDITIONAL...>
				{
					static constexpr bool value = false;
				};

				template<>
				struct And<true> 
				{
					static constexpr bool value = true;
				};
			}
		}
	}
}




#endif //!TYPE_TRAIT_CONDITIONAL_AND_H_