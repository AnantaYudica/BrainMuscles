#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_

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
					template<typename TYPE, typename HANDLE>
					class Input;
				}
			}
		}
	}
}

#include "type\container\vector\iterator\RandomAccess.h"
#include "type\iterator\Base.h"
#include "type\iterator\tag\Input.h"
#include <vector>

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
					template<typename TYPE, typename HANDLE>
					class Input :
						public BrainMuscles::type::iterator::tag::Input<TYPE, HANDLE, BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>
					{
						friend class BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>;
					protected:
						typedef BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE> IteratorType;
						typedef HANDLE HandleType;
						typedef BrainMuscles::type::iterator::Base<HandleType, IteratorType> HandleBaseType;
						typedef BrainMuscles::type::iterator::tag::Input<TYPE, HandleType, IteratorType> BaseType;
						typedef TYPE ValueType;
						typedef typename HandleType::difference_type DifferenceType;
						typedef typename HandleType::reference ReferenceType;
					public:
						Input();
						Input(const BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>& iterator);
						Input(const HandleType& handle);
						Input(IteratorType* pointer);
						Input(const IteratorType& rhs);
						~Input();
					protected:
						IteratorType* ThisDerived();

						void OnRequestIncrement(HandleType& handle);
						bool OnRequestEqual(DerivedType& rhs);
						ValueType& OnRequestReference();
						ValueType* OnRequestPointer();
					};

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::Input() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::Input(const BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>& iterator) :
						HandleBaseType(iterator.GetHandle()),
						BaseType(iterator.GetHandle())
					{}

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::Input(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::Input(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{}

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::Input(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{}

					template<typename TYPE, typename HANDLE>
					Input<TYPE, HANDLE>::~Input()
					{}


					template<typename TYPE, typename HANDLE>
					typename Input<TYPE, HANDLE>::IteratorType*
					Input<TYPE, HANDLE>::ThisDerived()
					{
						return this;
					}

					template<typename TYPE, typename HANDLE>
					void Input<TYPE, HANDLE>::OnRequestIncrement(HandleType& handle)
					{
						GetHandle()++;
					}

					template<typename TYPE, typename HANDLE>
					bool Input<TYPE, HANDLE>::OnRequestEqual(DerivedType& rhs)
					{
						return GetHandle() == rhs.GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					typename Input<TYPE, HANDLE>::ValueType&
					Input<TYPE, HANDLE>::OnRequestReference()
					{
						return *GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					typename Input<TYPE, HANDLE>::ValueType*
					Input<TYPE, HANDLE>::OnRequestPointer()
					{
						return &(*GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_
