#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedLongLong.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedLongLong.h"

void experiment::test::simple::json::value::number::UnsignedLongLong::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::UnsignedLongLong::Test()
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
	//			::number::UnsignedLongLong'
	//	with default initialization 
	JsonValueNumber::UnsignedLongLong value_number_unsignedlonglong1;

	//	Check variable 'value_number_unsignedlonglong1' 
	//	is 0 of int
	SourceAssert(value_number_unsignedlonglong1 == 0,
		"variable 'value_number_unsignedlonglong1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with direct initialization from 15 of unsigned long long
	JsonValueNumber::UnsignedLongLong value_number_unsignedlonglong2(15ULL);

	//	Check variable 'value_number_unsignedlonglong2'
	//	is 15 of unsigned long long 
	SourceAssert(value_number_unsignedlonglong2 == 15ULL,
		"variable 'value_number_unsignedlonglong2' "
		"is not 15 of unsigned long long");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with copy initialization from variable 'value_number_unsignedlonglong2'
	JsonValueNumber::UnsignedLongLong 
		value_number_unsignedlonglong3(value_number_unsignedlonglong2);

	//	Check compare variable between 
	//		variable 'value_number_unsignedlonglong3'
	//	and variable 'value_number_unsignedlonglong2' 
	//	is same 
	SourceAssert(value_number_unsignedlonglong3 
			== value_number_unsignedlonglong2,
		"compare variable between variable 'value_number_unsignedlonglong3' "
		"and variable 'value_number_unsignedlonglong2' is not same");

	//	Assignment variable 'value_number_unsignedlonglong1' 
	//	with 12 of unsigned long long
	value_number_unsignedlonglong1 = 12ULL;

	//	Check variable 'value_number_unsignedlonglong1' 
	//	is 12 of unsigned long long
	SourceAssert(value_number_unsignedlonglong1 == 12ULL,
		"variable 'value_number_unsignedlonglong1' "
		"is not 12 of unsigned long long");

	//	Declare reference variable of unsigned long long 
	//		with reference initialization from
	//			variable 'value_number_unsignedlonglong1'
	unsigned long long &reference_unsignedlonglong1 
		= value_number_unsignedlonglong1;

	//	Assignment reference variable 'reference_unsignedlonglong1' 
	//	with 16 of unsigned long long
	reference_unsignedlonglong1 = 16ULL;

	//	Check reference variable 'reference_unsignedlonglong1' 
	//	is 16 of unsigned long long
	SourceAssert(reference_unsignedlonglong1 == 16ULL,
		"reference variable 'reference_unsignedlonglong1' "
		"is not 16 of unsigned long long");

	//	Check compare variable between 
	//		reference variable 'reference_unsignedlonglong1' 
	//	and variable 'value_number_unsignedlonglong1' 
	//	is same
	SourceAssert(reference_unsignedlonglong1 == value_number_unsignedlonglong1,
		"compare variable between "
		"reference variable 'reference_unsignedlonglong1' "
		"and variable 'value_number_unsignedlonglong1' is not same");
}