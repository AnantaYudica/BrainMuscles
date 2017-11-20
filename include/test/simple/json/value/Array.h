#ifndef TEST_SIMPLE_JSON_VALUE_ARRAY_H_
#define TEST_SIMPLE_JSON_VALUE_ARRAY_H_

#include "test/Configure.h"

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
						inline Array();
						inline Array(const Array& copy);
						inline Array(Array&& move);
					public:
						~Array();
					public:
						static inline ValueType& Value(ElementType& element);
						static inline const ValueType& Value(const ElementType& element);
					public:
						template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT = BrainMuscles::test::simple::json::Container::ArrayHasKeyInElement>
						inline KeyType Key(const ElementType& element);
					public:
						inline ValueType& At(const KeyType& key);
						inline const ValueType& At(const KeyType& key) const;
						inline IteratorType Begin();
						inline ConstIteratorType Begin() const;
						inline ConstIteratorType ConstBegin();
						inline IteratorType End();
						inline ConstIteratorType End() const;
						inline ConstIteratorType ConstEnd();
						inline IteratorType Insert(const ElementType& value);
						template<typename INPUT_ITERATOR_TYPE>
						inline void Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
						template<typename... ARGS>
						inline IteratorType Emplace(ARGS... args);
						inline IteratorType Erase(ConstIteratorType position);
						inline IteratorType Erase(ConstIteratorType first, ConstIteratorType last);
						inline void Clear();
						inline SizeType Size() const;
						inline IteratorType Find(const KeyType& key);
						inline ConstIteratorType Find(const KeyType& key) const;
						inline void Swap(Array& array);
					public:
						inline ValueType& operator[](const KeyType& key);
						inline const ValueType& operator[](const KeyType& key) const;
					public:
						inline Array& operator=(const Array& array);
					public:
						inline ContainerType& Container();
						inline const ContainerType& Container() const;
					};

					inline Array::Array()
					{}

					inline Array::Array(const Array& copy) :
						m_container(copy.m_container)
					{}

					inline Array::Array(Array&& move) :
						m_container(move.m_container)
					{}

					inline Array::~Array()
					{}

					inline typename Array::ValueType& Array::Value(ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					inline const typename Array::ValueType& Array::Value(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}
				
					template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT>
					inline typename Array::KeyType Array::Key(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::KeyImpl<IS_ARRAY_HAS_KEY_IN_ELEMENT>(m_container, element);
					}

					inline typename Array::ValueType& Array::At(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					inline const typename Array::ValueType& Array::At(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					inline typename Array::IteratorType Array::Begin()
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					inline typename Array::ConstIteratorType Array::Begin() const
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					inline typename Array::ConstIteratorType Array::ConstBegin()
					{
						return BrainMuscles::test::simple::json::Container::ConstBeginImpl(m_container);
					}

					inline typename Array::IteratorType Array::End()
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					inline typename Array::ConstIteratorType Array::End() const
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					inline typename Array::ConstIteratorType Array::ConstEnd()
					{
						return BrainMuscles::test::simple::json::Container::ConstEndImpl(m_container);
					}

					inline typename Array::IteratorType Array::Insert(const ElementType& value)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, value);
					}

					template<typename INPUT_ITERATOR_TYPE>
					inline void Array::Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, first, last);
					}

					template<typename... ARGS>
					inline typename Array::IteratorType Array::Emplace(ARGS... args)
					{
						return BrainMuscles::test::simple::json::Container::EmplaceImpl(m_container, args...);
					}

					inline typename Array::IteratorType Array::Erase(ConstIteratorType position)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, position);
					}

					inline typename Array::IteratorType Array::Erase(ConstIteratorType first, ConstIteratorType last)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, first, last);
					}

					inline void Array::Clear()
					{
						return BrainMuscles::test::simple::json::Container::ClearImpl(m_container);
					}

					inline typename Array::SizeType Array::Size() const
					{
						return BrainMuscles::test::simple::json::Container::SizeImpl(m_container);
					}

					inline typename Array::IteratorType Array::Find(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					inline typename Array::ConstIteratorType Array::Find(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					inline void Array::Swap(Array& array)
					{
						return BrainMuscles::test::simple::json::Container::SwapImpl(m_container, array.m_container);
					}

					inline typename Array::ValueType& Array::operator[](const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					inline const typename Array::ValueType& Array::operator[](const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					inline Array& Array::operator=(const Array& array)
					{
						m_container.operator=(array.m_container);
						return *this;
					}

					inline typename Array::ContainerType& Array::Container()
					{
						return m_container;
					}

					inline const typename Array::ContainerType& Array::Container() const
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