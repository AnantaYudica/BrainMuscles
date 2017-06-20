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
					template<typename DEFINITION>
					class RandomAccess;
				}
			}
		}
	}
}

#include <vector>
#include "type\iterator\Base.h"
#include "type\iterator\tag\RandomAccess.h"
#include "type\iterator\derived\Info.h"

#include "type\container\vector\iterator\Handle.h"
#include "type\container\vector\iterator\handle\ConstIterator.h"
#include "type\container\vector\iterator\handle\ConstReverseIterator.h"
#include "type\container\vector\iterator\handle\Iterator.h"
#include "type\container\vector\iterator\handle\ReverseIterator.h"

#include "type\container\vector\iterator\definition\ConstIterator.h"
#include "type\container\vector\iterator\definition\Iterator.h"

#include "type\container\vector\iterator\Input.h"

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
					namespace random_access
					{
						namespace definition
						{
							template<typename TYPE>
							using ConstIterator = BrainMuscles::type::container::vector::iterator::definition::ConstIterator<
								BrainMuscles::type::iterator::tag::random_access, TYPE>;

							template<typename TYPE>
							using Iterator = BrainMuscles::type::container::vector::iterator::definition::Iterator<
								BrainMuscles::type::iterator::tag::random_access, TYPE>;
						}

						template<typename TYPE>
						using ConstIterator = BrainMuscles::type::container::vector::iterator::RandomAccess<
							BrainMuscles::type::container::vector::iterator::random_access::definition::ConstIterator<TYPE>>;

						template<typename TYPE>
						using Iterator = BrainMuscles::type::container::vector::iterator::RandomAccess<
							BrainMuscles::type::container::vector::iterator::random_access::definition::Iterator<TYPE>>;
					}

					template<typename DEFINITION>
					class RandomAccess :
						public BrainMuscles::type::iterator::tag::RandomAccess<
							BrainMuscles::type::container::vector::iterator::Handle<DEFINITION>, 
							BrainMuscles::type::iterator::derived::Info<DEFINITION>>
					{
					public:
						typedef DEFINITION DerivedDefinitionType;
						typedef BrainMuscles::type::container::vector::iterator::Handle<DerivedDefinitionType> HandleType;
						typedef BrainMuscles::type::iterator::derived::Info<DEFINITION> DerivedInfoType;
						typedef BrainMuscles::type::container::vector::Iterator<DerivedDefinitionType,
							BrainMuscles::type::container::vector::iterator::RandomAccess<DerivedDefinitionType>> IteratorType;

						typedef BrainMuscles::type::iterator::Base<HandleType, IteratorType> HandleBaseType;
						typedef BrainMuscles::type::iterator::tag::RandomAccess<HandleType, DerivedInfoType> BaseType;
						typedef typename DerivedDefinitionType::Type Type;
						typedef typename HandleType::DifferenceType DifferenceType;
						typedef typename DerivedDefinitionType::ReferenceType ReferenceType;
						typedef typename DerivedDefinitionType::PointerType PointerType;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstIterator<DerivedDefinitionType> ConstIterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<DerivedDefinitionType> ConstReverseIterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::Iterator<DerivedDefinitionType> Iterator;
						typedef BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<DerivedDefinitionType> ReverseIterator;
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
						ReferenceType OnRequestReference();
						PointerType OnRequestPointer();
						ReferenceType OnRequestAt(const size_t& index);
					};

					template<typename DEFINITION>
					RandomAccess<DEFINITION>::RandomAccess() :
						HandleBaseType(),
						BaseType()
					{}

					template<typename DEFINITION>
					RandomAccess<DEFINITION>::RandomAccess(const HandleType& handle) :
						HandleBaseType(handle),
						BaseType(handle)
					{}

					template<typename DEFINITION>
					RandomAccess<DEFINITION>::RandomAccess(IteratorType* pointer) :
						HandleBaseType(*pointer),
						BaseType(pointer)
					{

					}

					template<typename DEFINITION>
					RandomAccess<DEFINITION>::RandomAccess(const IteratorType& rhs) :
						HandleBaseType(rhs),
						BaseType(rhs)
					{

					}

					template<typename DEFINITION>
					RandomAccess<DEFINITION>::~RandomAccess()
					{
					}


					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::IteratorType &
					RandomAccess<DEFINITION>::OnRequestAddition(const DifferenceType& n)
					{

						GetHandle() += n;
						return *ThisDerived();
					}


					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::IteratorType &
					RandomAccess<DEFINITION>::OnRequestSubtraction(const DifferenceType& n)
					{
						GetHandle() -= n;
						return *ThisDerived();
					}

					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::DifferenceType
					RandomAccess<DEFINITION>::OnRequestSubtraction(const IteratorType& iterator)
					{
						return GetHandle() - iterator.GetHandle();
					}

					template<typename DEFINITION>
					void RandomAccess<DEFINITION>::OnRequestDecrement(HandleType& handle)
					{
						--GetHandle();
					}

					template<typename DEFINITION>
					void RandomAccess<DEFINITION>::OnRequestIncrement(HandleType& handle)
					{
						++GetHandle();
					}

					template<typename DEFINITION>
					bool RandomAccess<DEFINITION>::OnRequestEqual(DerivedType& rhs)
					{
						return GetHandle() == rhs.GetHandle();
					}

					template<typename DEFINITION>
					bool RandomAccess<DEFINITION>::OnRequestLess(DerivedType& rhs)
					{
						return GetHandle() < rhs.GetHandle();
					}

					template<typename DEFINITION>
					bool RandomAccess<DEFINITION>::OnRequestGreater(DerivedType& rhs)
					{
						return GetHandle() > rhs.GetHandle();
					}

					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::ReferenceType
					RandomAccess<DEFINITION>::OnRequestReference()
					{
						return *GetHandle();
					}

					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::PointerType
					RandomAccess<DEFINITION>::OnRequestPointer()
					{
						return &(*GetHandle());
					}

					template<typename DEFINITION>
					typename RandomAccess<DEFINITION>::ReferenceType
					RandomAccess<DEFINITION>::OnRequestAt(const size_t& index)
					{
						return (*GetHandle());
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_RANDOMACCESS_H_