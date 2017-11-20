#ifndef TYPE_ITERATOR_DERIVED_INFO_H_
#define TYPE_ITERATOR_DERIVED_INFO_H_

#include "type/iterator/derived/definition/IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				template<typename DERIVED_TYPE, typename DEFINITION_TYPE>
				struct Info 
				{
					static_assert(BrainMuscles::type::iterator::derived::definition::IsType<DEFINITION_TYPE>::Value, "DEFINITION is not define");
					typedef DERIVED_TYPE									DerivedType;
					typedef typename DEFINITION_TYPE::Type					Type;
					typedef typename DEFINITION_TYPE::ReferenceType			ReferenceType;
					typedef typename DEFINITION_TYPE::PointerType			PointerType;
					typedef typename DEFINITION_TYPE::ConstReferenceType	ConstReferenceType;
					typedef typename DEFINITION_TYPE::ConstPointerType		ConstPointerType;
				};

			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_INFO_H_