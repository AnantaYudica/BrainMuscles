#ifndef TYPE_CONTAINER_ELEMENT_H_
#define TYPE_CONTAINER_ELEMENT_H_

#include <cstddef>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, typename CONTAINER_TYPE = void, typename = std::ptrdiff_t>
			struct Element;

		}
	}
}

#include <type_traits>
#include "type\trait\conditional\Or.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, typename CONTAINER_TYPE, typename DIFFERENCE_TYPE>
			struct Element 
			{
				static_assert(type::trait::conditional::Or<std::is_pointer<TYPE>::value, std::is_object<TYPE>::value>::value, "test");
				typedef CONTAINER_TYPE ContainerType;
				typedef DIFFERENCE_TYPE DifferenceType;
				typedef TYPE Type;
				typedef TYPE* Pointer;
				typedef TYPE& LeftValueReference;
				typedef TYPE&& RightValueReference;
			};
		}
	}
}

#endif //!TYPE_CONTAINER_ELEMENT_H_