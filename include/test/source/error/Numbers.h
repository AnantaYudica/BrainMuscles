#ifndef TEST_SOURCE_ERROR_NUMBERS_H_
#define TEST_SOURCE_ERROR_NUMBERS_H_

#ifdef _USING_TEST_SOURCE_

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace error
			{
				typedef unsigned char NumbersIntegerType;
				enum Numbers : NumbersIntegerType;
			}
		}
	}
}

enum BrainMuscles::test::source::error::Numbers :
	BrainMuscles::test::source::error::NumbersIntegerType
{
	not_base_of_source = 1,
	has_not_impl_test,
	has_error,
	has_not_completed
};


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ERROR_NUMBERS_H_