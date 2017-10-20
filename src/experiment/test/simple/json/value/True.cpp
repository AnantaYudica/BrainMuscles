#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\True.h"

#include "experiment\test\simple\json\value\True.h"

void experiment::test::simple::json::value::True::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	with default initialization
	JsonValue::True value_true1;

	//	Check variable 'value_true1' 
	//	is 'true' of bool
	SourceAssert(value_true1 == true,
		"variable 'value_true1'  is not 'true' of bool");

	//	Check compare variable between
	//		variable 'value_true1'
	//	and variable static member 'TrueCString' of
	//		class 'BrainMuscles::test::simple::json::Constant'
	//	is same
	SourceAssert(strcmp(value_true1, Json::Constant::TrueCString) == 0,
		"compare variable between variable 'value_true1' and "
		"variable static member 'TrueCString' of "
		"class 'BrainMuscles::test::simple::json::Constant' is not same");
}