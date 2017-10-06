#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedShort.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedShort.h"

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
						void UnsignedShort::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void UnsignedShort::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedShort
							// with default initialization 
							BMTestSimple::json::value::number::UnsignedShort value_number_unsignedshort1;

							//check value between variable 'value_number_unsignedshort1' and 0 from int is same
							SourceAssert(value_number_unsignedshort1 == 0,
								"value variable 'value_number_unsignedshort1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedShort
							// with direct initialization from 15 from unsigned int
							BMTestSimple::json::value::number::UnsignedShort value_number_unsignedshort2(15U);

							//check value between variable 'value_number_unsignedshort2' and 15 from unsigned int is same
							SourceAssert(value_number_unsignedshort2 == 15U,
								"value variable 'value_number_unsignedshort2' is not equal with 15 from unsigned int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedShort
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::UnsignedShort
							BMTestSimple::json::value::number::UnsignedShort value_number_unsignedshort3(value_number_unsignedshort2);

							//check value between variable 'value_number_unsignedshort3' and variable 'value_number_unsignedshort2' is same 
							SourceAssert(value_number_unsignedshort3 == value_number_unsignedshort2,
								"value variable 'value_number_unsignedshort3' and variable 'value_number_unsignedshort2' is not same");

							//assignment variable 'value_number_unsignedshort1' with unsigned int
							value_number_unsignedshort1 = 12U;

							//check value between variable 'value_number_unsignedshort1' and 12 from unsigned int is same
							SourceAssert(value_number_unsignedshort1 == 12U,
								"value variable 'value_number_unsignedshort1' is not equal with 12 from unsigned int");

							//declare reference variable of unsigned short with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::UnsignedShort
							unsigned short &reference_usignedshort1 = value_number_unsignedshort1;

							//assignment reference variable 'reference_usignedshort1' with unsigned int
							reference_usignedshort1 = 16U;

							//check value between reference variable 'reference_usignedshort1' and 16 from unsigned int is same
							SourceAssert(reference_usignedshort1 == 16U,
								"value of reference variable 'reference_usignedshort1' is not equal with 16 from unsigned int");

							//check value between reference variable 'reference_usignedshort1' and variable 'value_number_unsignedshort1' is same
							SourceAssert(reference_usignedshort1 == value_number_unsignedshort1,
								"value of reference variable 'reference_usignedshort1' and variable 'value_number_unsignedshort1' is not same");
						}
					}
				}
			}
		}
	}
}