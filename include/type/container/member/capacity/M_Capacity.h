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
					template<typename DEFINITION_TYPE>
					class M_Capacity;
				}
			}
		}
	}
}

#include "type\container\definition\IsType.h"
#include "type\container\element\IsType.h"

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
					class M_Capacity
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::DifferenceType			DifferenceType;
					protected:
						M_Capacity();
					public:
						virtual ~M_Capacity();
						virtual DifferenceType Capacity() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Capacity<DEFINITION_TYPE>::M_Capacity()
					{}

					template<typename DEFINITION_TYPE>
					M_Capacity<DEFINITION_TYPE>::~M_Capacity()
					{}
				}
			}
		}
	}
}

#endif TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_