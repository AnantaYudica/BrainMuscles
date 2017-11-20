#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_

#include <vector>
#include "type/container/vector/iterator/handle/definition/ConstIterator.h"
#include "type/container/vector/iterator/handle/definition/Iterator.h"
#include "type/container/vector/iterator/handle/definition/IsType.h"
#include "type/Cloneable.h"

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
					class Handle
					{
						static_assert(BrainMuscles::type::container::vector::iterator::handle::definition::IsType<HANDLE_DEFINITION_TYPE>::Value,
							"[HANDLE_DEFINITION_TYPE] Requires class BrainMuscles::type::iterator::handle::definition::ConstIterator or BrainMuscles::type::iterator::handle::definition::Iterator");
					};

					template<typename ELEMENT_TYPE>
					using HandleDefinitionConstIterator = Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>;

					template<typename ELEMENT_TYPE>
					using HandleDefinitionIterator = Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>;

					template<typename ELEMENT_TYPE>
					class Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::Cloneable,
						public BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>
					{
					private:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT_TYPE, true>::Type			ElementType;
					public:
						typedef BrainMuscles::type::container::vector::iterator
							::handle::definition::ConstIterator<ElementType>	HandleDefinitionType;
						typedef typename HandleDefinitionType::Type				Type;
						typedef typename HandleDefinitionType::ValueType		ValueType;
						typedef typename HandleDefinitionType::DifferenceType	DifferenceType;
						typedef typename HandleDefinitionType::PointerType		PointerType;
						typedef typename HandleDefinitionType::ReferenceType	ReferenceType;
					public:
						typedef BrainMuscles::type::Cloneable					Cloneable;
					public:
						Handle();
					public:
						virtual ~Handle();
					protected:
						virtual ReferenceType OnRequestConstReference() = 0;
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
						ReferenceType operator*();
					};

					template<typename ELEMENT_TYPE>
					class Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::container::vector::iterator::Handle<
							BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>,
						public BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>
					{
					private:
						typedef typename BrainMuscles::type::container
							::element::IsType<ELEMENT_TYPE, true>::Type			ElementType;
						typedef Handle<BrainMuscles::type::container::vector
							::iterator::handle::definition
							::ConstIterator<ELEMENT_TYPE>>						HandleDefinitionConstIteratorType;
					public:
						typedef BrainMuscles::type::container::vector::iterator
							::handle::definition::Iterator<ElementType>			HandleDefinitionType;
						typedef typename HandleDefinitionType::Type				Type;
						typedef typename HandleDefinitionType::ValueType		ValueType;
						typedef typename HandleDefinitionType::DifferenceType	DifferenceType;
						typedef typename HandleDefinitionType::PointerType		PointerType;
						typedef typename HandleDefinitionType::ReferenceType	ReferenceType;
						typedef typename HandleDefinitionConstIteratorType
							::ReferenceType										ConstReferenceType;
					public:
						typedef BrainMuscles::type::Cloneable					Cloneable;
					public:
						Handle();
					public:
						virtual ~Handle();
					protected:
						ConstReferenceType OnRequestConstReference();
						virtual ReferenceType OnRequestReference() = 0;
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
						ReferenceType operator*();
					};

					////////////////////////////////////////////////////////////////////////////////////
					template<typename ELEMENT_TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>::Handle()
					{}

					template<typename ELEMENT_TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>::~Handle()
					{}

					template<typename ELEMENT_TYPE>
					typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>::ReferenceType
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<ELEMENT_TYPE>>::operator*()
					{
						return OnRequestConstReference();
					}

					////////////////////////////////////////////////////////////////////////////////////
					template<typename ELEMENT_TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::Handle()
					{}

					template<typename ELEMENT_TYPE>
					Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::~Handle()
					{}

					template<typename ELEMENT_TYPE>
					typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::ConstReferenceType
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::OnRequestConstReference()
					{
						return OnRequestReference();
					}

					template<typename ELEMENT_TYPE>
					typename Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::ReferenceType
						Handle<BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<ELEMENT_TYPE>>::operator*()
					{
						return OnRequestReference();
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_