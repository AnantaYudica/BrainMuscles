#ifndef TYPE_ITERATOR_DERIVED_DEFINITION_ISTYPE_H_
#define TYPE_ITERATOR_DERIVED_DEFINITION_ISTYPE_H_

#include "type\iterator\derived\definition\Base.h"
#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				namespace definition
				{
					template<typename DEFINITION>
					struct IsType
					{
						static constexpr bool Value = std::is_base_of<BrainMuscles::type::iterator::derived::definition::Base, DEFINITION>::value;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_DEFINITION_ISTYPE_H_