#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Char.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Char.h"

void experiment::test::simple::json::value::number::Char::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::Char::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with default initialization
	JsonValueNumber::Char value_number_char1;

	//	Check variable 'value_number_char1' 
	//	is 0 of int
	SourceAssert(value_number_char1 == 0,
		"variable 'value_number_char1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with direct initialization from 15 of int
	JsonValueNumber::Char value_number_char2(15);

	//	Check variable 'value_number_char2'
	//	is 15 of int
	SourceAssert(value_number_char2 == 15,
		"variable 'value_number_char2' is not 15 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with copy initialization from variable 'value_number_char2'
	JsonValueNumber::Char value_number_char3(value_number_char2);

	//	Check compare variable between
	//		variable 'value_number_char3'
	//	and variable 'value_number_char2'
	//	is same
	SourceAssert(value_number_char3 == value_number_char2,
		"compare variable between variable 'value_number_char3' "
		"and variable 'value_number_char2' is not same");

	//	Assignment variable 'value_number_char1' with 12 of int
	value_number_char1 = 12;

	//	Check variable 'value_number_char1' 
	//	is 12 of int
	SourceAssert(value_number_char1 == 12,
		"variable 'value_number_char1' is not 12 of int");

	//	declare reference variable of char 
	//	with reference initialization from 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	char &reference_char1 = value_number_char1;

	//	Assignment reference variable 'reference_char1' with 
	//	16 of int
	reference_char1 = 16;

	//	Check reference variable 'value_number_char1' 
	//	is 16 of int
	SourceAssert(reference_char1 == 16,
		"reference variable 'value_number_char1' is not 16 of int");

	//	Check compare variable between 
	//		reference variable 'reference_char1' 
	//	 and variable 'value_number_char1' 
	//	is same
	SourceAssert(reference_char1 == value_number_char1,
		"compare variable between reference variable 'reference_char1' "
		" and variable 'value_number_char1' is not same");
}