#ifndef TEST_SOURCE_RESULT_H_
#define TEST_SOURCE_RESULT_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			enum Result
			{
				pass,
				error,
				not_test,
				test,
			};
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_RESULT_H_