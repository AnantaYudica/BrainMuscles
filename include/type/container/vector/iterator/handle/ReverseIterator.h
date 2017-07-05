#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_REVERSEITERATOR_H_

#include <vector>

#include "type\container\element\IsType.h"

#include "type\container\vector\iterator\handle\definition\Iterator.h"

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
						template<typename ELEMENT_TYPE>
						class ReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>,
							public std::vector<typename BrainMuscles::type::container::element::IsType<ELEMENT_TYPE, true>::Type::Type>::reverse_iterator
						{
						private:
							typedef typename BrainMuscles::type::container
								::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::Iterator<ElementType>				DefinitionType;
						public:
							typedef std::vector<typename ElementType::Type>				StandardVectorType;
							typedef typename StandardVectorType::reverse_iterator		HandleType;
							typedef BrainMuscles::type::container::vector::iterator
								::Handle<DefinitionType>								BaseType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::ReverseIterator<ElementType>		ReverseIteratorType;
						public:
							typedef typename DefinitionType::Type						Type;
							typedef typename DefinitionType::ValueType					ValueType;
							typedef typename DefinitionType::DifferenceType				DifferenceType;
							typedef typename DefinitionType::Pointer					PointerType;
							typedef typename DefinitionType::Reference					ReferenceType;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							ReverseIterator();
							ReverseIterator(const HandleType& handle);
							ReverseIterator(const ReverseIteratorType& rhs);
							~ReverseIterator();
						protected:
							ReferenceType OnRequestReference();
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
							ReferenceType operator*();
						};

						template<typename ELEMENT_TYPE>
						ReverseIterator<ELEMENT_TYPE>::ReverseIterator()
						{}

						template<typename ELEMENT_TYPE>
						ReverseIterator<ELEMENT_TYPE>::ReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ReverseIterator<ELEMENT_TYPE>::ReverseIterator(const ReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ReverseIterator<ELEMENT_TYPE>::~ReverseIterator()
						{}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::ReferenceType
						ReverseIterator<ELEMENT_TYPE>::OnRequestReference()
						{
							return HandleType::operator*();
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable * 
						ReverseIterator<ELEMENT_TYPE>::Clone()
						{
							return new ReverseIteratorType(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable * 
						ReverseIterator<ELEMENT_TYPE>::Clone() const
						{
							return new ReverseIteratorType(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable& 
						ReverseIterator<ELEMENT_TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(rhs));
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable&
						ReverseIterator<ELEMENT_TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable&
						ReverseIterator<ELEMENT_TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::DifferenceType
						ReverseIterator<ELEMENT_TYPE>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ReverseIterator<ELEMENT_TYPE>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable&
						ReverseIterator<ELEMENT_TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::Cloneable&
							ReverseIterator<ELEMENT_TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::ReverseIteratorType
						ReverseIterator<ELEMENT_TYPE>::operator++(int)
						{
							ReverseIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::ReverseIteratorType
						ReverseIterator<ELEMENT_TYPE>::operator--(int)
						{
							ReverseIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ReverseIterator<ELEMENT_TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						typename ReverseIterator<ELEMENT_TYPE>::ReferenceType
						ReverseIterator<ELEMENT_TYPE>::operator*()
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