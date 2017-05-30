#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_

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
						class ReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<TYPE>,
							public std::vector<TYPE>::reverse_iterator
						{
						public:
							typedef Iterator<TYPE> IteratorType;
							typedef TYPE Type;
							typedef typename std::vector<TYPE>::reverse_iterator HandleType;
						public:
							ReverseIterator();
							ReverseIterator(const HandleType& handle);
							ReverseIterator(const ReverseIterator& rhs);
							~ReverseIterator();
						public:
							Cloneable * Clone();
							Cloneable& operator=(Cloneable& rhs);
						};

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator()
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator(const ReverseIterator& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::~ReverseIterator()
						{}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable * ReverseIterator<TYPE>::Clone()
						{
							return new Iterator<Type>(*this);
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable& ReverseIterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ReverseIterator<TYPE>&>(rhs));
							return *this;
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_