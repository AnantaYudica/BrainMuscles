#ifndef TYPE_TRAIT_CONDITIONAL_INDEX_H_
#define TYPE_TRAIT_CONDITIONAL_INDEX_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace conditional
			{
				template<int START, int DEFAULT, bool CONDITIONAL, bool ... OTHER_CONDITIONAL>
				struct Index;
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
				template<int START, int DEFAULT, bool CONDITIONAL, bool... OTHER_CONDITIONAL>
				struct Index 
				{
					static constexpr int value = DEFAULT;
				};

				template<int START, int DEFAULT, bool... OTHER_CONDITIONAL>
				struct Index<START, DEFAULT, true, OTHER_CONDITIONAL...>
				{
					static constexpr int value = START;
				};

				template<int START, int DEFAULT, bool... OTHER_CONDITIONAL>
				struct Index<START, DEFAULT, false, OTHER_CONDITIONAL...> :
					public Index<START + 1, DEFAULT, OTHER_CONDITIONAL...>
				{
					static constexpr int value = Index<START + 1, DEFAULT, OTHER_CONDITIONAL...>::value;
				};

			}
		}
	}
}


#endif //!TYPE_TRAIT_CONDITIONAL_INDEX_H