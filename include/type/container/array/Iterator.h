#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, size_t SIZE, typename HANDLE>
				class Iterator;
			}
		}
	}
}

#include "type\iterator\Base.h"
#include "type\iterator\tag\RandomAccess.h"
#include <array>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, size_t SIZE, typename HANDLE>
				class Iterator :
					public BrainMuscles::type::iterator::tag::RandomAccess<TYPE, BrainMuscles::type::container::array::Iterator<TYPE, SIZE, HANDLE>, HANDLE>
				{
				public:
					typedef BrainMuscles::type::container::array::Iterator<TYPE, SIZE, HANDLE> IteratorType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HandleType, IteratorType> HandleBaseType;
					typedef BrainMuscles::type::iterator::tag::RandomAccess<TYPE, IteratorType, HandleType> BaseType;
					typedef TYPE ValueType;
					typedef typename HandleType::difference_type DifferenceType;
					typedef typename HandleType::reference ReferenceType;
				public:
					Iterator();
					Iterator(const HandleType& handle);
					Iterator(IteratorType* pointer);
					Iterator(const IteratorType& rhs);
					~Iterator();
				protected:
					IteratorType* ThisDerived();

					IteratorType& OnRequestAddition(const DifferenceType& n);
					IteratorType& OnRequestSubtraction(const DifferenceType& n);
					DifferenceType OnRequestSubtraction(const Iterator<TYPE, SIZE, HANDLE>& iterator);
					void OnRequestDecrement(HandleType& handle);
					void OnRequestIncrement(HandleType& handle);
					bool OnRequestEqual(DerivedType& rhs);
					bool OnRequestLess(DerivedType& rhs);
					bool OnRequestGreater(DerivedType& rhs);
					ValueType& OnRequestReference();
					ValueType* OnRequestPointer();
					ValueType& OnRequestAt(const size_t& index);
				
				};

				template<typename TYPE, size_t SIZE, typename HANDLE>
				Iterator<TYPE, SIZE, HANDLE>::Iterator() :
					HandleBaseType(),
					BaseType()
				{}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				Iterator<TYPE, SIZE, HANDLE>::Iterator(const HandleType& handle) :
					HandleBaseType(handle),
					BaseType(handle)
				{}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				Iterator<TYPE, SIZE, HANDLE>::Iterator(IteratorType* pointer) :
					HandleBaseType(*pointer),
					BaseType(pointer)
				{

				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				Iterator<TYPE, SIZE, HANDLE>::Iterator(const IteratorType& rhs) :
					HandleBaseType(rhs),
					BaseType(rhs)
				{

				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				Iterator<TYPE, SIZE, HANDLE>::~Iterator()
				{
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename Iterator<TYPE, SIZE, HANDLE>::IteratorType*
				Iterator<TYPE, SIZE, HANDLE>::ThisDerived()
				{
					return this;
				}


				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename Iterator<TYPE, SIZE, HANDLE>::IteratorType &
				Iterator<TYPE, SIZE, HANDLE>::OnRequestAddition(const DifferenceType& n)
				{
					GetHandle() += n;
					return *this;
				}


				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename Iterator<TYPE, SIZE, HANDLE>::IteratorType &
				Iterator<TYPE, SIZE, HANDLE>::OnRequestSubtraction(const DifferenceType& n)
				{
					GetHandle() -= n;
					return *this;
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename Iterator<TYPE, SIZE, HANDLE>::DifferenceType 
				Iterator<TYPE, SIZE, HANDLE>::OnRequestSubtraction(const Iterator<TYPE, SIZE, HANDLE>& iterator)
				{
					return GetHandle() - iterator.GetHandle();
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				void Iterator<TYPE, SIZE, HANDLE>::OnRequestDecrement(HandleType& handle)
				{
					GetHandle()--;
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				void Iterator<TYPE, SIZE, HANDLE>::OnRequestIncrement(HandleType& handle)
				{
					GetHandle()++;
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				bool Iterator<TYPE, SIZE, HANDLE>::OnRequestEqual(DerivedType& rhs)
				{
					return GetHandle() == rhs.GetHandle();
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				bool Iterator<TYPE, SIZE, HANDLE>::OnRequestLess(DerivedType& rhs)
				{
					return GetHandle() < rhs.GetHandle();
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				bool Iterator<TYPE, SIZE, HANDLE>::OnRequestGreater(DerivedType& rhs)
				{
					return GetHandle() > rhs.GetHandle();
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename Iterator<TYPE, SIZE, HANDLE>::ValueType&
				Iterator<TYPE, SIZE, HANDLE>::OnRequestReference()
				{
					return *GetHandle();
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename  Iterator<TYPE, SIZE, HANDLE>::ValueType*
				Iterator<TYPE, SIZE, HANDLE>::OnRequestPointer()
				{
					return &(*GetHandle());
				}

				template<typename TYPE, size_t SIZE, typename HANDLE>
				typename  Iterator<TYPE, SIZE, HANDLE>::ValueType&
				Iterator<TYPE, SIZE, HANDLE>::OnRequestAt(const size_t& index)
				{
					return (*GetHandle());
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_H_