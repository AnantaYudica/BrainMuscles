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
					template<typename DEFINITION_TYPE>
					class M_Size;
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
					class M_Size
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::SizeType					SizeType;
					protected:
						M_Size();
					public:
						virtual ~M_Size();
						virtual SizeType Size() = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Size<DEFINITION_TYPE>::M_Size()
					{}

					template<typename DEFINITION_TYPE>
					M_Size<DEFINITION_TYPE>::~M_Size()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_