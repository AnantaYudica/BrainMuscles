#ifndef TEST_SOURCE_STATUS_FLAGS_H_
#define TEST_SOURCE_STATUS_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace status
			{
				typedef unsigned char FlagsIntegerType;
				enum Flags : FlagsIntegerType;
			}
		}
	}
}

enum BrainMuscles::test::source::status::Flags :
	BrainMuscles::test::source::status::FlagsIntegerType
{
	pass,
	error,
	not_test,
	not_completed
};

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_STATUS_FLAGS_H_