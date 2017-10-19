#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_TRUE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_TRUE_H_

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
					struct True;
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::True final :
	public BrainMuscles::test::Source<True>
{
	friend class BrainMuscles::test::Source<True>;
private:
	True() = default;
public:
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_TRUE_H_