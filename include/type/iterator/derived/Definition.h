#ifndef TYPE_ITERATOR_DERIVED_DEFINITION_H_
#define TYPE_ITERATOR_DERIVED_DEFINITION_H_

#include "type/iterator/derived/definition/Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				template<typename TYPE, typename REFERENCE_TYPE, typename POINTER_TYPE, typename CONST_REFERENCE_TYPE, typename CONST_POINTER_TYPE>
				struct Definition :
					public BrainMuscles::type::iterator::derived::definition::Base
				{
					typedef TYPE Type;
					typedef REFERENCE_TYPE ReferenceType;
					typedef POINTER_TYPE PointerType;
					typedef CONST_REFERENCE_TYPE ConstReferenceType;
					typedef CONST_POINTER_TYPE ConstPointerType;
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_DEFINITION_H_