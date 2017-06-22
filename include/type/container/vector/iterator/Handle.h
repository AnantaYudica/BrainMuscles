#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_

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
					template<typename HANDLE_DEFINITION_TYPE>
					class Handle;
				}
			}
		}
	}
}

#include <vector>
#include "type\container\vector\iterator\handle\definition\ConstIterator.h"
#include "type\container\vector\iterator\handle\definition\Iterator.h"
#include "type\container\vector\iterator\handle\definition\IsType.h"
#include "type\Cloneable.h"

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
					namespace handle
					{
						namespace definition
						{
							template<typename TYPE>
							using ByConstIterator = BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>;

							template<typename TYPE>
							using ByIterator = BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>;
						}
					}

					template<typename HANDLE_DEFINITION_TYPE>
					class Handle
					{
						static_assert(BrainMuscles::type::container::vector::iterator::handle::definition::IsType<HANDLE_DEFINITION_TYPE>::Value,
							"[HANDLE_DEFINITION_TYPE] Requires class BrainMuscles::type::iterator::handle::definition::ConstIterator or BrainMuscles::type::iterator::handle::definition::Iterator");
					};

					template<typename TYPE>
					class Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>> :
						public BrainMuscles::type::Cloneable,
						public BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>
					{
					public:
						typedef BrainMuscles::type::container::vector::iterator
							::handle::definition::ConstIterator<TYPE>			HandleDefinitionType;
						typedef typename HandleDefinitionType::Type				Type;
						typedef typename HandleDefinitionType::ValueType		ValueType;
						typedef typename HandleDefinitionType::DifferenceType	DifferenceType;
						typedef typename HandleDefinitionType::Pointer			Pointer;
						typedef typename HandleDefinitionType::Reference		Reference;
					public:
						typedef BrainMuscles::type::Cloneable					Cloneable;
					public:
						Handle();
					public:
						virtual ~Handle();
					protected:
						virtual ValueType& OnRequestConstReference() = 0;
					public:
						virtual Cloneable* Clone() = 0;
						virtual Cloneable* Clone() const = 0;
						virtual Cloneable& operator=(Cloneable& lhs) = 0;
					public:
						virtual Cloneable& operator-=(const DifferenceType& rhs) = 0;
						virtual Cloneable& operator+=(const DifferenceType& rhs) = 0;
						virtual DifferenceType operator-(const Cloneable& lhs) = 0;
						virtual Cloneable& operator++() = 0;
						virtual Cloneable& operator--() = 0;
						virtual bool operator==(Cloneable& lhs) = 0;
						virtual bool operator!=(Cloneable& lhs) = 0;
						virtual bool operator<(Cloneable& lhs) = 0;
						virtual bool operator<=(Cloneable& lhs) = 0;
						virtual bool operator>(Cloneable& lhs) = 0;
						virtual bool operator>=(Cloneable& lhs) = 0;
						ValueType& operator*();
					};

					template<typename TYPE>
					class Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>> :
						public BrainMuscles::type::container::vector::iterator::Handle<
							BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>,
						public BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>
					{
					public:
						typedef BrainMuscles::type::container::vector::iterator
							::handle::definition::Iterator<TYPE>				HandleDefinitionType;
						typedef typename HandleDefinitionType::Type				Type;
						typedef typename HandleDefinitionType::ValueType		ValueType;
						typedef typename HandleDefinitionType::DifferenceType	DifferenceType;
						typedef typename HandleDefinitionType::Pointer			Pointer;
						typedef typename HandleDefinitionType::Reference		Reference;
					public:
						typedef BrainMuscles::type::Cloneable					Cloneable;
					public:
						Handle();
					public:
						virtual ~Handle();
					protected:
						const ValueType& OnRequestConstReference();
						virtual ValueType& OnRequestReference() = 0;
					public:
						virtual Cloneable* Clone() = 0;
						virtual Cloneable* Clone() const = 0;
						virtual Cloneable& operator=(Cloneable& lhs) = 0;
					public:
						virtual Cloneable& operator-=(const DifferenceType& rhs) = 0;
						virtual Cloneable& operator+=(const DifferenceType& rhs) = 0;
						virtual DifferenceType operator-(const Cloneable& lhs) = 0;
						virtual Cloneable& operator++() = 0;
						virtual Cloneable& operator--() = 0;
						virtual bool operator==(Cloneable& lhs) = 0;
						virtual bool operator!=(Cloneable& lhs) = 0;
						virtual bool operator<(Cloneable& lhs) = 0;
						virtual bool operator<=(Cloneable& lhs) = 0;
						virtual bool operator>(Cloneable& lhs) = 0;
						virtual bool operator>=(Cloneable& lhs) = 0;
						ValueType& operator*();
					};

					////////////////////////////////////////////////////////////////////////////////////
					template<typename TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>::Handle()
					{}

					template<typename TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>::~Handle()
					{}

					template<typename TYPE>
					typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>::ValueType&
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>::operator*()
					{
						return OnRequestConstReference();
					}

					////////////////////////////////////////////////////////////////////////////////////
					template<typename TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::Handle()
					{}

					template<typename TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::~Handle()
					{}

					template<typename TYPE>
					const typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::ValueType& 
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::OnRequestConstReference()
					{
						return OnRequestReference();
					}

					template<typename TYPE>
					typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::ValueType&
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>::operator*()
					{
						return OnRequestReference();
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_