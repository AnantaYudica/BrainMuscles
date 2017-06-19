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
						template<typename DEFINITION>
						class ConstIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>,
							public std::vector<typename DEFINITION::Type>::const_iterator
						{
						public:
							typedef DEFINITION DefinitionType;
							typedef typename DefinitionType::Type Type;
							typedef ConstIterator<DefinitionType> ConstIteratorType;
							typedef typename std::vector<Type>::const_iterator HandleType;
						public:
							typedef typename BrainMuscles::type::container::vector::iterator::Handle<DefinitionType>::DifferenceType DifferenceType;
						public:
							ConstIterator();
							ConstIterator(const HandleType& handle);
							ConstIterator(const ConstIteratorType& rhs);
							~ConstIterator();
						public:
							Cloneable * Clone();
							Cloneable * Clone() const;
							Cloneable& operator=(Cloneable& lhs);
						public:
							Cloneable& operator-=(const DifferenceType& rhs);
							Cloneable& operator+=(const DifferenceType& rhs);
							DifferenceType operator-(const Cloneable& lhs);
							Cloneable& operator++();
							Cloneable& operator--();
							ConstIteratorType operator++(int);
							ConstIteratorType operator--(int);
							bool operator==(Cloneable& lhs);
							bool operator!=(Cloneable& lhs);
							bool operator<(Cloneable& lhs);
							bool operator<=(Cloneable& lhs);
							bool operator>(Cloneable& lhs);
							bool operator>=(Cloneable& lhs);
							ValueType& operator*();
						};

						template<typename DEFINITION>
						ConstIterator<DEFINITION>::ConstIterator()
						{}

						template<typename DEFINITION>
						ConstIterator<DEFINITION>::ConstIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ConstIterator<DEFINITION>::ConstIterator(const ConstIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ConstIterator<DEFINITION>::~ConstIterator()
						{}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable * ConstIterator<DEFINITION>::Clone() const
						{
							return new ConstIterator<DEFINITION>(*this);
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable * ConstIterator<DEFINITION>::Clone()
						{
							return new ConstIterator<DEFINITION>(*this);
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable&
						ConstIterator<DEFINITION>::operator=(Cloneable& lhs)
						{
							HandleType::operator=(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
							return *this;
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable&
						ConstIterator<DEFINITION>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable&
						ConstIterator<DEFINITION>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::DifferenceType
						ConstIterator<DEFINITION>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable&
						ConstIterator<DEFINITION>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::Cloneable&
						ConstIterator<DEFINITION>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename DEFINITION>
						ConstIterator<DEFINITION>
						ConstIterator<DEFINITION>::operator++(int)
						{
							ConstIterator<DEFINITION> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename DEFINITION>
						ConstIterator<DEFINITION>
							ConstIterator<DEFINITION>::operator--(int)
						{
							ConstIterator<DEFINITION> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						bool ConstIterator<DEFINITION>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<ConstIterator<DEFINITION>&>(lhs));
						}

						template<typename DEFINITION>
						typename ConstIterator<DEFINITION>::ValueType&
						ConstIterator<DEFINITION>::operator*()
						{
							return HandleType::operator*();
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_