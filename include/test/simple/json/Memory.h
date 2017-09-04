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
				template<typename VALUE_TYPE>
				class Memory
				{
				public:
					typedef std::shared_ptr<VALUE_TYPE>			SharedPointerType;
				protected:
					Memory() = default;
				public:
					virtual ~Memory() = default;
				public:
					virtual SharedPointerType MakeShared() const = 0;
				public:
					template<typename TO_TYPE>
					static typename Memory<TO_TYPE>::SharedPointerType DynamicPointerCast(const SharedPointerType& pointer);
					template<typename TO_TYPE>
					static typename Memory<TO_TYPE>::SharedPointerType StaticPointerCast(const SharedPointerType& pointer);
					template<typename TO_TYPE>
					static typename Memory<TO_TYPE>::SharedPointerType ConstPointerCast(const SharedPointerType& pointer);
				};

				template<typename VALUE_TYPE>
				template<typename TO_TYPE>
				static typename Memory<TO_TYPE>::SharedPointerType 
					Memory<VALUE_TYPE>::DynamicPointerCast(const SharedPointerType& pointer)
				{
					return std::dynamic_pointer_cast<TO_TYPE>(pointer);
				}
				
				template<typename VALUE_TYPE>
				template<typename TO_TYPE>
				static typename Memory<TO_TYPE>::SharedPointerType 
					Memory<VALUE_TYPE>::StaticPointerCast(const SharedPointerType& pointer)
				{
					return std::static_pointer_cast<TO_TYPE>(pointer);
				}
				
				template<typename VALUE_TYPE>
				template<typename TO_TYPE>
				static typename Memory<TO_TYPE>::SharedPointerType 
					Memory<VALUE_TYPE>::ConstPointerCast(const SharedPointerType& pointer)
				{
					return std::const_pointer_cast<TO_TYPE>(pointer);
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_MEMORY_H_