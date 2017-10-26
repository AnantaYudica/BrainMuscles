#define _USING_TEST_
#define _USING_TEST_SOURCE_

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

void experiment::test::simple::json::helper::Value::PreTest()
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
}

void experiment::test::simple::json::helper::Value::Test()
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
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::Array()) == true,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsArray'");

	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::False()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::Null()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::Object()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsArray'");

	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::String()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsArray'");

	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValue::True()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsArray'");

	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Double()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Double' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Float()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::LongDouble()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::LongLong()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::Short()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::UnsignedChar()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::UnsignedInt()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedInt' as first argument to "
		"function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsArray'
	SourceAssert(JsonHelper::Value::IsArray(JsonValueNumber::UnsignedShort()) 
			== false,
		"return variable of function static member 'IsArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsArray'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::Array()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::False()) == true,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::Null()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::Object()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::String()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValue::True()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsFalse'");

	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Double()) 
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Float()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::LongDouble()) 
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::LongLong()) 
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::Short()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::UnsignedChar())
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsFalse'");
	
	//	Check return variable of
	//		function static member 'IsFalse' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsFalse'
	SourceAssert(JsonHelper::Value::IsFalse(JsonValueNumber::UnsignedShort())
			== false,
		"return variable of function static member 'IsFalse' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsFalse'");

	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::Array()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::False()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::Null()) == true,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::Object()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::String()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValue::True()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNull'");

	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Double()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Float()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::LongDouble()) 
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::Short()) == false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::UnsignedChar())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::UnsignedLongLong())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number"
		"::UnsignedLongLong' as first argument to "
		"function static member 'IsNull'");
	
	//	Check return variable of
	//		function static member 'IsNull' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNull'
	SourceAssert(JsonHelper::Value::IsNull(JsonValueNumber::UnsignedShort())
			== false,
		"return variable of function static member 'IsNull' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNull'");

	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::False()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::Object()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::String()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValue::True()) == false,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumber'");

	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Char()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Double()) 
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Float()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Int()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Long()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::LongDouble())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::LongLong())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::Short()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::UnsignedChar())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::UnsignedInt())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::UnsignedLong())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber
			(JsonValueNumber::UnsignedLongLong()) == true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumber'");
	
	//	Check return variable of
	//		function static member 'IsNumber' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumber'
	SourceAssert(JsonHelper::Value::IsNumber(JsonValueNumber::UnsignedShort())
			== true,
		"return variable of function static member 'IsNumber' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumber'");

	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::Array()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::False()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::Null()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::Object()) == true,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::String()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValue::True()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsObject'");

	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Float()) 
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::LongDouble()) 
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::LongLong()) 
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::UnsignedChar()) 
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsObject'");
	
	//	Check return variable of
	//		function static member 'IsObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsObject'
	SourceAssert(JsonHelper::Value::IsObject(JsonValueNumber::UnsignedShort())
			== false,
		"return variable of function static member 'IsObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsObject'");

	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::Array()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::False()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::Null()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::Object()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::String()) == true,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValue::True()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsString'");

	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Double()) 
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::LongDouble()) 
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::UnsignedChar())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsString'");
	
	//	Check return variable of
	//		function static member 'IsString' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsString'
	SourceAssert(JsonHelper::Value::IsString(JsonValueNumber::UnsignedShort())
			== false,
		"return variable of function static member 'IsString' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsString'");

	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::Array()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::False()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::Null()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::Object()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::String()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValue::True()) == true,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsTrue'");

	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Double()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Float()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Int()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::LongDouble())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::Short()) == false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::UnsignedChar()) 
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::UnsignedLong())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::UnsignedLongLong())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsTrue'");
	
	//	Check return variable of
	//		function static member 'IsTrue' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsTrue'
	SourceAssert(JsonHelper::Value::IsTrue(JsonValueNumber::UnsignedShort())
			== false,
		"return variable of function static member 'IsTrue' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsTrue'");

	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::False()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::Object()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::String()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberChar'");

	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Char())
			== true,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::LongDouble())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberChar'");
	
	//	Check return variable of
	//		function static member 'IsNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberChar'
	SourceAssert(JsonHelper::Value::IsNumberChar
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberChar'");

	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::Array())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::False()) 
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::Object()) 
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::String())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberDouble'");

	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Double())
			== true,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::LongDouble()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberDouble'");
	
	//	Check return variable of
	//		function static member 'IsNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberDouble'
	SourceAssert(JsonHelper::Value::IsNumberDouble
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberDouble'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberFloat'");
	
	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::False()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberFloat'");
	
	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberFloat'");
	
	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::Object()) 
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberFloat'");
	
	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::String())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberFloat'");
	
	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Float())
			== true,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::LongDouble()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberFloat'
	SourceAssert(JsonHelper::Value::IsNumberFloat
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberFloat'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::False()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::Object()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::String()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Int())
			== true,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::LongDouble())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt(JsonValueNumber::UnsignedInt())
			== false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberInt'
	SourceAssert(JsonHelper::Value::IsNumberInt
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberInt'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::False()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::Object()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::String()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Long())
			== true,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::LongDouble())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberLong'
	SourceAssert(JsonHelper::Value::IsNumberLong
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::Array())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::False())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::Null())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::Object())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument 
	//				to function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::String())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValue::True())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::Double()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::Float()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::LongDouble()) == true,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::LongLong()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::Short()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberLongDouble'
	SourceAssert(JsonHelper::Value::IsNumberLongDouble
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberLongDouble'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::Array()) 
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::False()) 
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::Null()) 
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::Object())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::String())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValue::True())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::LongDouble()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::LongLong()) == true,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong(JsonValueNumber::Short())
			== false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberLongLong'
	SourceAssert(JsonHelper::Value::IsNumberLongLong
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberLongLong'");
	
	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::Array()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::False()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::Null()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::Object())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::String()) 
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValue::True()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Char())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Double())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Float())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Long())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::LongDouble()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::LongLong())
			== false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort(JsonValueNumber::Short())
			== true,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberShort'");

	//	Check return variable of
	//		function static member 'IsNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to function static member 'IsNumberShort'
	SourceAssert(JsonHelper::Value::IsNumberShort
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberShort'");
	
	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::Array())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::False())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::Null())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::Object())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::String())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar(JsonValue::True())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Char()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Double()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Float()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Int()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Long()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//			function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::LongDouble()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::LongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::Short()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::UnsignedChar()) == true,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedChar'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedChar
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::UnsignedShort' "
		"as first argument to function static member 'IsNumberUnsignedChar'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::Array())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::False())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::Null())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::Object())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::String())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValue::True())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::Char()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::Double()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::Float()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt(JsonValueNumber::Int())
			== false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::Long()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::LongDouble()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::LongLong()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::Short()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::UnsignedInt()) == true,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedInt'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedInt
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of function static member 'IsNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberUnsignedInt'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::Array())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::False())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::Null())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::Object())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::String())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong(JsonValue::True())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Char()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Double()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Float()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Int()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Long()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::LongDouble()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::LongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::Short()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::UnsignedLong()) == true,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLong
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberUnsignedLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValue::Array()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValue::False()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong(JsonValue::Null())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValue::Object()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValue::String()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValue::True()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Char()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Double()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Float()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Int()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Long()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::LongDouble()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::LongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::Short()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::UnsignedLongLong()) == true,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedLongLong'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedLongLong
			(JsonValueNumber::UnsignedShort()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberUnsignedLongLong'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::Array())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Array' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::False())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::False' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::Null())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Null' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::Object())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::Object' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::String())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::String' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort(JsonValue::True())
			== false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::True' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Char()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Char' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Double()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Double' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Float()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Float' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Int()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Int' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Long()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Long' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::LongDouble()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongDouble' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::LongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::LongLong' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::Short()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::Short' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::UnsignedChar()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedChar' as first argument to "
		"function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::UnsignedInt()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value::number::UnsignedInt' "
		"as first argument to function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::UnsignedLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLong' as first argument to "
		"function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is false of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::UnsignedLongLong()) == false,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is true of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedLongLong' as first argument to "
		"function static member 'IsNumberUnsignedShort'");

	//	Check return variable of
	//		function static member 'IsNumberUnsignedShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Value'
	//	is true of bool
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//			as first argument to 
	//				function static member 'IsNumberUnsignedShort'
	SourceAssert(JsonHelper::Value::IsNumberUnsignedShort
			(JsonValueNumber::UnsignedShort()) == true,
		"return variable of "
		"function static member 'IsNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Value' "
		"is false of bool, where value initialization of "
		"class 'BrainMuscles::test::simple::json::value"
		"::number::UnsignedShort' as first argument to "
		"function static member 'IsNumberUnsignedShort'");
}