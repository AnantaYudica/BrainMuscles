#ifndef TEST_SIMPLE_JSON_VALUE_OBJECT_H_
#define TEST_SIMPLE_JSON_VALUE_OBJECT_H_

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
						inline Object();
						inline Object(const Object& copy);
						inline Object(Object&& move);
					public:
						inline ~Object();
					public:
						static inline ValueType& Value(ElementType& element);
						static inline const ValueType& Value(const ElementType& element);
					public:
						template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT = BrainMuscles::test::simple::json::Container::ObjectHasKeyInElement>
						inline KeyType Key(const ElementType& element);
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
						inline void Swap(Object& object);
					public:
						inline ValueType& operator[](const KeyType& key);
						inline const ValueType& operator[](const KeyType& key) const;
					public:
						inline Object& operator=(const Object& object);
					public:
						inline ContainerType& Container();
						inline const ContainerType& Container() const;
					};

					inline Object::Object()
					{}

					inline Object::Object(const Object& copy) :
						m_container(copy.m_container)
					{}

					inline Object::Object(Object&& move) :
						m_container(move.m_container)
					{}

					inline Object::~Object()
					{}

					inline typename Object::ValueType& Object::Value(ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					inline const typename Object::ValueType& Object::Value(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::ValueImpl(element);
					}

					template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT>
					inline typename Object::KeyType Object::Key(const ElementType& element)
					{
						return BrainMuscles::test::simple::json::Container::KeyImpl<IS_OBJECT_HAS_KEY_IN_ELEMENT>(m_container, element);
					}

					inline typename Object::ValueType& Object::At(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					inline const typename Object::ValueType& Object::At(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::AtImpl(m_container, key);
					}

					inline typename Object::IteratorType Object::Begin()
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					inline typename Object::ConstIteratorType Object::Begin() const
					{
						return BrainMuscles::test::simple::json::Container::BeginImpl(m_container);
					}

					inline typename Object::ConstIteratorType Object::ConstBegin()
					{
						return BrainMuscles::test::simple::json::Container::ConstBeginImpl(m_container);
					}

					inline typename Object::IteratorType Object::End()
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					inline typename Object::ConstIteratorType Object::End() const
					{
						return BrainMuscles::test::simple::json::Container::EndImpl(m_container);
					}

					inline typename Object::ConstIteratorType Object::ConstEnd()
					{
						return BrainMuscles::test::simple::json::Container::ConstEndImpl(m_container);
					}

					inline typename Object::IteratorType Object::Insert(const ElementType& value)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, value);
					}

					template<typename INPUT_ITERATOR_TYPE>
					inline void Object::Insert(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
					{
						return BrainMuscles::test::simple::json::Container::InsertImpl(m_container, first, last);
					}

					template<typename... ARGS>
					inline typename Object::IteratorType Object::Emplace(ARGS... args)
					{
						return BrainMuscles::test::simple::json::Container::EmplaceImpl(m_container, args...);
					}

					inline typename Object::IteratorType Object::Erase(ConstIteratorType position)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, position);
					}

					inline typename Object::IteratorType Object::Erase(ConstIteratorType first, ConstIteratorType last)
					{
						return BrainMuscles::test::simple::json::Container::EraseImpl(m_container, first, last);
					}

					inline void Object::Clear()
					{
						return BrainMuscles::test::simple::json::Container::ClearImpl(m_container);
					}

					inline typename Object::SizeType Object::Size() const
					{
						return BrainMuscles::test::simple::json::Container::SizeImpl(m_container);
					}

					inline typename Object::IteratorType Object::Find(const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					inline typename Object::ConstIteratorType Object::Find(const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::FindImpl(m_container, key);
					}

					inline void Object::Swap(Object& object)
					{
						return BrainMuscles::test::simple::json::Container::SwapImpl(m_container, object.m_container);
					}

					inline typename Object::ValueType& Object::operator[](const KeyType& key)
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);
					}

					inline const typename Object::ValueType& Object::operator[](const KeyType& key) const
					{
						return BrainMuscles::test::simple::json::Container::ArraySubscriptImpl(m_container, key);;
					}

					inline Object& Object::operator=(const Object& object)
					{
						m_container.operator=(object.m_container);
						return *this;
					}

					inline typename Object::ContainerType& Object::Container()
					{
						return m_container;
					}

					inline const typename Object::ContainerType& Object::Container() const
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
	inline auto begin(BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	inline auto end(BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}

	inline auto begin(const BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.Begin())
	{
		return _Cont.Begin();
	}

	inline auto end(const BrainMuscles::test::simple::json::value::Object& _Cont) -> decltype(_Cont.End())
	{
		return _Cont.End();
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_OBJECT_H_