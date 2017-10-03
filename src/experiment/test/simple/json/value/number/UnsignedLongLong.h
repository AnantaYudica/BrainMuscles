#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_

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
						struct UnsignedLongLong final :
							public BrainMuscles::test::Source<UnsignedLongLong>
						{
							friend class BrainMuscles::test::Source<UnsignedLongLong>;
						private:
							UnsignedLongLong() = default;
						public:
							static void Test();
						};
					}
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_