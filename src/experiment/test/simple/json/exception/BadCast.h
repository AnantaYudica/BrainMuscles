#ifndef EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace exception
				{
					struct BadCast final :
						public BrainMuscles::test::Source<BadCast>
					{
						friend class BrainMuscles::test::Source<BadCast>;
					private:
						BadCast() = default;
					public:
						static void Test();
						static void StaticTest();
					};
				}
			}
		}
	}
}

#endif //EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_BADCAST_H_