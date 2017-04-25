#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				namespace destroy
				{
					class Base;
				}
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
			namespace automatic
			{
				namespace destroy
				{
					class Base
					{
					protected:
						Base();
						virtual void CallDestructor() = 0;
					public:
						virtual ~Base();
					};
				}
			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_