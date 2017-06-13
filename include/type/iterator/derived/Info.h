#ifndef TYPE_ITERATOR_DERIVED_INFO_H_
#define TYPE_ITERATOR_DERIVED_INFO_H_

#include "type\iterator\derived\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				template<typename DEFINITION>
				struct Info 
				{
					static_assert(BrainMuscles::type::iterator::derived::definition::IsType<DEFINITION>::Value, "DEFINITION is not define");
					typedef typename DEFINITION::DerivedType DerivedType;
					typedef typename DEFINITION::Type Type;
					typedef typename DEFINITION::ReferenceType ReferenceType;
					typedef typename DEFINITION::PointerType PointerType;
				};

			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_INFO_H_