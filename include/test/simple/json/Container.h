#ifndef TEST_SIMPLE_JSON_CONTAINER_H_
#define TEST_SIMPLE_JSON_CONTAINER_H_

#include "test/Configure.h"

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
					static inline ArrayValueType& ValueImpl(ArrayElementType& element);
					static inline ObjectValueType& ValueImpl(ObjectElementType& element);
					static inline const ArrayValueType& ValueImpl(const ArrayElementType& element);
					static inline const ObjectValueType& ValueImpl(const ObjectElementType& element);
				public:
					template<bool IS_ARRAY_HAS_KEY_IN_ELEMENT = ArrayHasKeyInElement>
					static inline ArrayKeyType KeyImpl(const ArrayType& array, const ArrayElementType& element);
					template<bool IS_OBJECT_HAS_KEY_IN_ELEMENT = ObjectHasKeyInElement>
					static inline ObjectKeyType KeyImpl(const ObjectType& object, const ObjectElementType& element);
				public:
					static inline ArrayValueType& AtImpl(ArrayType& array, const ArrayKeyType& key);
					static inline const ArrayValueType& AtImpl(const ArrayType& array, const ArrayKeyType& key);
				public:
					static inline ObjectValueType& AtImpl(ObjectType& object, const ObjectKeyType& key);
					static inline const ObjectValueType& AtImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static inline ArrayIteratorType BeginImpl(ArrayType& array);
					static inline ObjectIteratorType BeginImpl(ObjectType& object);
					static inline ArrayConstIteratorType BeginImpl(const ArrayType& array);
					static inline ObjectConstIteratorType BeginImpl(const ObjectType& object);
					static inline ArrayConstIteratorType ConstBeginImpl(const ArrayType& array);
					static inline ObjectConstIteratorType ConstBeginImpl(const ObjectType& object);
					static inline ArrayIteratorType EndImpl(ArrayType& array);
					static inline ObjectIteratorType EndImpl(ObjectType& object);
					static inline ArrayConstIteratorType EndImpl(const ArrayType& array);
					static inline ObjectConstIteratorType EndImpl(const ObjectType& object);
					static inline ArrayConstIteratorType ConstEndImpl(const ArrayType& array);
					static inline ObjectConstIteratorType ConstEndImpl(const ObjectType& object);
				public:
					static inline ArrayIteratorType InsertImpl(ArrayType& array, const ArrayElementType& value);
					static inline ObjectIteratorType InsertImpl(ObjectType& object, const ObjectElementType& value);
					template<typename INPUT_ITERATOR_TYPE>
					static inline void InsertImpl(ArrayType& array, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
					template<typename INPUT_ITERATOR_TYPE>
					static inline void InsertImpl(ObjectType& object, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last);
				public:
					template<typename... ARGS>
					static inline ArrayIteratorType EmplaceImpl(ArrayType& array, ARGS... args);
					template<typename... ARGS>
					static inline ObjectIteratorType EmplaceImpl(ObjectType& object, ARGS... args);
				public:
					static inline ArrayIteratorType EraseImpl(ArrayType& array, ArrayConstIteratorType position);
					static inline ObjectIteratorType EraseImpl(ObjectType& object, ObjectConstIteratorType position);
					static inline ArrayIteratorType EraseImpl(ArrayType& array, ArrayConstIteratorType first, ArrayConstIteratorType last);
					static inline ObjectIteratorType EraseImpl(ObjectType& object, ObjectConstIteratorType first, ObjectConstIteratorType last);
				public:
					static inline void ClearImpl(ArrayType& array);
					static inline void ClearImpl(ObjectType& object);
				public:
					static inline ArraySizeType SizeImpl(const ArrayType& array);
					static inline ObjectSizeType SizeImpl(const ObjectType& object);
				public:
					static inline ArrayValueType& ArraySubscriptImpl(ArrayType& array, const ArrayKeyType& key);
					static inline ObjectValueType& ArraySubscriptImpl(ObjectType& object, const ObjectKeyType& key);
					static inline const ArrayValueType& ArraySubscriptImpl(const ArrayType& array, const ArrayKeyType& key);
					static inline const ObjectValueType& ArraySubscriptImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static inline ArrayIteratorType FindImpl(ArrayType& array, const ArrayKeyType& key);
					static inline ObjectIteratorType FindImpl(ObjectType& object, const ObjectKeyType& key);
					static inline ArrayConstIteratorType FindImpl(const ArrayType& array, const ArrayKeyType& key);
					static inline ObjectConstIteratorType FindImpl(const ObjectType& object, const ObjectKeyType& key);
				public:
					static inline void SwapImpl(ArrayType& array_a, ArrayType& array_b);
					static inline void SwapImpl(ObjectType& object_a, ObjectType& object_b);
				};

				inline typename Container::ArrayValueType& Container::ValueImpl(ArrayElementType& element)
				{
					return element;
				}

				inline typename Container::ObjectValueType& Container::ValueImpl(ObjectElementType& element)
				{
					return element.second;
				}

				inline const typename Container::ArrayValueType& Container::ValueImpl(const ArrayElementType& element)
				{
					return element;
				}

				inline const typename Container::ObjectValueType& Container::ValueImpl(const ObjectElementType& element)
				{
					return element.second;
				}


				template<>
				inline typename Container::ArrayKeyType Container::KeyImpl<true>(const ArrayType& array, const ArrayElementType& element)
				{
					static_assert(true, "in this case function KeyImpl no support for ArrayType");
					return 0;
				}

				template<>
				inline typename Container::ArrayKeyType Container::KeyImpl<false>(const ArrayType& array, const ArrayElementType& element)
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
				inline typename Container::ObjectKeyType Container::KeyImpl<true>(const ObjectType& object, const ObjectElementType& element)
				{
					return element.first;
				}

				template<>
				inline typename Container::ObjectKeyType Container::KeyImpl<false>(const ObjectType& object, const ObjectElementType& element)
				{
					static_assert(true, "in this case function KeyImpl no support for ObjectType");
					return 0;
				}


				inline typename Container::ArrayValueType& Container::AtImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return array.at(key);
				}

				inline const typename Container::ArrayValueType& Container::AtImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return array.at(key);
				}

				inline typename Container::ObjectValueType& Container::AtImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				inline const typename Container::ObjectValueType& Container::AtImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				inline typename Container::ArrayIteratorType Container::BeginImpl(ArrayType& array)
				{
					return array.begin();
				}

				inline typename Container::ObjectIteratorType Container::BeginImpl(ObjectType& object)
				{
					return object.begin();
				}

				inline typename Container::ArrayConstIteratorType Container::BeginImpl(const ArrayType& array)
				{
					return array.begin();
				}

				inline typename Container::ObjectConstIteratorType Container::BeginImpl(const ObjectType& object)
				{
					return object.begin();
				}

				inline typename Container::ArrayConstIteratorType Container::ConstBeginImpl(const ArrayType& array)
				{
					return array.cbegin();
				}

				inline typename Container::ObjectConstIteratorType Container::ConstBeginImpl(const ObjectType& object)
				{
					return object.cbegin();
				}

				inline typename Container::ArrayIteratorType Container::EndImpl(ArrayType& array)
				{
					return array.end();
				}

				inline typename Container::ObjectIteratorType Container::EndImpl(ObjectType& object)
				{
					return object.end();
				}

				inline typename Container::ArrayConstIteratorType Container::EndImpl(const ArrayType& array)
				{
					return array.end();
				}

				inline typename Container::ObjectConstIteratorType Container::EndImpl(const ObjectType& object)
				{
					return object.end();
				}

				inline typename Container::ArrayConstIteratorType Container::ConstEndImpl(const ArrayType& array)
				{
					return array.cbegin();
				}

				inline typename Container::ObjectConstIteratorType Container::ConstEndImpl(const ObjectType& object)
				{
					return object.cend();
				}

				inline typename Container::ArrayIteratorType Container::InsertImpl(ArrayType& array, const ArrayElementType& value)
				{
					return array.insert(array.end(), value);
				}

				inline typename Container::ObjectIteratorType Container::InsertImpl(ObjectType& object, const ObjectElementType& value)
				{
					return object.insert(object.end(), value);
				}

				template<typename INPUT_ITERATOR_TYPE>
				inline void Container::InsertImpl(ArrayType& array, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
				{
					array.insert(array.end(), first, last);
				}

				template<typename INPUT_ITERATOR_TYPE>
				inline void Container::InsertImpl(ObjectType& object, INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last)
				{
					object.insert(first, last);
				}

				template<typename... ARGS>
				inline typename Container::ArrayIteratorType Container::EmplaceImpl(ArrayType& array, ARGS... args)
				{
					return array.emplace(array.end(), args...);
				}

				template<typename... ARGS>
				inline typename Container::ObjectIteratorType Container::EmplaceImpl(ObjectType& object, ARGS... args)
				{
					return object.emplace_hint(object.end(), args...);
				}

				inline typename Container::ArrayIteratorType Container::EraseImpl(ArrayType& array, ArrayConstIteratorType position)
				{
					return array.erase(position);
				}

				inline typename Container::ObjectIteratorType Container::EraseImpl(ObjectType& object, ObjectConstIteratorType position)
				{
					return object.erase(position);
				}

				inline typename Container::ArrayIteratorType Container::EraseImpl(ArrayType& array, ArrayConstIteratorType first, ArrayConstIteratorType last)
				{
					return array.erase(first, last);
				}

				inline typename Container::ObjectIteratorType Container::EraseImpl(ObjectType& object, ObjectConstIteratorType first, ObjectConstIteratorType last)
				{
					return object.erase(first, last);
				}

				inline void Container::ClearImpl(ArrayType& array)
				{
					array.clear();
				}

				inline void Container::ClearImpl(ObjectType& object)
				{
					object.clear();
				}

				inline typename Container::ArraySizeType Container::SizeImpl(const ArrayType& array)
				{
					return array.size();
				}

				inline typename Container::ObjectSizeType Container::SizeImpl(const ObjectType& object)
				{
					return object.size();
				}

				inline typename Container::ArrayValueType& Container::ArraySubscriptImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return array.operator[](key);
				}

				inline typename Container::ObjectValueType& Container::ArraySubscriptImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.operator[](key);
				}


				inline const typename Container::ArrayValueType& Container::ArraySubscriptImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return array.operator[](key);
				}

				inline const typename Container::ObjectValueType& Container::ArraySubscriptImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.at(key);
				}

				inline typename Container::ArrayIteratorType Container::FindImpl(ArrayType& array, const ArrayKeyType& key)
				{
					return key >= array.size() ? array.end() : array.begin() + key;
				}

				inline typename Container::ObjectIteratorType Container::FindImpl(ObjectType& object, const ObjectKeyType& key)
				{
					return object.find(key);
				}

				inline typename Container::ArrayConstIteratorType Container::FindImpl(const ArrayType& array, const ArrayKeyType& key)
				{
					return key >= array.size() ? array.end() : array.begin() + key;
				}

				inline typename Container::ObjectConstIteratorType Container::FindImpl(const ObjectType& object, const ObjectKeyType& key)
				{
					return object.find(key);
				}

				inline void Container::SwapImpl(ArrayType& array_a, ArrayType& array_b)
				{
					array_a.swap(array_b);
				}

				inline void Container::SwapImpl(ObjectType& object_a, ObjectType& object_b)
				{
					object_a.swap(object_b);
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_CONTAINER_H_