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
					template<typename DEFINITION_TYPE>
					class M_GetAllocator;
				}
			}
		}
	}
}

#include "type/container/element/IsType.h"
#include "type/container/definition/IsType.h"

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
					template<typename DEFINITION_TYPE>
					class M_GetAllocator
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type									ElementType;
						typedef typename ElementType::AllocatorType						AllocatorType;
					protected:
						M_GetAllocator();
					public:
						virtual ~M_GetAllocator();
					public:
						virtual AllocatorType GetAllocator() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_GetAllocator<DEFINITION_TYPE>::M_GetAllocator()
					{}

					template<typename DEFINITION_TYPE>
					M_GetAllocator<DEFINITION_TYPE>::~M_GetAllocator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_OBSERVER_M_GETALLOCATOR_H_