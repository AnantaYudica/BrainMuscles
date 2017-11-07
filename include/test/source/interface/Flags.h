#ifndef TEST_SOURCE_INTERFACE_FLAGS_H_
#define TEST_SOURCE_INTERFACE_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace interface
			{
				typedef unsigned char FlagsIntegerType;
				enum Flags;
			}
		}
	}
}

enum BrainMuscles::test::source::interface::Flags :
	BrainMuscles::test::source::interface::FlagsIntegerType
{
	pre_test = 1,
	test = 2,
	post_test = 4,
	static_test = 8 
};

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INTERFACE_FLAGS_H_