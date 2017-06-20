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
							typedef typename BrainMuscles::type::container::vector::iterator::Handle<TYPE>::DifferenceType DifferenceType;
						public:
							Iterator();
							Iterator(const HandleType& handle);
							Iterator(const IteratorType& rhs);
							~Iterator();
						public:
							Cloneable * Clone();
							Cloneable * Clone() const;
							Cloneable& operator=(Cloneable& rhs);
						public:
							Cloneable& operator-=(const DifferenceType& rhs);
							Cloneable& operator+=(const DifferenceType& rhs);
							DifferenceType operator-(const Cloneable& lhs);
							Cloneable& operator++();
							Cloneable& operator--();
							IteratorType operator++(int);
							IteratorType operator--(int);
							bool operator==(Cloneable& lhs);
							bool operator!=(Cloneable& lhs);
							bool operator<(Cloneable& lhs);
							bool operator<=(Cloneable& lhs);
							bool operator>(Cloneable& lhs);
							bool operator>=(Cloneable& lhs);
							ValueType& operator*();
						};

						template<typename TYPE>
						Iterator<TYPE>::Iterator()
						{}

						template<typename TYPE>
						Iterator<TYPE>::Iterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						Iterator<TYPE>::Iterator(const IteratorType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						Iterator<TYPE>::~Iterator()
						{}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable * Iterator<TYPE>::Clone()
						{
							return new IteratorType(*this);
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable * Iterator<TYPE>::Clone() const
						{
							return new IteratorType(*this);
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable& Iterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<Iterator<TYPE>&>(rhs));
							return *this;
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable&
							Iterator<TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable&
							Iterator<TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename Iterator<TYPE>::DifferenceType
							Iterator<TYPE>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable&
							Iterator<TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename TYPE>
						typename Iterator<TYPE>::Cloneable&
							Iterator<TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename TYPE>
						Iterator<TYPE>
							Iterator<TYPE>::operator++(int)
						{
							Iterator<TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename TYPE>
						Iterator<TYPE>
							Iterator<TYPE>::operator--(int)
						{
							Iterator<TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool Iterator<TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<Iterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						typename Iterator<TYPE>::ValueType&
							Iterator<TYPE>::operator*()
						{
							return HandleType::operator*();
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_