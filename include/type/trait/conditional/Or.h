#ifndef TYPE_TRAIT_CONDITIONAL_OR_H_
#define TYPE_TRAIT_CONDITIONAL_OR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace conditional
			{
				template<bool CONDITIONAL, bool ... OTHER_CONDITIONAL>
				struct Or;
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
				struct Or :
					public Or<OTHER_CONDITIONAL...>
				{
					static constexpr bool value = Or<OTHER_CONDITIONAL...>::value;
				};

				template<bool... OTHER_CONDITIONAL>
				struct Or<true, OTHER_CONDITIONAL...>
				{
					static constexpr bool value = true;
				};

				template<>
				struct Or<false>
				{
					static constexpr bool value = false;
				};
			}
		}
	}
}

#endif //!TYPE_TRAIT_CONDITIONAL_OR_H_