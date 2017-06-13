#ifndef TYPE_ITERATOR_DERIVED_DEFINITION_H_
#define TYPE_ITERATOR_DERIVED_DEFINITION_H_

#include "type\iterator\derived\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				template<typename DERIVED, typename TYPE, typename REFERENCE_TYPE, typename POINTER_TYPE>
				struct Definition :
					public BrainMuscles::type::iterator::derived::definition::Base
				{
					typedef DERIVED DerivedType;
					typedef TYPE Type;
					typedef REFERENCE_TYPE ReferenceType;
					typedef POINTER_TYPE PointerType;
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_DEFINITION_H_