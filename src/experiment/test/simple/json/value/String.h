#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_STRING_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_STRING_H_

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
					struct String;
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::String final :
	public BrainMuscles::test::Source<String>
{
	friend class BrainMuscles::test::Source<String>;
private:
	String() = default;
public:
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_STRING_H_