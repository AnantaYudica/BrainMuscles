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
				template<typename TYPE, typename RETURN_TYPE = TYPE>
				struct Definition :
					public BrainMuscles::type::iterator::derived::definition::Base
				{
					typedef TYPE Type;
					typedef RETURN_TYPE ReturnType;
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_DEFINITION_H_