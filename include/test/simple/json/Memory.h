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
				};
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_MEMORY_H_