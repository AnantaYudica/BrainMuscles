#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_

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
						struct Int final :
							public BrainMuscles::test::Source<Int>
						{
							friend class BrainMuscles::test::Source<Int>;
						private:
							Int() = default;
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

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_