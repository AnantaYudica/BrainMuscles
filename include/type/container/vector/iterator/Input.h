#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_

#include <vector>
#include "type\iterator\Tag.h"
#include "type\iterator\Base.h"
#include "type\iterator\tag\Input.h"
#include "type\iterator\derived\Info.h"

#include "type\container\element\IsType.h"

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
					class Input :
						public BrainMuscles::type::iterator::tag::Input<HANDLE_TYPE,
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
						typedef BrainMuscles::type::container::vector
							::iterator::Input<DerivedType, ElementType, HandleType>			InputIteratorType;
						typedef DerivedType													IteratorType;
					protected:
						typedef BrainMuscles::type::iterator
							::Base<HandleType, DerivedInfoType>								HandleBaseType;
						typedef BrainMuscles::type::iterator::tag
							::Input<HandleType, DerivedInfoType>							BaseType;
					protected:
						typedef typename HandleType::Type									Type;
						typedef typename HandleType::ValueType								ValueType;
						typedef typename HandleType::DifferenceType							DifferenceType;
						typedef typename HandleType::ReferenceType							ReferenceType;
						typedef typename HandleType::PointerType							PointerType;
					protected:
						Input();
						Input(const HandleType& handle);
						Input(IteratorType* pointer);
						Input(const IteratorType& rhs);
					public:
						virtual ~Input();
					protected:
						virtual IteratorType* ThisDerived() = 0;
					protected:
						void OnRequestIncrement(HandleType& handle);
						bool OnRequestEqual(DerivedType& rhs);
						ReferenceType OnRequestReference();
						PointerType OnRequestPointer();
					};

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::Input() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::Input(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::Input(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::Input(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::~Input()
					{}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					void Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestIncrement(HandleType& handle)
					{
						++HandleBaseType::GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					bool Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestEqual(DerivedType& rhs)
					{
						return HandleBaseType::GetHandle() == rhs.GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::ReferenceType
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestReference()
					{
						return *HandleBaseType::GetHandle();
					}

					template<typename DERIVED_TYPE, typename ELEMENT_TYPE, typename HANDLE_TYPE>
					typename Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::PointerType
					Input<DERIVED_TYPE, ELEMENT_TYPE, HANDLE_TYPE>::OnRequestPointer()
					{
						return &(*HandleBaseType::GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_
