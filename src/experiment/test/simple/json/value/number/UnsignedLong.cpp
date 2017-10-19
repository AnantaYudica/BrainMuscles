#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedLong.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedLong.h"

void experiment::test::simple::json::value::number::UnsignedLong::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::UnsignedLong::Test()
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
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with default initialization 
	JsonValueNumber::UnsignedLong value_number_unsignedlong1;

	//	Check variable 'value_number_unsignedlong1' 
	//	is 0 of int
	SourceAssert(value_number_unsignedlong1 == 0,
		"variable 'value_number_unsignedlong1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with direct initialization from 15 of unsigned long
	JsonValueNumber::UnsignedLong value_number_unsignedlong2(15UL);

	//	Check variable 'value_number_unsignedlong2' 
	//	is 15 of unsigned long
	SourceAssert(value_number_unsignedlong2 == 15UL,
		"variable 'value_number_unsignedlong2' is not 15 of unsigned long");

	//	Dclare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with copy initialization from variable 'value_number_unsignedlong2'
	JsonValueNumber::UnsignedLong 
		value_number_unsignedlong3(value_number_unsignedlong2);

	//	Check compare variable between 
	//		variable 'value_number_unsignedlong3' 
	//	and variable 'value_number_unsignedlong2' 
	//	is same 
	SourceAssert(value_number_unsignedlong3 == value_number_unsignedlong2,
		"compare variable between variable 'value_number_unsignedlong3' and "
		"variable 'value_number_unsignedlong2' is not same");

	//	Assignment variable 'value_number_unsignedlong1' 
	//	with 12 of unsigned long
	value_number_unsignedlong1 = 12UL;

	//	Check variable 'value_number_unsignedlong1' 
	//	is 12 of unsigned long
	SourceAssert(value_number_unsignedlong1 == 12UL,
		"variable 'value_number_unsignedlong1' is not 12 of unsigned long");

	//	Declare reference variable of unsigned long 
	//		with reference initialization from
	//			variable 'value_number_unsignedlong1'
	unsigned long &reference_unsignedlong1 = value_number_unsignedlong1;

	//	Assignment reference variable 'reference_unsignedlong1' 
	//	with 16 of unsigned long
	reference_unsignedlong1 = 16UL;

	//	Check reference variable 'reference_unsignedlong1' 
	//	is 16 of unsigned long
	SourceAssert(reference_unsignedlong1 == 16UL,
		"reference variable 'reference_unsignedlong1' "
		"is not 16 of unsigned long");

	//	Check compare variable between 
	//		reference variable 'reference_unsignedlong1' 
	//	and variable 'value_number_unsignedlong1' 
	//	is same
	SourceAssert(reference_unsignedlong1 == value_number_unsignedlong1,
		"compare variable between "
		"reference variable 'reference_unsignedlong1' "
		"and variable 'value_number_unsignedlong1' is not same");
}