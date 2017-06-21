#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_

#include <vector>
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
							public BrainMuscles::type::container::vector::iterator::handle::definition::ByConstIterator<TYPE>,
							public std::vector<TYPE>::const_reverse_iterator
						{
						public:
							typedef std::vector<TYPE>									StandardVectorType;
							typedef typename StandardVectorType::const_reverse_iterator	HandleType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::definition::ByConstIterator<TYPE>	BaseType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::ConstReverseIterator<TYPE>			ConstReverseIteratorType;
						public:
							typedef typename BaseType::Type								Type;
							typedef typename BaseType::ValueType						ValueType;
							typedef typename BaseType::DifferenceType					DifferenceType;
							typedef typename BaseType::Pointer							Pointer;
							typedef typename BaseType::Reference						Reference;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							ConstReverseIterator();
							ConstReverseIterator(const HandleType& handle);
							ConstReverseIterator(const ConstReverseIteratorType& rhs);
							~ConstReverseIterator();
						public:
							Cloneable* Clone();
							Cloneable* Clone() const;
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

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator()
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::ConstReverseIterator(const ConstReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ConstReverseIterator<TYPE>::~ConstReverseIterator()
						{}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable * ConstReverseIterator<TYPE>::Clone()
						{
							return new ConstReverseIterator<TYPE>(*this);
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable * ConstReverseIterator<TYPE>::Clone() const
						{
							return new ConstReverseIterator<TYPE>(*this);
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& ConstReverseIterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ConstReverseIterator<TYPE>&>(rhs));
							return *this;
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& 
						ConstReverseIterator<TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& 
						ConstReverseIterator<TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::DifferenceType 
						ConstReverseIterator<TYPE>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ConstReverseIterator<TYPE>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& 
						ConstReverseIterator<TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::Cloneable& 
						ConstReverseIterator<TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename TYPE>
						ConstReverseIterator<TYPE> 
						ConstReverseIterator<TYPE>::operator++(int)
						{
							ConstReverseIterator<TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename TYPE>
						ConstReverseIterator<TYPE> 
						ConstReverseIterator<TYPE>::operator--(int)
						{
							ConstReverseIterator<TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ConstReverseIterator<TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ConstReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						typename ConstReverseIterator<TYPE>::ValueType& 
						ConstReverseIterator<TYPE>::operator*()
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