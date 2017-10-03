#ifndef TEST_SOURCE_STAGE_H_
#define TEST_SOURCE_STAGE_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			enum Stage
			{
				not_test,
				pre_test,
				test,
				post_test
			};
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_STAGE_H_