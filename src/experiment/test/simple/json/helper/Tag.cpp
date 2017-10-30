#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\helper\Tag.h"
#include "test\simple\json\helper\Value.h"

#include "experiment\test\simple\json\Value.h"
#include "experiment\test\simple\json\value\Array.h"
#include "experiment\test\simple\json\value\False.h"
#include "experiment\test\simple\json\value\Null.h"
#include "experiment\test\simple\json\value\Object.h"
#include "experiment\test\simple\json\value\String.h"
#include "experiment\test\simple\json\value\True.h"
#include "experiment\test\simple\json\value\Number.h"
#include "experiment\test\simple\json\helper\Value.h"

#include "experiment\test\simple\json\helper\Tag.h"

void experiment::test::simple::json::helper::Tag::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Value'
	SourceRequirement(experiment::test::simple::json::Value);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Array'
	SourceRequirement(experiment::test::simple::json::value::Array);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::False'
	SourceRequirement(experiment::test::simple::json::value::False);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Null'
	SourceRequirement(experiment::test::simple::json::value::Null);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Number'
	SourceRequirement(experiment::test::simple::json::value::Number);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Object'
	SourceRequirement(experiment::test::simple::json::value::Object);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::String'
	SourceRequirement(experiment::test::simple::json::value::String);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::True'
	SourceRequirement(experiment::test::simple::json::value::True);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::helper::Value'
	SourceRequirement(experiment::test::simple::json::helper::Value);
}

