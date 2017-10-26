#ifndef EXPERIMENT_TEST_SIMPLE_JSON_HELPER_VALUE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_HELPER_VALUE_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace helper
				{
					struct Value;
				}
			}
		}
	}
}

struct experiment::test::simple::json::helper::Value final :
	public BrainMuscles::test::Source<Value>
{
	friend class BrainMuscles::test::Source<Value>;
private:
	Value() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_HELPER_VALUE_H_