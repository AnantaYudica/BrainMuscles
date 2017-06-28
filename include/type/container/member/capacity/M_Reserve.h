#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_

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
					class M_Reserve;
				}
			}
		}
	}
}

#include "type\container\element\IsType.h"
#include "type\container\definition\IsType.h"

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
					class M_Reserve
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::SizeType					SizeType;
					protected:
						M_Reserve();
					public:
						virtual ~M_Reserve();
						virtual void Reserve(SizeType n) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Reserve<DEFINITION_TYPE>::M_Reserve()
					{}

					template<typename DEFINITION_TYPE>
					M_Reserve<DEFINITION_TYPE>::~M_Reserve()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_