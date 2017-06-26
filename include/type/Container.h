#ifndef TYPE_CONTAINER_H_
#define TYPE_CONTAINER_H_

#include "type\container\definition\Base.h"
#include "type\container\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		template<typename DEFINITION_TYPE>
		class Container
		{
			static_assert(BrainMuscles::type::container::definition::IsType<DEFINITION_TYPE>::Value, 
				"[DEFINITION_TYPE] requires base of class BrainMuscles::type::container::definition::Base");
		};
	}
}

#endif //!TYPE_CONTAINER_H_