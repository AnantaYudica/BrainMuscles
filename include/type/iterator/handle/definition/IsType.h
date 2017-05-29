#ifndef TYPE_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_
#define TYPE_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_

#include <type_traits>
#include "type\iterator\handle\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				namespace definition
				{
					template<typename DEFINITION>
					struct IsType
					{
						static constexpr bool Value = std::is_base_of<BrainMuscles::type::iterator::handle::definition::Base, DEFINITION>::value;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_