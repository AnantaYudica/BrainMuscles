#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_

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
					class M_Reserve;
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
					class M_Reserve
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType DifferenceType;
					protected:
						M_Reserve();
					public:
						virtual ~M_Reserve();
						virtual void Reserve(DifferenceType n) = 0;
					};

					template<typename ELEMENT>
					M_Reserve<ELEMENT>::M_Reserve()
					{}

					template<typename ELEMENT>
					M_Reserve<ELEMENT>::~M_Reserve()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESERVE_H_