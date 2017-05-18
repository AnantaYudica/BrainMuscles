#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_EMPTY_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_EMPTY_H_

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
					class M_Empty;
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
					class M_Empty
					{
					protected:
						M_Empty();
					public:
						virtual ~M_Empty();
						virtual bool Empty() = 0;
					};

					M_Empty::M_Empty()
					{}

					M_Empty::~M_Empty()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_EMPTY_H_