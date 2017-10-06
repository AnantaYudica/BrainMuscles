#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedLongLong.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedLongLong.h"

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
						void UnsignedLongLong::PreTest()
						{
							SourceRequirement(experiment::test::simple::json::value::Number);
						}

						void UnsignedLongLong::Test()
						{
							//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
							namespace BMTestSimple = BrainMuscles::test::simple;

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							// with default initialization 
							BMTestSimple::json::value::number::UnsignedLongLong value_number_unsignedlonglong1;

							//check value between variable 'value_number_unsignedlonglong1' and 0 from int is same
							SourceAssert(value_number_unsignedlonglong1 == 0,
								"value variable 'value_number_unsignedlonglong1' is not equal with 0 from int");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							// with direct initialization from 15 from unsigned long long
							BMTestSimple::json::value::number::UnsignedLongLong value_number_unsignedlonglong2(15ULL);

							//check value between variable 'value_number_unsignedlonglong2' and 15 from unsigned long long is same
							SourceAssert(value_number_unsignedlonglong2 == 15ULL,
								"value variable 'value_number_unsignedlonglong2' is not equal with 15 from unsigned long long");

							//declare variable of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							// with copy initialization from variable of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							BMTestSimple::json::value::number::UnsignedLongLong value_number_unsignedlonglong3(value_number_unsignedlonglong2);

							//check value between variable 'value_number_unsignedlonglong3' and variable 'value_number_unsignedlonglong2' is same 
							SourceAssert(value_number_unsignedlonglong3 == value_number_unsignedlonglong2,
								"value variable 'value_number_unsignedlonglong3' and variable 'value_number_unsignedlonglong2' is not same");

							//assignment variable 'value_number_unsignedlonglong1' with unsigned long long
							value_number_unsignedlonglong1 = 12ULL;

							//check value between variable 'value_number_unsignedlonglong1' and 12 from unsigned long long is same
							SourceAssert(value_number_unsignedlonglong1 == 12ULL,
								"value variable 'value_number_unsignedlonglong1' is not equal with 12 from unsigned long long");

							//declare reference variable of unsigned long long with reference initialization 
							// from class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							unsigned long long &reference_unsignedlonglong1 = value_number_unsignedlonglong1;

							//assignment reference variable 'reference_unsignedlonglong1' with unsigned long long
							reference_unsignedlonglong1 = 16ULL;

							//check value between reference variable 'reference_unsignedlonglong1' and 16 from unsigned long long is same
							SourceAssert(reference_unsignedlonglong1 == 16ULL,
								"value of reference variable 'reference_unsignedlonglong1' is not equal with 16 from unsigned long long");

							//check value between reference variable 'reference_unsignedlonglong1' and variable 'value_number_unsignedlonglong1' is same
							SourceAssert(reference_unsignedlonglong1 == value_number_unsignedlonglong1,
								"value of reference variable 'reference_unsignedlonglong1' and variable 'value_number_unsignedlonglong1' is not same");
						}
					}
				}
			}
		}
	}
}