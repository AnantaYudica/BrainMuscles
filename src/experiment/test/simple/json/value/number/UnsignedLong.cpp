#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedLong.h"

#include "experiment\test\simple\json\value\number\UnsignedLong.h"

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
						void UnsignedLong::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLong
							// with default initialization 
							BMTestSimple::json::value::number::UnsignedLong value_number_unsignedlong1;

							//check value between variable 'value_number_unsignedlong1' and 0 from int is same
							SourceAssert(value_number_unsignedlong1 == 0,
								"value variable 'value_number_unsignedlong1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLong
							// with direct initialization from 15 from unsigned long
							BMTestSimple::json::value::number::UnsignedLong value_number_unsignedlong2(15UL);

							//check value between variable 'value_number_unsignedlong2' and 15 from unsigned long is same
							SourceAssert(value_number_unsignedlong2 == 15UL,
								"value variable 'value_number_unsignedlong2' is not equal with 15 from unsigned long");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLong
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::UnsignedLong
							BMTestSimple::json::value::number::UnsignedLong value_number_unsignedlong3(value_number_unsignedlong2);

							//check value between variable 'value_number_unsignedlong3' and variable 'value_number_unsignedlong2' is same 
							SourceAssert(value_number_unsignedlong3 == value_number_unsignedlong2,
								"value variable 'value_number_unsignedlong3' and variable 'value_number_unsignedlong2' is not same");

							//assignment variable 'value_number_unsignedlong1' with unsigned long
							value_number_unsignedlong1 = 12UL;

							//check value between variable 'value_number_unsignedlong1' and 12 from unsigned long is same
							SourceAssert(value_number_unsignedlong1 == 12UL,
								"value variable 'value_number_unsignedlong1' is not equal with 12 from unsigned long");

							//declare reference variable of unsigned long with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::UnsignedLong
							unsigned long &reference_unsignedlong1 = value_number_unsignedlong1;

							//assignment reference variable 'reference_unsignedlong1' with unsigned long
							reference_unsignedlong1 = 16UL;

							//check value between reference variable 'reference_unsignedlong1' and 16 from unsigned long is same
							SourceAssert(reference_unsignedlong1 == 16UL,
								"value of reference variable 'reference_unsignedlong1' is not equal with 16 from unsigned long");

							//check value between reference variable 'reference_unsignedlong1' and variable 'value_number_unsignedlong1' is same
							SourceAssert(reference_unsignedlong1 == value_number_unsignedlong1,
								"value of reference variable 'reference_unsignedlong1' and variable 'value_number_unsignedlong1' is not same");
						}
					}
				}
			}
		}
	}
}