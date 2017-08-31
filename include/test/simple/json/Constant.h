#ifndef TEST_SIMPLE_JSON_CONSTANT_H_
#define TEST_SIMPLE_JSON_CONSTANT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <memory>

#include "test\simple\json\Value.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				struct Constant final
				{
					Constant() = delete;
				public:
					typedef BrainMuscles::test::simple::json::Value		ValueType;
					typedef std::shared_ptr<ValueType>					PointerValueType;
				};
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_CONSTANT_H_