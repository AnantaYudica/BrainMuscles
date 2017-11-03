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
				typedef char FlagsType;
				enum Flags;
				inline FlagsType TotalFlags();
			}
		}
	}
}


BrainMuscles::test::source::info::Flags : FlagsType
{
	assert_arguments = 1,
	assert_message = 2
};


inline FlagsType BrainMuscles::test::source::info::TotalFlags()
{
	return assert_arguments || assert_message;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_FLAGS_H_