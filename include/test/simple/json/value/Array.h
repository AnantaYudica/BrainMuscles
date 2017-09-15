#ifndef TEST_SIMPLE_JSON_VALUE_ARRAY_H_
#define TEST_SIMPLE_JSON_VALUE_ARRAY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Constant.h"
#include "test\simple\json\Container.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					class Array :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ContainerArrayType				ContainerType;
						typedef BrainMuscles::test::simple::json::Container
							::ArrayElementType											ElementType;
						typedef BrainMuscles::test::simple::json::Container
							::ArrayIteratorType											IteratorType;
						typedef BrainMuscles::test::simple::json::Container
							::ArrayConstIteratorType									ConstIteratorType;
						typedef BrainMuscles::test::simple::json::Container
							::ArraySizeType												SizeType;
						typedef BrainMuscles::test::simple::json::Container
							::ArrayKeyType												KeyType;
						typedef BrainMuscles::test::simple::json::Container
							::ArrayValueType											ValueType;
					private:
						ContainerType m_container;
					public:
						Array();
						Array(const Array& copy);
						Array(Array&& move);
					public:
						~Array();
					public:
						static ValueType& Value(ElementType& element);
						static const ValueType& Value(const ElementType& element);
					public:
						template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT = BrainMuscles::test::simple::json::Container::ArrayHasKeyInElement>
						KeyType Key(const ElementType& element);
					public:
						ValueType& At(const KeyType& key);
						const ValueType& At(const KeyType& key) const;
						IteratorType Begin();
						ConstIteratorType Begin() const;
						ConstIteratorType ConstBegin();
						IteratorType End();
						ConstIteratorType End() const;
						ConstIteratorType ConstEnd();
						IteratorType Insert(const ElementType& value);
						template<typename INPUT_ITERATOR_TYPE>
						void Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
						template<typename... ARGS>
						IteratorType Emplace(ARGS... args);
						IteratorType Erase(ConstIteratorType position);
						IteratorType Erase(ConstIteratorType first, ConstIteratorType last);
						void Clear();
						SizeType Size() const;
						IteratorType Find(const KeyType& key);
						ConstIteratorType Find(const KeyType& key) const;
						void Swap(Array& array);
					public:
						ValueType& operator[](const KeyType& key);
						const ValueType& operator[](const KeyType& key) const;
					public:
						Array& operator=(const Array& array);
					public:
						ContainerType& Container();
						const ContainerType& Container() const;
					};

					Array::Array()
					{}

					Array::Array(const Array& copy) :
						m_container(copy.m_container)
					{}

					Array::Array(Array&& move) :
						m_container(move.m_container)
					{}

					Array::~Array()
					{}

					typename Array::ValueType& Array::Value(ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					const typename Array::ValueType& Array::Value(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}
				
					template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT>
					typename Array::KeyType Array::Key(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::KeyImpl<IS_ARRAY_HAS_KEY_IN_ELEMENT>(m_container, element);
					}

					typename Array::ValueType& Array::At(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					const typename Array::ValueType& Array::At(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					typename Array::IteratorType Array::Begin()
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					typename Array::ConstIteratorType Array::Begin() const
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					typename Array::ConstIteratorType Array::ConstBegin()
					{
						return BrainMuscles::test::simple::json::Container::ConstBeginImpl(m_container);
					}

					typename Array::IteratorType Array::End()
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					typename Array::ConstIteratorType Array::End() const
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					typename Array::ConstIteratorType Array::ConstEnd()
					{
						return BrainMuscles::test::simple::json::Container::ConstEndImpl(m_container);
					}

					typename Array::IteratorType Array::Insert(const ElementType& value)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, value);
					}

					template<typename INPUT_ITERATOR_TYPE>
					void Array::Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, first, last);
					}

					template<typename... ARGS>
					typename Array::IteratorType Array::Emplace(ARGS... args)
					{
						return BrainMuscles::test::simple::json::Container::EmplaceImpl(m_container, args...);
					}

					typename Array::IteratorType Array::Erase(ConstIteratorType position)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, position);
					}

					typename Array::IteratorType Array::Erase(ConstIteratorType first, ConstIteratorType last)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, first, last);
					}

					void Array::Clear()
					{
						return BrainMuscles::test::simple::json::Container::ClearImpl(m_container);
					}

					typename Array::SizeType Array::Size() const
					{
						return BrainMuscles::test::simple::json::Container::SizeImpl(m_container);
					}

					typename Array::IteratorType Array::Find(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					typename Array::ConstIteratorType Array::Find(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					void Array::Swap(Array& array)
					{
						return BrainMuscles::test::simple::json::Container::SwapImpl(m_container, array.m_container);
					}

					typename Array::ValueType& Array::operator[](const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					const typename Array::ValueType& Array::operator[](const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					Array& Array::operator=(const Array& array)
					{
						m_container.operator=(array.m_container);
						return *this;
					}

					typename Array::ContainerType& Array::Container()
					{
						return m_container;
					}

					const typename Array::ContainerType& Array::Container() const
					{
						return m_container;
					}
				}
			}
		}
	}
}

namespace std
{
	auto inline begin(BrainMuscles::test::simple::json::value::Array& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	auto inline end(BrainMuscles::test::simple::json::value::Array& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}

	auto inline begin(const BrainMuscles::test::simple::json::value::Array& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	auto inline end(const BrainMuscles::test::simple::json::value::Array& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_ARRAY_H_