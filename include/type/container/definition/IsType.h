#ifndef TYPE_CONTAINER_DEFINITION_ISTYPE_H_
#define TYPE_CONTAINER_DEFINITION_ISTYPE_H_

#include <type_traits>

#include "type\container\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace definition
			{
				template<typename DEFINITION, bool VALIDATION = false>
				struct IsType
				{
					static constexpr bool Value = std::is_base_of<BrainMuscles::type::container::definition::Base, DEFINITION>::value;
					static_assert((VALIDATION ? Value : true), "[DEFINITION] requires base of class BrainMuscles::type::container::definition::Base");
					typedef DEFINITION Type;
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_DEFINITION_ISTYPE_H_