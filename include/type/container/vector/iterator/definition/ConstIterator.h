#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_

#include "type/iterator/derived/definition/Base.h"

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
					namespace definition
					{
						template<typename ELEMENT_TYPE>
						struct ConstIterator :
							public BrainMuscles::type::iterator::derived::definition::Base
						{
						private:
							typedef typename BrainMuscles::type::container
								::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
						public:
							typedef typename ElementType::Type							Type;
							typedef typename ElementType::ConstLeftValueReferenceType	ReferenceType;
							typedef typename ElementType::ConstPointerType				PointerType;
							typedef typename ElementType::ConstLeftValueReferenceType	ConstReferenceType;
							typedef typename ElementType::ConstPointerType				ConstPointerType;
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_