#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_H_

#include <type_traits>

#include "type\iterator\Tag.h"

#include "type\container\element\IsType.h"

#include "type\container\vector\iterator\Handle.h"

#include "type\container\vector\iterator\Input.h"
#include "type\container\vector\iterator\RandomAccess.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				template<BrainMuscles::type::iterator::tag::Type ITERATOR_TAG, typename ELEMENT_TYPE, typename HANDLE_TYPE>
				class Iterator
				{};

				template<typename ELEMENT_TYPE>
				class Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE, 
						BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>> :
					public BrainMuscles::type::container::vector::iterator::Input<
						BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
							BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>, 
						ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>
				{
				protected:
					typedef ELEMENT_TYPE												ElementType;
					typedef BrainMuscles::type::container::vector::iterator
						::HandleDefinitionConstIterator<ElementType>					HandleType;
					typedef Iterator<BrainMuscles::type::iterator::tag::input, 
						ElementType, HandleType>										InputDefinitionConstIteratorType;
				public:
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access, 
						ElementType,BrainMuscles::type::container::vector
						::iterator::HandleDefinitionConstIterator<ElementType>>			RandomAccessDefinitionConstIteratorType;
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access, 
						ElementType, BrainMuscles::type::container::vector
						::iterator::HandleDefinitionIterator<ElementType>>				RandomAccessDefinitionIteratorType;
					typedef BrainMuscles::type::container::vector::iterator::Input<
						InputDefinitionConstIteratorType, ElementType, HandleType>		BaseType;
					typedef typename BaseType::HandleBaseType							HandleBaseType;
				public:
					typedef typename BaseType::Type										Type;
					typedef typename BaseType::ValueType								ValueType;
					typedef typename BaseType::DifferenceType							DifferenceType;
					typedef typename BaseType::ReferenceType							ReferenceType;
					typedef typename BaseType::PointerType								PointerType;
				public:
					Iterator();
					Iterator(const RandomAccessDefinitionConstIteratorType& const_iterator);
					Iterator(const RandomAccessDefinitionIteratorType& iterator);
					Iterator(const HandleType& handle);
					Iterator(InputDefinitionConstIteratorType* pointer);
					Iterator(const InputDefinitionConstIteratorType& rhs);
					~Iterator();
				protected:
					InputDefinitionConstIteratorType* ThisDerived();
				};

				template<typename ELEMENT_TYPE>
				class Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>> :
					public BrainMuscles::type::container::vector::iterator::Input<
						BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
							BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>, 
						ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>
				{
				protected:
					typedef ELEMENT_TYPE												ElementType;
					typedef BrainMuscles::type::container::vector::iterator
						::HandleDefinitionIterator<ELEMENT_TYPE>						HandleType;
					typedef Iterator<BrainMuscles::type::iterator::tag::input, 
						ElementType, HandleType>										InputDefinitionIteratorType;
				public:
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access, 
						ElementType,BrainMuscles::type::container::vector
						::iterator::HandleDefinitionIterator<ElementType>>				RandomAccessDefinitionIteratorType;
					typedef BrainMuscles::type::container::vector::iterator::Input<
						InputDefinitionIteratorType, ElementType, HandleType>			BaseType;
					typedef typename BaseType::HandleBaseType							HandleBaseType;
				public:
					typedef typename BaseType::Type										Type;
					typedef typename BaseType::ValueType								ValueType;
					typedef typename BaseType::DifferenceType							DifferenceType;
					typedef typename BaseType::ReferenceType							ReferenceType;
					typedef typename BaseType::PointerType								PointerType;
				public:
					Iterator();
					Iterator(const RandomAccessDefinitionIteratorType& iterator);
					Iterator(const HandleType& handle);
					Iterator(InputDefinitionIteratorType* pointer);
					Iterator(const InputDefinitionIteratorType& rhs);
					~Iterator();
				protected:
					InputDefinitionIteratorType* ThisDerived();
				};

				template<typename ELEMENT_TYPE>
				class Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE, 
						BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>> :
					public BrainMuscles::type::container::vector::iterator::RandomAccess<
						BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
							BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>,
						ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>
				{
					friend class BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>;
				protected:
					typedef ELEMENT_TYPE												ElementType;
					typedef BrainMuscles::type::container::vector::iterator
						::HandleDefinitionConstIterator<ELEMENT_TYPE>					HandleType;
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access, 
						ElementType, HandleType>										RandomAccessDefinitionConstIteratorType;
				public:
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access,
						ElementType, BrainMuscles::type::container::vector::iterator
						::HandleDefinitionIterator<ELEMENT_TYPE>>						RandomAccessDefinitionIteratorType;
				public:
					typedef BrainMuscles::type::container::vector::iterator
						::RandomAccess<RandomAccessDefinitionConstIteratorType,
							ElementType, HandleType>									BaseType;
					typedef typename BaseType::HandleBaseType							HandleBaseType;
				public:
					typedef typename BaseType::Type										Type;
					typedef typename BaseType::ValueType								ValueType;
					typedef typename BaseType::DifferenceType							DifferenceType;
					typedef typename BaseType::ReferenceType							ReferenceType;
					typedef typename BaseType::PointerType								PointerType;
				public:
					Iterator();
					Iterator(const HandleType& handle);
					Iterator(const RandomAccessDefinitionIteratorType& iterator);
					Iterator(RandomAccessDefinitionConstIteratorType* pointer);
					Iterator(const RandomAccessDefinitionConstIteratorType& rhs);
					~Iterator();
				protected:
					RandomAccessDefinitionConstIteratorType* ThisDerived();
				};

				template<typename ELEMENT_TYPE>
				class Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>> :
					public BrainMuscles::type::container::vector::iterator::RandomAccess<
						BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
							BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>, 
						ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>
				{
					friend class BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>;
					friend class BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>;
					friend class BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
						BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>;
				protected:
					typedef ELEMENT_TYPE												ElementType;
					typedef BrainMuscles::type::container::vector::iterator
						::HandleDefinitionIterator<ElementType>							HandleType;
					typedef Iterator<BrainMuscles::type::iterator::tag::random_access, 
						ElementType, HandleType>										RandomAccessDefinitionIteratorType;
				public:
					typedef BrainMuscles::type::container::vector::iterator
						::RandomAccess<RandomAccessDefinitionIteratorType,
							ElementType, HandleType>									BaseType;
					typedef typename BaseType::HandleBaseType							HandleBaseType;
				public:
					typedef typename BaseType::Type										Type;
					typedef typename BaseType::ValueType								ValueType;
					typedef typename BaseType::DifferenceType							DifferenceType;
					typedef typename BaseType::ReferenceType							ReferenceType;
					typedef typename BaseType::PointerType								PointerType;
				public:
					Iterator();
					Iterator(const HandleType& handle);
					Iterator(RandomAccessDefinitionIteratorType* pointer);
					Iterator(const RandomAccessDefinitionIteratorType& rhs);
					~Iterator();
				protected:
					RandomAccessDefinitionIteratorType* ThisDerived();
				};
				
				////////////////////////////////////////////////////////////////////
				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionConstIteratorType& const_iterator) :
					BaseType(const_iterator.GetHandle()),
					HandleBaseType(const_iterator.GetHandle())
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionIteratorType& iterator) :
					BaseType(iterator.GetHandle()),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(InputDefinitionConstIteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const InputDefinitionConstIteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::~Iterator()
				{}

				template<typename ELEMENT_TYPE>
				typename Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::InputDefinitionConstIteratorType*
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::ThisDerived()
				{
					return this;
				}

				////////////////////////////////////////////////////////////////////
				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionIteratorType& iterator) :
					BaseType(iterator.GetHandle()),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(InputDefinitionIteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(const InputDefinitionIteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::~Iterator()
				{}

				template<typename ELEMENT_TYPE>
				typename Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::InputDefinitionIteratorType*
					Iterator<BrainMuscles::type::iterator::tag::input, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::ThisDerived()
				{
					return this;
				}

				////////////////////////////////////////////////////////////////////
				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionIteratorType& iterator) :
					BaseType(iterator.GetHandle()),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(RandomAccessDefinitionConstIteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionConstIteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::~Iterator()
				{}

				template<typename ELEMENT_TYPE>
				typename Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::RandomAccessDefinitionConstIteratorType*
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionConstIterator<ELEMENT_TYPE>>::ThisDerived()
				{
					return this;
				}

				////////////////////////////////////////////////////////////////////
				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(RandomAccessDefinitionIteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::Iterator(const RandomAccessDefinitionIteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename ELEMENT_TYPE>
				Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::~Iterator()
				{}

				template<typename ELEMENT_TYPE>
				typename Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::RandomAccessDefinitionIteratorType*
					Iterator<BrainMuscles::type::iterator::tag::random_access, ELEMENT_TYPE,
					BrainMuscles::type::container::vector::iterator::HandleDefinitionIterator<ELEMENT_TYPE>>::ThisDerived()
				{
					return this;
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_H_