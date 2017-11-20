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
					template<typename DEFINITION_TYPE>
					class M_Swap;
				}
			}
		}
	}
}

#include "type/container/definition/IsType.h"

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
					template<typename DEFINITION_TYPE>
					class M_Swap
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename DefinitionType::ContainerType			ContainerType;
					protected:
						M_Swap();
					public:
						virtual ~M_Swap();
						virtual void Swap(ContainerType& container) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Swap<DEFINITION_TYPE>::M_Swap()
					{}

					template<typename DEFINITION_TYPE>
					M_Swap<DEFINITION_TYPE>::~M_Swap()
					{}

				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_SWAP_H_