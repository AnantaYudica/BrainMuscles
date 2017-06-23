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
					template<typename ELEMENT>
					class M_First;
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
					class M_First
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::LeftValueReferenceType		LeftValueReferenceType;
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_First();
					public:
						virtual ~M_First();
						virtual LeftValueReferenceType Front() = 0;
						virtual ConstLeftValueReferenceType Front() const = 0;
					};

					template<typename ELEMENT>
					M_First<ELEMENT>::M_First()
					{}

					template<typename ELEMENT>
					M_First<ELEMENT>::~M_First()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_FIRST_H_