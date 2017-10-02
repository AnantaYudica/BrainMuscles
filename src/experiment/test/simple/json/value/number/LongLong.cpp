#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\LongLong.h"

#include "experiment\test\simple\json\value\number\LongLong.h"

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
						void LongLong::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongLong
							// with default initialization 
							BMTestSimple::json::value::number::LongLong value_number_longlong1;

							//check value between variable 'value_number_longlong1' and 0 from int is same
							SourceAssert(value_number_longlong1 == 0,
								"value variable 'value_number_longlong1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongLong
							// with direct initialization from 15 from long long
							BMTestSimple::json::value::number::LongLong value_number_longlong2(15LL);

							//check value between variable 'value_number_longlong2' and 15 from long long is same
							SourceAssert(value_number_longlong2 == 15LL,
								"value variable 'value_number_longlong2' is not equal with 15 from long long");

							//declare variable of class BrainMuscles::test::simple::json::value::number::LongLong
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::LongLong
							BMTestSimple::json::value::number::LongLong value_number_longlong3(value_number_longlong2);

							//check value between variable 'value_number_longlong3' and variable 'value_number_longlong2' is same 
							SourceAssert(value_number_longlong3 == value_number_longlong2,
								"value variable 'value_number_longlong3' and variable 'value_number_longlong2' is not same");

							//assignment variable 'value_number_longlong1' with long long
							value_number_longlong1 = 12LL;

							//check value between variable 'value_number_longlong1' and 12 from long long is same
							SourceAssert(value_number_longlong1 == 12LL,
								"value variable 'value_number_longlong1' is not equal with 12 from long long");

							//declare reference variable of long long with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::LongLong
							long long &reference_longlong1 = value_number_longlong1;

							//assignment reference variable 'reference_longlong1' with long long
							reference_longlong1 = 16LL;

							//check value between reference variable 'reference_longlong1' and 16 from long long is same
							SourceAssert(reference_longlong1 == 16LL,
								"value of reference variable 'reference_longlong1' is not equal with 16 from long long");

							//check value between reference variable 'reference_longlong1' and variable 'value_number_longlong1' is same
							SourceAssert(reference_longlong1 == value_number_longlong1,
								"value of reference variable 'reference_longlong1' and variable 'value_number_longlong1' is not same");
						}
					}
				}
			}
		}
	}
}