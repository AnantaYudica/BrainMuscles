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
						template<typename DEFINITION>
						class Iterator :
							public BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>,
							public std::vector<typename DEFINITION::Type>::iterator
						{
						public:
							typedef DEFINITION DefinitionType;
							typedef typename DefinitionType::Type Type;
							typedef Iterator<DefinitionType> IteratorType;
							typedef typename std::vector<Type>::iterator HandleType;
						public:
							typedef typename BrainMuscles::type::container::vector::iterator::Handle<Type>::DifferenceType DifferenceType;
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

						template<typename DEFINITION>
						Iterator<DEFINITION>::Iterator()
						{}

						template<typename DEFINITION>
						Iterator<DEFINITION>::Iterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						Iterator<DEFINITION>::Iterator(const IteratorType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						Iterator<DEFINITION>::~Iterator()
						{}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable * Iterator<DEFINITION>::Clone()
						{
							return new IteratorType(*this);
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable * Iterator<DEFINITION>::Clone() const
						{
							return new IteratorType(*this);
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable& Iterator<DEFINITION>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<Iterator<DEFINITION>&>(rhs));
							return *this;
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable&
							Iterator<DEFINITION>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable&
							Iterator<DEFINITION>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::DifferenceType
							Iterator<DEFINITION>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable&
							Iterator<DEFINITION>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::Cloneable&
							Iterator<DEFINITION>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename DEFINITION>
						Iterator<DEFINITION>
							Iterator<DEFINITION>::operator++(int)
						{
							Iterator<DEFINITION> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename DEFINITION>
						Iterator<DEFINITION>
							Iterator<DEFINITION>::operator--(int)
						{
							Iterator<DEFINITION> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool Iterator<DEFINITION>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<Iterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						typename Iterator<DEFINITION>::ValueType&
							Iterator<DEFINITION>::operator*()
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