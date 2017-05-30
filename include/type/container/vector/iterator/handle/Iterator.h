#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_

#include "type\container\vector\iterator\Handle.h"

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
						template<typename TYPE>
						class Iterator :
							public BrainMuscles::type::container::vector::iterator::Handle<TYPE>,
							public std::vector<TYPE>::iterator
						{
						public:
							typedef Iterator<TYPE> IteratorType;
							typedef TYPE Type;
							typedef typename std::vector<TYPE>::iterator HandleType;
						public:
							Iterator();
							Iterator(const HandleType& handle);
							Iterator(const Iterator& rhs);
							~Iterator();
						public:
							Cloneable * Clone();
							Cloneable& operator=(Cloneable& rhs);
						};

						template<typename TYPE>
						Iterator<TYPE>::Iterator()
						{}

						template<typename TYPE>
						Iterator<TYPE>::Iterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						Iterator<TYPE>::Iterator(const Iterator& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						Iterator<TYPE>::~Iterator()
						{}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable * Iterator<TYPE>::Clone()
						{
							return new Iterator<Type>(*this);
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable& Iterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<Iterator<TYPE>&>(rhs));
							return *this;
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_