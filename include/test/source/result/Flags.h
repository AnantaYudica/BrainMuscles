#ifndef TEST_SOURCE_RESULT_FLAGS_H_
#define TEST_SOURCE_RESULT_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace result
			{
				typedef unsigned char FlagsType;
				enum Flags;
			}
		}
	}
}

enum BrainMuscles::test::source::result::Flags :
	BrainMuscles::test::source::result::FlagsType
{
	pass,
	error,
	not_test,
	not_completed
};

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_RESULT_FLAGS_H_