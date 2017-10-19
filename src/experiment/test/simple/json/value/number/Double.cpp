#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Double.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Double.h"

void experiment::test::simple::json::value::number::Double::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::Double::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	 with default initialization
	JsonValueNumber::Double value_number_double1;

	//	Check variable 'value_number_double1' 
	//	is 0 of int
	SourceAssert(value_number_double1 == 0,
		"variable 'value_number_double1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with direct initialization from 15.15 of double
	JsonValueNumber::Double value_number_double2(15.15);

	//	Check variable 'value_number_double2' 
	//	is 15.15 of double
	SourceAssert(value_number_double2 == 15.15,
		"variable 'value_number_double2' is not 15.15 of double");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with copy initialization from variable 'value_number_double2'
	JsonValueNumber::Double value_number_double3(value_number_double2);

	//	Check compare variable between 
	//		variable 'value_number_double3' 
	//	and variable 'value_number_double2' 
	//	is same 
	SourceAssert(value_number_double3 == value_number_double2,
		"compare variable between variable 'value_number_double3' "
		"and variable 'value_number_double2' is not same ");

	//	Asignment variable 'value_number_double1' with 12.12 of double
	value_number_double1 = 12.12;

	//	Check variable 'value_number_double1' 
	//	is 12.12 of double
	SourceAssert(value_number_double1 == 12.12,
		"variable 'value_number_double1' is not 12.12 of double");

	//	Declare reference variable of double 
	//	with reference initialization from 
	//		variable 'value_number_double1'
	double &reference_double1 = value_number_double1;

	//	Assignment reference variable 'reference_double1' 
	//	with 16.16 of double
	reference_double1 = 16.16;

	//	Check reference variable 'reference_double1'
	//	is 16.16 of double
	SourceAssert(reference_double1 == 16.16,
		"reference variable 'reference_double1' is not 16.16 of double ");

	//	Check compare variable between 
	//		reference variable 'reference_double1' 
	//	and variable 'value_number_double1' 
	//	is same
	SourceAssert(reference_double1 == value_number_double1,
		"compare variable between reference variable 'reference_double1' "
		"and variable 'value_number_double1' is not same");
}