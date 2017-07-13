#ifndef TYPE_CONTAINER_VECTOR_H_
#define TYPE_CONTAINER_VECTOR_H_

#include <cstddef>
#include <vector>

#include "type\container\vector\Definition.h"

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

#include "type\container\member\M_StandardContainer.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			template<typename TYPE>
			using Vector = BrainMuscles::type::Container<std::vector<TYPE>>;
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		template<typename TYPE>
		class Container<std::vector<TYPE>> :
			public virtual BrainMuscles::type::container::Base<std::vector<TYPE>>,

			public BrainMuscles::type::container::member::capacity::M_Size<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::capacity::M_MaximumSize<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::capacity::M_Empty,
			public BrainMuscles::type::container::member::capacity::M_Resize<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::capacity::M_ShrinkToFit,
			public BrainMuscles::type::container::member::capacity::M_Capacity<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::capacity::M_Reserve<
				BrainMuscles::type::container::vector::Definition<TYPE>>,

			public BrainMuscles::type::container::member::element::M_Element<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::element::M_First<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::element::M_Last<
				BrainMuscles::type::container::vector::Definition<TYPE>>,

			public BrainMuscles::type::container::member::iterator::M_ConstIterator<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::iterator::M_ConstReverseIterator<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::iterator::M_Iterator<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::iterator::M_ReverseIterator<
				BrainMuscles::type::container::vector::Definition<TYPE>>,

			public BrainMuscles::type::container::member::modifier::M_Assign<
				BrainMuscles::type::container::vector::Definition<TYPE>>,
			public BrainMuscles::type::container::member::modifier::M_Emplace<
				BrainMuscles::type::container::vector::Definition<TYPE>>
			
				
		{
		protected:
			typedef BrainMuscles::type::container::vector::Definition<TYPE>			DefinitionType;
		public:
			typedef typename DefinitionType::ContainerType							ContainerType;
			typedef typename DefinitionType::HandleContainerType					HandleContainerType;
			typedef typename DefinitionType::BaseType								BaseType;
			typedef typename DefinitionType::RandomAccessIteratorType				IteratorType;
			typedef typename DefinitionType::RandomAccessConstIteratorType			ConstIteratorType;
			typedef typename DefinitionType::RandomAccessReverseIteratorType		ReverseIteratorType;
			typedef typename DefinitionType::RandomAccessConstReverseIteratorType	ConstReverseIteratorType;
			typedef typename DefinitionType::InputIteratorType						InputIteratorType;
			typedef typename DefinitionType::InputConstIteratorType					InputConstIteratorType;
			typedef typename DefinitionType::InputReverseIteratorType				InputReverseIteratorType;
			typedef typename DefinitionType::InputConstReverseIteratorType			InputConstReverseIteratorType;

			typedef typename BrainMuscles::type::container
				::element::IsType<typename DefinitionType
				::ElementType, true>::Type											ElementType;
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
			Container(std::vector<TYPE>* ptr);
			Container(const std::vector<TYPE>& rhs);
			template<typename... ARGS>
			Container(ARGS... args);
		public:
			SizeType Size();
			SizeType MaximumSize();
			bool Empty();
			void Resize(SizeType n) ;
			void Resize(SizeType n, ConstLeftValueReferenceType val);
			void ShrinkToFit();
			SizeType Capacity() const;
			void Reserve(SizeType n);
			LeftValueReferenceType At(SizeType index);
			ConstLeftValueReferenceType At(SizeType index) const;
			LeftValueReferenceType Front();
			ConstLeftValueReferenceType Front() const;
			LeftValueReferenceType Back();
			ConstLeftValueReferenceType Back() const;
		public:
			ConstIteratorType ConstBegin();
			ConstIteratorType ConstEnd();
			ConstReverseIteratorType ConstReverseBegin();
			ConstReverseIteratorType ConstReverseEnd();
			IteratorType Begin();
			IteratorType End();
			ConstIteratorType Begin() const;
			ConstIteratorType End() const;
			ReverseIteratorType ReverseBegin();
			ReverseIteratorType ReverseEnd();
			ConstReverseIteratorType ReverseBegin() const;
			ConstReverseIteratorType ReverseEnd() const;
		public:
			void Assign(InputConstIteratorType first, InputConstIteratorType last);
			void Assign(PointerType first, PointerType last);
			void Assign(SizeType n, ConstLeftValueReferenceType val);
			void Assign(std::initializer_list<Type> il);
		protected:
			IteratorType DerivedEmplace(ConstIteratorType constIterator, LeftValueReferenceType constructor);
		};

		template<typename TYPE>
		Container<std::vector<TYPE>>::Container(ContainerType* ptr) :
			BaseType(ptr)
		{}

		template<typename TYPE>
		Container<std::vector<TYPE>>::Container(const ContainerType& rhs) :
			BaseType(rhs)
		{}

		template<typename TYPE>
		Container<std::vector<TYPE>>::Container(std::vector<TYPE>* ptr) :
			BaseType(ptr)
		{}

		template<typename TYPE>
		Container<std::vector<TYPE>>::Container(const std::vector<TYPE>& rhs) :
			BaseType(rhs)
		{}

		template<typename TYPE>
		template<typename... ARGS>
		Container<std::vector<TYPE>>::Container(ARGS... args) :
			BaseType(std::vector<TYPE>{args...})
		{}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::SizeType
		Container<std::vector<TYPE>>::Size()
		{
			return GetContainer().size();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::SizeType
		Container<std::vector<TYPE>>::MaximumSize()
		{
			return GetContainer().max_size();
		}

		template<typename TYPE>
		bool Container<std::vector<TYPE>>::Empty()
		{
			return GetContainer().empty();
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Resize(SizeType n)
		{
			GetContainer().resize(n);
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Resize(SizeType n, ConstLeftValueReferenceType val)
		{
			GetContainer().resize(n, val);
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::ShrinkToFit()
		{
			GetContainer().shrink_to_fit();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::SizeType
		Container<std::vector<TYPE>>::Capacity() const
		{
			return GetContainer().capacity();
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Reserve(SizeType n)
		{
			return GetContainer().reserve(n);
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::LeftValueReferenceType
		Container<std::vector<TYPE>>::At(SizeType index)
		{
			return GetContainer().at(index);
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstLeftValueReferenceType
		Container<std::vector<TYPE>>::At(SizeType index) const
		{
			return GetContainer().at(index);
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::LeftValueReferenceType
		Container<std::vector<TYPE>>::Front()
		{
			return GetContainer().front();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstLeftValueReferenceType
		Container<std::vector<TYPE>>::Front() const
		{
			return GetContainer().front();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::LeftValueReferenceType
		Container<std::vector<TYPE>>::Back()
		{
			return GetContainer().back();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstLeftValueReferenceType
		Container<std::vector<TYPE>>::Back() const
		{
			return GetContainer().back();
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstIteratorType
		Container<std::vector<TYPE>>::ConstBegin()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstIterator<ElementType>(GetContainer().cbegin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstIteratorType
			Container<std::vector<TYPE>>::ConstEnd()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstIterator<ElementType>(GetContainer().cend());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstReverseIteratorType
		Container<std::vector<TYPE>>::ConstReverseBegin()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<ElementType>(GetContainer().crbegin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstReverseIteratorType
		Container<std::vector<TYPE>>::ConstReverseEnd()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<ElementType>(GetContainer().crend());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::IteratorType
		Container<std::vector<TYPE>>::Begin()
		{
			return BrainMuscles::type::container::vector::iterator::handle::Iterator<ElementType>(GetContainer().begin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::IteratorType
		Container<std::vector<TYPE>>::End()
		{
			return BrainMuscles::type::container::vector::iterator::handle::Iterator<ElementType>(GetContainer().end());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstIteratorType
		Container<std::vector<TYPE>>::Begin() const
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstIterator<ElementType>(GetContainer().begin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstIteratorType
		Container<std::vector<TYPE>>::End() const
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstIterator<ElementType>(GetContainer().end());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ReverseIteratorType
		Container<std::vector<TYPE>>::ReverseBegin()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<ElementType>(GetContainer().rbegin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ReverseIteratorType
		Container<std::vector<TYPE>>::ReverseEnd()
		{
			return BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<ElementType>(GetContainer().rend());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstReverseIteratorType
		Container<std::vector<TYPE>>::ReverseBegin() const
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<ElementType>(GetContainer().rbegin());
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::ConstReverseIteratorType
		Container<std::vector<TYPE>>::ReverseEnd() const
		{
			return BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<ElementType>(GetContainer().rend());
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Assign(InputConstIteratorType first, InputConstIteratorType last)
		{
			GetContainer().assign(first, last);
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Assign(PointerType first, PointerType last)
		{
			GetContainer().assign(first, last);
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Assign(SizeType n, ConstLeftValueReferenceType val)
		{
			GetContainer().assign(n, val);
		}

		template<typename TYPE>
		void Container<std::vector<TYPE>>::Assign(std::initializer_list<Type> il)
		{
			GetContainer().assign(il);
		}

		template<typename TYPE>
		typename Container<std::vector<TYPE>>::IteratorType
		Container<std::vector<TYPE>>::DerivedEmplace(ConstIteratorType constIterator, LeftValueReferenceType constructor)
		{
			
					//GetContainer().emplace(iterator, constructor)
			return IteratorType(0);
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_H_