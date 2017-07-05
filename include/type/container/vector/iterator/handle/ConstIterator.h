#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_CONSTITERATOR_H_

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
						class ConstIterator :
							public BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>,
							public std::vector<typename BrainMuscles::type::container::element::IsType<ELEMENT_TYPE, true>::Type::Type>::const_iterator
						{
						private:
							typedef typename BrainMuscles::type::container
								::element::IsType<ELEMENT_TYPE, true>::Type				ElementType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::ConstIterator<ElementType>		DefinitionType;
						public:
							typedef std::vector<typename ElementType::Type>				StandardVectorType;
							typedef typename StandardVectorType::const_iterator			HandleType;
							typedef BrainMuscles::type::container::vector
								::iterator::Handle<DefinitionType>						BaseType;
							typedef BrainMuscles::type::container::vector 
								::iterator::handle::ConstIterator<ElementType>			ConstIteratorType;
						public:
							typedef typename DefinitionType::Type						Type;
							typedef typename DefinitionType::ValueType					ValueType;
							typedef typename DefinitionType::DifferenceType				DifferenceType;
							typedef typename DefinitionType::PointerType				PointerType;
							typedef typename DefinitionType::ReferenceType				ReferenceType;
						public:
							typedef typename BaseType::Cloneable						Cloneable;
						protected:
							ReferenceType OnRequestConstReference();
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
							ReferenceType operator*();
						};

						template<typename ELEMENT_TYPE>
						ConstIterator<ELEMENT_TYPE>::ConstIterator()
						{}

						template<typename ELEMENT_TYPE>
						ConstIterator<ELEMENT_TYPE>::ConstIterator(const HandleType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ConstIterator<ELEMENT_TYPE>::ConstIterator(const ConstIteratorType& handle) :
							HandleType(handle)
						{}

						template<typename ELEMENT_TYPE>
						ConstIterator<ELEMENT_TYPE>::~ConstIterator()
						{}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::ReferenceType
							ConstIterator<ELEMENT_TYPE>::OnRequestConstReference()
						{
							return HandleType::operator*();
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable *
							ConstIterator<ELEMENT_TYPE>::Clone() const
						{
							return new ConstIterator<TYPE>(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable *
							ConstIterator<ELEMENT_TYPE>::Clone()
						{
							return new ConstIterator<ELEMENT_TYPE>(*this);
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable&
						ConstIterator<ELEMENT_TYPE>::operator=(Cloneable& lhs)
						{
							HandleType::operator=(dynamic_cast<ConstIterator<ELEMENT_TYPE>&>(lhs));
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable&
						ConstIterator<ELEMENT_TYPE>::operator-=(const DifferenceType& rhs)
						{
							HandleType::operator-=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable&
						ConstIterator<ELEMENT_TYPE>::operator+=(const DifferenceType& rhs)
						{
							HandleType::operator+=(rhs);
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::DifferenceType
						ConstIterator<ELEMENT_TYPE>::operator-(const Cloneable& lhs)
						{
							return HandleType::operator-(dynamic_cast<const ConstIterator<ELEMENT_TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable&
						ConstIterator<ELEMENT_TYPE>::operator++()
						{
							HandleType::operator++();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::Cloneable&
						ConstIterator<ELEMENT_TYPE>::operator--()
						{
							HandleType::operator--();
							return *this;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::ConstIteratorType
						ConstIterator<ELEMENT_TYPE>::operator++(int)
						{
							ConstIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator++();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::ConstIteratorType
						ConstIterator<ELEMENT_TYPE>::operator--(int)
						{
							ConstIterator<ELEMENT_TYPE> copy(*this);
							HandleType::operator--();
							return copy;
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator==(Cloneable& lhs)
						{
							return HandleType::operator==(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator!=(Cloneable& lhs)
						{
							return HandleType::operator!=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator<(Cloneable& lhs)
						{
							return HandleType::operator<(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator<=(Cloneable& lhs)
						{
							return HandleType::operator<=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator>(Cloneable& lhs)
						{
							return HandleType::operator>(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						bool ConstIterator<ELEMENT_TYPE>::operator>=(Cloneable& lhs)
						{
							return HandleType::operator>=(dynamic_cast<ConstIterator<TYPE>&>(lhs));
						}

						template<typename ELEMENT_TYPE>
						typename ConstIterator<ELEMENT_TYPE>::ReferenceType
						ConstIterator<ELEMENT_TYPE>::operator*()
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