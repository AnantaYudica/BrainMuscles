#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_ITERATOR_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_ITERATOR_H_

#include <cstddef>

#include "type\iterator\derived\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				namespace iterator
				{
					namespace definition
					{
						template<typename TYPE, std::size_t SIZE>
						struct Iterator :
							public BrainMuscles::type::iterator::derived::definition::Base
						{
							typedef TYPE Type;
							typedef TYPE& ReferenceType;
							typedef TYPE* PointerType;
							typedef const TYPE& ConstReferenceType;
							typedef const TYPE* ConstPointerType;
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_ITERATOR_H_