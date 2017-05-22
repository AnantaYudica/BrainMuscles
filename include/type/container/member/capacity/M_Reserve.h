#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_

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
					template<typename SIZE_TYPE>
					class M_Reserve;
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
					template<typename SIZE_TYPE>
					class M_Reserve
					{
					protected:
						M_Reserve();
					public:
						virtual ~M_Reserve();
						virtual void Reserve(SIZE_TYPE n) = 0;
					};

					template<typename SIZE_TYPE>
					M_Reserve<SIZE_TYPE>::M_Reserve()
					{}

					template<typename SIZE_TYPE>
					M_Reserve<SIZE_TYPE>::~M_Reserve()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_