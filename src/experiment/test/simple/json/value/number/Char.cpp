#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Char.h"

#include "experiment\test\simple\json\value\number\Char.h"

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
						void Char::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::Char
							// with default initialization
							BMTestSimple::json::value::number::Char value_number_char1;

							//check value between variable 'value_number_char1' and 0 from int is same
							SourceAssert(value_number_char1 == 0, 
								"value variable of 'value_number_char1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Char
							// with direct initialization from copy initialization of int  
							BMTestSimple::json::value::number::Char value_number_char2(15);

							//check value between variable of 'value_number_char2' and 15 from int is same
							SourceAssert(value_number_char2 == 15,
								"value variable of 'value_number_char2' is not equal with 15 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::Char
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::Char
							BMTestSimple::json::value::number::Char value_number_char3(value_number_char2);

							//check value between variable 'value_number_char3' and variable 'value_number_char2' is same
							SourceAssert(value_number_char3 == value_number_char2,
								"value variable 'value_number_char3' is not same with value variable 'value_number_char2'");

							//assignment variable 'value_number_char1' with int
							value_number_char1 = 12;

							//check value between variable 'value_number_char1' and 12 from int is same
							SourceAssert(value_number_char1 == 12,
								"value variable 'value_number_char1' is not equal with 12 from int");

							//declare reference variable of char 
							// with copy initialization from class BrainMuscles::test::simple::json::value::number::Char
							char &reference_char1 = value_number_char1;

							//assignment variable 'value_number_char1' with int
							reference_char1 = 16;

							//check value between variable 'value_number_char1' and 16 from int is same
							SourceAssert(reference_char1 == 16,
								"value variable 'reference_char1' is not equal with 16 from int");

							//check value between variable 'value_number_char1' 
							// and reference variable 'reference_char1' is same
							SourceAssert(reference_char1 == value_number_char1,
								"value variable 'reference_char1' and reference variable 'reference_char1' is not same");
						}
					}
				}
			}
		}
	}
}