#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\Null.h"

#include "experiment\test\simple\json\value\Null.h"

void experiment::test::simple::json::value::Null::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::Null'
	// with default initalization
	JsonValue::Null value_null1;

	//	Check compare variable between 
	//		variable 'value_null1'
	//	and 
	//		variable static member 'NullCString' from
	//			class BrainMuscles::test::simple::Constant
	//	is same
	SourceAssert(strcmp(value_null1, Json::Constant::NullCString) == 0,
		"compare variable between variable 'value_null1' and "
		"variable static member 'NullCString' from "
		"lass BrainMuscles::test::simple::Constant is not same");
}