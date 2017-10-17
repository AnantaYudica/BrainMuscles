#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NULL_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NULL_H_

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
					struct Null;
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::Null final :
	public BrainMuscles::test::Source<Null>
{
	friend class BrainMuscles::test::Source<Null>;
private:
	Null() = default;
public:
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NULL_H_