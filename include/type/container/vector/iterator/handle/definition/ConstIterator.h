#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_

#include "type/iterator/handle/definition/Base.h"

#include "type/container/element/IsType.h"

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
							template <typename ELEMENT_TYPE>
							struct ConstIterator :
								public BrainMuscles::type::iterator::handle::definition::Base
							{
							private:
								typedef typename BrainMuscles::type::container
									::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							public:
								typedef typename ElementType::Type							Type;
								typedef const typename ElementType::Type					ValueType;
								typedef typename ElementType::DifferenceType				DifferenceType;
								typedef typename ElementType::ConstPointerType				PointerType;
								typedef typename ElementType::ConstLeftValueReferenceType	ReferenceType;
							protected:
								ConstIterator() {};
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_CONSTITERATOR_H_