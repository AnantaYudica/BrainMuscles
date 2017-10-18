#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\False.h"

#include "experiment\test\simple\json\value\False.h"

void experiment::test::simple::json::value::False::Test()
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

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	with default initialization
	JsonValue::False value_false1;

	//	Check variable 'value_false1' is false
	SourceAssert(value_false1 == false, 
		"variable 'value_false1 is true");

	//	Check compare variable between
	//		variable 'value_false1'
	//	and 
	//		variable static member 'FalseCString' from
	//			class 'BrainMuscles::test::simple::Constant'
	//	is same
	SourceAssert(std::strcmp(value_false1, Json::Constant::FalseCString) == 0,
		"compare variable between variable 'value_false1' and "
		"variable static member 'FalseCString' from "
		"class 'BrainMuscles::test::simple::Constant' is same");
}