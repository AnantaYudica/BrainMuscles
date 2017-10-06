#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Long.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Long.h"

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
						void Long::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void Long::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Long
							// with default initialization 
							BMTestSimple::json::value::number::Long value_number_long1;

							//check value between variable 'value_number_long1' and 0 from int is same
							SourceAssert(value_number_long1 == 0,
								"value variable 'value_number_long1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Long
							// with direct initialization from 15 from long
							BMTestSimple::json::value::number::Long value_number_long2(15L);

							//check value between variable 'value_number_long2' and 15 from long is same
							SourceAssert(value_number_long2 == 15L,
								"value variable 'value_number_long2' is not equal with 15 from long");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Long
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Long
							BMTestSimple::json::value::number::Long value_number_long3(value_number_long2);

							//check value between variable 'value_number_long3' and variable 'value_number_long2' is same 
							SourceAssert(value_number_long3 == value_number_long2,
								"value variable 'value_number_long3' and variable 'value_number_long2' is not same");

							//assignment variable 'value_number_long1' with long
							value_number_long1 = 12L;

							//check value between variable 'value_number_long1' and 12 from long is same
							SourceAssert(value_number_long1 == 12L,
								"value variable 'value_number_long1' is not equal with 12 from long");

							//declare reference variable of Long with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::Long
							long &reference_long1 = value_number_long1;

							//assignment reference variable 'reference_long1' with long
							reference_long1 = 16L;

							//check value between reference variable 'reference_long1' and 16 from long is same
							SourceAssert(reference_long1 == 16L,
								"value of reference variable 'reference_long1' is not equal with 16 from long");

							//check value between reference variable 'reference_long1' and variable 'value_number_long1' is same
							SourceAssert(reference_long1 == value_number_long1,
								"value of reference variable 'reference_long1' and variable 'value_number_long1' is not same");
						}
					}
				}
			}
		}
	}
}