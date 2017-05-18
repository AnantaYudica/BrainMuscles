#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_

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
					class M_Size;
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
					class M_Size
					{
					protected:
						M_Size();
					public:
						virtual ~M_Size();
						virtual SIZE_TYPE Size() = 0;
					};

					template<typename SIZE_TYPE>
					M_Size<SIZE_TYPE>::M_Size()
					{}

					template<typename SIZE_TYPE>
					M_Size<SIZE_TYPE>::~M_Size()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_