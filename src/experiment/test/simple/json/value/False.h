#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_FALSE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_FALSE_H_

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
					struct False final :
						public BrainMuscles::test::Source<False>
					{
						friend class BrainMuscles::test::Source<False>;
					private:
						False() = default;
					public:
						static void Test();
					};
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_FALSE_H_