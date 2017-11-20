#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace element
				{
					template<typename DEFINITION_TYPE>
					class M_Last;
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
				namespace element
				{
					template<typename DEFINITION_TYPE>
					class M_Last
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type		DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type								ElementType;
						typedef typename ElementType::LeftValueReferenceType		LeftValueReferenceType;
						typedef typename ElementType::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Last();
					public:
						virtual ~M_Last();
						virtual LeftValueReferenceType Back() = 0;
						virtual ConstLeftValueReferenceType Back() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Last<DEFINITION_TYPE>::M_Last()
					{}

					template<typename DEFINITION_TYPE>
					M_Last<DEFINITION_TYPE>::~M_Last()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_