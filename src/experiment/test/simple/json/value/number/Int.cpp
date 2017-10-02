#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Int.h"

#include "experiment\test\simple\json\value\number\Int.h"

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
						void Int::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Int
							// with default initialization 
							BMTestSimple::json::value::number::Int value_number_int1;

							//check value between variable 'value_number_int1 ==' and 0 from int is same
							SourceAssert(value_number_int1 == 0,
								"value variable 'value_number_int1 ==' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Int
							// with direct initialization from 15 from int
							BMTestSimple::json::value::number::Int value_number_int2(15);

							//check value between variable 'value_number_int2' and 15 from int is same
							SourceAssert(value_number_int2 == 15,
								"value variable 'value_number_int2' is not equal with 15 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Int
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Int
							BMTestSimple::json::value::number::Int value_number_int3(value_number_int2);

							//check value between variable 'value_number_int3' and variable 'value_number_int2' is same 
							SourceAssert(value_number_int3 == value_number_int2,
								"value variable 'value_number_int3' and variable 'value_number_int2' is not same");

							//assignment variable 'value_number_int1' with int
							value_number_int1 = 12;

							//check value between variable 'value_number_int1' and 12 from int is same
							SourceAssert(value_number_int1 == 12,
								"value variable 'value_number_int1' is not equal with 12 from int");

							//declare reference variable of int with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::Int
							int &reference_int1 = value_number_int1;

							//assignment reference variable 'reference_int1' with int
							reference_int1 = 16;

							//check value between reference variable 'reference_int1' and 16 from int is same
							SourceAssert(reference_int1 == 16,
								"value of reference variable 'reference_int1' is not equal with 16 from int");

							//check value between reference variable 'reference_int1' and variable 'value_number_int1' is same
							SourceAssert(reference_int1 == value_number_int1,
								"value of reference variable 'reference_int1' and variable 'value_number_int1' is not same");
						}
					}
				}
			}
		}
	}
}