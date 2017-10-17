#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_

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
						struct Long;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::Long final :
	public BrainMuscles::test::Source<Long>
{
	friend class BrainMuscles::test::Source<Long>;
private:
	Long() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_