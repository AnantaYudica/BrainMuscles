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

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				template<typename ITERATOR_TAG_TYPE>
				class Iterator :
					public ITERATOR_TAG_TYPE
				{
				public:
					typedef ITERATOR_TAG_TYPE BaseType;
					typedef typename ITERATOR_TAG_TYPE::HandleBaseType HandleBaseType;
					typedef typename ITERATOR_TAG_TYPE::HandleType HandleType;
					typedef typename ITERATOR_TAG_TYPE::IteratorType IteratorType;
				public:
					Iterator();
					template<typename OTHER_ITERATOR_TAG_TYPE>
					Iterator(const Iterator<ITERATOR_TAG_TYPE>& iterator);
					Iterator(const HandleType& handle);
					Iterator(IteratorType* pointer);
					Iterator(const IteratorType& rhs);
					~Iterator();
				protected:
					Iterator<ITERATOR_TAG_TYPE>* ThisDerived();
				};

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename ITERATOR_TAG_TYPE>
				template<typename OTHER_ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::Iterator(const Iterator<ITERATOR_TAG_TYPE>& iterator) :
					BaseType(iterator),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::Iterator(IteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::Iterator(const IteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>::~Iterator()
				{}

				template<typename ITERATOR_TAG_TYPE>
				Iterator<ITERATOR_TAG_TYPE>* Iterator<ITERATOR_TAG_TYPE>::ThisDerived()
				{
					return this;
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_H_