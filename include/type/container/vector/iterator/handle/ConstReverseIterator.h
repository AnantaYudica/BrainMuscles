#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_

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
						class ConstReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<TYPE>,
							public std::vector<TYPE>::const_reverse_iterator
						{
						public:
							typedef ConstReverseIterator<TYPE> ConstReverseIteratorType;
							typedef TYPE Type;
							typedef typename std::vector<TYPE>::const_reverse_iterator HandleType;
						public:
							ConstReverseIterator();
							ConstReverseIterator(const HandleType& handle);
							ConstReverseIterator(const ConstReverseIterator& rhs);
							~ConstReverseIterator();
						public:
							Cloneable * Clone();
							Cloneable& operator=(Cloneable& rhs);
						};

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator()
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator(const ConstReverseIterator& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::~ConstReverseIterator()
						{}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable * ConstReverseIterator<TYPE>::Clone()
						{
							return new ConstReverseIterator<Type>(*this);
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& ConstReverseIterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ConstReverseIterator<TYPE>&>(rhs));
							return *this;
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_