#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_OBJECT_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_OBJECT_H_

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
					struct Object;
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::Object final :
	public BrainMuscles::test::Source<Object>
{
	friend class BrainMuscles::test::Source<Object>;
private:
	Object() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_OBJECT_H_