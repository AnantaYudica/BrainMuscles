#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				template<typename ITERATOR_TAG_TYPE>
				class Iterator;
			}
		}
	}
}

#include "type\container\vector\iterator\RandomAccess.h"
#include "type\container\vector\iterator\Input.h"

#include "type\container\standard\vector\ConstIterator.h"
#include "type\container\standard\vector\ConstReverseIterator.h"
#include "type\container\standard\vector\Iterator.h"
#include "type\container\standard\vector\ReverseIterator.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				template<typename ITERATOR_TAG_TYPE>
				class Iterator
				{};

				template<typename TYPE, typename HANDLE>
				class Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>> :
					public BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>
				{

				public:
					typedef Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>> RandomAccessType;
					typedef Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>> InputType;
					typedef BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE> BaseType;
					typedef typename BaseType::HandleBaseType HandleBaseType;
					typedef typename BaseType::HandleType HandleType;
					typedef typename BaseType::IteratorType IteratorType;
				public:
					Iterator();
					Iterator(const RandomAccessType& iterator);
					Iterator(const HandleType& handle);
					Iterator(IteratorType* pointer);
					Iterator(const IteratorType& rhs);
					~Iterator();
				protected:
					InputType* ThisDerived();
				};

				template<typename TYPE, typename HANDLE>
				class Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>> :
					public BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>
				{
					friend class BrainMuscles::type::container::vector::Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>;
					friend class BrainMuscles::type::container::standard::vector::ConstIterator<TYPE>;
					friend class BrainMuscles::type::container::standard::vector::ConstReverseIterator<TYPE>;
					friend class BrainMuscles::type::container::standard::vector::Iterator<TYPE>;
					friend class BrainMuscles::type::container::standard::vector::ReverseIterator<TYPE>;
				public:
					typedef Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>> RandomAccessType;
					typedef BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE> BaseType;
					typedef typename BaseType::HandleBaseType HandleBaseType;
					typedef typename BaseType::HandleType HandleType;
					typedef typename BaseType::IteratorType IteratorType;
				public:
					Iterator();
					Iterator(const HandleType& handle);
					Iterator(IteratorType* pointer);
					Iterator(const IteratorType& rhs);
					~Iterator();
				protected:
					RandomAccessType* ThisDerived();
				};

				
				////////////////////////////////////////////////////////////////////
				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::Iterator(const RandomAccessType& iterator) :
					BaseType(iterator.GetHandle()),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::Iterator(IteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::Iterator(const IteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::~Iterator()
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>* 
				Iterator<BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>>::ThisDerived()
				{
					return this;
				}

				////////////////////////////////////////////////////////////////////
				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::Iterator(IteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::Iterator(const IteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::~Iterator()
				{}

				template<typename TYPE, typename HANDLE>
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>*
				Iterator<BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>::ThisDerived()
				{
					return this;
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_H_