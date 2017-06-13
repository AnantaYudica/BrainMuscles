#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_CONSTITERATOR_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_CONSTITERATOR_H_

#include "type\iterator\derived\Definition.h"
#include "type\container\array\Iterator.h"

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
						template<typename TYPE, size_t SIZE, typename HANDLE>
						struct ConstIterator :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::array::Iterator<TYPE, SIZE, HANDLE>,
								TYPE,
								const TYPE&,
								const TYPE*>
						{};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_CONSTITERATOR_H_