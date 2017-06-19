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
						template<typename DEFINITION>
						class ConstReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>,
							public std::vector<typename DEFINITION::Type>::const_reverse_iterator
						{
						public:
							typedef DEFINITION DefinitionType;
							typedef typename DefinitionType::Type Type;
							typedef ConstReverseIterator<DefinitionType> ConstReverseIteratorType;
							typedef typename std::vector<Type>::const_reverse_iterator HandleType;
						public:
							typedef typename BrainMuscles::type::container::vector::iterator::Handle<Type>::DifferenceType DifferenceType;
						public:
							ConstReverseIterator();
							ConstReverseIterator(const HandleType& handle);
							ConstReverseIterator(const ConstReverseIteratorType& rhs);
							~ConstReverseIterator();
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
							ConstReverseIteratorType operator++(int);
							ConstReverseIteratorType operator--(int);
							bool operator==(Cloneable& lhs);
							bool operator!=(Cloneable& lhs);
							bool operator<(Cloneable& lhs);
							bool operator<=(Cloneable& lhs);
							bool operator>(Cloneable& lhs);
							bool operator>=(Cloneable& lhs);
							ValueType& operator*();
						};

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>::ConstReverseIterator()
						{}

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>::ConstReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>::ConstReverseIterator(const ConstReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>::~ConstReverseIterator()
						{}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable * ConstReverseIterator<DEFINITION>::Clone()
						{
							return new ConstReverseIterator<DEFINITION>(*this);
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable * ConstReverseIterator<DEFINITION>::Clone() const
						{
							return new ConstReverseIterator<DEFINITION>(*this);
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable& ConstReverseIterator<DEFINITION>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ConstReverseIterator<DEFINITION>&>(rhs));
							return *this;
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable&
						ConstReverseIterator<DEFINITION>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable&
						ConstReverseIterator<DEFINITION>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::DifferenceType
						ConstReverseIterator<DEFINITION>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ConstReverseIterator<DEFINITION>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable&
						ConstReverseIterator<DEFINITION>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::Cloneable&
						ConstReverseIterator<DEFINITION>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>
						ConstReverseIterator<DEFINITION>::operator++(int)
						{
							ConstReverseIterator<DEFINITION> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename DEFINITION>
						ConstReverseIterator<DEFINITION>
						ConstReverseIterator<DEFINITION>::operator--(int)
						{
							ConstReverseIterator<DEFINITION> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ConstReverseIterator<DEFINITION>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ConstReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						typename ConstReverseIterator<DEFINITION>::ValueType&
						ConstReverseIterator<DEFINITION>::operator*()
						{
							return HandleType::operator*();
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_