#ifndef TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_
#define TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_

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
					class M_Element;
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
					class M_Element
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type		DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type								ElementType;
						typedef typename ElementType::SizeType						SizeType;
						typedef typename ElementType::LeftValueReferenceType		LeftValueReferenceType;
						typedef typename ElementType::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Element();
					public:
						virtual ~M_Element();
						virtual LeftValueReferenceType At(SizeType index) = 0;
						virtual ConstLeftValueReferenceType At(SizeType index) const = 0;
						LeftValueReferenceType operator[](SizeType index);
						ConstLeftValueReferenceType operator[](SizeType index) const;
					};

					template<typename DEFINITION_TYPE>
					M_Element<DEFINITION_TYPE>::M_Element()
					{}

					template<typename DEFINITION_TYPE>
					M_Element<DEFINITION_TYPE>::~M_Element()
					{}

					template<typename DEFINITION_TYPE>
					typename M_Element<DEFINITION_TYPE>::LeftValueReferenceType
					M_Element<DEFINITION_TYPE>::operator[](SizeType index)
					{
						return At(index);
					}

					template<typename DEFINITION_TYPE>
					typename M_Element<DEFINITION_TYPE>::ConstLeftValueReferenceType
					M_Element<DEFINITION_TYPE>::operator[](SizeType index) const
					{
						return At(index);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_