#ifndef TYPE_CONTAINER_ARRAY_H_
#define TYPE_CONTAINER_ARRAY_H_

#include "type\Container.h"
#include <array>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, size_t SIZE>
			using Array = BrainMuscles::type::Container<BrainMuscles::type::container::Element<TYPE, std::array<TYPE, SIZE>>, std::array<TYPE, SIZE>>;
		}
	}
}


#include "type\container\Base.h"
#include "type\container\Element.h"

#include "type\container\member\capacity\M_Empty.h"
#include "type\container\member\capacity\M_MaximumSize.h"
#include "type\container\member\capacity\M_Size.h"

#include "type\container\member\element\M_Data.h"
#include "type\container\member\element\M_Element.h"
#include "type\container\member\element\M_First.h"
#include "type\container\member\element\M_Last.h"

#include "type\container\member\iterator\M_ConstIterator.h"
#include "type\container\member\iterator\M_ConstReverseIterator.h"
#include "type\container\member\iterator\M_Iterator.h"
#include "type\container\member\iterator\M_ReverseIterator.h"

#include "type\container\member\modifier\M_Fill.h"
#include "type\container\member\modifier\M_Swap.h"

#include "type\container\member\M_StandartContainer.h"

#include "type\container\array\Iterator.h"



namespace BrainMuscles
{
	namespace type
	{
		template<typename ELEMENT, size_t SIZE>
		class Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>> :
			public virtual BrainMuscles::type::container::Base<typename ELEMENT::ContainerType, Container<ELEMENT, typename ELEMENT::ContainerType>>,
			
			public BrainMuscles::type::container::member::capacity::M_Empty,
			public BrainMuscles::type::container::member::capacity::M_MaximumSize<
				typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::capacity::M_Size<
				typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::element::M_Data<
				typename ELEMENT::ContainerType::value_type>,
			public BrainMuscles::type::container::member::element::M_Element<
				typename ELEMENT::ContainerType::reference,
				typename ELEMENT::ContainerType::const_reference,
				typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::element::M_First<
				typename ELEMENT::ContainerType::reference,
				typename ELEMENT::ContainerType::const_reference>,
			public BrainMuscles::type::container::member::element::M_Last<
				typename ELEMENT::ContainerType::reference,
				typename ELEMENT::ContainerType::const_reference>,
			public BrainMuscles::type::container::member::iterator::M_ConstIterator<
				BrainMuscles::type::container::array::Iterator<const typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::const_iterator>>,
			public BrainMuscles::type::container::member::iterator::M_ConstReverseIterator<
				BrainMuscles::type::container::array::Iterator<const typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::const_reverse_iterator>>,
			public BrainMuscles::type::container::member::iterator::M_Iterator<
				BrainMuscles::type::container::array::Iterator<typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::iterator>,
				BrainMuscles::type::container::array::Iterator<const typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::const_iterator>>,
			public BrainMuscles::type::container::member::iterator::M_ReverseIterator<
				BrainMuscles::type::container::array::Iterator<typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::reverse_iterator>,
				BrainMuscles::type::container::array::Iterator<const typename ELEMENT::Type, SIZE, typename ELEMENT::ContainerType::const_reverse_iterator>>,
			public BrainMuscles::type::container::member::modifier::M_Fill<
				typename ELEMENT::ContainerType::value_type>,
			public BrainMuscles::type::container::member::modifier::M_Swap<
				Container<ELEMENT, typename ELEMENT::ContainerType>>,
			public BrainMuscles::type::container::member::M_StandartContainer<typename ELEMENT::ContainerType>
			
