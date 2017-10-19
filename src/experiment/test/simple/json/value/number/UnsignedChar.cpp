#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\UnsignedChar.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\UnsignedChar.h"

void experiment::test::simple::json::value::number::UnsignedChar::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::UnsignedChar::Test()
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
	//			::number::UnsignedChar'
	// with default initialization 
	JsonValueNumber::UnsignedChar value_number_unsginedchar1;

	//	Check variable 'value_number_unsginedchar1' 
	//	is 0 of int
	SourceAssert(value_number_unsginedchar1 == 0,
		"variable 'value_number_unsginedchar1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with direct initialization from 15 of unsigned int
	JsonValueNumber::UnsignedChar value_number_unsignedchar2(15U);

	//	Check variable 'value_number_unsignedchar2' 
	//	is 15 of unsigned int
	SourceAssert(value_number_unsignedchar2 == 15U,
		"variable 'value_number_unsignedchar2' is not 15 of unsigned int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with copy initialization from variable 'value_number_unsignedchar2'
	JsonValueNumber::UnsignedChar 
		value_number_unsignedchar3(value_number_unsignedchar2);

	//	Check compare variable between 
	//		variable 'value_number_unsignedchar3' 
	//	and variable 'value_number_unsignedchar2' 
	//	is same 
	SourceAssert(value_number_unsignedchar3 == value_number_unsignedchar2,
		"compare variable between variable 'value_number_unsignedchar3' and "
		"variable 'value_number_unsignedchar2' is not same");

	//	Assignment variable 'value_number_unsginedchar1'
	//	with 12 of unsigned int
	value_number_unsginedchar1 = 12U;

	//	Check variable 'value_number_unsginedchar1' 
	//	is 12 of unsigned int
	SourceAssert(value_number_unsginedchar1 == 12U,
		"variable 'value_number_unsginedchar1' is not 12 of unsigned int");

	//	Declare reference variable of unsigned char 
	//		with reference initialization from
	//			variable 'value_number_unsginedchar1'
	unsigned char &reference_unsignedchar1 = value_number_unsginedchar1;

	//	Assignment reference variable 'reference_unsignedchar1' 
	//	with 16 of unsigned int
	reference_unsignedchar1 = 16U;

	//	Check reference variable 'reference_unsignedchar1' 
	//	is 16 of unsigned int
	SourceAssert(reference_unsignedchar1 == 16U,
		"reference variable 'reference_unsignedchar1' "
		"is not 16 of unsigned int");

	//	Check compare variable between 
	//		reference variable 'reference_unsignedchar1' 
	//	and variable 'value_number_unsginedchar1' 
	//	is same
	SourceAssert(reference_unsignedchar1 == value_number_unsginedchar1,
		"compare variable between "
		"reference variable 'reference_unsignedchar1' "
		"and variable 'value_number_unsginedchar1' is not same");
}