#ifndef TEST_SIMPLE_JSON_VALUE_OBJECT_H_
#define TEST_SIMPLE_JSON_VALUE_OBJECT_H_

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
					class Object :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ContainerObjectType				ContainerType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectElementType											ElementType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectIteratorType										IteratorType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectConstIteratorType									ConstIteratorType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectSizeType											SizeType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectKeyType												KeyType;
						typedef BrainMuscles::test::simple::json::Container
							::ObjectValueType											ValueType;
					private:
						ContainerType m_container;
					public:
						Object();
						Object(const Object& copy);
						Object(Object&& move);
					public:
						~Object();
					public:
						static ValueType& Value(ElementType& element);
						static const ValueType& Value(const ElementType& element);
					public:
						template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT = BrainMuscles::test::simple::json::Container::ObjectHasKeyInElement>
						KeyType Key(const ElementType& element);
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
						void Swap(Object& object);
					public:
						ValueType& operator[](const KeyType& key);
						const ValueType& operator[](const KeyType& key) const;
					public:
						Object& operator=(const Object& object);
					public:
						ContainerType& Container();
						const ContainerType& Container() const;
					};

					Object::Object()
					{}

					Object::Object(const Object& copy) :
						m_container(copy.m_container)
					{}

					Object::Object(Object&& move) :
						m_container(move.m_container)
					{}

					Object::~Object()
					{}

					typename Object::ValueType& Object::Value(ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					const typename Object::ValueType& Object::Value(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT>
					typename Object::KeyType Object::Key(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::KeyImpl<IS_OBJECT_HAS_KEY_IN_ELEMENT>(m_container, element);
					}

					typename Object::ValueType& Object::At(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					const typename Object::ValueType& Object::At(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					typename Object::IteratorType Object::Begin()
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					typename Object::ConstIteratorType Object::Begin() const
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					typename Object::ConstIteratorType Object::ConstBegin()
					{
						return BrainMuscles::test::simple::json::Container::ConstBeginImpl(m_container);
					}

					typename Object::IteratorType Object::End()
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					typename Object::ConstIteratorType Object::End() const
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					typename Object::ConstIteratorType Object::ConstEnd()
					{
						return BrainMuscles::test::simple::json::Container::ConstEndImpl(m_container);
					}

					typename Object::IteratorType Object::Insert(const ElementType& value)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, value);
					}

					template<typename INPUT_ITERATOR_TYPE>
					void Object::Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, first, last);
					}

					template<typename... ARGS>
					typename Object::IteratorType Object::Emplace(ARGS... args)
					{
						return BrainMuscles::test::simple::json::Container::EmplaceImpl(m_container, args...);
					}

					typename Object::IteratorType Object::Erase(ConstIteratorType position)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, position);
					}

					typename Object::IteratorType Object::Erase(ConstIteratorType first, ConstIteratorType last)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, first, last);
					}

					void Object::Clear()
					{
						return BrainMuscles::test::simple::json::Container::ClearImpl(m_container);
					}

					typename Object::SizeType Object::Size() const
					{
						return BrainMuscles::test::simple::json::Container::SizeImpl(m_container);
					}

					typename Object::IteratorType Object::Find(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					typename Object::ConstIteratorType Object::Find(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					void Object::Swap(Object& object)
					{
						return BrainMuscles::test::simple::json::Container::SwapImpl(m_container, object.m_container);
					}

					typename Object::ValueType& Object::operator[](const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					const typename Object::ValueType& Object::operator[](const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);;
					}

					Object& Object::operator=(const Object& object)
					{
						m_container.operator=(object.m_container);
						return *this;
					}

					typename Object::ContainerType& Object::Container()
					{
						return m_container;
					}

					const typename Object::ContainerType& Object::Container() const
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
	auto inline begin(BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	auto inline end(BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}

	auto inline begin(const BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	auto inline end(const BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_OBJECT_H_