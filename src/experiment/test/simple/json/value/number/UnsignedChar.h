#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_

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
						struct UnsignedChar final :
							public BrainMuscles::test::Source<UnsignedChar>
						{
							friend class BrainMuscles::test::Source<UnsignedChar>;
						private:
							UnsignedChar() = default;
						public:
							static void Test();
						};
					}
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_