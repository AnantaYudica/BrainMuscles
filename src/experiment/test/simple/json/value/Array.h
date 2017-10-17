#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_ARRAY_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_ARRAY_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					struct Array;
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::Array final :
	public BrainMuscles::test::Source<Array>
{
	friend class BrainMuscles::test::Source<Array>;
private:
	Array() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_ARRAY_H_