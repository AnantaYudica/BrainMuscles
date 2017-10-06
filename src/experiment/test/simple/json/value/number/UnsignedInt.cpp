#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedInt.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedInt.h"

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
						void UnsignedInt::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void UnsignedInt::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedInt
							// with default initialization 
							BMTestSimple::json::value::number::UnsignedInt value_number_unsignedint1;

							//check value between variable 'value_number_unsignedint1' and 0 from int is same
							SourceAssert(value_number_unsignedint1 == 0,
								"value variable 'value_number_unsignedint1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedInt
							// with direct initialization from 15 from unsigned int
							BMTestSimple::json::value::number::UnsignedInt value_number_unsignedint2(15U);

							//check value between variable 'value_number_unsignedint2' and 15 from unsigned int is same
							SourceAssert(value_number_unsignedint2 == 15U,
								"value variable 'value_number_unsignedint2' is not equal with 15 from unsigned int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedInt
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::UnsignedInt
							BMTestSimple::json::value::number::UnsignedInt value_number_unsignedint3(value_number_unsignedint2);

							//check value between variable 'value_number_unsignedint3' and variable 'value_number_unsignedint2' is same 
							SourceAssert(value_number_unsignedint3 == value_number_unsignedint2,
								"value variable 'value_number_unsignedint3' and variable 'value_number_unsignedint2' is not same");

							//assignment variable 'value_number_unsignedint1' with unsigned int
							value_number_unsignedint1 = 12U;

							//check value between variable 'value_number_unsignedint1' and 12 from unsigned int is same
							SourceAssert(value_number_unsignedint1 == 12U,
								"value variable 'value_number_unsignedint1' is not equal with 12 from unsigned int");

							//declare reference variable of unsigned int with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::UnsignedInt
							unsigned int &reference_unsignedint1 = value_number_unsignedint1;

							//assignment reference variable 'reference_unsignedint1' with unsigned int
							reference_unsignedint1 = 16U;

							//check value between reference variable 'reference_unsignedint1' and 16 from unsigned int is same
							SourceAssert(reference_unsignedint1 == 16U,
								"value of reference variable 'reference_unsignedint1' is not equal with 16 from unsigned int");

							//check value between reference variable 'reference_unsignedint1' and variable 'value_number_unsignedint1' is same
							SourceAssert(reference_unsignedint1 == value_number_unsignedint1,
								"value of reference variable 'reference_unsignedint1' and variable 'value_number_unsignedint1' is not same");
						}
					}
				}
			}
		}
	}
}