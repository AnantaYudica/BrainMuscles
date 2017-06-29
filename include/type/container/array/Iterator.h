#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_H_

#include <cstddef>
#include <array>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				class Iterator;
			}
		}
	}
}

#include "type\iterator\Base.h"
#include "type\iterator\tag\RandomAccess.h"
#include "type\iterator\derived\Info.h"

#include "type\container\array\iterator\Definition.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				class Iterator :
					public BrainMuscles::type::iterator::tag::RandomAccess<HANDLE_TYPE,
						BrainMuscles::type::iterator::derived::Info<
							BrainMuscles::type::container::array::Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>,
							BrainMuscles::type::container::array::iterator::Definition<TYPE, SIZE, HANDLE_TYPE>>>
				{
				public:
					typedef TYPE											Type;
				protected:
					typedef HANDLE_TYPE										HandleType;
					typedef ELEMENT_TYPE									ElementType;
					typedef BrainMuscles::type::container::array
						::Iterator<Type, SIZE, HandleType, ElementType>		IteratorType;
					typedef BrainMuscles::type::container::array
						::iterator::Definition<Type, SIZE, HandleType>		IteratorDefinitionType;
					typedef BrainMuscles::type::iterator::derived::Info<
						IteratorType, IteratorDefinitionType>				IteratorInfoType;
				protected:
					typedef BrainMuscles::type
						::iterator::Base<HandleType, IteratorInfoType>		IteratorBaseType;
					typedef BrainMuscles::type::iterator
						::tag::RandomAccess<HandleType, IteratorInfoType>	IteratorTagType;
				public:
					typedef typename IteratorInfoType::ReferenceType		ReferenceType;
					typedef typename IteratorInfoType::PointerType			PointerType;
					typedef typename IteratorInfoType::ConstReferenceType	ConstReferenceType;
					typedef typename IteratorInfoType::ConstPointerType		ConstPointerType;
				public:
					typedef typename ElementType::DifferenceType			DifferenceType;
					typedef typename ElementType::SizeType					SizeType;
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

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::Iterator() :
					IteratorTagType(),
					IteratorBaseType()
				{}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::Iterator(const HandleType& handle) :
					IteratorTagType(handle),
					IteratorBaseType(handle)
				{}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::Iterator(IteratorType* pointer) :
					IteratorTagType(*pointer),
					IteratorBaseType(pointer)
				{

				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::Iterator(const IteratorType& rhs) :
					IteratorTagType(rhs),
					IteratorBaseType(rhs)
				{

				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::~Iterator()
				{
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::IteratorType*
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::ThisDerived()
				{
					return this;
				}


				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::IteratorType &
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestAddition(const DifferenceType& n)
				{
					GetHandle() += n;
					return *this;
				}


				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::IteratorType &
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestSubtraction(const DifferenceType& n)
				{
					GetHandle() -= n;
					return *this;
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::DifferenceType
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestSubtraction(const IteratorType& iterator)
				{
					return GetHandle() - iterator.GetHandle();
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				void Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestDecrement(HandleType& handle)
				{
					GetHandle()--;
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				void Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestIncrement(HandleType& handle)
				{
					GetHandle()++;
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				bool Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestEqual(DerivedType& rhs)
				{
					return GetHandle() == rhs.GetHandle();
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				bool Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestLess(DerivedType& rhs)
				{
					return GetHandle() < rhs.GetHandle();
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				bool Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestGreater(DerivedType& rhs)
				{
					return GetHandle() > rhs.GetHandle();
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::ReferenceType
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestReference()
				{
					return *GetHandle();
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename  Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::PointerType
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestPointer()
				{
					return &(*GetHandle());
				}

				template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE, typename ELEMENT_TYPE>
				typename  Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::ReferenceType
				Iterator<TYPE, SIZE, HANDLE_TYPE, ELEMENT_TYPE>::OnRequestAt(const size_t& index)
				{
					return (*GetHandle());
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_H_