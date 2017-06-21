#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_

#include "type\iterator\handle\Definition.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				namespace iterator
				{
					namespace handle
					{
						namespace definition
						{
							template <typename TYPE>
							struct ConstIterator :
								public BrainMuscles::type::iterator::handle::Definition<const TYPE>
							{
								typedef TYPE Type;
								ConstIterator() = delete;
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_