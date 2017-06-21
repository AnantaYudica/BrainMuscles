#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_

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
						class ConstIterator :
							public BrainMuscles::type::container::vector::iterator::handle::definition::ByConstIterator<TYPE>,
							public std::vector<TYPE>::const_iterator
						{
						public:
							typedef std::vector<TYPE>									StandardVectorType;
							typedef typename StandardVectorType::const_iterator			HandleType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::definition::ByConstIterator<TYPE>	BaseType;
							typedef BrainMuscles::type::container::vector 
								::iterator::handle::ConstIterator<TYPE>					ConstIteratorType;
						public:
							typedef typename BaseType::Type								Type;
							typedef typename BaseType::ValueType						ValueType;
							typedef typename BaseType::DifferenceType					DifferenceType;
							typedef typename BaseType::Pointer							Pointer;
							typedef typename BaseType::Reference						Reference;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							ConstIterator();
							ConstIterator(const HandleType& handle);
							ConstIterator(const ConstIteratorType& rhs);
							~ConstIterator();
						public:
							Cloneable* Clone();
							Cloneable* Clone() const;
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
						typename ConstIterator<TYPE>::Cloneable * ConstIterator<TYPE>::Clone() const
						{
							return new ConstIterator<TYPE>(*this);
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable * ConstIterator<TYPE>::Clone()
						{
							return new ConstIterator<TYPE>(*this);
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable& 
						ConstIterator<TYPE>::operator=(Cloneable& lhs)
						{
							HandleType::operator=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
							return *this;
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable&
						ConstIterator<TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable& 
						ConstIterator<TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::DifferenceType 
						ConstIterator<TYPE>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable& 
						ConstIterator<TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::Cloneable& 
						ConstIterator<TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename TYPE>
						ConstIterator<TYPE>
						ConstIterator<TYPE>::operator++(int)
						{
							ConstIterator<TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename TYPE>
						ConstIterator<TYPE>
							ConstIterator<TYPE>::operator--(int)
						{
							ConstIterator<TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						bool ConstIterator<TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename TYPE>
						typename ConstIterator<TYPE>::ValueType& 
						ConstIterator<TYPE>::operator*()
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