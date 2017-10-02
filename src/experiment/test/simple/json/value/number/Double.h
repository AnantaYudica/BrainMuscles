#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_

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
						struct Double final :
							public BrainMuscles::test::Source<Double>
						{
							friend class BrainMuscles::test::Source<Double>;
						private:
							Double() = default;
						public:
							static void Test();
						};
					}
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_