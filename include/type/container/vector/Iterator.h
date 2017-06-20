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
				template<typename DEFINITION, typename ITERATOR_TAG_TYPE = typename DEFINITION::IteratorTagType>
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
				namespace iterator
				{
					namespace random_access
					{
						namespace const_iterator
						{
							template<typename ELEMENT>
							using Type = BrainMuscles::type::container::vector::Iterator<
								BrainMuscles::type::container::vector::iterator::definition::ConstIterator<
									BrainMuscles::type::iterator::tag::random_access, typename ELEMENT::Type>>;
						}
						namespace iterator
						{
							template<typename ELEMENT>
							using Type = BrainMuscles::type::container::vector::Iterator<
								BrainMuscles::type::container::vector::iterator::definition::Iterator<
									BrainMuscles::type::iterator::tag::random_access, typename ELEMENT::Type>>;
						}
					}
					namespace input
					{
						namespace const_iterator
						{
							template<typename ELEMENT>
							using Type = BrainMuscles::type::container::vector::Iterator<
								BrainMuscles::type::container::vector::iterator::definition::ConstIterator<
									BrainMuscles::type::iterator::tag::input, typename ELEMENT::Type>>;
						}
						namespace iterator
						{
							template<typename ELEMENT>
							using Type = BrainMuscles::type::container::vector::Iterator<
								BrainMuscles::type::container::vector::iterator::definition::Iterator<
									BrainMuscles::type::iterator::tag::input, typename ELEMENT::Type>>;
						}
					}
				}

				template<typename DEFINITION, typename ITERATOR_TAG_TYPE>
				class Iterator
				{};

				template<typename DEFINITION>
				class Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>> :
					public BrainMuscles::type::container::vector::iterator::Input<DEFINITION>
				{

				public:
					typedef Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>> RandomAccessType;
					typedef Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>> InputType;
					typedef BrainMuscles::type::container::vector::iterator::Input<DEFINITION> BaseType;
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

				template<typename DEFINITION>
				class Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>> :
					public BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>
				{
					friend class BrainMuscles::type::container::vector::Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>;
					friend class BrainMuscles::type::container::standard::vector::ConstIterator<typename DEFINITION::Type>;
					friend class BrainMuscles::type::container::standard::vector::ConstReverseIterator<typename DEFINITION::Type>;
					friend class BrainMuscles::type::container::standard::vector::Iterator<typename DEFINITION::Type>;
					friend class BrainMuscles::type::container::standard::vector::ReverseIterator<typename DEFINITION::Type>;
				public:
					typedef Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>> RandomAccessType;
					typedef BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION> BaseType;
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
				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::Iterator(const RandomAccessType& iterator) :
					BaseType(iterator.GetHandle()),
					HandleBaseType(iterator.GetHandle())
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::Iterator(IteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::Iterator(const IteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::~Iterator()
				{}

				template<typename DEFINITION>
				typename Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::InputType*
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::Input<DEFINITION>>::ThisDerived()
				{
					return this;
				}

				////////////////////////////////////////////////////////////////////
				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::Iterator() :
					BaseType(),
					HandleBaseType()
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::Iterator(const HandleType& handle) :
					BaseType(handle),
					HandleBaseType(handle)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::Iterator(IteratorType* pointer) :
					BaseType(pointer),
					HandleBaseType(*pointer)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::Iterator(const IteratorType& rhs) :
					BaseType(rhs),
					HandleBaseType(rhs)
				{}

				template<typename DEFINITION>
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::~Iterator()
				{}

				template<typename DEFINITION>
				typename Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::RandomAccessType*
				Iterator<DEFINITION, BrainMuscles::type::container::vector::iterator::RandomAccess<DEFINITION>>::ThisDerived()
				{
					return this;
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_H_