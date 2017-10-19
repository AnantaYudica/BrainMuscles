#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Long.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Long.h"

void experiment::test::simple::json::value::number::Long::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::Long::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with default initialization 
	JsonValueNumber::Long value_number_long1;

	//	Check variable 'value_number_long1' 
	//	is 0 of int
	SourceAssert(value_number_long1 == 0,
		"variable 'value_number_long1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with direct initialization from 15 of long
	JsonValueNumber::Long value_number_long2(15L);

	//	Check variable 'value_number_long2' 
	//	is 15 of long
	SourceAssert(value_number_long2 == 15L,
		"variable 'value_number_long2' is not 15 of long");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with copy initialization from variable 'value_number_long2'
	JsonValueNumber::Long value_number_long3(value_number_long2);

	//	Check compare variable between 
	//		variable 'value_number_long3' 
	//	and variable 'value_number_long2' 
	//	is same 
	SourceAssert(value_number_long3 == value_number_long2,
		"compare variable between variable 'value_number_long3' and "
		"variable 'value_number_long2' is not same");

	//	Assignment variable 'value_number_long1' with 12 of long
	value_number_long1 = 12L;

	//	Check variable 'value_number_long1' 
	//	is 12 of long
	SourceAssert(value_number_long1 == 12L,
		"variable 'value_number_long1' is not 12 of long");

	//	Declare reference variable of Long 
	//		with reference initialization from
	//			variable 'value_number_long1'
	long &reference_long1 = value_number_long1;

	//	Assignment reference variable 'reference_long1' with 16 of long
	reference_long1 = 16L;

	//	Check reference variable 'reference_long1' 
	//	is 16 of long
	SourceAssert(reference_long1 == 16L,
		"reference variable 'reference_long1' is not 16 of long");

	//	Check compare variable between 
	//		reference variable 'reference_long1' 
	//	and variable 'value_number_long1' 
	//	is same
	SourceAssert(reference_long1 == value_number_long1,
		"compare variable between reference variable 'reference_long1' and "
		"variable 'value_number_long1' is not same");
}