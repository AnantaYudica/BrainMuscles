#ifndef TEST_SIMPLE_JSON_MEMORY_H_
#define TEST_SIMPLE_JSON_MEMORY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>
#include <memory>

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				class Memory final
				{
				public:
					template<typename TYPE>
					using SharedPointerType = std::shared_ptr<TYPE>;
				private:
					template<typename TYPE>
					static std::true_type IsBaseOfSharedPointerImpl(const SharedPointerType<TYPE>&);
					static std::false_type IsBaseOfSharedPointerImpl(...);
				public:
					template<typename TYPE>
					using IsBaseOfSharedPointer = decltype(IsBaseOfSharedPointerImpl(std::declval<TYPE>()));
				private:
					Memory() = delete;
				private:
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static void DynamicPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer);
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static void StaticPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer);
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static void ConstPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer);
				public:
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						DynamicPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer);

					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						DynamicPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
				public:
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						StaticPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer);

					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						StaticPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
				public:
					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						ConstPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
					static typename std::enable_if<IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
						ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer);

					template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						ConstPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer);

					template<typename FROM_TYPE, typename TO_TYPE>
					static typename std::enable_if<!IsBaseOfSharedPointer<TO_TYPE>::value, SharedPointerType<TO_TYPE>>::type
						ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
				};

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				void Memory::DynamicPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer)
				{
					ref_pointer_to_sharedpointer = std::dynamic_pointer_cast<TO_TYPE>(from_sharedpointer);
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				void Memory::StaticPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer)
				{
					ref_pointer_to_sharedpointer = std::static_pointer_cast<TO_TYPE>(from_sharedpointer);
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				void Memory::ConstPointerCastImpl(const FROM_SHAREDPOINTER_TYPE& from_sharedpointer, SharedPointerType<TO_TYPE>& ref_pointer_to_sharedpointer)
				{
					ref_pointer_to_sharedpointer = std::const_pointer_cast<TO_TYPE>(from_sharedpointer);
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::DynamicPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					DynamicPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					DynamicPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::DynamicPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					DynamicPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					DynamicPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}
				
				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::StaticPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					StaticPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					StaticPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::StaticPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					StaticPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					StaticPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::ConstPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					ConstPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_SHAREDPOINTER_TYPE>
				typename std::enable_if<Memory::IsBaseOfSharedPointer<TO_SHAREDPOINTER_TYPE>::value, TO_SHAREDPOINTER_TYPE>::type
					Memory::ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					TO_SHAREDPOINTER_TYPE pointer_to_sharedpointer;
					ConstPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_SHAREDPOINTER_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::ConstPointerCast(const FROM_SHAREDPOINTER_TYPE& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					ConstPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}

				template<typename FROM_TYPE, typename TO_TYPE>
				typename std::enable_if<!Memory::IsBaseOfSharedPointer<TO_TYPE>::value, Memory::SharedPointerType<TO_TYPE>>::type
					Memory::ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					Memory::SharedPointerType<TO_TYPE> pointer_to_sharedpointer;
					ConstPointerCastImpl(pointer, pointer_to_sharedpointer);
					return pointer_to_sharedpointer;
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_MEMORY_H_