#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_

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
					class M_Capacity;
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
					class M_Capacity
					{
					protected:
						M_Capacity();
					public:
						virtual ~M_Capacity();
						virtual SIZE_TYPE Capacity() const = 0;
					};

					template<typename SIZE_TYPE>
					M_Capacity<SIZE_TYPE>::M_Capacity()
					{}

					template<typename SIZE_TYPE>
					M_Capacity<SIZE_TYPE>::~M_Capacity()
					{}
				}
			}
		}
	}
}

#endif TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_