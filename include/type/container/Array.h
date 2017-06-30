#ifndef TYPE_CONTAINER_ARRAY_H_
#define TYPE_CONTAINER_ARRAY_H_

#include <cstddef>
#include <array>

#include "type\container\array\Definition.h"

#include "type\container\member\capacity\M_Empty.h"
#include "type\container\member\capacity\M_MaximumSize.h"
#include "type\container\member\capacity\M_Size.h"

#include "type\container\member\observer\M_Data.h"

#include "type\container\member\element\M_Element.h"
#include "type\container\member\element\M_First.h"
#include "type\container\member\element\M_Last.h"

#include "type\container\member\iterator\M_ConstIterator.h"
#include "type\container\member\iterator\M_ConstReverseIterator.h"
#include "type\container\member\iterator\M_Iterator.h"
#include "type\container\member\iterator\M_ReverseIterator.h"

#include "type\container\member\modifier\M_Fill.h"
#include "type\container\member\modifier\M_Swap.h"

#include "type\container\member\M_StandardContainer.h"

#include "type\container\array\Get.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE, std::size_t SIZE>
			using Array = BrainMuscles::type::Container<std::array<TYPE, SIZE>>;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		template<typename TYPE, std::size_t SIZE>
		class Container<std::array<TYPE, SIZE>> :
			public virtual BrainMuscles::type::container::Base<std::array<TYPE, SIZE>>,
			
			public BrainMuscles::type::container::member::capacity::M_Empty,
			public BrainMuscles::type::container::member::capacity::M_MaximumSize<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::capacity::M_Size<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::observer::M_Data<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::element::M_Element<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::element::M_First<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::element::M_Last<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::iterator::M_ConstIterator<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::iterator::M_ConstReverseIterator<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::iterator::M_Iterator<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::iterator::M_ReverseIterator<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::modifier::M_Fill<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::modifier::M_Swap<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>,
			public BrainMuscles::type::container::member::M_StandardContainer<
				BrainMuscles::type::container::array::Definition<TYPE, SIZE>>
			
		{
		protected:
			typedef BrainMuscles::type::container
				::array::Definition<TYPE, SIZE>										DefinitionType;
		public:
			typedef typename DefinitionType::ContainerType							ContainerType;
			typedef typename DefinitionType::HandleContainerType					HandleContainerType;
			typedef typename DefinitionType::BaseType								BaseType;
			typedef typename DefinitionType::RandomAccessIteratorType				IteratorType;
			typedef typename DefinitionType::RandomAccessConstIteratorType			ConstIteratorType;
			typedef typename DefinitionType::RandomAccessReverseIteratorType		ReverseIteratorType;
			typedef typename DefinitionType::RandomAccessConstReverseIteratorType	ConstReverseIteratorType;

			typedef typename BrainMuscles::type::container
				::element::IsType<typename DefinitionType
				::ElementType, true>::Type											ElementType;
		public:
			typedef typename ElementType::Type										Type;
			typedef typename ElementType::DifferenceType							DifferenceType;
			typedef typename ElementType::SizeType									SizeType;
			typedef typename ElementType::PointerType								PointerType;
			typedef typename ElementType::LeftValueReferenceType					LeftValueReferenceType;
			typedef typename ElementType::RightValueReferenceType					RightValueReferenceType;
			typedef typename ElementType::ConstPointerType							ConstPointerType;
			typedef typename ElementType::ConstLeftValueReferenceType				ConstLeftValueReferenceType;
			typedef typename ElementType::ConstRightValueReferenceType				ConstRightValueReferenceType;
		public:
			Container(ContainerType* ptr);
			Container(const ContainerType& rhs);
			Container(HandleContainerType* ptr);
			Container(const HandleContainerType& rhs);
			template<typename... ARGS>
			Container(ARGS... args);
		public:
			IteratorType Begin();
			IteratorType End();
			ConstIteratorType Begin() const;
			ConstIteratorType End() const;

			ReverseIteratorType ReverseBegin();
			ReverseIteratorType ReverseEnd();
			ConstReverseIteratorType ReverseBegin() const;
			ConstReverseIteratorType ReverseEnd() const;

			ConstIteratorType ConstBegin();
			ConstIteratorType ConstEnd();

			ConstReverseIteratorType ConstReverseBegin();
			ConstReverseIteratorType ConstReverseEnd();

			bool Empty();

			SizeType MaximumSize();

			SizeType Size();

			LeftValueReferenceType At(SizeType index);
			ConstLeftValueReferenceType At(SizeType index) const;

			LeftValueReferenceType Front();
			ConstLeftValueReferenceType Front() const;

			LeftValueReferenceType Back();
			ConstLeftValueReferenceType Back() const;

			PointerType Data();
			ConstPointerType Data() const;

			void Fill(ConstLeftValueReferenceType value);

			void Swap(ContainerType& container);

			HandleContainerType& StandardContainer();
			const HandleContainerType& StandardContainer() const;

		};

		template<typename TYPE, std::size_t SIZE>
		template<typename... ARGS>
		Container<std::array<TYPE, SIZE>>::Container(ARGS... args) :
			BaseType(std::array<TYPE, SIZE>{args...})
		{}

		template<typename TYPE, std::size_t SIZE>
		Container<std::array<TYPE, SIZE>>::Container(ContainerType* ptr):
			BaseType(ptr)
		{
		}

		template<typename TYPE, std::size_t SIZE>
		Container<std::array<TYPE, SIZE>>::Container(const ContainerType& rhs):
			BaseType(rhs)
		{
		}

		template<typename TYPE, std::size_t SIZE>
		Container<std::array<TYPE, SIZE>>::Container(HandleContainerType* ptr) :
			BaseType(ptr)
		{
		}

		template<typename TYPE, std::size_t SIZE>
		Container<std::array<TYPE, SIZE>>::Container(const HandleContainerType& rhs) :
			BaseType(rhs)
		{}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::IteratorType
		Container<std::array<TYPE, SIZE>>::Begin()
		{
			return IteratorType(GetContainer().begin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::IteratorType
		Container<std::array<TYPE, SIZE>>::End()
		{
			return IteratorType(GetContainer().end());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstIteratorType
		Container<std::array<TYPE, SIZE>>::Begin() const
		{
			return ConstIteratorType(GetContainer().begin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstIteratorType
		Container<std::array<TYPE, SIZE>>::End() const
		{
			return ConstIteratorType(GetContainer().end());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ReverseBegin()
		{
			return ReverseIteratorType(GetContainer().rbegin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ReverseEnd()
		{
			return ReverseIteratorType(GetContainer().rend());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ReverseBegin() const
		{
			return ConstReverseIteratorType(GetContainer().rbegin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ReverseEnd() const
		{
			return ConstReverseIteratorType(GetContainer().rend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstIteratorType
		Container<std::array<TYPE, SIZE>>::ConstBegin()
		{
			return ConstIteratorType(GetContainer().cbegin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstIteratorType
		Container<std::array<TYPE, SIZE>>::ConstEnd()
		{
			return ConstIteratorType(GetContainer().cend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ConstReverseBegin()
		{
			return ConstReverseIteratorType(GetContainer().crbegin());
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstReverseIteratorType
		Container<std::array<TYPE, SIZE>>::ConstReverseEnd()
		{
			return ConstReverseIteratorType(GetContainer().crend());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		bool Container<std::array<TYPE, SIZE>>::Empty()
		{
			return GetContainer().empty();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::SizeType
		Container<std::array<TYPE, SIZE>>::MaximumSize()
		{
			return GetContainer().max_size();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::SizeType
		Container<std::array<TYPE, SIZE>>::Size()
		{
			return GetContainer().size();
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::LeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::At(SizeType index)
		{
			return GetContainer().at(index);
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstLeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::At(SizeType index) const
		{
			return GetContainer().at(index);
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::LeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::Front()
		{
			return GetContainer().front();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstLeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::Front() const
		{
			return GetContainer().front();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::LeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::Back()
		{
			return GetContainer().back();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstLeftValueReferenceType
		Container<std::array<TYPE, SIZE>>::Back() const
		{
			return GetContainer().back();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::PointerType
		Container<std::array<TYPE, SIZE>>::Data()
		{
			return GetContainer().data();
		}

		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::ConstPointerType
		Container<std::array<TYPE, SIZE>>::Data() const
		{
			return GetContainer().data();
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		void Container<std::array<TYPE, SIZE>>::Fill(ConstLeftValueReferenceType value)
		{
			GetContainer().fill(value);
		}

		template<typename TYPE, std::size_t SIZE>
		void Container<std::array<TYPE, SIZE>>::Swap(ContainerType& container)
		{
			GetContainer().swap(container.GetContainer());
		}

		/////////////////////////////////////////////////////////////////////////
		template<typename TYPE, std::size_t SIZE>
		typename Container<std::array<TYPE, SIZE>>::HandleContainerType&
		Container<std::array<TYPE, SIZE>>::StandardContainer()
		{
			return GetContainer();
		}

		template<typename TYPE, std::size_t SIZE>
		const typename Container<std::array<TYPE, SIZE>>::HandleContainerType&
		Container<std::array<TYPE, SIZE>>::StandardContainer() const
		{
			return GetContainer();
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_H_