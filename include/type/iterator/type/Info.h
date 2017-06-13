#ifndef TYPE_ITERATOR_TYPE_INFO_H_
#define TYPE_ITERATOR_TYPE_INFO_H_

#include "type\iterator\type\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace type
			{
				template<typename DEFINITION>
				struct Info 
				{
					static_assert(BrainMuscles::type::iterator::type::definition::IsType<DEFINITION>::Value, "DEFINITION is not define");
					typedef typename DEFINITION::Type Type;
					typedef typename DEFINITION::ReturnType ReturnType;
				};

			}
		}
	}
}

#endif //!TYPE_ITERATOR_TYPE_INFO_H_