#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_SWAP_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_SWAP_H_

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
					template<typename CONTAINER_TYPE>
					class M_Swap;
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
					template<typename CONTAINER_TYPE>
					class M_Swap
					{
					protected:
						M_Swap();
					public:
						virtual ~M_Swap();
						virtual void Swap(CONTAINER_TYPE& container) = 0;
					};

					template<typename CONTAINER_TYPE>
					M_Swap<CONTAINER_TYPE>::M_Swap()
					{}

					template<typename CONTAINER_TYPE>
					M_Swap<CONTAINER_TYPE>::~M_Swap()
					{}

				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_SWAP_H_