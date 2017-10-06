#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedChar.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedChar.h"

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
						void UnsignedChar::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void UnsignedChar::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedChar
							// with default initialization 
							BMTestSimple::json::value::number::UnsignedChar value_number_unsginedchar1;

							//check value between variable 'value_number_unsginedchar1' and 0 from int is same
							SourceAssert(value_number_unsginedchar1 == 0,
								"value variable 'value_number_unsginedchar1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedChar
							// with direct initialization from 15 from unsigned int
							BMTestSimple::json::value::number::UnsignedChar value_number_unsignedchar2(15U);

							//check value between variable 'value_number_unsignedchar2' and 15 from unsigned int is same
							SourceAssert(value_number_unsignedchar2 == 15U,
								"value variable 'value_number_unsignedchar2' is not equal with 15 from unsigned int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedChar
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::UnsignedChar
							BMTestSimple::json::value::number::UnsignedChar value_number_unsignedchar3(value_number_unsignedchar2);

							//check value between variable 'value_number_unsignedchar3' and variable 'value_number_unsignedchar2' is same 
							SourceAssert(value_number_unsignedchar3 == value_number_unsignedchar2,
								"value variable 'value_number_unsignedchar3' and variable 'value_number_unsignedchar2' is not same");

							//assignment variable 'value_number_unsginedchar1' with unsigned int
							value_number_unsginedchar1 = 12U;

							//check value between variable 'value_number_unsginedchar1' and 12 from unsigned int is same
							SourceAssert(value_number_unsginedchar1 == 12U,
								"value variable 'value_number_unsginedchar1' is not equal with 12 from unsigned int");

							//declare reference variable of unsigned char with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::UnsignedChar
							unsigned char &reference_unsignedchar1 = value_number_unsginedchar1;

							//assignment reference variable 'reference_unsignedchar1' with unsigned int
							reference_unsignedchar1 = 16U;

							//check value between reference variable 'reference_unsignedchar1' and 16 from unsigned int is same
							SourceAssert(reference_unsignedchar1 == 16U,
								"value of reference variable 'reference_unsignedchar1' is not equal with 16 from unsigned int");

							//check value between reference variable 'reference_unsignedchar1' and variable 'value_number_unsginedchar1' is same
							SourceAssert(reference_unsignedchar1 == value_number_unsginedchar1,
								"value of reference variable 'reference_unsignedchar1' and variable 'value_number_unsginedchar1' is not same");
						}
					}
				}
			}
		}
	}
}