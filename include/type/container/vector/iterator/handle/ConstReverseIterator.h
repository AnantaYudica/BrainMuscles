#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTREVERSEITERATOR_H_

#include <vector>

#include "type\container\element\IsType.h"

#include "type\container\vector\iterator\handle\definition\ConstIterator.h"

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
						class ConstReverseIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>,
							public std::vector<typename BrainMuscles::type::container::element::IsType<ELEMENT_TYPE, true>::Type::Type>::const_reverse_iterator
						{
						private:
							typedef typename BrainMuscles::type::container
								::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::ConstIterator<ElementType>		DefinitionType;
						public:
							typedef std::vector<typename ElementType::Type>				StandardVectorType;
							typedef typename StandardVectorType::const_reverse_iterator	HandleType;
							typedef BrainMuscles::type::container::vector
								::iterator::Handle<DefinitionType>						BaseType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::ConstReverseIterator<ElementType>	ConstReverseIteratorType;
						public:
							typedef typename DefinitionType::Type						Type;
							typedef typename DefinitionType::ValueType					ValueType;
							typedef typename DefinitionType::DifferenceType				DifferenceType;
							typedef typename DefinitionType::PointerType				PointerType;
							typedef typename DefinitionType::ReferenceType				ReferenceType;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							ConstReverseIterator();
							ConstReverseIterator(const HandleType& handle);
							ConstReverseIterator(const ConstReverseIteratorType& rhs);
							~ConstReverseIterator();
						protected:
							ReferenceType OnRequestConstReference();
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
							ReferenceType operator*();
						};

						template<typename ELEMENT_TYPE>
						ConstReverseIterator<ELEMENT_TYPE>::ConstReverseIterator()
						{}

						template<typename ELEMENT_TYPE>
						ConstReverseIterator<ELEMENT_TYPE>::ConstReverseIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ConstReverseIterator<ELEMENT_TYPE>::ConstReverseIterator(const ConstReverseIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ConstReverseIterator<ELEMENT_TYPE>::~ConstReverseIterator()
						{}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::ReferenceType
						ConstReverseIterator<ELEMENT_TYPE>::OnRequestConstReference()
						{
							return HandleType::operator*();
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable * 
						ConstReverseIterator<ELEMENT_TYPE>::Clone()
						{
							return new ConstReverseIterator<ELEMENT_TYPE>(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable * 
						ConstReverseIterator<ELEMENT_TYPE>::Clone() const
						{
							return new ConstReverseIterator<TYPE>(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable& 
						ConstReverseIterator<ELEMENT_TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(rhs));
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable&
						ConstReverseIterator<ELEMENT_TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable&
						ConstReverseIterator<ELEMENT_TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::DifferenceType
						ConstReverseIterator<ELEMENT_TYPE>::operator-(const Cloneable& lhs)
						{
							return dynamic_cast<const ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base().operator-(HandleType::base());
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable&
						ConstReverseIterator<ELEMENT_TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::Cloneable&
						ConstReverseIterator<ELEMENT_TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::ConstReverseIteratorType
						ConstReverseIterator<ELEMENT_TYPE>::operator++(int)
						{
							ConstReverseIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::ConstReverseIteratorType
						ConstReverseIterator<ELEMENT_TYPE>::operator--(int)
						{
							ConstReverseIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::base().operator==(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::base().operator!=(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::base().operator>=(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::base().operator>(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::base().operator<=(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						bool ConstReverseIterator<ELEMENT_TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::base().operator<(dynamic_cast<ConstReverseIterator<ELEMENT_TYPE>&>(lhs).base());
						}

						template<typename ELEMENT_TYPE>
						typename ConstReverseIterator<ELEMENT_TYPE>::ReferenceType
						ConstReverseIterator<ELEMENT_TYPE>::operator*()
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