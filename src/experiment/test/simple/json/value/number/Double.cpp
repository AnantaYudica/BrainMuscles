#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Double.h"

#include "experiment\test\simple\json\value\number\Double.h"

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
						void Double::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Double
							// with default initialization
							BMTestSimple::json::value::number::Double value_number_double1;

							//check value between variable 'value_number_double1' and 0 from int is same
							SourceAssert(value_number_double1 == 0,
								"value variable 'value_number_double1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Double
							// with direct initialization from 15.15 from double
							BMTestSimple::json::value::number::Double value_number_double2(15.15);

							//check value between variable 'value_number_double2' and 15.15 from double is same
							SourceAssert(value_number_double2 == 15.15,
								"value variable 'value_number_double2' is not equal with 15.15 from double");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Double
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Double
							BMTestSimple::json::value::number::Double value_number_double3(value_number_double2);

							//check value between variable 'value_number_double3' and variable 'value_number_double2' is same 
							SourceAssert(value_number_double3 == value_number_double2,
								"value variable 'value_number_double3' and variable 'value_number_double2' is not same ");

							//assignment variable 'value_number_double1' with double
							value_number_double1 = 12.12;

							//check value between variable 'value_number_double1' and 12.12 from double is same
							SourceAssert(value_number_double1 == 12.12,
								"value variable 'value_number_double1' is not equal with 12.12 from double");

							//declare reference variable of double with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::Double
							double &reference_double1 = value_number_double1;

							//assignment reference variable 'reference_double1' with double
							reference_double1 = 16.16;

							//check value between reference variable 'reference_double1' and 16.16 from double is same
							SourceAssert(reference_double1 == 16.16,
								"value of reference variable 'reference_double1' is not equal with 16.16 from double");

							//check value between reference variable 'reference_double1' and variable 'value_number_double1' is same
							SourceAssert(reference_double1 == value_number_double1,
								"value of reference variable 'reference_double1' and variable 'value_number_double1' is not same");
						}
					}
				}
			}
		}
	}
}