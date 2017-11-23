#ifndef TEST_SOURCE_FUNCTION_FLAGS_H_
#define TEST_SOURCE_FUNCTION_FLAGS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace function
			{
				typedef unsigned short FlagsIntegerType;
				enum Flags : FlagsIntegerType;
			}
		}
	}
}

enum BrainMuscles::test::source::function::Flags :
	BrainMuscles::test::source::function::FlagsIntegerType
{
	unknown = 0,
	pre_test = 1,
	test = 2,
	post_test = 4,
	static_test = 8,
	call = 16,
	requirement = 32,
	info = 64,
	error = 128,
	assert = 256
};


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_FUNCTION_FLAGS_H_