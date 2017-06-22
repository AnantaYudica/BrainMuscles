#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_

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
						class ReverseIterator :
							public BrainMuscles::type::container::vector::iterator::handle::definition::ByIterator<TYPE>,
							public std::vector<TYPE>::reverse_iterator
						{
						public:
							typedef std::vector<TYPE>									StandardVectorType;
							typedef typename StandardVectorType::reverse_iterator		HandleType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::definition::ByIterator<TYPE>		BaseType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::ReverseIterator<TYPE>				ReverseIteratorType;
						public:
							typedef typename BaseType::Type								Type;
							typedef typename BaseType::ValueType						ValueType;
							typedef typename BaseType::DifferenceType					DifferenceType;
							typedef typename BaseType::Pointer							Pointer;
							typedef typename BaseType::Reference						Reference;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							ReverseIterator();
							ReverseIterator(const HandleType& handle);
							ReverseIterator(const ReverseIteratorType& rhs);
							~ReverseIterator();
						protected:
							ValueType& OnRequestReference();
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

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator()
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::ReverseIterator(const ReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename TYPE>
						ReverseIterator<TYPE>::~ReverseIterator()
						{}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::ValueType& ReverseIterator<TYPE>::OnRequestReference()
						{
							return HandleType::operator*();
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable * ReverseIterator<TYPE>::Clone()
						{
							return new ReverseIteratorType(*this);
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable * ReverseIterator<TYPE>::Clone() const
						{
							return new ReverseIteratorType(*this);
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable& ReverseIterator<TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ReverseIterator<TYPE>&>(rhs));
							return *this;
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable&
							ReverseIterator<TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable&
							ReverseIterator<TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::DifferenceType
							ReverseIterator<TYPE>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ReverseIterator<TYPE>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable&
							ReverseIterator<TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::Cloneable&
							ReverseIterator<TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename TYPE>
						ReverseIterator<TYPE>
							ReverseIterator<TYPE>::operator++(int)
						{
							ReverseIterator<TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename TYPE>
						ReverseIterator<TYPE>
							ReverseIterator<TYPE>::operator--(int)
						{
							ReverseIterator<TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						bool ReverseIterator<TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ReverseIterator<TYPE>&>(lhs).base());
						}

						template<typename TYPE>
						typename ReverseIterator<TYPE>::ValueType&
							ReverseIterator<TYPE>::operator*()
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