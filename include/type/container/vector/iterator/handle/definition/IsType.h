#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_

#include "type\container\vector\iterator\handle\definition\ConstIterator.h"
#include "type\container\vector\iterator\handle\definition\Iterator.h"

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
							template<typename HANDLE_DEFINITION_TYPE>
							struct IsType
							{
								static constexpr bool Value = false;
							};

							template<typename ELEMENT_TYPE>
							struct IsType<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>
							{
								static constexpr bool Value = true;
							};

							template<typename ELEMENT_TYPE>
							struct IsType<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>
							{
								static constexpr bool Value = true;
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ISTYPE_H_