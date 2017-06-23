#ifndef TYPE_CONTAINER_ELEMENT_ISTYPE_H_
#define TYPE_CONTAINER_ELEMENT_ISTYPE_H_

#include <type_traits>

#include "type\container\element\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace element
			{
				template<typename ELEMENT, bool VALIDATION = false>
				struct IsType
				{
					static constexpr bool Value = std::is_base_of<BrainMuscles::type::container::element::Base, ELEMENT>::value;
					static_assert((VALIDATION ? Value : true), "[ELEMENT] requires class BrainMuscles::type::container::Element");
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ELEMENT_ISTYPE_H_