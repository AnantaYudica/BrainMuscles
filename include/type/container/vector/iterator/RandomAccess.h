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

#include "type\container\vector\iterator\handle\ConstIterator.h"
#include "type\container\vector\iterator\handle\ConstReverseIterator.h"
#include "type\container\vector\iterator\handle\Iterator.h"
#include "type\container\vector\iterator\handle\ReverseIterator.h"
#include "type\container\vector\iterator\Input.h"
#include "type\iterator\Base.h"
#include "type\iterator\tag\RandomAccess.h"
#include <vector>
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
					template<typename TYPE, typename HANDLE>
					class RandomAccess :
						public BrainMuscles::type::iterator::tag::RandomAccess<
							TYPE, 
							BrainMuscles::type::container::vector::Iterator< 
								BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>>, 
							HANDLE>
					{
						friend class BrainMuscles::type::container::vector::iterator::Input<TYPE, HANDLE>;
					public:
						typedef BrainMuscles::type::container::vector::Iterator<
							BrainMuscles::type::container::vector::iterator::RandomAccess<TYPE, HANDLE>> IteratorType;
						typedef HANDLE HandleType;
						typedef BrainMuscles::type::iterator::Base<HandleType, IteratorType> HandleBaseType;
						typedef BrainMuscles::type::iterator::tag::RandomAccess<TYPE, IteratorType, HandleType> BaseType;
						typedef TYPE ValueType;
						typedef typename HandleType::DifferenceType DifferenceType;
						typedef typename HandleType::Reference ReferenceType;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstIterator<TYPE> ConstIterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<TYPE> ConstReverseIterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::Iterator<TYPE> Iterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<TYPE> ReverseIterator;
					public:
						RandomAccess();
						RandomAccess(const HandleType& handle);
						RandomAccess(IteratorType* pointer);
						RandomAccess(const IteratorType& rhs);
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
					typename RandomAccess<TYPE, HANDLE>::IteratorType &
					RandomAccess<TYPE, HANDLE>::OnRequestAddition(const DifferenceType& n)
					{

						GetHandle() += n;
						return *ThisDerived();
					}


					template<typename TYPE, typename HANDLE>
					typename RandomAccess<TYPE, HANDLE>::IteratorType &
					RandomAccess<TYPE, HANDLE>::OnRequestSubtraction(const DifferenceType& n)
					{
						GetHandle() -= n;
						return *ThisDerived();
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
						--GetHandle();
					}

					template<typename TYPE, typename HANDLE>
					void RandomAccess<TYPE, HANDLE>::OnRequestIncrement(HandleType& handle)
					{
						++GetHandle();
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