#ifndef TYPE_CONTAINER_ELEMENT_H_
#define TYPE_CONTAINER_ELEMENT_H_

#include <cstddef>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, typename DISTANCE_TYPE = std::ptrdiff_t, typename SIZE_TYPE = std::size_t, typename POINTER_TYPE = TYPE*,
				typename LEFT_VALUE_REFERENCE_TYPE = TYPE&, typename RIGHT_VALUE_REFERENCE_TYPE = TYPE&&,
				typename CONST_POINTER_TYPE = const TYPE*,
				typename CONST_LEFT_VALUE_REFERENCE_TYPE = const TYPE&,
				typename CONST_RIGHT_VALUE_REFERENCE_TYPE = const TYPE&&>
			struct Element;

		}
	}
}

#include <type_traits>
#include "type\trait\conditional\Or.h"
#include "type\container\element\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, typename DISTANCE_TYPE, typename SIZE_TYPE, typename POINTER_TYPE, typename LEFT_VALUE_REFERENCE_TYPE,
				typename RIGHT_VALUE_REFERENCE_TYPE, typename CONST_POINTER_TYPE, typename CONST_LEFT_VALUE_REFERENCE_TYPE,
				typename CONST_RIGHT_VALUE_REFERENCE_TYPE>
			struct Element :
				public BrainMuscles::type::container::element::Base
			{
				static_assert(type::trait::conditional::Or<std::is_pointer<TYPE>::value, std::is_object<TYPE>::value>::value, "test");
				typedef TYPE								Type;
				typedef DISTANCE_TYPE						DifferenceType;
				typedef SIZE_TYPE							SizeType;
				typedef POINTER_TYPE						PointerType;
				typedef LEFT_VALUE_REFERENCE_TYPE			LeftValueReferenceType;
				typedef RIGHT_VALUE_REFERENCE_TYPE			RightValueReferenceType;
				typedef CONST_POINTER_TYPE					ConstPointerType;
				typedef CONST_LEFT_VALUE_REFERENCE_TYPE		ConstLeftValueReferenceType;
				typedef CONST_RIGHT_VALUE_REFERENCE_TYPE	ConstRightValueReferenceType;
			};
		}
	}
}

#endif //!TYPE_CONTAINER_ELEMENT_H_