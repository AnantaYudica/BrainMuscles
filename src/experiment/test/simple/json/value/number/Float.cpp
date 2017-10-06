#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Float.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Float.h"

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
						void Float::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void Float::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Float
							// with default initialization 
							BMTestSimple::json::value::number::Float value_number_float1;

							//check value between variable 'value_number_float1' and 0 from int is same
							SourceAssert(value_number_float1 == 0,
								"value variable 'value_number_float1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Float
							// with direct initialization from 15.15 from float
							BMTestSimple::json::value::number::Float value_number_float2(15.15f);

							//check value between variable 'value_number_float2' and 15.15 from float is same
							SourceAssert(value_number_float2 == 15.15f,
								"value variable 'value_number_float2' is not equal with 15.15 from float");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Float
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Float
							BMTestSimple::json::value::number::Float value_number_float3(value_number_float2);

							//check value between variable 'value_number_float3' and variable 'value_number_float2' is same 
							SourceAssert(value_number_float3 == value_number_float2,
								"value variable 'value_number_float3' and variable 'value_number_float2' is not same");

							//assignment variable 'value_number_float1' with float
							value_number_float1 = 12.12f;

							//check value between variable 'value_number_float1' and 12.12 from float is same
							SourceAssert(value_number_float1 == 12.12f,
								"value variable 'value_number_float1' is not equal with 12.12 from float");

							//declare reference variable of float with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::Float
							float &reference_float1 = value_number_float1;

							//assignment reference variable 'reference_float1' with float
							reference_float1 = 16.16f;

							//check value between reference variable 'reference_float1' and 16.16 from float is same
							SourceAssert(reference_float1 == 16.16f,
								"value of reference variable 'reference_float1' is not equal with 16.16 from float");

							//check value between reference variable 'reference_float1' and variable 'value_number_float1' is same
							SourceAssert(reference_float1 == value_number_float1,
								"value of reference variable 'reference_float1' and variable 'value_number_float1' is not same");
						}
					}
				}
			}
		}
	}
}