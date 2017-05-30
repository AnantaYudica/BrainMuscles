#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_

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
						class ConstIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<TYPE>,
							public std::vector<TYPE>::const_iterator
						{
						public:
							typedef ConstIterator<TYPE> ConstIteratorType;
							typedef TYPE Type;
							typedef typename std::vector<TYPE>::const_iterator HandleType;
						public:
							ConstIterator();
							ConstIterator(const HandleType& handle);
							ConstIterator(const ConstIteratorType& rhs);
							~ConstIterator();
						public:
							Cloneable * Clone();
							Cloneable& operator=(Cloneable& rhs);
						};

						template<typename TYPE>
						ConstIterator<TYPE>::ConstIterator()
						{}

						template<typename TYPE>
						ConstIterator<TYPE>::ConstIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstIterator<TYPE>::ConstIterator(const ConstIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstIterator<TYPE>::~ConstIterator()
						{}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable * ConstIterator<TYPE>::Clone()
						{
							return new ConstIterator<TYPE>(*this);
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable& ConstIterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ConstIterator<TYPE>&>(rhs));
							return *this;
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_