void experiment::test::simple::json::helper::Tag::Test()
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
	//		'BrainMuscles::test::simple::json::helper'
	//	to 
	//		'JsonHelper'
	namespace JsonHelper = BMTestSimple::json::helper;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value'
	//	to 
	//		'JsonValue'
	namespace JsonValue = Json::value;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value::number'
	//	to 
	//		'JsonValue'
	namespace JsonValueNumber = JsonValue::number;


	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_array)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_false)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_null)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_object)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_string)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_true)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number_char)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_double) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number_float)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number_int)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number_long)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_longdouble) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_longlong) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue(JsonHelper::Enum::value_number_short)
			== true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_unsignedchar) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_unsignedint) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_unsignedlong) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_unsignedlonglong) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, "
		"where enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValue' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValue'
	SourceAssert(JsonHelper::Tag::IsValue
			(JsonHelper::Enum::value_number_unsignedshort) == true,
		"return variable of function static member 'IsValue' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValue'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_array)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_false)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_null)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_number)
			== true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_object)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_string)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber(JsonHelper::Enum::value_true)
			== false,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_char) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_double) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_float) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_int) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_long) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_longdouble) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_longlong) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_short) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_unsignedchar) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_unsignedint) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_unsignedlong) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_unsignedlonglong) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where "
		"enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsValueNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsValueNumber'
	SourceAssert(JsonHelper::Tag::IsValueNumber
			(JsonHelper::Enum::value_number_unsignedshort) == true,
		"return variable of function static member 'IsValueNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsValueNumber'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_array) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_false) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint(JsonHelper::Enum::value_null)
			== false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_object) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_string) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_true) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_char) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_double) == true,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_float) == true,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_int) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_long) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_longdouble) == true,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_longlong) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_short) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_unsignedchar) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_unsignedint) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_unsignedlong) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_unsignedlonglong) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, "
		"where enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsFloatingPoint' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsFloatingPoint'
	SourceAssert(JsonHelper::Tag::IsFloatingPoint
			(JsonHelper::Enum::value_number_unsignedshort) == false,
		"return variable of function static member 'IsFloatingPoint' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsFloatingPoint'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_array)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_false)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_null)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_number)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_object)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_string)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_true)
			== false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_char) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_double) == false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_float) == false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger(JsonHelper::Enum::value_number_int)
			== true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_long) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_longdouble) == false,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_longlong) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_short) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_unsignedchar) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_unsignedint) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_unsignedlong) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_unsignedlonglong) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, "
		"where enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsInteger' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsInteger'
	SourceAssert(JsonHelper::Tag::IsInteger
			(JsonHelper::Enum::value_number_unsignedshort) == true,
		"return variable of function static member 'IsInteger' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsInteger'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_array)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_false)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_null)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_number)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_object)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_string)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_true)
			== false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_number_char)
			== true,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_double) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_float) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_number_int)
			== true,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned(JsonHelper::Enum::value_number_long)
			== true,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_longdouble) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_longlong) == true,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_short) == true,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_unsignedchar) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_unsignedint) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_unsignedlong) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_unsignedlonglong) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, "
		"where enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsSigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsSigned'
	SourceAssert(JsonHelper::Tag::IsSigned
			(JsonHelper::Enum::value_number_unsignedshort) == false,
		"return variable of function static member 'IsSigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsSigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'undefined' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::undefined)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'undefined' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_array)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_false)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_null)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_number)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_object)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_string)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned(JsonHelper::Enum::value_true)
			== false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_char) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_double) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_float) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_int) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_long) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_longdouble) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_longlong) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is false of bool
	//	where enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_short) == false,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is true of bool, where enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_unsignedchar) == true,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_unsignedint) == true,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_unsignedlong) == true,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_unsignedlonglong) == true,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, "
		"where enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check return variable of
	//		function static member 'IsUnsigned' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	is true of bool
	//	where enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//			as first argument to function static member 'IsUnsigned'
	SourceAssert(JsonHelper::Tag::IsUnsigned
			(JsonHelper::Enum::value_number_unsignedshort) == true,
		"return variable of function static member 'IsUnsigned' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"is false of bool, where enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"as first argument to function static member 'IsUnsigned'");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::Array'
	//	and enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::Array() == JsonHelper::Enum::value_array,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::Array' "
		"and enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::False'
	//	and enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::False() == JsonHelper::Enum::value_false,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::False' "
		"and enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::Null'
	//	and enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::Null() == JsonHelper::Enum::value_null,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::Null' "
		"and enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	and enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::Number() == JsonHelper::Enum::value_number,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::Number' "
		"and enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::Object'
	//	and enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::Object() == JsonHelper::Enum::value_object,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::Object' "
		"and enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::String'
	//	and enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::String() == JsonHelper::Enum::value_string,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::String' "
		"and enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json::helper::tag::True'
	//	and enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::True() == JsonHelper::Enum::value_true,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::True' "
		"and enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Char'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Char()
			== JsonHelper::Enum::value_number_char,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::number::Char' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Double'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Double() 
			== JsonHelper::Enum::value_number_double,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::Double' and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Float'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Float() 
			== JsonHelper::Enum::value_number_float,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::number::Float' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Int'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Int() 
			== JsonHelper::Enum::value_number_int,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::number::Int' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Long'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Long()
			== JsonHelper::Enum::value_number_long,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::number::Long' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::LongDouble'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::LongDouble() 
			== JsonHelper::Enum::value_number_longdouble,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::LongDouble' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::LongLong'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::LongLong() 
			== JsonHelper::Enum::value_number_longlong,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::LongLong' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::Short'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::Short()
			== JsonHelper::Enum::value_number_short,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper::tag::number::Short' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::UnsignedChar'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::UnsignedChar()
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::UnsignedChar' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::UnsignedInt'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::UnsignedInt() 
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::UnsignedInt' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::UnsignedLong'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::UnsignedLong()
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::UnsignedLong' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::UnsignedLongLong'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::UnsignedLongLong()
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::UnsignedLongLong' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable from value initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::helper::tag::number::UnsignedShort'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(JsonHelper::tag::number::UnsignedShort()
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable from value initialization of "
		"class 'BrainMuscles::test::simple::json::helper"
		"::tag::number::UnsignedShort' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_array' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_array1 = JsonHelper::Enum::value_array;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_array1'
	JsonHelper::Enum enum_array1 = tag_array1;

	//	Check value between 
	//		variable 'tag_array1'
	//	and enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_array1 == JsonHelper::Enum::value_array,
		"value between variable 'tag_array1' "
		"and enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_array1'
	//	and enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_array1 == JsonHelper::Enum::value_array,
		"value between variable 'enum_array1' "
		"and enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_false' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_false1 = JsonHelper::Enum::value_false;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_false1'
	JsonHelper::Enum enum_false1 = tag_false1;

	//	Check value between 
	//		variable 'tag_false1'
	//	and enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_false1 == JsonHelper::Enum::value_false,
		"value between variable 'tag_false1' and "
		"enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_false1'
	//	and enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_false1 == JsonHelper::Enum::value_false,
		"value between variable 'enum_false1' "
		"and enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_null' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_null1 = JsonHelper::Enum::value_null;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_null1'
	JsonHelper::Enum enum_null1 = tag_null1;

	//	Check value between 
	//		variable 'tag_null1'
	//	and enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_null1 == JsonHelper::Enum::value_null,
		"value between variable 'tag_null1' and enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_null1'
	//	and enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_null1 == JsonHelper::Enum::value_null,
		"value between variable 'enum_null1' and enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number1 = JsonHelper::Enum::value_number;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number1'
	JsonHelper::Enum enum_number1 = tag_number1;

	//	Check value between 
	//		variable 'tag_number1'
	//	and enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number1 == JsonHelper::Enum::value_number,
		"value between variable 'tag_number1' "
		"and enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number1'
	//	and enumerator 'value_number' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number1 == JsonHelper::Enum::value_number,
		"value between variable 'enum_number1' "
		"and enumerator 'value_number' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_object' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_object1 = JsonHelper::Enum::value_object;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_object1'
	JsonHelper::Enum enum_object1 = tag_object1;

	//	Check value between 
	//		variable 'tag_object1'
	//	and enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_object1 == JsonHelper::Enum::value_object,
		"value between variable 'tag_object1' "
		"and enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_object1'
	//	and enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_object1 == JsonHelper::Enum::value_object,
		"value between variable 'enum_object1' "
		"and enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_string' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_string1 = JsonHelper::Enum::value_string;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_string1'
	JsonHelper::Enum enum_string1 = tag_string1;

	//	Check value between 
	//		variable 'tag_string1'
	//	and enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_string1 == JsonHelper::Enum::value_string,
		"value between variable 'tag_string1' "
		"and enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_string1'
	//	and enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_string1 == JsonHelper::Enum::value_string,
		"value between variable 'enum_string1' "
		"and enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_true' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_true1 = JsonHelper::Enum::value_true;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_true1'
	JsonHelper::Enum enum_true1 = tag_true1;

	//	Check value between 
	//		variable 'tag_true1'
	//	and enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_true1 == JsonHelper::Enum::value_true,
		"value between variable 'tag_true1' and enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_true1'
	//	and enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_true1 == JsonHelper::Enum::value_true,
		"value between variable 'enum_true1' and enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_char' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_char1 = JsonHelper::Enum::value_number_char;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_char1'
	JsonHelper::Enum enum_number_char1 = tag_number_char1;

	//	Check value between 
	//		variable 'tag_number_char1'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_char1 == JsonHelper::Enum::value_number_char,
		"value between variable 'tag_number_char1' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_char1'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_char1 == JsonHelper::Enum::value_number_char,
		"value between variable 'enum_number_char1' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_double' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_double1 = JsonHelper::Enum::value_number_double;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_double1'
	JsonHelper::Enum enum_number_double1 = tag_number_double1;

	//	Check value between 
	//		variable 'tag_number_double1'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_double1 == JsonHelper::Enum::value_number_double,
		"value between variable 'tag_number_double1' "
		"and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_double1'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_double1 == JsonHelper::Enum::value_number_double,
		"value between variable 'enum_number_double1' "
		"and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_float' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_float1 = JsonHelper::Enum::value_number_float;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_float1'
	JsonHelper::Enum enum_number_float1 = tag_number_float1;

	//	Check value between 
	//		variable 'tag_number_float1'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_float1 == JsonHelper::Enum::value_number_float,
		"value between variable 'tag_number_float1' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_float1'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_float1 == JsonHelper::Enum::value_number_float,
		"value between variable 'enum_number_float1' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_int' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_int1 = JsonHelper::Enum::value_number_int;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_int1'
	JsonHelper::Enum enum_number_int1 = tag_number_int1;

	//	Check value between 
	//		variable 'tag_number_int1'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_int1 == JsonHelper::Enum::value_number_int,
		"value between variable 'tag_number_int1' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_int1'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_int1 == JsonHelper::Enum::value_number_int,
		"value between variable 'enum_number_int1' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_long' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_long1 = JsonHelper::Enum::value_number_long;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_long1'
	JsonHelper::Enum enum_number_long1 = tag_number_long1;

	//	Check value between 
	//		variable 'tag_number_long1'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_long1 == JsonHelper::Enum::value_number_long,
		"value between variable 'tag_number_long1' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_long1'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_long1 == JsonHelper::Enum::value_number_long,
		"value between variable 'enum_number_long1' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_longdouble' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_longdouble1 
		= JsonHelper::Enum::value_number_longdouble;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_longdouble1'
	JsonHelper::Enum enum_number_longdouble1 = tag_number_longdouble1;

	//	Check value between 
	//		variable 'tag_number_longdouble1'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_longdouble1 
			== JsonHelper::Enum::value_number_longdouble,
		"value between variable 'tag_number_longdouble1' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_longdouble1'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_longdouble1 
			== JsonHelper::Enum::value_number_longdouble,
		"value between variable 'enum_number_longdouble1' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_longlong' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_longlong1 
		= JsonHelper::Enum::value_number_longlong;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_longlong1'
	JsonHelper::Enum enum_number_longlong1 = tag_number_longlong1;

	//	Check value between 
	//		variable 'tag_number_longlong1'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_longlong1 
			== JsonHelper::Enum::value_number_longlong,
		"value between variable 'tag_number_longlong1' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_longlong1'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_longlong1 
			== JsonHelper::Enum::value_number_longlong,
		"value between variable 'enum_number_longlong1' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_short' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_short1 = JsonHelper::Enum::value_number_short;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_short1'
	JsonHelper::Enum enum_number_short1 = tag_number_short1;

	//	Check value between 
	//		variable 'tag_number_short1'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_short1 == JsonHelper::Enum::value_number_short,
		"value between variable 'tag_number_short1' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_short1'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_short1 == JsonHelper::Enum::value_number_short,
		"value between variable 'enum_number_short1' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_unsignedchar' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_unsignedchar1 
		= JsonHelper::Enum::value_number_unsignedchar;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_unsignedchar1'
	JsonHelper::Enum enum_number_unsignedchar1 = tag_number_unsignedchar1;

	//	Check value between 
	//		variable 'tag_number_unsignedchar1'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedchar1 
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable 'tag_number_unsignedchar1' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_unsignedchar1'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_unsignedchar1 
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable 'enum_number_unsignedchar1' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_unsignedint' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_unsignedint1
		= JsonHelper::Enum::value_number_unsignedint;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_unsignedint1'
	JsonHelper::Enum enum_number_unsignedint1 = tag_number_unsignedint1;

	//	Check value between 
	//		variable 'tag_number_unsignedint1'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedint1 
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable 'tag_number_unsignedint1' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_unsignedint1'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_unsignedint1
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable 'enum_number_unsignedint1' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_unsignedlong' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_unsignedlong1 
		= JsonHelper::Enum::value_number_unsignedlong;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_unsignedlong1'
	JsonHelper::Enum enum_number_unsignedlong1 = tag_number_unsignedlong1;

	//	Check value between 
	//		variable 'tag_number_unsignedlong1'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedlong1
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable 'tag_number_unsignedlong1' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_unsignedlong1'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_unsignedlong1 
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable 'enum_number_unsignedlong1' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_unsignedlonglong' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_unsignedlonglong1
		= JsonHelper::Enum::value_number_unsignedlonglong;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_unsignedlonglong1'
	JsonHelper::Enum enum_number_unsignedlonglong1 
		= tag_number_unsignedlonglong1;

	//	Check value between 
	//		variable 'tag_number_unsignedlonglong1'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedlonglong1 
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable 'tag_number_unsignedlonglong1' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_unsignedlonglong1'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_unsignedlonglong1 
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable 'enum_number_unsignedlonglong1' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::helper::Tag' 
	//	from copy initialization of 
	//		enumerator 'value_number_unsignedshort' from
	//			enum 'BrainMuscles::test::simple::json::helper::Enum'
	JsonHelper::Tag tag_number_unsignedshort1 
		= JsonHelper::Enum::value_number_unsignedshort;

	//	Declare variable of
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	from copy initialization of 
	//		variable 'tag_number_unsignedshort1'
	JsonHelper::Enum enum_number_unsignedshort1 = tag_number_unsignedshort1;

	//	Check value between 
	//		variable 'tag_number_unsignedshort1'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedshort1 
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable 'tag_number_unsignedshort1' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Check value between 
	//		variable 'enum_number_unsignedshort1'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(enum_number_unsignedshort1
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable 'enum_number_unsignedshort1' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Char'
	JsonHelper::tag::Number& tag_number_char2 
		= JsonHelper::tag::number::Char();
	
	//	Check value between 
	//		variable 'tag_number_char2'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_char2 == JsonHelper::Enum::value_number_char,
		"value between variable 'tag_number_char2' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Double'
	JsonHelper::tag::Number& tag_number_double2
		= JsonHelper::tag::number::Double();

	//	Check value between 
	//		variable 'tag_number_double2'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_double2 == JsonHelper::Enum::value_number_double,
		"value between variable 'tag_number_double2' "
		"and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Float'
	JsonHelper::tag::Number& tag_number_float2
		= JsonHelper::tag::number::Float();

	//	Check value between 
	//		variable 'tag_number_float2'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_float2 == JsonHelper::Enum::value_number_float,
		"value between variable 'tag_number_float2' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Int'
	JsonHelper::tag::Number& tag_number_int2 = JsonHelper::tag::number::Int();

	//	Check value between 
	//		variable 'tag_number_int2'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_int2 == JsonHelper::Enum::value_number_int,
		"value between variable 'tag_number_int2' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Long'
	JsonHelper::tag::Number& tag_number_long2
		= JsonHelper::tag::number::Long();

	//	Check value between 
	//		variable 'tag_number_long2'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_long2 == JsonHelper::Enum::value_number_long,
		"value between variable 'tag_number_long2' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::LongDouble'
	JsonHelper::tag::Number& tag_number_longdouble2
		= JsonHelper::tag::number::LongDouble();

	//	Check value between 
	//		variable 'tag_number_longdouble2'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_longdouble2
			== JsonHelper::Enum::value_number_longdouble,
		"value between variable 'tag_number_longdouble2' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::LongLong'
	JsonHelper::tag::Number& tag_number_longlong2
		= JsonHelper::tag::number::LongLong();

	//	Check value between 
	//		variable 'tag_number_longlong2'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_longlong2
			== JsonHelper::Enum::value_number_longlong,
		"value between variable 'tag_number_longlong2' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Short'
	JsonHelper::tag::Number& tag_number_short2
		= JsonHelper::tag::number::Short();

	//	Check value between 
	//		variable 'tag_number_short2'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_short2 == JsonHelper::Enum::value_number_short,
		"value between variable 'tag_number_short2' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedChar'
	JsonHelper::tag::Number& tag_number_unsignedchar2
		= JsonHelper::tag::number::UnsignedChar();

	//	Check value between 
	//		variable 'tag_number_unsignedchar2'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedchar2
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable 'tag_number_unsignedchar2' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedInt'
	JsonHelper::tag::Number& tag_number_unsignedint2
		= JsonHelper::tag::number::UnsignedInt();

	//	Check value between 
	//		variable 'tag_number_unsignedint2'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedint2
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable 'tag_number_unsignedint2' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLong'
	JsonHelper::tag::Number& tag_number_unsignedlong2 
		= JsonHelper::tag::number::UnsignedLong();

	//	Check value between 
	//		variable 'tag_number_unsignedlong2'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedlong2
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable 'tag_number_unsignedlong2' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLongLong'
	JsonHelper::tag::Number& tag_number_unsignedlonglong2
		= JsonHelper::tag::number::UnsignedLongLong();

	//	Check value between 
	//		variable 'tag_number_unsignedlonglong2'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedlonglong2
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable 'tag_number_unsignedlonglong2' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag::Number'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedShort'
	JsonHelper::tag::Number& tag_number_unsignedshort2
		= JsonHelper::tag::number::UnsignedShort();

	//	Check value between 
	//		variable 'tag_number_unsignedshort2'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsignedshort2
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable 'tag_number_unsignedshort2' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::FloatingPoint'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Double'
	JsonHelper::tag::number::FloatingPoint&  tag_number_floatingpoint_double1 
		= JsonHelper::tag::number::Double();

	//	Check value between 
	//		variable 'tag_number_floatingpoint_double1'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_floatingpoint_double1 
			== JsonHelper::Enum::value_number_double,
		"value between variable 'tag_number_floatingpoint_double1' "
		"and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::FloatingPoint'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Float'
	JsonHelper::tag::number::FloatingPoint& tag_number_floatingpoint_float1 
		= JsonHelper::tag::number::Float();

	//	Check value between 
	//		variable 'tag_number_floatingpoint_float1'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_floatingpoint_float1
			== JsonHelper::Enum::value_number_float,
		"value between variable 'tag_number_floatingpoint_float1' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::FloatingPoint'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::LongDouble'
	JsonHelper::tag::number::FloatingPoint& 
		tag_number_floatingpoint_longdouble1 
			= JsonHelper::tag::number::LongDouble();

	//	Check value between 
	//		variable 'tag_number_floatingpoint_longdouble1'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_floatingpoint_longdouble1 
			== JsonHelper::Enum::value_number_longdouble,
		"value between variable 'tag_number_floatingpoint_longdouble1' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Char'
	JsonHelper::tag::number::Integer& tag_number_integer_char1
		= JsonHelper::tag::number::Char();

	//	Check value between 
	//		variable 'tag_number_integer_char1'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_char1 
			== JsonHelper::Enum::value_number_char,
		"value between variable 'tag_number_integer_char1' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Int'
	JsonHelper::tag::number::Integer& tag_number_integer_int1
		= JsonHelper::tag::number::Int();

	//	Check value between 
	//		variable 'tag_number_integer_int1'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_int1 == JsonHelper::Enum::value_number_int,
		"value between variable 'tag_number_integer_int1' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Long'
	JsonHelper::tag::number::Integer& tag_number_integer_long1
		= JsonHelper::tag::number::Long();

	//	Check value between 
	//		variable 'tag_number_integer_long1'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_long1 
			== JsonHelper::Enum::value_number_long,
		"value between variable 'tag_number_integer_long1' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::LongLong'
	JsonHelper::tag::number::Integer& tag_number_integer_longlong1
		= JsonHelper::tag::number::LongLong();

	//	Check value between 
	//		variable 'tag_number_integer_longlong1'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_longlong1 
			== JsonHelper::Enum::value_number_longlong,
		"value between variable 'tag_number_integer_longlong1' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Short'
	JsonHelper::tag::number::Integer& tag_number_integer_short1
		= JsonHelper::tag::number::Short();

	//	Check value between 
	//		variable 'tag_number_integer_short1'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_short1 
			== JsonHelper::Enum::value_number_short,
		"value between variable 'tag_number_integer_short1' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedChar'
	JsonHelper::tag::number::Integer& tag_number_integer_unsignedchar1
		= JsonHelper::tag::number::UnsignedChar();

	//	Check value between 
	//		variable 'tag_number_integer_unsignedchar1'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_unsignedchar1
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable 'tag_number_integer_unsignedchar1' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedInt'
	JsonHelper::tag::number::Integer& tag_number_integer_unsignedint1
		= JsonHelper::tag::number::UnsignedInt();

	//	Check value between 
	//		variable 'tag_number_integer_unsignedint1'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_unsignedint1 
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable 'tag_number_integer_unsignedint1' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLong'
	JsonHelper::tag::number::Integer& tag_number_integer_unsignedlong1
		= JsonHelper::tag::number::UnsignedLong();

	//	Check value between 
	//		variable 'tag_number_integer_unsignedlong1'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_unsignedlong1 
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable 'tag_number_integer_unsignedlong1' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLongLong'
	JsonHelper::tag::number::Integer& tag_number_integer_unsignedlonglong1
		= JsonHelper::tag::number::UnsignedLongLong();

	//	Check value between 
	//		variable 'tag_number_integer_unsignedlonglong1'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_unsignedlonglong1 
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable 'tag_number_integer_unsignedlonglong1' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Integer'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedShort'
	JsonHelper::tag::number::Integer& tag_number_integer_unsignedshort1
		= JsonHelper::tag::number::UnsignedShort();

	//	Check value between 
	//		variable 'tag_number_integer_unsignedshort1'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_integer_unsignedshort1 
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable 'tag_number_integer_unsignedshort1' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Signed'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Char'
	JsonHelper::tag::number::Signed& tag_number_signed_char1 
		= JsonHelper::tag::number::Char();

	//	Check value between 
	//		variable 'tag_number_signed_char1'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_signed_char1 
			== JsonHelper::Enum::value_number_char,
		"value between variable 'tag_number_signed_char1' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Signed'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Int'
	JsonHelper::tag::number::Signed& tag_number_signed_int1 
		= JsonHelper::tag::number::Int();

	//	Check value between 
	//		variable 'tag_number_signed_int1'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_signed_int1 == JsonHelper::Enum::value_number_int,
		"value between variable 'tag_number_signed_int1' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Signed'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Long'
	JsonHelper::tag::number::Signed& tag_number_signed_long1 
		= JsonHelper::tag::number::Long();

	//	Check value between 
	//		variable 'tag_number_signed_long1'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_signed_long1 
			== JsonHelper::Enum::value_number_long,
		"value between variable 'tag_number_signed_long1' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Signed'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::LongLong'
	JsonHelper::tag::number::Signed& tag_number_signed_longlong1
		= JsonHelper::tag::number::LongLong();

	//	Check value between 
	//		variable 'tag_number_signed_longlong1'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_signed_longlong1 
			== JsonHelper::Enum::value_number_longlong,
		"value between variable 'tag_number_signed_longlong1' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Signed'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::Short'
	JsonHelper::tag::number::Signed& tag_number_signed_short1 
		= JsonHelper::tag::number::Short();

	//	Check value between 
	//		variable 'tag_number_signed_short1'
	//	and enumerator 'value_number_short' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_signed_short1 
			== JsonHelper::Enum::value_number_short,
		"value between variable 'tag_number_signed_short1' "
		"and enumerator 'value_number_short' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Unsigned'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedChar'
	JsonHelper::tag::number::Unsigned& tag_number_unsigned_unsignedchar1
		= JsonHelper::tag::number::UnsignedChar();

	//	Check value between 
	//		variable 'tag_number_unsigned_unsignedchar1'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsigned_unsignedchar1 
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between variable 'tag_number_unsigned_unsignedchar1' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Unsigned'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedInt'
	JsonHelper::tag::number::Unsigned& tag_number_unsigned_unsignedint1 
		= JsonHelper::tag::number::UnsignedInt();

	//	Check value between 
	//		variable 'tag_number_unsigned_unsignedint1'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsigned_unsignedint1 
			== JsonHelper::Enum::value_number_unsignedint,
		"value between variable 'tag_number_unsigned_unsignedint1' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Unsigned'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLong'
	JsonHelper::tag::number::Unsigned& tag_number_unsigned_unsignedlong1
		= JsonHelper::tag::number::UnsignedLong();

	//	Check value between 
	//		variable 'tag_number_unsigned_unsignedlong1'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsigned_unsignedlong1 
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between variable 'tag_number_unsigned_unsignedlong1' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Unsigned'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedLongLong'
	JsonHelper::tag::number::Unsigned& tag_number_unsigned_unsignedlonglong1
		= JsonHelper::tag::number::UnsignedLongLong();

	//	Check value between 
	//		variable 'tag_number_unsigned_unsignedlonglong1'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	SourceAssert(tag_number_unsigned_unsignedlonglong1 
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between variable 'tag_number_unsigned_unsignedlonglong1' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::helper::tag
	//			::number::Unsigned'
	//	from reference initialization from
	//		value initialization of class 'BrainMuscles::test::simple::json
	//			::helper::tag::number::UnsignedShort'
	JsonHelper::tag::number::Unsigned& tag_number_unsigned_unsignedshort1
		= JsonHelper::tag::number::UnsignedShort();

	//	Check value between 
	//		variable 'tag_number_unsigned_unsignedshort1'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is not same
	SourceAssert(tag_number_unsigned_unsignedshort1
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between variable 'tag_number_unsigned_unsignedshort1' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' is not same");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::Array'
	Json::Value& value_array1 = JsonValue::Array();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_array' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_array1' as first argument to 
	//		function static member 'Identification'
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_array1)
			== JsonHelper::Enum::value_array,
		"value between return variable of "
		"function static member 'Identification<" 
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_array' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_array1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::False'
	Json::Value& value_false1 = JsonValue::False();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_false' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_false1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_false1) 
			== JsonHelper::Enum::value_false,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_false' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_false1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::Null'
	Json::Value& value_null1 = JsonValue::Null();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_null' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_null1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_null1) 
			== JsonHelper::Enum::value_null,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_null' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_null1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::Object'
	Json::Value& value_object1 = JsonValue::Object();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_object' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_object1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_object1) 
			== JsonHelper::Enum::value_object,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_object' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_object1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::String'
	Json::Value& value_string1 = JsonValue::String();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_string' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_string1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_string1) 
			== JsonHelper::Enum::value_string,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_string' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_string1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::True'
	Json::Value& value_true1 = JsonValue::True();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_true' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_true1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_true1) 
			== JsonHelper::Enum::value_true,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_true' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_true1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::number::Char'
	Json::Value& value_number_char1 = JsonValueNumber::Char();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_char' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_char1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_char1) 
			== JsonHelper::Enum::value_number_char,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_char' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_char1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::number::Double'
	Json::Value& value_number_double1 = JsonValueNumber::Double();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_double' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_double1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_double1) 
			== JsonHelper::Enum::value_number_double,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_double' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_double1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::number::Float'
	Json::Value& value_number_float1 = JsonValueNumber::Float();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_float' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_float1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_float1) 
			== JsonHelper::Enum::value_number_float,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_float' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_float1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::number::Int'
	Json::Value& value_number_int1 = JsonValueNumber::Int();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_int' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_int1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_int1) 
			== JsonHelper::Enum::value_number_int,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_int' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_int1' as first argument to "
		"function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value::number::Long'
	Json::Value& value_number_long1 = JsonValueNumber::Long();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_long' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_long1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_long1) 
			== JsonHelper::Enum::value_number_long,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_long' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_long1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::LongDouble'
	Json::Value& value_number_longdouble1 = JsonValueNumber::LongDouble();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_longdouble' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_longdouble1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_longdouble1) 
			== JsonHelper::Enum::value_number_longdouble,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_longdouble' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::LongLong'
	Json::Value& value_number_longlong1 = JsonValueNumber::LongLong();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_longlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_longlong1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_longlong1) 
			== JsonHelper::Enum::value_number_longlong,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_longlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_longlong1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedChar'
	Json::Value& value_number_unsignedchar1 = JsonValueNumber::UnsignedChar();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_unsignedchar' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_unsignedchar1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_unsignedchar1)
			== JsonHelper::Enum::value_number_unsignedchar,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_unsignedchar' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedInt'
	Json::Value& value_number_unsignedint1 = JsonValueNumber::UnsignedInt();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_unsignedint' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_unsignedint1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_unsignedint1)
			== JsonHelper::Enum::value_number_unsignedint,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_unsignedint' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedLong'
	Json::Value& value_number_unsignedlong1 = JsonValueNumber::UnsignedLong();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_unsignedlong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_unsignedlong1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_unsignedlong1)
			== JsonHelper::Enum::value_number_unsignedlong,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_unsignedlong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json
	//				::value::number::UnsignedLongLong'
	Json::Value& value_number_unsignedlonglong1 
		= JsonValueNumber::UnsignedLongLong();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_unsignedlonglong' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_unsignedlonglong1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>
				(value_number_unsignedlonglong1)
			== JsonHelper::Enum::value_number_unsignedlonglong,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_unsignedlonglong' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'Identification'");

	//	Declare reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	from copy initialization of
	//		value initialization from
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort'
	Json::Value& value_number_unsignedshort1 
		= JsonValueNumber::UnsignedShort();

	//	Check value between
	//		return variable of function static member 'Identification<
	//			BrainMuscles::test::simple::json::helper::Value,
	//			const BrainMuscles::test::simple::json::Value&>' from
	//			class 'BrainMuscles::test::simple::json::helper::Tag'
	//	and enumerator 'value_number_unsignedshort' from
	//		enum 'BrainMuscles::test::simple::json::helper::Enum'
	//	is same
	//	where variable 'value_number_unsignedshort1' as first argument to 
	SourceAssert(JsonHelper::Tag::Identification<
			JsonHelper::Value, const Json::Value&>(value_number_unsignedshort1)
			== JsonHelper::Enum::value_number_unsignedshort,
		"value between return variable of "
		"function static member 'Identification<"
		"BrainMuscles::test::simple::json::helper::Value, "
		"const BrainMuscles::test::simple::json::Value&>' from "
		"class 'BrainMuscles::test::simple::json::helper::Tag' "
		"and enumerator 'value_number_unsignedshort' from "
		"enum 'BrainMuscles::test::simple::json::helper::Enum' "
		"is not same, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'Identification'");
}