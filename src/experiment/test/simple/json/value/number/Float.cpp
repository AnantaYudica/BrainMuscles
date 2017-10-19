#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\value\number\Float.h"

#include "experiment\test\simple\json\value\Number.h"

#include "experiment\test\simple\json\value\number\Float.h"

void experiment::test::simple::json::value::number::Float::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::value::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);
}

void experiment::test::simple::json::value::number::Float::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with default initialization 
	JsonValueNumber::Float value_number_float1;

	//	Check variable 'value_number_float1' 
	//	is 0 of int
	SourceAssert(value_number_float1 == 0,
		"variable 'value_number_float1' is not 0 of int");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with direct initialization from 15.15 from float
	JsonValueNumber::Float value_number_float2(15.15f);

	//	Check variable 'value_number_float2' 
	//	is 15.15 of float
	SourceAssert(value_number_float2 == 15.15f,
		"variable 'value_number_float2' is not 15.15 of float");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with copy initialization from variable 'value_number_float2'
	JsonValueNumber::Float value_number_float3(value_number_float2);

	//	Check compare variable between 
	//		variable 'value_number_float3' 
	//	and variable 'value_number_float2' 
	//	is same 
	SourceAssert(value_number_float3 == value_number_float2,
		"compare variable between variable 'value_number_float3' and "
		"variable 'value_number_float2' is not same");

	//	Assignment variable 'value_number_float1' with 12.12 of float
	value_number_float1 = 12.12f;

	//	Check variable 'value_number_float1' 
	//	is 12.12 of float
	SourceAssert(value_number_float1 == 12.12f,
		"variable 'value_number_float1' is not 12.12 of float");

	//	Declare reference variable of float 
	//	with reference initialization from
	//		variable 'value_number_float1'
	float &reference_float1 = value_number_float1;

	//	Assignment reference variable 'reference_float1' with 16.16 of float
	reference_float1 = 16.16f;

	//	Check reference variable 'reference_float1' 
	//	is 16.16 of float
	SourceAssert(reference_float1 == 16.16f,
		"reference variable 'reference_float1' is not 16.16 of float");

	//	Check compare variable between 
	//		reference variable 'reference_float1' 
	//	and variable 'value_number_float1' 
	//	is same
	SourceAssert(reference_float1 == value_number_float1,
		"compare variable between reference variable 'reference_float1' "
		"and variable 'value_number_float1' is not same");
}