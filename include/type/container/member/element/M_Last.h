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
					template<typename ELEMENT>
					class M_Last;
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
					class M_Last
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::LeftValueReferenceType		LeftValueReferenceType;
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Last();
					public:
						virtual ~M_Last();
						virtual LeftValueReferenceType Back() = 0;
						virtual ConstLeftValueReferenceType Back() const = 0;
					};

					template<typename ELEMENT>
					M_Last<ELEMENT>::M_Last()
					{}

					template<typename ELEMENT>
					M_Last<ELEMENT>::~M_Last()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ELEMENT_M_LAST_H_