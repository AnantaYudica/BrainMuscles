#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_POPBACK_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_POPBACK_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					class M_PopBack;
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
				namespace modifier
				{
					class M_PopBack
					{
					protected:
						M_PopBack();
					public:
						virtual ~M_PopBack();
						virtual void PopBack() = 0;
					};

					M_PopBack::M_PopBack()
					{}

					M_PopBack::~M_PopBack()
					{}
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_POPBACK_H_