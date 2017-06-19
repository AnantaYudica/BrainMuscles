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
						template<typename DEFINITION>
						class ReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>,
							public std::vector<typename DEFINITION::Type>::reverse_iterator
						{
						public:
							typedef DEFINITION DefinitionType;
							typedef typename DefinitionType::Type Type;
							typedef ReverseIterator<Type> ReverseIteratorType;
							typedef typename std::vector<Type>::reverse_iterator HandleType;
						public:
							typedef typename BrainMuscles::type::container::vector::iterator::Handle<Type>::DifferenceType DifferenceType;
						public:
							ReverseIterator();
							ReverseIterator(const HandleType& handle);
							ReverseIterator(const ReverseIteratorType& rhs);
							~ReverseIterator();
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
							ReverseIteratorType operator++(int);
							ReverseIteratorType operator--(int);
							bool operator==(Cloneable& lhs);
							bool operator!=(Cloneable& lhs);
							bool operator<(Cloneable& lhs);
							bool operator<=(Cloneable& lhs);
							bool operator>(Cloneable& lhs);
							bool operator>=(Cloneable& lhs);
							ValueType& operator*();
						};

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>::ReverseIterator()
						{}

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>::ReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>::ReverseIterator(const ReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>::~ReverseIterator()
						{}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable * ReverseIterator<DEFINITION>::Clone()
						{
							return new ReverseIteratorType(*this);
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable * ReverseIterator<DEFINITION>::Clone() const
						{
							return new ReverseIteratorType(*this);
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable& ReverseIterator<DEFINITION>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ReverseIterator<DEFINITION>&>(rhs));
							return *this;
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable&
							ReverseIterator<DEFINITION>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable&
							ReverseIterator<DEFINITION>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::DifferenceType
							ReverseIterator<DEFINITION>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ReverseIterator<DEFINITION>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable&
							ReverseIterator<DEFINITION>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::Cloneable&
							ReverseIterator<DEFINITION>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>
							ReverseIterator<DEFINITION>::operator++(int)
						{
							ReverseIterator<DEFINITION> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename DEFINITION>
						ReverseIterator<DEFINITION>
							ReverseIterator<DEFINITION>::operator--(int)
						{
							ReverseIterator<DEFINITION> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						bool ReverseIterator<DEFINITION>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ReverseIterator<DEFINITION>&>(lhs).base());
						}

						template<typename DEFINITION>
						typename ReverseIterator<DEFINITION>::ValueType&
							ReverseIterator<DEFINITION>::operator*()
						{
							return HandleType::operator*();
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_