#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_

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
						struct Char final :
							public BrainMuscles::test::Source<Char>
						{
							friend class BrainMuscles::test::Source<Char>;
						private:
							Char() = default;
						public:
							static void Test();
						};
					}
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_