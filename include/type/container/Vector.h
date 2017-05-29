#ifndef TYPE_CONTAINER_VECTOR_H_
#define TYPE_CONTAINER_VECTOR_H_

#include "type\Container.h"
#include "type\container\Element.h"
#include <vector>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE>
			using Vector = BrainMuscles::type::Container<BrainMuscles::type::container::Element<TYPE, std::vector<TYPE>>, std::vector<TYPE>>;
		}
	}
}

#include "type\container\Base.h"
#include "type\container\vector\iterator\Handle.h"

#include "type\container\member\capacity\M_Size.h"
#include "type\container\member\capacity\M_MaximumSize.h"
#include "type\container\member\capacity\M_Empty.h"
#include "type\container\member\capacity\M_Resize.h"
#include "type\container\member\capacity\M_ShrinkToFit.h"
#include "type\container\member\capacity\M_Capacity.h"
#include "type\container\member\capacity\M_Reserve.h"

#include "type\container\member\element\M_Element.h"
#include "type\container\member\element\M_First.h"
#include "type\container\member\element\M_Last.h"

#include "type\container\member\iterator\M_ConstIterator.h"
#include "type\container\member\iterator\M_ConstReverseIterator.h"
#include "type\container\member\iterator\M_Iterator.h"
#include "type\container\member\iterator\M_ReverseIterator.h"

#include "type\container\member\modifier\M_Assign.h"
#include "type\container\member\modifier\M_Emplace.h"
#include "type\container\member\modifier\M_Insert.h"
#include "type\container\member\modifier\M_Erase.h"
#include "type\container\member\modifier\M_EmplaceBack.h"
#include "type\container\member\modifier\M_PushBack.h"
#include "type\container\member\modifier\M_PopBack.h"
#include "type\container\member\modifier\M_Clear.h"
#include "type\container\member\modifier\M_Swap.h"

#include "type\container\member\observer\M_GetAllocator.h"
#include "type\container\member\observer\M_Data.h"

#include "type\container\member\M_StandartContainer.h"

namespace BrainMuscles
{
	namespace type
	{
		template<typename ELEMENT>
		class Container<ELEMENT, std::vector<typename ELEMENT::Type>> :
			public virtual BrainMuscles::type::container::Base<
				typename ELEMENT::ContainerType, 
				BrainMuscles::type::Container<ELEMENT, std::vector<typename ELEMENT::Type>>>
		{
		public:
			typedef std::vector<typename ELEMENT::Type> StdContainerType;
			typedef typename StdContainerType::value_type ValueType;
			typedef typename StdContainerType::size_type SizeType;
			typedef typename StdContainerType::reference ReferenceType;
			typedef typename StdContainerType::const_reference ConstReferenceType;
			typedef Container<ELEMENT, StdContainerType> ContainerType;
			typedef BrainMuscles::type::container::Base<StdContainerType, ContainerType> BaseType;

		public:
			Container(ContainerType* ptr);
			Container(const ContainerType& rhs);
			Container(std::vector<typename ELEMENT::Type>* ptr);
			Container(const std::vector<typename ELEMENT::Type>& rhs);
			template<typename... ARGS>
			Container(ARGS... args);
		};

		template<typename ELEMENT>
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(ContainerType* ptr) :
			BaseType(ptr)
		{}

		template<typename ELEMENT>
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(const ContainerType& rhs) :
			BaseType(rhs)
		{}

		template<typename ELEMENT>
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(std::vector<typename ELEMENT::Type, SIZE>* ptr) :
			BaseType(ptr)
		{}

		template<typename ELEMENT>
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(const std::vector<typename ELEMENT::Type>& rhs) :
			BaseType(rhs)
		{}

		template<typename ELEMENT>
		template<typename... ARGS>
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(ARGS... args) :
			BaseType(std::vector<typename ELEMENT::Type>{args...})
		{}

	}
}

#endif //!TYPE_CONTAINER_VECTOR_H_