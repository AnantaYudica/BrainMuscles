#ifndef TEST_SIMPLE_JSON_CONTAINER_H_
#define TEST_SIMPLE_JSON_CONTAINER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Constant.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				struct Container final
				{
					Container() = delete;
				public:
					typedef BrainMuscles::test::simple::json::Constant		ConstantType;
					typedef typename ConstantType::ContainerArrayType		ArrayType;
					typedef typename ConstantType::ContainerObjectType		ObjectType;
				public:
					typedef typename ArrayType::value_type					ArrayElementType;
					typedef typename ObjectType::value_type					ObjectElementType;
				public:
					typedef typename ArrayType::iterator					ArrayIteratorType;
					typedef typename ArrayType::const_iterator				ArrayConstIteratorType;
				public:
					typedef typename ObjectType::iterator					ObjectIteratorType;
					typedef typename ObjectType::const_iterator				ObjectConstIteratorType;
				public:
					typedef typename ArrayType::size_type					ArraySizeType;
					typedef typename ObjectType::size_type					ObjectSizeType;
				public:
					typedef typename ArrayType::size_type					ArrayKeyType;
					typedef typename ObjectType::key_type					ObjectKeyType; 
				public:
					typedef typename ArrayType::value_type					ArrayValueType;
					typedef typename ObjectType::mapped_type				ObjectValueType;
				public:
					static constexpr bool ArrayHasKeyInElement = false;
					static constexpr bool ObjectHasKeyInElement = true;
				public:
					static ArrayValueType& ValueImpl(ArrayElementType& element);
					static ObjectValueType& ValueImpl(ObjectElementType& element);
					static const ArrayValueType& ValueImpl(const ArrayElementType& element);
					static const ObjectValueType& ValueImpl(const ObjectElementType& element);
				public:
					template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT = ArrayHasKeyInElement>
					static ArrayKeyType KeyImpl(const ArrayType& array, const ArrayElementType& element);
					template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT = ObjectHasKeyInElement>
					static ObjectKeyType KeyImpl(const ObjectType& object, const ObjectElementType& element);
				public:
					static ArrayValueType& AtImpl(ArrayType& array, const ArrayKeyType& key);
					static const ArrayValueType& AtImpl(const ArrayType& array, const ArrayKeyType& key);
				public:
					static ObjectValueType& AtImpl(ObjectType& object, const ObjectKeyType& key);
					static const ObjectValueType& AtImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static ArrayIteratorType BeginImpl(ArrayType& array);
					static ObjectIteratorType BeginImpl(ObjectType& object);
					static ArrayConstIteratorType BeginImpl(const ArrayType& array);
					static ObjectConstIteratorType BeginImpl(const ObjectType& object);
					static ArrayConstIteratorType ConstBeginImpl(const ArrayType& array);
					static ObjectConstIteratorType ConstBeginImpl(const ObjectType& object);
					static ArrayIteratorType EndImpl(ArrayType& array);
					static ObjectIteratorType EndImpl(ObjectType& object);
					static ArrayConstIteratorType EndImpl(const ArrayType& array);
					static ObjectConstIteratorType EndImpl(const ObjectType& object);
					static ArrayConstIteratorType ConstEndImpl(const ArrayType& array);
					static ObjectConstIteratorType ConstEndImpl(const ObjectType& object);
				public:
					static ArrayIteratorType InsertImpl(ArrayType& array, const ArrayElementType& value);
					static ObjectIteratorType InsertImpl(ObjectType& object, const ObjectElementType& value);
					template<typename INPUT_ITERATOR_TYPE>
					static void InsertImpl(ArrayType& array, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
					template<typename INPUT_ITERATOR_TYPE>
					static void InsertImpl(ObjectType& object, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
				public:
					template<typename... ARGS>
					static ArrayIteratorType EmplaceImpl(ArrayType& array, ARGS... args);
					template<typename... ARGS>
					static ObjectIteratorType EmplaceImpl(ObjectType& object, ARGS... args);
				public:
					static ArrayIteratorType EraseImpl(ArrayType& array, ArrayConstIteratorType position);
					static ObjectIteratorType EraseImpl(ObjectType& object, ObjectConstIteratorType position);
					static ArrayIteratorType EraseImpl(ArrayType& array, ArrayConstIteratorType first, ArrayConstIteratorType last);
					static ObjectIteratorType EraseImpl(ObjectType& object, ObjectConstIteratorType first, ObjectConstIteratorType last);
				public:
					static void ClearImpl(ArrayType& array);
					static void ClearImpl(ObjectType& object);
				public:
					static ArraySizeType SizeImpl(const ArrayType& array);
					static ObjectSizeType SizeImpl(const ObjectType& object);
				public:
					static ArrayValueType& ArraySubscriptImpl(ArrayType& array, const ArrayKeyType& key);
					static ObjectValueType& ArraySubscriptImpl(ObjectType& object, const ObjectKeyType& key);
					static const ArrayValueType& ArraySubscriptImpl(const ArrayType& array, const ArrayKeyType& key);
					static const ObjectValueType& ArraySubscriptImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static ArrayIteratorType FindImpl(ArrayType& array, const ArrayKeyType& key);
					static ObjectIteratorType FindImpl(ObjectType& object, const ObjectKeyType& key);
					static ArrayConstIteratorType FindImpl(const ArrayType& array, const ArrayKeyType& key);
					static ObjectConstIteratorType FindImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static void SwapImpl(ArrayType& array_a, ArrayType& array_b);
					static void SwapImpl(ObjectType& object_a, ObjectType& object_b);
				};

				typename Container::ArrayValueType& Container::ValueImpl(ArrayElementType& element)
				{
					return element;
				}

				typename Container::ObjectValueType& Container::ValueImpl(ObjectElementType& element)
				{
					return element.second;
				}

				const typename Container::ArrayValueType& Container::ValueImpl(const ArrayElementType& element)
				{
					return element;
				}

				const typename Container::ObjectValueType& Container::ValueImpl(const ObjectElementType& element)
				{
					return element.second;
				}


				template<>
				typename Container::ArrayKeyType Container::KeyImpl<true>(const ArrayType& array, const ArrayElementType& element)
				{
					static_assert(true, "in this case function KeyImpl no support for ArrayType");
					return 0;
				}

				template<>
				typename Container::ArrayKeyType Container::KeyImpl<false>(const ArrayType& array, const ArrayElementType& element)
				{
					ArrayKeyType key = 0;
					for (auto it : array)
					{
						if (it == element) break;
						key++;
					}
					return key;
				}

				template<>
				typename Container::ObjectKeyType Container::KeyImpl<true>(const ObjectType& object, const ObjectElementType& element)
				{
					return element.first;
				}

				template<>
				typename Container::ObjectKeyType Container::KeyImpl<false>(const ObjectType& object, const ObjectElementType& element)
				{
					static_assert(true, "in this case function KeyImpl no support for ObjectType");
					return 0;
				}


				typename Container::ArrayValueType& Container::AtImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return array.at(key);
				}

				const typename Container::ArrayValueType& Container::AtImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return array.at(key);
				}

				typename Container::ObjectValueType& Container::AtImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				const typename Container::ObjectValueType& Container::AtImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				typename Container::ArrayIteratorType Container::BeginImpl(ArrayType& array)
				{
					return array.begin();
				}

				typename Container::ObjectIteratorType Container::BeginImpl(ObjectType& object)
				{
					return object.begin();
				}

				typename Container::ArrayConstIteratorType Container::BeginImpl(const ArrayType& array)
				{
					return array.begin();
				}

				typename Container::ObjectConstIteratorType Container::BeginImpl(const ObjectType& object)
				{
					return object.begin();
				}

				typename Container::ArrayConstIteratorType Container::ConstBeginImpl(const ArrayType& array)
				{
					return array.cbegin();
				}

				typename Container::ObjectConstIteratorType Container::ConstBeginImpl(const ObjectType& object)
				{
					return object.cbegin();
				}

				typename Container::ArrayIteratorType Container::EndImpl(ArrayType& array)
				{
					return array.end();
				}

				typename Container::ObjectIteratorType Container::EndImpl(ObjectType& object)
				{
					return object.end();
				}

				typename Container::ArrayConstIteratorType Container::EndImpl(const ArrayType& array)
				{
					return array.end();
				}

				typename Container::ObjectConstIteratorType Container::EndImpl(const ObjectType& object)
				{
					return object.end();
				}

				typename Container::ArrayConstIteratorType Container::ConstEndImpl(const ArrayType& array)
				{
					return array.cbegin();
				}

				typename Container::ObjectConstIteratorType Container::ConstEndImpl(const ObjectType& object)
				{
					return object.cend();
				}

				typename Container::ArrayIteratorType Container::InsertImpl(ArrayType& array, const ArrayElementType& value)
				{
					return array.insert(array.end(), value);
				}

				typename Container::ObjectIteratorType Container::InsertImpl(ObjectType& object, const ObjectElementType& value)
				{
					return object.insert(object.end(), value);
				}

				template<typename INPUT_ITERATOR_TYPE>
				void Container::InsertImpl(ArrayType& array, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
				{
					array.insert(array.end(), first, last);
				}

				template<typename INPUT_ITERATOR_TYPE>
				void Container::InsertImpl(ObjectType& object, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
				{
					object.insert(first, last);
				}

				template<typename... ARGS>
				typename Container::ArrayIteratorType Container::EmplaceImpl(ArrayType& array, ARGS... args)
				{
					return array.emplace(array.end(), args...);
				}

				template<typename... ARGS>
				typename Container::ObjectIteratorType Container::EmplaceImpl(ObjectType& object, ARGS... args)
				{
					return object.emplace_hint(object.end(), args...);
				}

				typename Container::ArrayIteratorType Container::EraseImpl(ArrayType& array, ArrayConstIteratorType position)
				{
					return array.erase(position);
				}

				typename Container::ObjectIteratorType Container::EraseImpl(ObjectType& object, ObjectConstIteratorType position)
				{
					return object.erase(position);
				}

				typename Container::ArrayIteratorType Container::EraseImpl(ArrayType& array, ArrayConstIteratorType first, ArrayConstIteratorType last)
				{
					return array.erase(first, last);
				}

				typename Container::ObjectIteratorType Container::EraseImpl(ObjectType& object, ObjectConstIteratorType first, ObjectConstIteratorType last)
				{
					return object.erase(first, last);
				}

				void Container::ClearImpl(ArrayType& array)
				{
					array.clear();
				}

				void Container::ClearImpl(ObjectType& object)
				{
					object.clear();
				}

				typename Container::ArraySizeType Container::SizeImpl(const ArrayType& array)
				{
					return array.size();
				}

				typename Container::ObjectSizeType Container::SizeImpl(const ObjectType& object)
				{
					return object.size();
				}

				typename Container::ArrayValueType& Container::ArraySubscriptImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return array.operator[](key);
				}

				typename Container::ObjectValueType& Container::ArraySubscriptImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.operator[](key);
				}


				const typename Container::ArrayValueType& Container::ArraySubscriptImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return array.operator[](key);
				}

				const typename Container::ObjectValueType& Container::ArraySubscriptImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				typename Container::ArrayIteratorType Container::FindImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return key >= array.size() ? array.end() : array.begin() + key;
				}

				typename Container::ObjectIteratorType Container::FindImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.find(key);
				}

				typename Container::ArrayConstIteratorType Container::FindImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return key >= array.size() ? array.end() : array.begin() + key;
				}

				typename Container::ObjectConstIteratorType Container::FindImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.find(key);
				}

				void Container::SwapImpl(ArrayType& array_a, ArrayType& array_b)
				{
					array_a.swap(array_b);
				}

				void Container::SwapImpl(ObjectType& object_a, ObjectType& object_b)
				{
					object_a.swap(object_b);
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_CONTAINER_H_