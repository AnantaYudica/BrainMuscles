#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				struct Value;
			}
		}
	}
}

struct experiment::test::simple::json::Value final :
	public BrainMuscles::test::Source<Value>
{
	friend class BrainMuscles::test::Source<Value>;
private:
	Value() = default;
public:
	static void Test();
	static void PostTest();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_H_