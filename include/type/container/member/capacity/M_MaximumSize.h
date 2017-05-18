#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_

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
					class M_MaximumSize;
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
					class M_MaximumSize
					{
					protected:
						M_MaximumSize();
					public:
						virtual ~M_MaximumSize();
						virtual SIZE_TYPE MaximumSize() = 0;
					};

					template<typename SIZE_TYPE>
					M_MaximumSize<SIZE_TYPE>::M_MaximumSize()
					{}

					template<typename SIZE_TYPE>
					M_MaximumSize<SIZE_TYPE>::~M_MaximumSize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_