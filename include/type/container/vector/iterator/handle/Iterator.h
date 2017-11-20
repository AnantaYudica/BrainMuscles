#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_ITERATOR_H_

#include <vector>

#include "type/container/element/IsType.h"

#include "type/container/vector/iterator/handle/definition/Iterator.h"

#include "type/container/vector/iterator/Handle.h"

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
						class Iterator :
							public BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>,
							public std::vector<typename BrainMuscles::type::container::element::IsType<ELEMENT_TYPE, true>::Type::Type>::iterator
						{
						private:
							typedef typename BrainMuscles::type::container
								::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::Iterator<ElementType>				DefinitionType;
						public:
							typedef std::vector<typename ElementType::Type>				StandardVectorType;
							typedef typename StandardVectorType::iterator				HandleType;
							typedef BrainMuscles::type::container::vector::iterator
								::Handle<DefinitionType>								BaseType;
							typedef BrainMuscles::type::container::vector
								::iterator::handle::Iterator<ElementType>				IteratorType;
						public:
							typedef typename DefinitionType::Type						Type;
							typedef typename DefinitionType::ValueType					ValueType;
							typedef typename DefinitionType::DifferenceType				DifferenceType;
							typedef typename DefinitionType::PointerType				PointerType;
							typedef typename DefinitionType::ReferenceType				ReferenceType;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						public:
							Iterator();
							Iterator(const HandleType& handle);
							Iterator(const IteratorType& rhs);
							~Iterator();
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
							IteratorType operator++(int);
							IteratorType operator--(int);
							bool operator==(Cloneable& lhs);
							bool operator!=(Cloneable& lhs);
							bool operator<(Cloneable& lhs);
							bool operator<=(Cloneable& lhs);
							bool operator>(Cloneable& lhs);
							bool operator>=(Cloneable& lhs);
							ReferenceType operator*();
						};

						template<typename ELEMENT_TYPE>
						Iterator<ELEMENT_TYPE>::Iterator()
						{}

						template<typename ELEMENT_TYPE>
						Iterator<ELEMENT_TYPE>::Iterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						Iterator<ELEMENT_TYPE>::Iterator(const IteratorType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						Iterator<ELEMENT_TYPE>::~Iterator()
						{}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::ReferenceType
						Iterator<ELEMENT_TYPE>::OnRequestReference()
						{
							return HandleType::operator*();
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable * 
						Iterator<ELEMENT_TYPE>::Clone()
						{
							return new IteratorType(*this);
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable * 
						Iterator<ELEMENT_TYPE>::Clone() const
						{
							return new IteratorType(*this);
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable& 
						Iterator<ELEMENT_TYPE>::operator=(Cloneable& rhs)
						{
							HandleType::operator=(dynamic_cast<Iterator<ELEMENT_TYPE>&>(rhs));
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable&
						Iterator<ELEMENT_TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable&
						Iterator<ELEMENT_TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::DifferenceType
						Iterator<ELEMENT_TYPE>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable&
						Iterator<ELEMENT_TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::Cloneable&
						Iterator<ELEMENT_TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::IteratorType
						Iterator<ELEMENT_TYPE>::operator++(int)
						{
							Iterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::IteratorType
						Iterator<ELEMENT_TYPE>::operator--(int)
						{
							Iterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool Iterator<ELEMENT_TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<Iterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						typename Iterator<ELEMENT_TYPE>::ReferenceType
						Iterator<ELEMENT_TYPE>::operator*()
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