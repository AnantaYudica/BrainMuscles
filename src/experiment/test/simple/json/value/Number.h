#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_H_

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
					struct Number final :
						public BrainMuscles::test::Source<Number>
					{
						friend class BrainMuscles::test::Source<Number>;
					private:
						Number() = default;
					public:
						static void PreTest();
						static void Test();
						static void PostTest();
					};
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_H_