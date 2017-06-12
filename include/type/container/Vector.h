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
#include "type\container\vector\iterator\RandomAccess.h"
#include "type\container\vector\iterator\Input.h"
#include "type\container\vector\Iterator.h"

#include "type\container\vector\iterator\handle\ConstIterator.h"
#include "type\container\vector\iterator\handle\ConstReverseIterator.h"
#include "type\container\vector\iterator\handle\Iterator.h"
#include "type\container\vector\iterator\handle\ReverseIterator.h"

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
				BrainMuscles::type::Container<ELEMENT, std::vector<typename ELEMENT::Type>>>,

			public BrainMuscles::type::container::member::capacity::M_Size<typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::capacity::M_MaximumSize<typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::capacity::M_Empty,
			public BrainMuscles::type::container::member::capacity::M_Resize<
				typename ELEMENT::ContainerType::size_type,
				typename ELEMENT::ContainerType::value_type>,
			public BrainMuscles::type::container::member::capacity::M_ShrinkToFit,
			public BrainMuscles::type::container::member::capacity::M_Capacity<typename ELEMENT::ContainerType::size_type>,
			public BrainMuscles::type::container::member::capacity::M_Reserve<typename ELEMENT::ContainerType::size_type>,

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
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						const typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>>>,
			public BrainMuscles::type::container::member::iterator::M_ConstReverseIterator<
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						const typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>>>,
			public BrainMuscles::type::container::member::iterator::M_Iterator<
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>>,
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						const typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>>>,
			public BrainMuscles::type::container::member::iterator::M_ReverseIterator<
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>>,
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::RandomAccess<
						const typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>>>,

			public BrainMuscles::type::container::member::modifier::M_Assign<
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::Input<
						typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>>,
				BrainMuscles::type::container::vector::Iterator<
					BrainMuscles::type::container::vector::iterator::Input<
						const typename ELEMENT::Type,
						BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>>,
				typename ELEMENT::ContainerType::value_type,
				typename ELEMENT::ContainerType::size_type>
			
				
		{
		public:
			typedef std::vector<typename ELEMENT::Type> StdContainerType;
			typedef typename StdContainerType::value_type ValueType;
			typedef typename StdContainerType::size_type SizeType;
			typedef typename StdContainerType::reference ReferenceType;
			typedef typename StdContainerType::const_reference ConstReferenceType;
			typedef Container<ELEMENT, StdContainerType> ContainerType;
			typedef BrainMuscles::type::container::Base<StdContainerType, ContainerType> BaseType;
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::RandomAccess<
					const typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>> ConstIterator;
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::RandomAccess<
					const typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>> ConstReverseIterator;
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::RandomAccess<
					typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>> Iterator;
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::RandomAccess<
					typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>> ReverseIterator;
		public:
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::Input<
					typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<typename ELEMENT::Type>>> InputIteratorType;
			typedef BrainMuscles::type::container::vector::Iterator<
				BrainMuscles::type::container::vector::iterator::Input<
					const typename ELEMENT::Type,
					BrainMuscles::type::container::vector::iterator::Handle<const typename ELEMENT::Type>>> InputIteratorConstType;
		public:
			Container(ContainerType* ptr);
			Container(const ContainerType& rhs);
			Container(std::vector<typename ELEMENT::Type>* ptr);
			Container(const std::vector<typename ELEMENT::Type>& rhs);
			template<typename... ARGS>
			Container(ARGS... args);
		public:
			SizeType Size();
			SizeType MaximumSize();
			bool Empty();
			void Resize(SizeType n) ;
			void Resize(SizeType n, const ValueType& val);
			void ShrinkToFit();
			SizeType Capacity() const;
			void Reserve(SizeType n);
			ReferenceType At(SizeType index);
			ConstReferenceType At(SizeType index) const;
			ReferenceType Front();
			ConstReferenceType Front() const;
			ReferenceType Back();
			ConstReferenceType Back() const;
		public:
			ConstIterator ConstBegin();
			ConstIterator ConstEnd();
			ConstReverseIterator ConstReverseBegin();
			ConstReverseIterator ConstReverseEnd();
			Iterator Begin();
			Iterator End();
			ConstIterator Begin() const;
			ConstIterator End() const;
			ReverseIterator ReverseBegin();
			ReverseIterator ReverseEnd();
			ConstReverseIterator ReverseBegin() const;
			ConstReverseIterator ReverseEnd() const;
		public:
			void Assign(InputIteratorType first, InputIteratorType last);
			void Assign(InputIteratorConstType first, InputIteratorConstType last);
			void Assign(SizeType n, const ValueType& val);
			void Assign(std::initializer_list<ValueType> il);
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
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Container(std::vector<typename ELEMENT::Type>* ptr) :
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

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::SizeType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Size()
		{
			return GetContainer().size();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::SizeType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::MaximumSize()
		{
			return GetContainer().max_size();
		}

		template<typename ELEMENT>
		bool Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Empty()
		{
			return GetContainer().empty();
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Resize(SizeType n)
		{
			GetContainer().resize(n);
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Resize(SizeType n, const ValueType& val)
		{
			GetContainer().resize(n, val);
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ShrinkToFit()
		{
			GetContainer().shrink_to_fit();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::SizeType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Capacity() const
		{
			return GetContainer().capacity();
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Reserve(SizeType n)
		{
			return GetContainer().reserve(n);
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::At(SizeType index)
		{
			return GetContainer().at(index);
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::At(SizeType index) const
		{
			return GetContainer().at(index);
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Front()
		{
			return GetContainer().front();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Front() const
		{
			return GetContainer().front();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Back()
		{
			return GetContainer().back();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReferenceType 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Back() const
		{
			return GetContainer().back();
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstBegin()
		{
			return ConstIterator(BrainMuscles::type::container::vector::iterator::handle::ConstIterator<typename ELEMENT::Type>(GetContainer().cbegin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstIterator 
			Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstEnd()
		{
			return ConstIterator(BrainMuscles::type::container::vector::iterator::handle::ConstIterator<typename ELEMENT::Type>(GetContainer().cend()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseBegin()
		{
			return ConstReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<typename ELEMENT::Type>(GetContainer().crbegin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseEnd()
		{
			return ConstReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<typename ELEMENT::Type>(GetContainer().crend()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Iterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Begin()
		{
			return Iterator(BrainMuscles::type::container::vector::iterator::handle::Iterator<typename ELEMENT::Type>(GetContainer().begin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Iterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::End()
		{
			return Iterator(BrainMuscles::type::container::vector::iterator::handle::Iterator<typename ELEMENT::Type>(GetContainer().end()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Begin() const
		{
			return ConstIterator(BrainMuscles::type::container::vector::iterator::handle::ConstIterator<typename ELEMENT::Type>(GetContainer().begin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::End() const
		{
			return ConstIterator(BrainMuscles::type::container::vector::iterator::handle::ConstIterator<typename ELEMENT::Type>(GetContainer().end()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseBegin()
		{
			return ReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<typename ELEMENT::Type>(GetContainer().rbegin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseEnd()
		{
			return ReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<typename ELEMENT::Type>(GetContainer().rend()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseBegin() const
		{
			return ConstReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<typename ELEMENT::Type>(GetContainer().rbegin()));
		}

		template<typename ELEMENT>
		typename Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ConstReverseIterator 
		Container<ELEMENT, std::vector<typename ELEMENT::Type>>::ReverseEnd() const
		{
			return ConstReverseIterator(BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<typename ELEMENT::Type>(GetContainer().rend()));
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Assign(InputIteratorType first, InputIteratorType last)
		{
			GetContainer().assign(first, last);
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Assign(InputIteratorConstType first, InputIteratorConstType last)
		{
			GetContainer().assign(first, last);
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Assign(SizeType n, const ValueType& val)
		{
			GetContainer().assign(n, val);
		}

		template<typename ELEMENT>
		void Container<ELEMENT, std::vector<typename ELEMENT::Type>>::Assign(std::initializer_list<ValueType> il)
		{
			GetContainer().assign(il);
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_H_