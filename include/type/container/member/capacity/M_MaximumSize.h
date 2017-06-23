#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_

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
					class M_MaximumSize;
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
					class M_MaximumSize
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType DifferenceType;
					protected:
						M_MaximumSize();
					public:
						virtual ~M_MaximumSize();
						virtual DifferenceType MaximumSize() = 0;
					};

					template<typename ELEMENT>
					M_MaximumSize<ELEMENT>::M_MaximumSize()
					{}

					template<typename ELEMENT>
					M_MaximumSize<ELEMENT>::~M_MaximumSize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_MAXIMUMSIZE_H_