#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_

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
					class M_Size;
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
					class M_Size
					{
					protected:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT, true>::Type::DifferenceType DifferenceType;
					protected:
						M_Size();
					public:
						virtual ~M_Size();
						virtual DifferenceType Size() = 0;
					};

					template<typename ELEMENT>
					M_Size<ELEMENT>::M_Size()
					{}

					template<typename ELEMENT>
					M_Size<ELEMENT>::~M_Size()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_SIZE_H_