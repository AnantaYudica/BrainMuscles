#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\LongDouble.h"

#include "experiment\test\simple\json\value\number\LongDouble.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					namespace number
					{
						void LongDouble::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongDouble
							// with default initialization 
							BMTestSimple::json::value::number::LongDouble value_number_longdouble1;

							//check value between variable 'value_number_longdouble1' and 0 from int is same
							SourceAssert(value_number_longdouble1 == 0,
								"value variable 'value_number_longdouble1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongDouble
							// with direct initialization from 15.15 from long double
							BMTestSimple::json::value::number::LongDouble value_number_longdouble2(15.15L);

							//check value between variable 'value_number_longdouble2' and 15.15 from long double is same
							SourceAssert(value_number_longdouble2 == 15.15L,
								"value variable 'value_number_longdouble2' is not equal with 15.15 from long double");

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongDouble
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::LongDouble
							BMTestSimple::json::value::number::LongDouble value_number_longdouble3(value_number_longdouble2);

							//check value between variable 'value_number_longdouble3' and variable 'value_number_longdouble2' is same 
							SourceAssert(value_number_longdouble3 == value_number_longdouble2, 
								"value variable 'value_number_longdouble3' and variable 'value_number_longdouble2' is not same");

							//assignment variable 'value_number_longdouble1' with long double
							value_number_longdouble1 = 12.12L;

							//check value between variable 'value_number_longdouble1' and 12.12 from long double is same
							SourceAssert(value_number_longdouble1 == 12.12L,
								"value variable 'value_number_longdouble1' is not equal with 12.12 from long double");

							//declare reference variable of long double with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::LongDouble
							long double &reference_longdouble1 = value_number_longdouble1;

							//assignment reference variable 'reference_longdouble1' with long double
							reference_longdouble1 = 16.16L;

							//check value between reference variable 'reference_longdouble1' and 16.16 from long double is same
							SourceAssert(reference_longdouble1 == 16.16L,
								"value of reference variable 'reference_longdouble1' is not equal with 16.16 from long double");

							//check value between reference variable 'reference_longdouble1' and variable 'value_number_longdouble1' is same
							SourceAssert(reference_longdouble1 == value_number_longdouble1,
								"value of reference variable 'reference_longdouble1' and variable 'value_number_longdouble1' is not same");
						}
					}
				}
			}
		}
	}
}