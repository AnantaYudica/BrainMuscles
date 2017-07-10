#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_

#include <vector>
#include "type\iterator\Base.h"
#include "type\iterator\Tag.h"
#include "type\iterator\tag\RandomAccess.h"
#include "type\iterator\derived\Info.h"

#include "type\container\vector\iterator\Handle.h"

#include "type\container\vector\iterator\Definition.h"

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
					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					class RandomAccess :
						public BrainMuscles::type::iterator::tag::RandomAccess<HANDLE_TYPE,
							BrainMuscles::type::iterator::derived::Info<DERIVED_TYPE,
								BrainMuscles::type::container::vector::iterator::Definition<ELEMENT_TYPE, HANDLE_TYPE>>>
					{
					private:
						typedef DERIVED_TYPE												DerivedType;
						typedef typename BrainMuscles::type::container::element
							::IsType<ELEMENT_TYPE, true>::Type								ElementType;
					protected:
						typedef HANDLE_TYPE													HandleType;
						typedef BrainMuscles::type::container::vector
							::iterator::Definition<ElementType, HandleType>					IteratorDefinitionType;
						typedef BrainMuscles::type::iterator::derived
							::Info<DerivedType, IteratorDefinitionType>						DerivedInfoType;
						typedef BrainMuscles::type::container::vector::iterator
							::RandomAccess<DerivedType, ElementType, HandleType>			RandomAccessIteratorType;
						typedef DerivedType													IteratorType;
					protected:
						typedef BrainMuscles::type::iterator
							::Base<HandleType, DerivedInfoType>								HandleBaseType;
						typedef BrainMuscles::type::iterator::tag
							::RandomAccess<HandleType, DerivedInfoType>						BaseType;
					protected:
						typedef typename HandleType::Type									Type;
						typedef typename HandleType::ValueType								ValueType;
						typedef typename HandleType::DifferenceType							DifferenceType;
						typedef typename HandleType::ReferenceType							ReferenceType;
						typedef typename HandleType::PointerType							PointerType;
					protected:
						RandomAccess();
						RandomAccess(const HandleType& handle);
						RandomAccess(IteratorType* pointer);
						RandomAccess(const IteratorType& rhs);
					public:
						virtual ~RandomAccess();
					protected:
						virtual IteratorType* ThisDerived() = 0;

						IteratorType& OnRequestAddition(const DifferenceType& n);
						IteratorType& OnRequestSubtraction(const DifferenceType& n);
						DifferenceType OnRequestSubtraction(const IteratorType& iterator);
						void OnRequestDecrement(HandleType& handle);
						void OnRequestIncrement(HandleType& handle);
						bool OnRequestEqual(DerivedType& rhs);
						bool OnRequestLess(DerivedType& rhs);
						bool OnRequestGreater(DerivedType& rhs);
						ReferenceType OnRequestReference();
						PointerType OnRequestPointer();
						ReferenceType OnRequestAt(const size_t& index);
					};

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::RandomAccess() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::RandomAccess(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::RandomAccess(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{

					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::RandomAccess(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{

					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::~RandomAccess()
					{
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::IteratorType &
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestAddition(const DifferenceType& n)
					{

						HandleBaseType::GetHandle() += n;
						return *ThisDerived();
					}


					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::IteratorType &
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestSubtraction(const DifferenceType& n)
					{
						HandleBaseType::GetHandle() -= n;
						return *ThisDerived();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::DifferenceType
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestSubtraction(const IteratorType& iterator)
					{
						return HandleBaseType::GetHandle() - iterator.GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					void RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestDecrement(HandleType& handle)
					{
						--HandleBaseType::GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					void RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestIncrement(HandleType& handle)
					{
						++HandleBaseType::GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					bool RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestEqual(DerivedType& rhs)
					{
						return HandleBaseType::GetHandle() == rhs.GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					bool RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestLess(DerivedType& rhs)
					{
						return HandleBaseType::GetHandle() < rhs.GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					bool RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestGreater(DerivedType& rhs)
					{
						return HandleBaseType::GetHandle() > rhs.GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::ReferenceType
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestReference()
					{
						return *HandleBaseType::GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::PointerType
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestPointer()
					{
						return &(*HandleBaseType::GetHandle());
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::ReferenceType
					RandomAccess<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestAt(const size_t& index)
					{
						return (*HandleBaseType::GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_