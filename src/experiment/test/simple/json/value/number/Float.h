#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_

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
						struct Float;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::Float final :
	public BrainMuscles::test::Source<Float>
{
	friend class BrainMuscles::test::Source<Float>;
private:
	Float() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_