#ifndef TEST_SOURCE_INFO_FLAGS_H_
#define TEST_SOURCE_INFO_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace info
			{
				typedef unsigned char FlagsIntegerType;
				enum Flags;
			}
		}
	}
}

enum BrainMuscles::test::source::info::Flags : 
	BrainMuscles::test::source::info::FlagsIntegerType
{
	assert_arguments = 1,
	assert_message = 2
};

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_FLAGS_H_