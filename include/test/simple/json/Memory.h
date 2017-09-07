#ifndef TEST_SIMPLE_JSON_MEMORY_H_
#define TEST_SIMPLE_JSON_MEMORY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

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
					Memory() = delete;
				public:
					template<typename FROM_TYPE, typename TO_TYPE>
					static SharedPointerType<TO_TYPE> DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
					template<typename FROM_TYPE, typename TO_TYPE>
					static SharedPointerType<TO_TYPE> StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
					template<typename FROM_TYPE, typename TO_TYPE>
					static SharedPointerType<TO_TYPE> ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer);
				};

				template<typename FROM_TYPE, typename TO_TYPE>
				typename Memory::SharedPointerType<TO_TYPE>
					Memory::DynamicPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					return std::dynamic_pointer_cast<TO_TYPE>(pointer);
				}
				
				template<typename FROM_TYPE, typename TO_TYPE>
				typename Memory::SharedPointerType<TO_TYPE>
					Memory::StaticPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					return std::static_pointer_cast<TO_TYPE>(pointer);
				}
				
				template<typename FROM_TYPE, typename TO_TYPE>
				typename Memory::SharedPointerType<TO_TYPE>
					Memory::ConstPointerCast(const SharedPointerType<FROM_TYPE>& pointer)
				{
					return std::const_pointer_cast<TO_TYPE>(pointer);
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_MEMORY_H_