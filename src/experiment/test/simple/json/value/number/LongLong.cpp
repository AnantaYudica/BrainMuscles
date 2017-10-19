#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\LongLong.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\LongLong.h"

void experiment::test::simple::json::value::number::LongLong::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::LongLong::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with default initialization 
	JsonValueNumber::LongLong value_number_longlong1;

	//	Check variable 'value_number_longlong1'
	//	is 0 of int
	SourceAssert(value_number_longlong1 == 0,
		"variable 'value_number_longlong1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with direct initialization from 15 of long long
	JsonValueNumber::LongLong value_number_longlong2(15LL);

	//	Check variable 'value_number_longlong2' 
	//	is 15 of long long
	SourceAssert(value_number_longlong2 == 15LL,
		"variable 'value_number_longlong2' is not 15 of long long");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with copy initialization from variable 'value_number_longlong2'
	JsonValueNumber::LongLong
		value_number_longlong3(value_number_longlong2);

	//	Check compare variable between 
	//		variable 'value_number_longlong3' 
	//	and variable 'value_number_longlong2' 
	//	is same 
	SourceAssert(value_number_longlong3 == value_number_longlong2,
		"compare variable between variable 'value_number_longlong3' and "
		"variable 'value_number_longlong2' is not same");

	//	Assignment variable 'value_number_longlong1' with 12 of long long
	value_number_longlong1 = 12LL;

	//	Check variable 'value_number_longlong1' 
	//	is 12 of long long
	SourceAssert(value_number_longlong1 == 12LL,
		"variable 'value_number_longlong1' is not equal 12 of long long");

	//	Declare reference variable of long long 
	//		with reference initialization from 
	//			variable 'value_number_longlong1'
	long long &reference_longlong1 = value_number_longlong1;

	//	Assignment reference variable 'reference_longlong1' 
	//	with 16 of long long
	reference_longlong1 = 16LL;

	//	Check reference variable 'reference_longlong1' 
	//	is 16 of long long
	SourceAssert(reference_longlong1 == 16LL,
		"reference variable 'reference_longlong1' is not 16 of long long");

	//	check compare variable between 
	//		reference variable 'reference_longlong1' 
	//	and variable 'value_number_longlong1' 
	//	is same
	SourceAssert(reference_longlong1 == value_number_longlong1,
		"compare variable between  reference variable 'reference_longlong1' "
		"and variable 'value_number_longlong1' is not same");
}