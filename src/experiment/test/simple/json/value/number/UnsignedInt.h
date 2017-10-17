#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_

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
						struct UnsignedInt;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::UnsignedInt final :
	public BrainMuscles::test::Source<UnsignedInt>
{
	friend class BrainMuscles::test::Source<UnsignedInt>;
private:
	UnsignedInt() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_