#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_

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
					class M_First;
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
					class M_First
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
						M_First();
					public:
						virtual ~M_First();
						virtual LeftValueReferenceType Front() = 0;
						virtual ConstLeftValueReferenceType Front() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_First<DEFINITION_TYPE>::M_First()
					{}

					template<typename DEFINITION_TYPE>
					M_First<DEFINITION_TYPE>::~M_First()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_