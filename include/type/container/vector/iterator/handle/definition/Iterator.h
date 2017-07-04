#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_DEFINITION_ITERATOR_H_

#include "type\iterator\handle\definition\Base.h"

#include "type\container\element\IsType.h"

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
								public BrainMuscles::type::iterator::handle::definition::Base
							{
							private:
								typedef typename BrainMuscles::type::container
									::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							public:
								typedef typename ElementType::Type							Type;
								typedef typename ElementType::Type							ValueType;
								typedef typename ElementType::DifferenceType				DifferenceType;
								typedef typename ElementType::PointerType					PointerType;
								typedef typename ElementType::LeftValueReferenceType		ReferenceType;
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