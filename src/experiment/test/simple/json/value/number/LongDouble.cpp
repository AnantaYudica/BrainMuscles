#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\LongDouble.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\LongDouble.h"

void experiment::test::simple::json::value::number::LongDouble::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::LongDouble::Test()
{
	//	Declare namespace from 
	//		'BrainMuscles::test::simple'
	//	to 
	//		'BMTestSimple'
	namespace BMTestSimple = BrainMuscles::test::simple;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json'
	//	to 
	//		'Json'
	namespace Json = BMTestSimple::json;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value'
	//	to 
	//		'JsonValue'
	namespace JsonValue = Json::value;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value::number'
	//	to 
	//		'JsonValueNumber'
	namespace JsonValueNumber = JsonValue::number;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with default initialization 
	JsonValueNumber::LongDouble value_number_longdouble1;

	//	Check variable 'value_number_longdouble1' 
	//	is 0 of int
	SourceAssert(value_number_longdouble1 == 0,
		"variable 'value_number_longdouble1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with direct initialization from 15.15 of long double
	JsonValueNumber::LongDouble value_number_longdouble2(15.15L);

	//	Check variable 'value_number_longdouble2' 
	//	is 15.15 of long double
	SourceAssert(value_number_longdouble2 == 15.15L,
		"variable 'value_number_longdouble2' is not 15.15 of long double");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with copy initialization from variable 'value_number_longdouble2'
	JsonValueNumber::LongDouble 
		value_number_longdouble3(value_number_longdouble2);

	//	Check compare variable between 
	//		variable 'value_number_longdouble3' 
	//	and variable 'value_number_longdouble2' 
	//	is same 
	SourceAssert(value_number_longdouble3 == value_number_longdouble2,
		"compare variable between  variable 'value_number_longdouble3' and "
		"variable 'value_number_longdouble2' is not same");

	//	Assignment variable 'value_number_longdouble1' 
	//	with 12.12 of long double
	value_number_longdouble1 = 12.12L;

	//	Check variable 'value_number_longdouble1' 
	//	is 12.12 of long double
	SourceAssert(value_number_longdouble1 == 12.12L,
		"variable 'value_number_longdouble1' is not 12.12 of long double");

	//	Declare reference variable of long double
	//	with reference initialization from 
	//		variable 'value_number_longdouble1'
	long double &reference_longdouble1 = value_number_longdouble1;

	//	Assignment reference variable 'reference_longdouble1' 
	//	with 16.16 of long double
	reference_longdouble1 = 16.16L;

	//	Check reference variable 'reference_longdouble1' 
	//	is 16.16 of long double
	SourceAssert(reference_longdouble1 == 16.16L,
		"reference variable 'reference_longdouble1' "
		"is not 16.16 of long double");

	//	Check compare variable between 
	//		reference variable 'reference_longdouble1' 
	//	and variable 'value_number_longdouble1' 
	//	is same
	SourceAssert(reference_longdouble1 == value_number_longdouble1,
		"compare variable between reference variable 'reference_longdouble1' "
		"and variable 'value_number_longdouble1' is not same");
}