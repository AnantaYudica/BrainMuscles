#ifndef TEST_SOURCE_TASK_FLAGS_H_
#define TEST_SOURCE_TASK_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace task
			{
				typedef unsigned char FlagsIntegerType;
				enum Flags;
			}
		}
	}
}

enum BrainMuscles::test::source::task::Flags :
	BrainMuscles::test::source::task::FlagsIntegerType
{
	test = 1,
	static_test = 2
};

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_FLAGS_H_