#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>
#include <string>

#include "test/simple/json/value/String.h"

#include "experiment/test/simple/json/value/String.h"

void experiment::test::simple::json::value::String::Test()
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
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with default initialization 
	JsonValue::String value_string1;

	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with direct initialization from direct initialization of
	//		std::string
	//	where 'string' of const char[] as first argument to 
	//		initialization of std::string
	JsonValue::String value_string2(std::string("string"));

	//	Check variable 'value_string2'
	//	is 'string' of const char[]
	SourceAssert(std::strcmp(value_string2, "string") == 0,
		"variable 'value_string2' is not 'string' of const char[]");

	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with direct initialization of 'string' of const char[]
	JsonValue::String value_string3("cstring");

	//	Check variable 'value_string2'
	//	is 'cstring' of const char[]
	SourceAssert(std::strcmp(value_string3, "cstring") == 0,
		"variable 'value_string3' is not 'cstring' of const char[]");

	//	Assignment with 'cstring' of const char[]
	value_string1 = "cstring";

	//check compare string1 and "cstring" is same
	SourceAssert(strcmp(value_string1, "cstring") == 0,
		"variable 'value_string1' is not 'cstring' of const char[]");
}