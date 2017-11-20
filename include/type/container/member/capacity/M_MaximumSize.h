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
					template<typename DEFINITION_TYPE>
					class M_MaximumSize;
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
				namespace capacity
				{
					template<typename DEFINITION_TYPE>
					class M_MaximumSize
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::SizeType					SizeType;
					protected:
						M_MaximumSize();
					public:
						virtual ~M_MaximumSize();
						virtual SizeType MaximumSize() = 0;
					};

					template<typename DEFINITION_TYPE>
					M_MaximumSize<DEFINITION_TYPE>::M_MaximumSize()
					{}

					template<typename DEFINITION_TYPE>
					M_MaximumSize<DEFINITION_TYPE>::~M_MaximumSize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_