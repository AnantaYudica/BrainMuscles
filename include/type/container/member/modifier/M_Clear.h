#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_CLEAR_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_CLEAR_H_

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
					class M_Clear;
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
					class M_Clear
					{
					protected:
						M_Clear();
					public:
						virtual ~M_Clear();
						virtual void Clear() = 0;

					};

					M_Clear::M_Clear()
					{}

					M_Clear::~M_Clear()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_CLEAR_H_