		{
		public:
			typedef std::array<typename ELEMENT::Type, SIZE> StdContainerType;

			typedef typename StdContainerType::value_type ValueType;
			typedef typename StdContainerType::size_type SizeType;
			typedef typename StdContainerType::reference ReferenceType;
			typedef typename StdContainerType::const_reference ConstReferenceType;

			typedef Container<ELEMENT, StdContainerType> ContainerType;
			typedef BrainMuscles::type::container::Base<StdContainerType, ContainerType> BaseType;

			

			typedef container::array::Iterator<typename ELEMENT::Type, SIZE, typename StdContainerType::iterator> Iterator;
			typedef container::array::Iterator<typename ELEMENT::Type, SIZE, typename StdContainerType::reverse_iterator> ReverseIterator;
			typedef container::array::Iterator<const typename ELEMENT::Type, SIZE, typename StdContainerType::const_iterator> ConstIterator;
			typedef container::array::Iterator<const typename ELEMENT::Type, SIZE, typename StdContainerType::const_reverse_iterator> ConstReverseIterator;
		public:
			Container(ContainerType* ptr);
			Container(const ContainerType& rhs);
			Container(std::array<typename ELEMENT::Type, SIZE>* ptr);
			Container(const std::array<typename ELEMENT::Type, SIZE>& rhs);
			template<typename... ARGS>
			Container(ARGS... args);

			Iterator Begin();

			Iterator End();

			ConstIterator Begin() const;

			ConstIterator End() const;

			ReverseIterator ReverseBegin();

			ReverseIterator ReverseEnd();

			ConstReverseIterator ReverseBegin() const;

			ConstReverseIterator ReverseEnd() const;

			ConstIterator ConstBegin();

			ConstIterator ConstEnd();

			ConstReverseIterator ConstReverseBegin();

			ConstReverseIterator ConstReverseEnd();

			bool Empty();

			SizeType MaximumSize();

			SizeType Size();

			ReferenceType At(SizeType index);

			ConstReferenceType At(SizeType index) const;

			ReferenceType Front();

			ConstReferenceType Front() const;

			ReferenceType Back();

			ConstReferenceType Back() const;

			ValueType* Data();

			const ValueType* Data() const;

			void Fill(const ValueType& value);

			void Swap(ContainerType& container);

			StdContainerType& StdContainer();

			const StdContainerType& StdContainer() const;

		};

		template<typename ELEMENT, size_t SIZE>
		template<typename... ARGS>
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Container(ARGS... args) :
			BaseType(std::array<typename ELEMENT::Type, SIZE>{args...})
		{}

		template<typename ELEMENT, size_t SIZE>
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Container(ContainerType* ptr):
			BaseType(ptr)
		{
		}

		template<typename ELEMENT, size_t SIZE>
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Container(const ContainerType& rhs):
			BaseType(rhs)
		{
		}

		template<typename ELEMENT, size_t SIZE>
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Container(std::array<typename ELEMENT::Type, SIZE>* ptr) :
			BaseType(ptr)
		{
		}

		template<typename ELEMENT, size_t SIZE>
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Container(const std::array<typename ELEMENT::Type, SIZE>& rhs) :
			BaseType(rhs)
		{}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Iterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Begin()
		{
			return Iterator(GetContainer().begin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Iterator
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::End()
		{
			return Iterator(GetContainer().end());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstIterator
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Begin() const
		{
			return ConstIterator(GetContainer().begin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstIterator
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::End() const
		{
			return ConstIterator(GetContainer().end());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseBegin()
		{
			return ReverseIterator(GetContainer().rbegin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseEnd()
		{
			return ReverseIterator(GetContainer().rend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseBegin() const
		{
			return ConstReverseIterator(GetContainer().rbegin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReverseEnd() const
		{
			return ConstReverseIterator(GetContainer().rend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstBegin()
		{
			return ConstIterator(GetContainer().cbegin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstEnd()
		{
			return ConstIterator(GetContainer().cend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseBegin()
		{
			return ConstReverseIterator(GetContainer().crbegin());
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseIterator 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReverseEnd()
		{
			return ConstReverseIterator(GetContainer().crend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		bool Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Empty()
		{
			return GetContainer().empty();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::SizeType 
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::MaximumSize()
		{
			return GetContainer().max_size();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::SizeType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Size()
		{
			return GetContainer().size();
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::At(SizeType index)
		{
			return GetContainer().at(index);
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::At(SizeType index) const
		{
			return GetContainer().at(index);
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Front()
		{
			return GetContainer().front();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Front() const
		{
			return GetContainer().front();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Back()
		{
			return GetContainer().back();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ConstReferenceType
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Back() const
		{
			return GetContainer().back();
		}

		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ValueType*
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Data()
		{
			return GetContainer().data();
		}

		template<typename ELEMENT, size_t SIZE>
		const typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::ValueType*
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Data() const
		{
			return GetContainer().data();
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		void Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Fill(const ValueType& value)
		{
			GetContainer().fill(value);
		}

		template<typename ELEMENT, size_t SIZE>
		void Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::Swap(ContainerType& container)
		{
			GetContainer().swap(container.GetContainer());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename ELEMENT, size_t SIZE>
		typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::StdContainerType&
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::StdContainer()
		{
			return GetContainer();
		}

		template<typename ELEMENT, size_t SIZE>
		const typename Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::StdContainerType&
		Container<ELEMENT, std::array<typename ELEMENT::Type, SIZE>>::StdContainer() const
		{
			return GetContainer();
		}
	}
}

#include "type\container\array\Get.h"

#endif //!TYPE_CONTAINER_ARRAY_H_