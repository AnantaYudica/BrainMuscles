#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedShort.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedShort.h"

void experiment::test::simple::json::value::number::UnsignedShort::PreTest()
{
	//	Call function static member 'Requirement' from 
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::UnsignedShort::Test()
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
	//			::number::UnsignedShort'
	//	with default initialization 
	JsonValueNumber::UnsignedShort value_number_unsignedshort1;

	//	Check variable 'value_number_unsignedshort1' 
	//	is 0 of int
	SourceAssert(value_number_unsignedshort1 == 0,
		"variable 'value_number_unsignedshort1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with direct initialization from 15 of unsigned int
	JsonValueNumber::UnsignedShort value_number_unsignedshort2(15U);

	//	Check variable 'value_number_unsignedshort2' 
	//	is 15 of unsigned int
	SourceAssert(value_number_unsignedshort2 == 15U,
		"variable 'value_number_unsignedshort2' is not 15 of unsigned int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with copy initialization from variable 'value_number_unsignedshort2'
	JsonValueNumber::UnsignedShort 
		value_number_unsignedshort3(value_number_unsignedshort2);

	//	Check compare variable between 
	//		variable 'value_number_unsignedshort3' 
	//	and variable 'value_number_unsignedshort2' 
	//	is same 
	SourceAssert(value_number_unsignedshort3 == value_number_unsignedshort2,
		"compare variable between variable 'value_number_unsignedshort3' and "
		"variable 'value_number_unsignedshort2' is not same");

	//	Assignment variable 'value_number_unsignedshort1' 
	//	with 12 of unsigned int
	value_number_unsignedshort1 = 12U;

	//	Check variable 'value_number_unsignedshort1'
	//	is 12 of unsigned int
	SourceAssert(value_number_unsignedshort1 == 12U,
		"variable 'value_number_unsignedshort1' is not 12 of unsigned int");

	//	Declare reference variable of unsigned short 
	//		with reference initialization from
	//			variable 'value_number_unsignedshort1'
	unsigned short &reference_usignedshort1 = value_number_unsignedshort1;

	//	Assignment reference variable 'reference_usignedshort1' 
	//	with 16 of unsigned int
	reference_usignedshort1 = 16U;

	//	Check reference variable 'reference_usignedshort1'
	//	is 16 of unsigned int 
	SourceAssert(reference_usignedshort1 == 16U,
		"reference variable 'reference_usignedshort1' "
		"is not 16 of unsigned int");

	//	Check compare variable between 
	//		reference variable 'reference_usignedshort1' 
	//	and variable 'value_number_unsignedshort1' 
	//	is same
	SourceAssert(reference_usignedshort1 == value_number_unsignedshort1,
		"compare variable between "
		"reference variable 'reference_usignedshort1' "
		"and variable 'value_number_unsignedshort1' is not same");
}