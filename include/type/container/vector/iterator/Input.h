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
					template<typename DEFINITION>
					class Input;
				}
			}
		}
	}
}

#include <vector>
#include "type\iterator\Base.h"
#include "type\iterator\tag\Input.h"
#include "type\iterator\derived\Info.h"

#include "type\container\vector\iterator\Handle.h"
#include "type\container\vector\iterator\definition\ConstIterator.h"
#include "type\container\vector\iterator\definition\Iterator.h"

#include "type\container\vector\iterator\RandomAccess.h"

#include "type\container\vector\Iterator.h"

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
					namespace input
					{
						namespace definition
						{
							template<typename TYPE>
							using ConstIterator = BrainMuscles::type::container::vector::iterator::definition::ConstIterator<
								BrainMuscles::type::iterator::tag::input, TYPE>;

							template<typename TYPE>
							using Iterator = BrainMuscles::type::container::vector::iterator::definition::Iterator<
								BrainMuscles::type::iterator::tag::input, TYPE>;
						}

						template<typename TYPE>
						using ConstIterator = BrainMuscles::type::container::vector::iterator::Input<
							BrainMuscles::type::container::vector::iterator::input::definition::ConstIterator<TYPE>>;

						template<typename TYPE>
						using Iterator = BrainMuscles::type::container::vector::iterator::Input<
							BrainMuscles::type::container::vector::iterator::input::definition::Iterator<TYPE>>;
					}

					template<typename DEFINITION>
					class Input :
						public BrainMuscles::type::iterator::tag::Input<
							BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>, 
							BrainMuscles::type::iterator::derived::Info<DEFINITION>>
					{
					protected:
						typedef DEFINITION DerivedDefinitionType;
						typedef BrainMuscles::type::container::vector::iterator::Handle<DerivedDefinitionType> HandleType;
						typedef BrainMuscles::type::iterator::derived::Info<DerivedDefinitionType> DerivedInfoType;
						typedef BrainMuscles::type::container::vector::Iterator<DerivedDefinitionType,
							BrainMuscles::type::container::vector::iterator::Input<DerivedDefinitionType>> IteratorType;
						
						typedef BrainMuscles::type::iterator::Base<HandleType, DerivedInfoType> HandleBaseType;
						typedef BrainMuscles::type::iterator::tag::Input<HandleType, DerivedInfoType> BaseType;
						typedef typename HandleType::DifferenceType DifferenceType;
						typedef typename DerivedInfoType::ReferenceType ReferenceType;
						typedef typename DerivedInfoType::PointerType PointerType;
					public:
						Input();
						Input(const HandleType& handle);
						Input(IteratorType* pointer);
						Input(const IteratorType& rhs);
						virtual ~Input();
					protected:
						virtual IteratorType* ThisDerived() = 0;

						void OnRequestIncrement(HandleType& handle);
						bool OnRequestEqual(DerivedType& rhs);
						ReferenceType OnRequestReference();
						PointerType OnRequestPointer();
					};

					template<typename DEFINITION>
					Input<DEFINITION>::Input() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename DEFINITION>
					Input<DEFINITION>::Input(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename DEFINITION>
					Input<DEFINITION>::Input(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{}

					template<typename DEFINITION>
					Input<DEFINITION>::Input(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{}

					template<typename DEFINITION>
					Input<DEFINITION>::~Input()
					{}

					template<typename DEFINITION>
					void Input<DEFINITION>::OnRequestIncrement(HandleType& handle)
					{
						++GetHandle();
					}

					template<typename DEFINITION>
					bool Input<DEFINITION>::OnRequestEqual(DerivedType& rhs)
					{
						return GetHandle() == rhs.GetHandle();
					}

					template<typename DEFINITION>
					typename Input<DEFINITION>::ReferenceType
					Input<DEFINITION>::OnRequestReference()
					{
						return *GetHandle();
					}

					template<typename DEFINITION>
					typename Input<DEFINITION>::PointerType
					Input<DEFINITION>::OnRequestPointer()
					{
						return &(*GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_INPUT_H_
