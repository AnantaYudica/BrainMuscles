#ifndef TYPE_CONTAINER_MEMBER_OBSERVER_M_GETALLOCATOR_H_
#define TYPE_CONTAINER_MEMBER_OBSERVER_M_GETALLOCATOR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace observer
				{
					template<typename ALLOCATOR_TYPE>
					class M_GetAllocator;
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
				namespace observer
				{
					template<typename ALLOCATOR_TYPE>
					class M_GetAllocator
					{
					protected:
						M_GetAllocator();
					public:
						virtual ~M_GetAllocator();
					public:
						virtual ALLOCATOR_TYPE get_allocator() const = 0;
					};

					template<typename ALLOCATOR_TYPE>
					M_GetAllocator<ALLOCATOR_TYPE>::M_GetAllocator()
					{}

					template<typename ALLOCATOR_TYPE>
					M_GetAllocator<ALLOCATOR_TYPE>::~M_GetAllocator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_OBSERVER_M_GETALLOCATOR_H_