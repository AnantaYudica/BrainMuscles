#ifndef TYPE_ITERATOR_TYPE_DEFINITION_H_
#define TYPE_ITERATOR_TYPE_DEFINITION_H_

#include "type\iterator\type\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace type
			{
				template<typename TYPE, typename RETURN_TYPE = TYPE>
				struct Definition :
					public BrainMuscles::type::iterator::type::definition::Base
				{
					typedef TYPE Type;
					typedef RETURN_TYPE ReturnType;
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TYPE_DEFINITION_H_