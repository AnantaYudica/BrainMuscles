#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_

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
						struct LongDouble;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::LongDouble final :
	public BrainMuscles::test::Source<LongDouble>
{
	friend class BrainMuscles::test::Source<LongDouble>;
private:
	LongDouble() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_