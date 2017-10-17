#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_

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
						struct UnsignedLong;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::UnsignedLong final :
	public BrainMuscles::test::Source<UnsignedLong>
{
	friend class BrainMuscles::test::Source<UnsignedLong>;
private:
	UnsignedLong() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_