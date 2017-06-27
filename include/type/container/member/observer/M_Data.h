#ifndef TYPE_CONTAINER_MEMBER_OBSERVER_M_DATA_H_
#define TYPE_CONTAINER_MEMBER_OBSERVER_M_DATA_H_

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
					class M_Data;
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
				namespace observer
				{
					template<typename DEFINITION_TYPE>
					class M_Data
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type									ElementType;
						typedef typename ElementType::Type								Type;
					protected:
						M_Data();
					public:
						virtual ~M_Data();
						virtual Type* Data() = 0;
						virtual const Type* Data() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Data<DEFINITION_TYPE>::M_Data()
					{}

					template<typename DEFINITION_TYPE>
					M_Data<DEFINITION_TYPE>::~M_Data()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_DATA_H_