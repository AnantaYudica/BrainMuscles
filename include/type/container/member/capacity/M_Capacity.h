#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_

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
					class M_Capacity;
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
					class M_Capacity
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType DifferenceType;
					protected:
						M_Capacity();
					public:
						virtual ~M_Capacity();
						virtual DifferenceType Capacity() const = 0;
					};

					template<typename ELEMENT>
					M_Capacity<ELEMENT>::M_Capacity()
					{}

					template<typename ELEMENT>
					M_Capacity<ELEMENT>::~M_Capacity()
					{}
				}
			}
		}
	}
}

#endif TYPE_CONTAINER_MEMBER_CAPACITY_M_CAPACITY_H_