#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_

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
						struct LongLong final :
							public BrainMuscles::test::Source<LongLong>
						{
							friend class BrainMuscles::test::Source<LongLong>;
						private:
							LongLong() = default;
						public:
							static void PreTest();
							static void Test();
						};
					}
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_