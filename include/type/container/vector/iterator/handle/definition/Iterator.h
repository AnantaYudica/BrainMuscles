#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ITERATOR_H_

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
							struct Iterator :
								public BrainMuscles::type::iterator::handle::Definition<TYPE>
							{
								typedef TYPE Type;
							protected:
								Iterator() {};
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ITERATOR_H_