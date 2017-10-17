#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_

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
					namespace number
					{
						struct Short;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::Short final :
	public BrainMuscles::test::Source<Short>
{
	friend class BrainMuscles::test::Source<Short>;
private:
	Short() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_