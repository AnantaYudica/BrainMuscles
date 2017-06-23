#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_

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
					template<typename ELEMENT>
					class M_Resize;
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
				namespace capacity
				{
					template<typename ELEMENT>
					class M_Resize
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType				DifferenceType;
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Resize();
					public:
						virtual ~M_Resize();
						virtual void Resize(DifferenceType n) = 0;
						virtual void Resize(DifferenceType n, ConstLeftValueReferenceType val) = 0;
					};

					template<typename ELEMENT>
					M_Resize<ELEMENT>::M_Resize()
					{}

					template<typename ELEMENT>
					M_Resize<ELEMENT>::~M_Resize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_