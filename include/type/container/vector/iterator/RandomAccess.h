#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_

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
					class RandomAccess;
				}
			}
		}
	}
}

#include "type\container\vector\iterator\Input.h"
#include "type\iterator\Base.h"
#include "type\iterator\tag\RandomAccess.h"
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
					class RandomAccess :
						public BrainMuscles::type::iterator::tag::RandomAccess<TYPE, HANDLE, BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>
					{
						friend class BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>;
					public:
						typedef BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE> IteratorType;
						typedef HANDLE HandleType;
						typedef BrainMuscles::type::iterator::Base<HandleType, IteratorType> HandleBaseType;
						typedef BrainMuscles::type::iterator::tag::RandomAccess<TYPE, HandleType, IteratorType> BaseType;
						typedef TYPE ValueType;
						typedef typename HandleType::difference_type DifferenceType;
						typedef typename HandleType::reference ReferenceType;
					public:
						RandomAccess();
						RandomAccess(const HandleType& handle);
						RandomAccess(IteratorType* pointer);
						RandomAccess(const IteratorType& rhs);
						~RandomAccess();
					protected:
						IteratorType* ThisDerived();

						IteratorType& OnRequestAddition(const DifferenceType& n);
						IteratorType& OnRequestSubtraction(const DifferenceType& n);
						DifferenceType OnRequestSubtraction(const IteratorType& iterator);
						void OnRequestDecrement(HandleType& handle);
						void OnRequestIncrement(HandleType& handle);
						bool OnRequestEqual(DerivedType& rhs);
						bool OnRequestLess(DerivedType& rhs);
						bool OnRequestGreater(DerivedType& rhs);
						ValueType& OnRequestReference();
						ValueType* OnRequestPointer();
						ValueType& OnRequestAt(const size_t& index);
					};

					template<typename TYPE, typename HANDLE>
					RandomAccess<TYPE, HANDLE>::RandomAccess() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename TYPE, typename HANDLE>
					RandomAccess<TYPE, HANDLE>::RandomAccess(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename TYPE, typename HANDLE>
					RandomAccess<TYPE, HANDLE>::RandomAccess(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{

					}

					template<typename TYPE, typename HANDLE>
					RandomAccess<TYPE, HANDLE>::RandomAccess(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{

					}

					template<typename TYPE, typename HANDLE>
					RandomAccess<TYPE, HANDLE>::~RandomAccess()
					{
					}

					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::IteratorType*
					RandomAccess<TYPE, HANDLE>::ThisDerived()
					{
						return this;
					}


					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::IteratorType &
					RandomAccess<TYPE, HANDLE>::OnRequestAddition(const DifferenceType& n)
					{
						GetHandle() += n;
						return *this;
					}


					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::IteratorType &
					RandomAccess<TYPE, HANDLE>::OnRequestSubtraction(const DifferenceType& n)
					{
						GetHandle() -= n;
						return *this;
					}

					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::DifferenceType
					RandomAccess<TYPE, HANDLE>::OnRequestSubtraction(const IteratorType& iterator)
					{
						return GetHandle() - iterator.GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					void RandomAccess<TYPE, HANDLE>::OnRequestDecrement(HandleType& handle)
					{
						GetHandle()--;
					}

					template<typename TYPE, typename HANDLE>
					void RandomAccess<TYPE, HANDLE>::OnRequestIncrement(HandleType& handle)
					{
						GetHandle()++;
					}

					template<typename TYPE, typename HANDLE>
					bool RandomAccess<TYPE, HANDLE>::OnRequestEqual(DerivedType& rhs)
					{
						return GetHandle() == rhs.GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					bool RandomAccess<TYPE, HANDLE>::OnRequestLess(DerivedType& rhs)
					{
						return GetHandle() < rhs.GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					bool RandomAccess<TYPE, HANDLE>::OnRequestGreater(DerivedType& rhs)
					{
						return GetHandle() > rhs.GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::ValueType&
					RandomAccess<TYPE, HANDLE>::OnRequestReference()
					{
						return *GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::ValueType*
					RandomAccess<TYPE, HANDLE>::OnRequestPointer()
					{
						return &(*GetHandle());
					}

					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::ValueType&
					RandomAccess<TYPE, HANDLE>::OnRequestAt(const size_t& index)
					{
						return (*GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_