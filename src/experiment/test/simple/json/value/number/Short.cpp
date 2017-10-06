#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Short.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Short.h"

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
						void Short::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void Short::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Short
							// with default initialization 
							BMTestSimple::json::value::number::Short value_number_short1;

							//check value between variable 'value_number_short1' and 0 from int is same
							SourceAssert(value_number_short1 == 0,
								"value variable 'value_number_short1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Short
							// with direct initialization from 15 from int
							BMTestSimple::json::value::number::Short value_number_short2(15);

							//check value between variable 'value_number_short2' and 15 from int is same
							SourceAssert(value_number_short2 == 15,
								"value variable 'value_number_short2' is not equal with 15 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Short
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Short
							BMTestSimple::json::value::number::Short value_number_short3(value_number_short2);

							//check value between variable 'value_number_short3' and variable 'value_number_short2' is same 
							SourceAssert(value_number_short3 == value_number_short2,
								"value variable 'value_number_short3' and variable 'value_number_short2' is not same");

							//assignment variable 'value_number_short1' with int
							value_number_short1 = 12;

							//check value between variable 'value_number_short1' and 12 from int is same
							SourceAssert(value_number_short1 == 12,
								"value variable 'value_number_short1' is not equal with 12 from int");

							//declare reference variable of short with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::Short
							short &reference_short1 = value_number_short1;

							//assignment reference variable 'reference_short1' with int
							reference_short1 = 16;

							//check value between reference variable 'reference_short1' and 16 from int is same
							SourceAssert(reference_short1 == 16,
								"value of reference variable 'reference_short1' is not equal with 16 from int");

							//check value between reference variable 'reference_short1' and variable 'value_number_short1' is same
							SourceAssert(reference_short1 == value_number_short1,
								"value of reference variable 'reference_short1' and variable 'value_number_short1' is not same");
						}
					}
				}
			}
		}
	}
}