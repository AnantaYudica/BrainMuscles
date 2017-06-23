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
					template<typename ELEMENT>
					class M_Element;
				}
			}
		}
	}
}

#include "type\container\element\IsType.h"

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
					template<typename ELEMENT>
					class M_Element
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType				DifferenceType;
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::LeftValueReferenceType		LeftValueReferenceType;
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Element();
					public:
						virtual ~M_Element();
						virtual LeftValueReferenceType At(DifferenceType index) = 0;
						virtual ConstLeftValueReferenceType At(DifferenceType index) const = 0;
						LeftValueReferenceType operator[](DifferenceType index);
						ConstLeftValueReferenceType operator[](DifferenceType index) const;
					};

					template<typename ELEMENT>
					M_Element<ELEMENT>::M_Element()
					{}

					template<typename ELEMENT>
					M_Element<ELEMENT>::~M_Element()
					{}

					template<typename ELEMENT>
					typename M_Element<ELEMENT>::LeftValueReferenceType
					M_Element<ELEMENT>::operator[](DifferenceType index)
					{
						return At(index);
					}

					template<typename ELEMENT>
					typename M_Element<ELEMENT>::ConstLeftValueReferenceType
					M_Element<ELEMENT>::operator[](DifferenceType index) const
					{
						return At(index);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_ELEMENT_H_