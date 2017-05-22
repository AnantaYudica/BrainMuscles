#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_SHRINKTOFIT_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_SHRINKTOFIT_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace capacity
				{
					class M_ShrinkToFit;
				}
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace capacity
				{
					class M_ShrinkToFit
					{
					protected:
						M_ShrinkToFit();
					public:
						virtual ~M_ShrinkToFit();
						virtual void ShrinkToFit() = 0;
					};

					M_ShrinkToFit::M_ShrinkToFit()
					{}

					M_ShrinkToFit::~M_ShrinkToFit()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_SHRINKTOFIT_H_