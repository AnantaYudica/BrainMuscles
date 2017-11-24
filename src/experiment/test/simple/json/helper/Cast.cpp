#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test/simple/json/helper/Cast.h"
#include "test/simple/json/value/Null.h"

#include "experiment/test/simple/json/Value.h"
#include "experiment/test/simple/json/value/Array.h"
#include "experiment/test/simple/json/value/False.h"
#include "experiment/test/simple/json/value/Null.h"
#include "experiment/test/simple/json/value/Object.h"
#include "experiment/test/simple/json/value/String.h"
#include "experiment/test/simple/json/value/True.h"
#include "experiment/test/simple/json/value/Number.h"

#include "experiment/test/simple/json/helper/Cast.h"

void experiment::test::simple::json::helper::Cast::PreTest()
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

void experiment::test::simple::json::helper::Cast::Test()
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

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	Json::Value&& value_array1 = JsonValue::Array();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_array1'
	const Json::Value& const_value_array1 = value_array1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Array>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_array1' as first argument to
	//		function static member 'To'
	JsonValue::Array& cast_value_array1 
		= JsonHelper::Cast::To<JsonValue::Array>(value_array1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Array>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_array1' as first argument to
	//		function static member 'To'
	const JsonValue::Array& cast_const_value_array1
		= JsonHelper::Cast::To<JsonValue::Array>(const_value_array1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization from
	//		return variable of function static member 'ToArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToArray'
	JsonValue::Array& cast_value_array2
		= JsonHelper::Cast::ToArray(value_array1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization from
	//		return variable of function static member 'ToArray' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_array1' as first argument to
	//		function static member 'ToArray'
	const JsonValue::Array& cast_const_value_array2
		= JsonHelper::Cast::ToArray(const_value_array1);

	//	Check compare address between 
	//		variable 'value_array1' 
	//	and variable 'cast_value_array1' 
	//	is same 
	SourceAssert(&value_array1 == &cast_value_array1,
		"compare address between variable 'value_array1' "
		"and variable 'cast_value_array1' is not same");

	//	Check compare address between 
	//		variable 'value_array1' 
	//	and const variable 'cast_const_value_array1' 
	//	is same 
	SourceAssert(&value_array1 == &cast_const_value_array1,
		"compare address between variable 'value_array1' "
		"and const variable 'cast_const_value_array1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_array1' 
	//	and variable 'cast_value_array2'
	//	is same 
	SourceAssert(&cast_value_array1 == &cast_value_array2,
		"compare address between variable 'cast_value_array1' and "
		"variable 'cast_value_array2' is not same");

	//	Check compare address between 
	//		const variable 'cast_const_value_array1' 
	//	and const variable 'cast_const_value_array2'
	//	is same 
	SourceAssert(&cast_const_value_array1 == &cast_const_value_array2,
		"compare address between const variable 'cast_const_value_array1' "
		"and const variable 'cast_const_value_array2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_array1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_array1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, value_array1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&,
			Json::Value>(&JsonHelper::Cast::ToString, value_array1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_array1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_array1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_array1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_array1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&,
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_array1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_array1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_array1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_array1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_array1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_array1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_array1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_array1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_array1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_array1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_array1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_array1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, value_array1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_array1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_array1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, value_array1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_array1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_array1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_array1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_array1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_array1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_array1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_array1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_array1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_array1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");
	
	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	Json::Value&& value_false1 = JsonValue::False();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initalization of variable 'value_false1'
	const Json::Value& const_value_false1 = value_false1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::False>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_false1' as first argument to
	//		function static member 'To'
	JsonValue::False& cast_value_false1 
		= JsonHelper::Cast::To<JsonValue::False>(value_false1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::False>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_false1' as first argument to
	//		function static member 'To'
	const JsonValue::False& cast_const_value_false1
		= JsonHelper::Cast::To<JsonValue::False>(const_value_false1);

	//	Check compare address between 
	//		variable 'value_false1' 
	//	and variable 'cast_value_false1' 
	//	is same 
	SourceAssert(&value_false1 == &cast_value_false1,
		"compare address between variable 'value_false1' "
		"and variable 'cast_value_false1' is not same");

	//	Check compare address between 
	//		variable 'value_false1' 
	//	and const variable 'cast_const_value_false1' 
	//	is same 
	SourceAssert(&value_false1 == &cast_const_value_false1,
		"compare address between variable 'value_false1' "
		"and const variable 'cast_const_value_false1' is not same");

	//	check variable from
	//		return variable of function static member 'ToBool' from 
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	is false of bool
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(JsonHelper::Cast::ToBool(value_false1) == false, 
		"variable from return variable of "
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"is true of bool "
		"where variable 'value_false1' as first argument to "
		"function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_false1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToArray'");
	
	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_false1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&,
			Json::Value>(&JsonHelper::Cast::ToObject, value_false1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, value_false1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_false1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_false1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_false1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_false1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_false1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_false1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_false1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_false1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_false1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_false1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_false1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_false1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_false1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_false1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_false1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_false1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_false1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, value_false1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_false1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_false1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, value_false1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_false1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_false1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_false1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_false1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_false1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_false1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_false1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_false1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_false1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");
	
	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	Json::Value&& value_null1 = JsonValue::Null();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_null1'
	const Json::Value& const_value_null1 = value_null1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Null>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_null1' as first argument to
	//		function static member 'To'
	JsonValue::Null& cast_value_null1 
		= JsonHelper::Cast::To<JsonValue::Null>(value_null1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Null>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_null1' as first argument to
	//		function static member 'To'
	const JsonValue::Null& cast_const_value_null1 
		= JsonHelper::Cast::To<JsonValue::Null>(const_value_null1);
	
	//	Check compare address between 
	//		variable 'value_null1' 
	//	and variable 'cast_value_null1' 
	//	is same 
	SourceAssert(&value_null1 == &cast_value_null1,
		"compare address between variable 'value_null1' "
		"and variable 'cast_value_null1' is not same");

	//	Check compare address between 
	//		variable 'value_null1' 
	//	and const variable 'cast_const_value_null' 
	//	is same 
	SourceAssert(&value_null1 == &cast_const_value_null1,
		"compare address between variable 'value_null1' "
		"and const variable 'cast_const_value_null' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_null1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_null1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_null1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_null1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, value_null1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_null1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_null1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_null1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_null1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_null1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_null1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_null1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_null1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_null1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_null1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_null1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_null1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_null1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_null1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_null1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_null1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_null1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, value_null1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, value_null1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_null1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, value_null1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_null1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, value_null1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_null1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_null1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_null1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_null1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_null1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_null1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_null1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	Json::Value&& value_object1 = JsonValue::Object();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_object1'
	const Json::Value& const_value_object1 = value_object1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Object>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_object1' as first argument to
	//		function static member 'To'
	JsonValue::Object& cast_value_object1 
		= JsonHelper::Cast::To<JsonValue::Object>(value_object1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::Object>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_object1' as first argument to
	//		function static member 'To'
	const JsonValue::Object& cast_const_value_object1 
		= JsonHelper::Cast::To<JsonValue::Object>(const_value_object1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with reference initialization from
	//		return variable of function static member 'ToObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToObject'
	JsonValue::Object& cast_value_object2 
		= JsonHelper::Cast::ToObject(value_object1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with reference initialization from
	//		return variable of function static member 'ToObject' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_object1' as first argument to
	//		function static member 'ToObject'
	const JsonValue::Object& cast_const_value_object2 
		= JsonHelper::Cast::ToObject(const_value_object1);

	//	Check compare address between 
	//		variable 'value_object1' 
	//	and variable 'cast_value_object1' 
	//	is same 
	SourceAssert(&value_object1 == &cast_value_object1,
		"compare address between variable 'value_object1' "
		"and variable 'cast_value_object1' is not same");

	//	Check compare address between 
	//		variable 'value_object1' 
	//	and const variable 'cast_const_value_object1' 
	//	is same 
	SourceAssert(&value_object1 == &cast_const_value_object1,
		"compare address between variable 'value_object1' "
		"and const variable 'cast_const_value_object1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_object1' 
	//	and variable 'cast_value_object2' 
	//	is same 
	SourceAssert(&cast_value_object1 == &cast_value_object2,
		"compare address between variable 'cast_value_object1' "
		"and variable 'cast_value_object2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_object1' 
	//	and const variable 'cast_const_value_object2' 
	//	is same 
	SourceAssert(&cast_value_object1 == &cast_const_value_object2,
		"compare address between variable 'cast_value_object1' "
		"and const variable 'cast_const_value_object2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_object1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_object1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_object1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_object1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_object1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_object1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_object1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_object1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_object1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_object1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_object1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_object1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_object1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_object1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_object1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_object1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_object1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_object1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_object1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_object1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_object1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_object1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_object1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_object1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_object1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_object1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_object1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_object1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_object1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_object1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_object1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_object1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_object1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	Json::Value&& value_string1 = JsonValue::String();

	//	Declaretion const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_string1'
	const Json::Value& const_value_string1 = value_string1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::String>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_string1' as first argument to
	//		function static member 'To'
	JsonValue::String& cast_value_string1 
		= JsonHelper::Cast::To<JsonValue::String>(value_string1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::String>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_string1' as first argument to
	//		function static member 'To'
	const JsonValue::String& cast_const_value_string1
		= JsonHelper::Cast::To<JsonValue::String>(const_value_string1);
	
	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with reference initialization from
	//		return variable of function static member 'ToString' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToString'
	JsonValue::String& cast_value_string2 
		= JsonHelper::Cast::ToString(value_string1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with reference initialization from
	//		return variable of function static member 'ToString' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_string1' as first argument to
	//		function static member 'ToString'
	const JsonValue::String& cast_const_value_string2 
		= JsonHelper::Cast::ToString(const_value_string1);

	//	Check compare address between 
	//		variable 'value_string1' 
	//	and variable 'cast_value_string1' 
	//	is same 
	SourceAssert(&value_string1 == &cast_value_string1,
		"compare address between variable 'value_string1' "
		"and variable 'cast_value_string1' is not same");

	//	Check compare address between 
	//		variable 'value_string1' 
	//	and const variable 'cast_const_value_string1' 
	//	is same 
	SourceAssert(&value_string1 == &cast_const_value_string1,
		"compare address between variable 'value_string1' "
		"and const variable 'cast_const_value_string1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_string1' 
	//	and variable 'cast_value_string2' 
	//	is same 
	SourceAssert(&cast_value_string1 == &cast_value_string2,
		"compare address between variable 'cast_value_string1' "
		"and variable 'cast_value_string2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_string1' 
	//	and const variable 'cast_const_value_string2' 
	//	is same 
	SourceAssert(&cast_value_string1 == &cast_const_value_string2,
		"compare address between variable 'cast_value_string1' "
		"and const variable 'cast_const_value_string2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_string1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_string1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&,
			const Json::Value>(&JsonHelper::Cast::ToArray, value_string1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_string1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, value_string1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_string1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_string1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_string1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_string1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_string1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_string1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&,
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_string1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_string1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_string1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_string1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_string1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_string1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_string1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_string1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_string1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_string1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_string1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_string1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_string1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_string1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_string1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_string1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_string1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_string1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_string1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_string1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_string1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_string1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	Json::Value&& value_true1 = JsonValue::True();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_true1'
	const Json::Value& const_value_true1 = value_true1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::True>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_true1' as first argument to
	//		function static member 'To'
	JsonValue::True& cast_value_true1
		= JsonHelper::Cast::To<JsonValue::True>(value_true1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::True>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_true1' as first argument to
	//		function static member 'To'
	const JsonValue::True& cast_const_value_true1 
		= JsonHelper::Cast::To<JsonValue::True>(const_value_true1);

	//	Check compare address between 
	//		variable 'value_true1' 
	//	and variable 'cast_value_true1' 
	//	is same 
	SourceAssert(&value_true1 == &cast_value_true1,
		"compare address between variable 'value_true1' "
		"and variable 'cast_value_true1' is not same");

	//	Check compare address between 
	//		variable 'value_true1' 
	//	and const variable 'cast_const_value_true1' 
	//	is same 
	SourceAssert(&value_true1 == &cast_const_value_true1,
		"compare address between variable 'value_true1' "
		"and const variable 'cast_const_value_true1' is not same");

	//	check variable from
	//		return variable of function static member 'ToBool' from 
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	is false of bool
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(JsonHelper::Cast::ToBool(value_true1) == true,
		"variable from return variable of "
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"is false of bool where variable 'value_true1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_true1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_true1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_true1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, value_true1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_true1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_true1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_true1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, value_true1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_true1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberDouble'");
	
	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_true1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_true1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_true1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&,
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_true1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, value_true1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_true1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, value_true1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, value_true1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_true1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, value_true1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_true1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_true1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, value_true1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, value_true1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_true1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, value_true1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_true1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, value_true1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_true1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_true1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_true1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_true1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_true1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_true1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_true1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	Json::Value&& value_number_char1 = JsonValueNumber::Char();

	//	Declaration const left-value refernce variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_char1'
	const Json::Value& const_value_number_char1 = value_number_char1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Char>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Char& cast_value_number_char1 
		= JsonHelper::Cast::To<JsonValueNumber::Char>(value_number_char1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Char>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_char1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Char& cast_const_value_number_char1 
		= JsonHelper::Cast::To<
			JsonValueNumber::Char>(const_value_number_char1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberChar'
	JsonValueNumber::Char& cast_value_number_char2 
		= JsonHelper::Cast::ToNumberChar(value_number_char1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberChar' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_char1' as first argument to
	//		function static member 'ToNumberChar'
	const JsonValueNumber::Char& cast_const_value_number_char2 
		= JsonHelper::Cast::ToNumberChar(const_value_number_char1);

	//	Check compare address between 
	//		variable 'value_number_char1' 
	//	and variable 'cast_value_number_char1' 
	//	is same 
	SourceAssert(&value_number_char1 == &cast_value_number_char1,
		"compare address between variable 'value_number_char1' "
		"and variable 'cast_value_number_char1' is not same");

	//	Check compare address between 
	//		variable 'value_number_char1' 
	//	and const variable 'cast_const_value_number_char1' 
	//	is same 
	SourceAssert(&value_number_char1 == &cast_const_value_number_char1,
		"compare address between variable 'value_number_char1' "
		"and const variable 'cast_const_value_number_char1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_char1' 
	//	and variable 'cast_value_number_char2' 
	//	is same 
	SourceAssert(&cast_value_number_char1 == &cast_value_number_char2,
		"compare address between variable 'cast_value_number_char1' "
		"and variable 'cast_value_number_char2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_char1' 
	//	and const variable 'cast_const_value_number_char2' 
	//	is same 
	SourceAssert(&cast_value_number_char1 == &cast_const_value_number_char2,
		"compare address between variable 'cast_value_number_char1' "
		"and const variable 'cast_const_value_number_char2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_number_char1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_char1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_number_char1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_char1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_char1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_char1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_char1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_char1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_char1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_number_char1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_char1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_number_char1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_char1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_number_char1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_char1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_char1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_char1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_char1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_char1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_number_char1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_char1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_char1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_char1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_char1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_char1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_char1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_char1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_char1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_char1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_char1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_char1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_char1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_char1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	Json::Value&& value_number_double1 = JsonValueNumber::Double();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_double1'
	const Json::Value& const_value_number_double1 = value_number_double1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Double>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Double& cast_value_number_double1 
		= JsonHelper::Cast::To<JsonValueNumber::Double>
			(value_number_double1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Double>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_double1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Double& cast_const_value_number_double1 
		= JsonHelper::Cast::To<
			JsonValueNumber::Double>(const_value_number_double1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberDouble'
	JsonValueNumber::Double& cast_value_number_double2 
		= JsonHelper::Cast::ToNumberDouble(value_number_double1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_double1' as first argument to
	//		function static member 'ToNumberDouble'
	const JsonValueNumber::Double& cast_const_value_number_double2 
		= JsonHelper::Cast::ToNumberDouble(const_value_number_double1);

	//	Check compare address between 
	//		variable 'value_number_double1' 
	//	and variable 'cast_value_number_double1' 
	//	is same 
	SourceAssert(&value_number_double1 == &cast_value_number_double1,
		"compare address between variable 'value_number_double1' "
		"and variable 'cast_value_number_double1' is not same");

	//	Check compare address between 
	//		variable 'value_number_double1' 
	//	and const variable 'cast_const_value_number_double1' 
	//	is same 
	SourceAssert(&value_number_double1 == &cast_const_value_number_double1,
		"compare address between variable 'value_number_double1' "
		"and const variable 'cast_const_value_number_double1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_double1' 
	//	and variable 'cast_value_number_double2' 
	//	is same 
	SourceAssert(&cast_value_number_double1 == &cast_value_number_double2,
		"compare address between variable 'cast_value_number_double1' "
		"and variable 'cast_value_number_double2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_double1' 
	//	and const variable 'cast_const_value_number_double2' 
	//	is same 
	SourceAssert(&cast_value_number_double1 
			== &cast_const_value_number_double2,
		"compare address between variable 'cast_value_number_double1' "
		"and variable 'cast_const_value_number_double2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_double1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_double1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_double1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_double1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_double1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_double1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_double1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_double1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_double1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_double1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_double1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_number_double1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_double1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_double1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_double1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_double1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_double1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_double1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_double1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_double1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_double1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_double1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_double1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_double1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_double1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_double1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_double1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_double1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_double1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_double1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_double1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_double1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_double1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	Json::Value&& value_number_float1 = JsonValueNumber::Float();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_float1'
	const Json::Value& const_value_number_float1 = value_number_float1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Float>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Float& cast_value_number_float1 
		= JsonHelper::Cast::To<JsonValueNumber::Float>(value_number_float1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Float>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_float1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Float& cast_const_value_number_float1 
		= JsonHelper::Cast::To<
			JsonValueNumber::Float>(const_value_number_float1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberFloat'
	JsonValueNumber::Float& cast_value_number_float2 
		= JsonHelper::Cast::ToNumberFloat(value_number_float1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberFloat' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_float1' as first argument to
	//		function static member 'ToNumberFloat'
	const JsonValueNumber::Float& cast_const_value_number_float2 
		= JsonHelper::Cast::ToNumberFloat(const_value_number_float1);

	//	Check compare address between 
	//		variable 'value_number_float1' 
	//	and variable 'cast_value_number_float1' 
	//	is same 
	SourceAssert(&value_number_float1 == &cast_value_number_float1,
		"compare address between variable 'value_number_float1' "
		"and variable 'cast_value_number_float1' is not same");

	//	Check compare address between 
	//		variable 'value_number_float1' 
	//	and const variable 'cast_const_value_number_float1' 
	//	is same 
	SourceAssert(&value_number_float1 == &cast_const_value_number_float1,
		"compare address between variable 'value_number_float1' "
		"and const variable 'cast_const_value_number_float1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_float1' 
	//	and variable 'cast_value_number_float2' 
	//	is same 
	SourceAssert(&cast_value_number_float1 == &cast_value_number_float2,
		"compare address between variable 'cast_value_number_float1' "
		"and variable 'cast_value_number_float2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_float1' 
	//	and const variable 'cast_const_value_number_float2' 
	//	is same 
	SourceAssert(&cast_value_number_float1 == &cast_const_value_number_float2,
		"compare address between variable 'cast_value_number_float1' "
		"and const variable 'cast_const_value_number_float2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_number_float1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_float1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_float1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_float1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_float1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_float1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&,
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_float1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_number_float1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_float1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_float1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_float1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_number_float1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_float1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_number_float1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_float1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_float1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_float1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_float1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_float1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_float1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_float1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_float1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_float1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_float1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_float1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_float1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_float1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_float1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_float1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_float1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_float1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_float1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_float1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	Json::Value&& value_number_int1 = JsonValueNumber::Int();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_int1'
	const Json::Value& const_value_number_int1 = value_number_int1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Int>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Int& cast_value_number_int1 
		= JsonHelper::Cast::To<JsonValueNumber::Int>(value_number_int1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Int>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_int1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Int& cast_const_value_number_int1 
		= JsonHelper::Cast::To<JsonValueNumber::Int>(const_value_number_int1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberInt'
	JsonValueNumber::Int& cast_value_number_int2 
		= JsonHelper::Cast::ToNumberInt(value_number_int1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_int1' as first argument to
	//		function static member 'ToNumberInt'
	const JsonValueNumber::Int& cast_const_value_number_int2 
		= JsonHelper::Cast::ToNumberInt(const_value_number_int1);

	//	Check compare address between 
	//		variable 'value_number_int1' 
	//	and variable 'cast_value_number_int1' 
	//	is same 
	SourceAssert(&value_number_int1 == &cast_value_number_int1,
		"compare address between variable 'value_number_int1' "
		"and variable 'cast_value_number_int1' is not same");

	//	Check compare address between 
	//		variable 'value_number_int1' 
	//	and const variable 'cast_const_value_number_int1' 
	//	is same 
	SourceAssert(&value_number_int1 == &cast_const_value_number_int1,
		"compare address between variable 'value_number_int1' "
		"and const variable 'cast_const_value_number_int1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_int1' 
	//	and variable 'cast_value_number_int2' 
	//	is same 
	SourceAssert(&cast_value_number_int1 == &cast_value_number_int2,
		"compare address between variable 'cast_value_number_int1' "
		"and variable 'cast_value_number_int2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_int1' 
	//	and const variable 'cast_const_value_number_int2' 
	//	is same 
	SourceAssert(&cast_value_number_int1 == &cast_const_value_number_int2,
		"compare address between variable 'cast_value_number_int1' "
		"and const variable 'cast_const_value_number_int2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_number_int1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_int1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_number_int1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_int1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&,
			const Json::Value>(&JsonHelper::Cast::ToObject, value_number_int1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_int1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, value_number_int1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_number_int1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_int1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, value_number_int1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&,
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_int1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_number_int1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_int1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_number_int1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_int1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_int1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_int1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_int1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_int1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_number_int1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_int1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_int1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_int1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_int1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_int1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_int1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_int1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_int1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_int1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_int1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_int1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_int1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_int1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	Json::Value&& value_number_long1 = JsonValueNumber::Long();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 'value_number_long1'
	const Json::Value& const_value_number_long1 = value_number_long1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Long>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Long& cast_value_number_long1 
		= JsonHelper::Cast::To<JsonValueNumber::Long>(value_number_long1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Long>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_long1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Long& cast_const_value_number_long1 
		= JsonHelper::Cast::To<
			JsonValueNumber::Long>(const_value_number_long1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberLong'
	JsonValueNumber::Long& cast_value_number_long2 
		= JsonHelper::Cast::ToNumberLong(value_number_long1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_long1' as first argument to
	//		function static member 'ToNumberLong'
	const JsonValueNumber::Long& cast_const_value_number_long2 
		= JsonHelper::Cast::ToNumberLong(const_value_number_long1);

	//	Check compare address between 
	//		variable 'value_number_long1' 
	//	and variable 'cast_value_number_long1' 
	//	is same 
	SourceAssert(&value_number_long1 == &cast_value_number_long1,
		"compare address between variable 'value_number_long1' "
		"and variable 'cast_value_number_long1' is not same");

	//	Check compare address between 
	//		variable 'value_number_long1' 
	//	and const variable 'cast_const_value_number_long1' 
	//	is same 
	SourceAssert(&value_number_long1 == &cast_const_value_number_long1,
		"compare address between variable 'value_number_long1' "
		"and const variable 'cast_const_value_number_long1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_long1' 
	//	and variable 'cast_value_number_long2' 
	//	is same 
	SourceAssert(&cast_value_number_long1 == &cast_value_number_long2,
		"compare address between variable 'cast_value_number_long1' "
		"and variable 'cast_value_number_long2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_long1' 
	//	and const variable 'cast_const_value_number_long2' 
	//	is same 
	SourceAssert(&cast_value_number_long1 == &cast_const_value_number_long2,
		"compare address between variable 'cast_value_number_long1' "
		"and const variable 'cast_const_value_number_long2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_number_long1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_long1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, value_number_long1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_long1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_long1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_long1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_long1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_number_long1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_long1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_long1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_long1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, value_number_long1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_long1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_number_long1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_long1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_long1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_long1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_long1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_long1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&,
			Json::Value>(&JsonHelper::Cast::ToNumberShort, value_number_long1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_long1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_long1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_long1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_long1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_long1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_long1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_long1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_long1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_long1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_long1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_long1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_long1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_long1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	Json::Value&& value_number_longdouble1 = JsonValueNumber::LongDouble();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_longdouble1'
	const Json::Value& const_value_number_longdouble1
		= value_number_longdouble1;

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_longdouble1'

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::LongDouble>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'To'
	JsonValueNumber::LongDouble& cast_value_number_longdouble1 
		= JsonHelper::Cast::To<JsonValueNumber::LongDouble>
			(value_number_longdouble1);
	
	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::LongDouble>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_longdouble1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::LongDouble& cast_const_value_number_longdouble1 
		= JsonHelper::Cast::To<
			JsonValueNumber::LongDouble>(const_value_number_longdouble1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLongDouble'
	JsonValueNumber::LongDouble& cast_value_number_longdouble2 
		= JsonHelper::Cast::ToNumberLongDouble(value_number_longdouble1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLongDouble' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLongDouble'
	const JsonValueNumber::LongDouble& cast_const_value_number_longdouble2
		= JsonHelper::Cast::ToNumberLongDouble(const_value_number_longdouble1);

	//	Check compare address between 
	//		variable 'value_number_longdouble1' 
	//	and variable 'cast_value_number_longdouble1' 
	//	is same 
	SourceAssert(&value_number_longdouble1 == &cast_value_number_longdouble1,
		"compare address between variable 'value_number_longdouble1' "
		"and variable 'cast_value_number_longdouble1' is not same");

	//	Check compare address between 
	//		variable 'value_number_longdouble1' 
	//	and const variable 'cast_const_value_number_longdouble1' 
	//	is same 
	SourceAssert(&value_number_longdouble1 
			== &cast_const_value_number_longdouble1,
		"compare address between variable 'value_number_longdouble1' "
		"and const variable 'cast_const_value_number_longdouble1' "
		"is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_longdouble1' 
	//	and variable 'cast_value_number_longdouble2' 
	//	is same 
	SourceAssert(&cast_value_number_longdouble1 
			== &cast_value_number_longdouble2,
		"compare address between variable 'cast_value_number_longdouble1' "
		"and variable 'cast_value_number_longdouble2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_longdouble1' 
	//	and const variable 'cast_const_value_number_longdouble2' 
	//	is same 
	SourceAssert(&cast_value_number_longdouble1 
			== &cast_const_value_number_longdouble2,
		"compare address between variable 'cast_value_number_longdouble1' "
		"and const variable 'cast_const_value_number_longdouble2' "
		"is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool,
				value_number_longdouble1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_longdouble1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_longdouble1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_longdouble1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_longdouble1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString,
				value_number_longdouble1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString,
				value_number_longdouble1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&,
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_longdouble1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_longdouble1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_longdouble1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&,
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_longdouble1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_longdouble1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_longdouble1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&,
			Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_longdouble1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_longdouble1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&,
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_longdouble1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong,
				value_number_longdouble1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_longdouble1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_longdouble1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_longdouble1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_longdouble1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
			value_number_longdouble1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longdouble1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_longdouble1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longdouble1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	Json::Value&& value_number_longlong1 = JsonValueNumber::LongLong();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initializaiton of variable 'value_number_longlong1'
	const Json::Value& const_value_number_longlong1 = value_number_longlong1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::LongLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'To'
	JsonValueNumber::LongLong& cast_value_number_longlong1 
		= JsonHelper::Cast::To<JsonValueNumber::LongLong>
			(value_number_longlong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::LongLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_longlong1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::LongLong& cast_const_value_number_longlong1 
		= JsonHelper::Cast::To<
			JsonValueNumber::LongLong>(const_value_number_longlong1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberLongLong'
	JsonValueNumber::LongLong& cast_value_number_longlong2
		= JsonHelper::Cast::ToNumberLongLong(value_number_longlong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberLongLong' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_longlong1' as first argument to
	//		function static member 'ToNumberLongLong'
	const JsonValueNumber::LongLong& cast_const_value_number_longlong2 
		= JsonHelper::Cast::ToNumberLongLong(const_value_number_longlong1);

	//	Check compare address between 
	//		variable 'value_number_longlong1' 
	//	and variable 'cast_value_number_longlong1' 
	//	is same 
	SourceAssert(&value_number_longlong1 == &cast_value_number_longlong1,
		"compare address between variable 'value_number_longlong1' "
		"and variable 'cast_value_number_longlong1' is not same");

	//	Check compare address between 
	//		variable 'value_number_longlong1' 
	//	and const variable 'cast_const_value_number_longlong1' 
	//	is same 
	SourceAssert(&value_number_longlong1 == &cast_const_value_number_longlong1,
		"compare address between variable 'value_number_longlong1' "
		"and const variable 'cast_const_value_number_longlong1' is not same");
	
	//	Check compare address between 
	//		variable 'cast_value_number_longlong1' 
	//	and variable 'cast_value_number_longlong2' 
	//	is same 
	SourceAssert(&cast_value_number_longlong1 == &cast_value_number_longlong2,
		"compare address between variable 'cast_value_number_longlong1' "
		"and variable 'cast_value_number_longlong2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_longlong1' 
	//	and const variable 'cast_const_value_number_longlong2' 
	//	is same 
	SourceAssert(&cast_value_number_longlong1
			== &cast_const_value_number_longlong2,
		"compare address between variable 'cast_value_number_longlong1' "
		"and const variable 'cast_const_value_number_longlong2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_longlong1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_longlong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&,
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_longlong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_longlong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_longlong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&,
			Json::Value>(&JsonHelper::Cast::ToString, value_number_longlong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&,
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_longlong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_longlong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_longlong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_longlong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_longlong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_longlong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_longlong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_longlong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_longlong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_longlong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_longlong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_longlong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_longlong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_longlong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_longlong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_longlong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_longlong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_longlong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument "
		"to function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_longlong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_longlong1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_longlong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_longlong1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	Json::Value&& value_number_short1 = JsonValueNumber::Short();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_short1'
	const Json::Value& const_value_number_short1 = value_number_short1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Short>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'To'
	JsonValueNumber::Short& cast_value_number_short1 
		= JsonHelper::Cast::To<JsonValueNumber::Short>(value_number_short1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value::number::Short>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_short1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::Short& cast_const_value_number_short1
		= JsonHelper::Cast::To<
			JsonValueNumber::Short>(const_value_number_short1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberShort'
	JsonValueNumber::Short& cast_value_number_short2 
		= JsonHelper::Cast::ToNumberShort(value_number_short1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with reference initialization from
	//		return variable of function static member 'ToNumberShort' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_short1' as first argument to
	//		function static member 'ToNumberShort'
	const JsonValueNumber::Short& cast_const_value_number_short2 
		= JsonHelper::Cast::ToNumberShort(const_value_number_short1);

	//	Check compare address between 
	//		variable 'value_number_short1' 
	//	and variable 'cast_value_number_short1' 
	//	is same 
	SourceAssert(&value_number_short1 == &cast_value_number_short1,
		"compare address between variable 'value_number_short1' "
		"and variable 'cast_value_number_short1' is not same");

	//	Check compare address between 
	//		variable 'value_number_short1' 
	//	and const variable 'cast_const_value_number_short1' 
	//	is same 
	SourceAssert(&value_number_short1 == &cast_const_value_number_short1,
		"compare address between variable 'value_number_short1' "
		"and const variable 'cast_const_value_number_short1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_short1' 
	//	and variable 'cast_value_number_short2' 
	//	is same 
	SourceAssert(&cast_value_number_short1 == &cast_value_number_short2,
		"compare address between variable 'cast_value_number_short1' "
		"and variable 'cast_value_number_short2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_short1' 
	//	and const variable 'cast_const_value_number_short2' 
	//	is same 
	SourceAssert(&cast_value_number_short1 == &cast_const_value_number_short2,
		"compare address between variable 'cast_value_number_short1' "
		"and const variable 'cast_const_value_number_short2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, value_number_short1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, value_number_short1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_short1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, value_number_short1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_short1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, value_number_short1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_short1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, value_number_short1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_short1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_short1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_short1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_short1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_short1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, value_number_short1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_short1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, value_number_short1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_short1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_short1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_short1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_short1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_short1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_short1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_short1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_short1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_short1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_short1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_short1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_short1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_short1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_short1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_short1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_short1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where const variable 'value_number_short1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	Json::Value&& value_number_unsignedchar1 = JsonValueNumber::UnsignedChar();

	//	Deckaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_unsignedchar1'
	const Json::Value& const_value_number_unsignedchar1
		= value_number_unsignedchar1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedChar>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'To'
	JsonValueNumber::UnsignedChar& cast_value_number_unsignedchar1
		= JsonHelper::Cast::To<JsonValueNumber::UnsignedChar>
			(value_number_unsignedchar1);
	
	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedChar>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedchar1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::UnsignedChar& cast_const_value_number_unsignedchar1 
		= JsonHelper::Cast::To<
			JsonValueNumber::UnsignedChar>(const_value_number_unsignedchar1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedChar' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	JsonValueNumber::UnsignedChar& cast_value_number_unsignedchar2
		= JsonHelper::Cast::ToNumberUnsignedChar(value_number_unsignedchar1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedChar' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	const JsonValueNumber::UnsignedChar& cast_const_value_number_unsignedchar2 
		= JsonHelper::Cast
			::ToNumberUnsignedChar(const_value_number_unsignedchar1);

	//	Check compare address between 
	//		variable 'value_number_unsignedchar1' 
	//	and variable 'cast_value_number_unsignedchar1' 
	//	is same 
	SourceAssert(&value_number_unsignedchar1 
			== &cast_value_number_unsignedchar1,
		"compare address between variable 'value_number_unsignedchar1' "
		"and variable 'cast_value_number_unsignedchar1' is not same");

	//	Check compare address between 
	//		variable 'value_number_unsignedchar1' 
	//	and const variable 'cast_const_value_number_unsignedchar1' 
	//	is same 
	SourceAssert(&value_number_unsignedchar1 
			== &cast_const_value_number_unsignedchar1,
		"compare address between variable 'value_number_unsignedchar1' "
		"and const variable 'cast_const_value_number_unsignedchar1' "
		"is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedchar1' 
	//	and variable 'cast_value_number_unsignedchar2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedchar1 
			== &cast_value_number_unsignedchar2,
		"compare address between variable 'cast_value_number_unsignedchar1' "
		"and variable 'cast_value_number_unsignedchar2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedchar1' 
	//	and const variable 'cast_const_value_number_unsignedchar2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedchar1 
			== &cast_const_value_number_unsignedchar2,
		"compare address between variable 'cast_value_number_unsignedchar1' "
		"and const variable 'cast_const_value_number_unsignedchar2' "
		"is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_unsignedchar1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedchar1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedchar1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedchar1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&,
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedchar1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedchar1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedchar1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_unsignedchar1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedchar1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_unsignedchar1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_unsignedchar1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedchar1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_unsignedchar1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedchar1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedchar1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedchar1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_unsignedchar1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_unsignedchar1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedchar1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedchar1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedchar1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_unsignedchar1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedchar1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	Json::Value&& value_number_unsignedint1 = JsonValueNumber::UnsignedInt();
	
	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_unsignedint1'
	const Json::Value& const_value_number_unsignedint1
		= value_number_unsignedint1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedInt>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'To'
	JsonValueNumber::UnsignedInt& cast_value_number_unsignedint1 
		= JsonHelper::Cast::To<JsonValueNumber::UnsignedInt>
			(value_number_unsignedint1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedInt>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedint1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::UnsignedInt& cast_const_value_number_unsignedint1 
		= JsonHelper::Cast::To<
			JsonValueNumber::UnsignedInt>(const_value_number_unsignedint1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with reference initialization from
	//		return variable of 
	//				function static member 'ToNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	JsonValueNumber::UnsignedInt& cast_value_number_unsignedint2 
		= JsonHelper::Cast::ToNumberUnsignedInt(value_number_unsignedint1);
	
	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedInt' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	const JsonValueNumber::UnsignedInt& cast_const_value_number_unsignedint2 
		= JsonHelper::Cast
			::ToNumberUnsignedInt(const_value_number_unsignedint1);
	
	//	Check compare address between 
	//		variable 'value_number_unsignedint1' 
	//	and variable 'cast_value_number_unsignedint1' 
	//	is same 
	SourceAssert(&value_number_unsignedint1 == &cast_value_number_unsignedint1,
		"compare address between variable 'value_number_unsignedint1' "
		"and variable 'cast_value_number_unsignedint1' is not same");

	//	Check compare address between 
	//		variable 'value_number_unsignedint1' 
	//	and const variable 'cast_const_value_number_unsignedint1' 
	//	is same 
	SourceAssert(&value_number_unsignedint1 
			== &cast_const_value_number_unsignedint1,
		"compare address between variable 'value_number_unsignedint1' "
		"and const variable 'cast_const_value_number_unsignedint1' "
		"is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedint1' 
	//	and variable 'cast_value_number_unsignedint2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedint1
			== &cast_value_number_unsignedint2,
		"compare address between variable 'cast_value_number_unsignedint1' "
		"and variable 'cast_value_number_unsignedint2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedint1' 
	//	and const variable 'cast_const_value_number_unsignedint2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedint1 
			== &cast_const_value_number_unsignedint2,
		"compare address between variable 'cast_value_number_unsignedint1' "
		"and const variable 'cast_const_value_number_unsignedint2' "
		"is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_unsignedint1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedint1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedint1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedint1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedint1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&,
			Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedint1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedint1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedint1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedint1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_unsignedint1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_unsignedint1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedint1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_unsignedint1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_unsignedint1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedint1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedint1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedint1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedint1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedint1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_unsignedint1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_unsignedint1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedint1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort,
				value_number_unsignedint1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedint1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_unsignedint1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedint1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	Json::Value&& value_number_unsignedlong1 = JsonValueNumber::UnsignedLong();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable value_number_unsignedlong1
	const Json::Value& const_value_number_unsignedlong1
		= value_number_unsignedlong1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'To'
	JsonValueNumber::UnsignedLong& cast_value_number_unsignedlong1
		= JsonHelper::Cast::To<JsonValueNumber::UnsignedLong>
			(value_number_unsignedlong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedlong1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::UnsignedLong& cast_const_value_number_unsignedlong1 
		= JsonHelper::Cast::To<
			JsonValueNumber::UnsignedLong>(const_value_number_unsignedlong1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedLong' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	JsonValueNumber::UnsignedLong& cast_value_number_unsignedlong2
		= JsonHelper::Cast::ToNumberUnsignedLong(value_number_unsignedlong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedLong' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	const JsonValueNumber::UnsignedLong& cast_const_value_number_unsignedlong2 
		= JsonHelper::Cast
			::ToNumberUnsignedLong(const_value_number_unsignedlong1);

	//	Check compare address between 
	//		variable 'value_number_unsignedlong1' 
	//	and variable 'cast_value_number_unsignedlong1' 
	//	is same 
	SourceAssert(&value_number_unsignedlong1 
			== &cast_value_number_unsignedlong1,
		"compare address between variable 'value_number_unsignedlong1' "
		"and variable 'cast_value_number_unsignedlong1' is not same");

	//	Check compare address between 
	//		variable 'value_number_unsignedlong1' 
	//	and const variable 'cast_const_value_number_unsignedlong1' 
	//	is same 
	SourceAssert(&value_number_unsignedlong1 
			== &cast_const_value_number_unsignedlong1,
		"compare address between variable 'value_number_unsignedlong1' "
		"and const variable 'cast_const_value_number_unsignedlong1' "
		"is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedlong1' 
	//	and variable 'cast_value_number_unsignedlong2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedlong1 
			== &cast_value_number_unsignedlong2,
		"compare address between variable 'cast_value_number_unsignedlong1' "
		"and variable 'cast_value_number_unsignedlong2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedlong1' 
	//	and const variable 'cast_const_value_number_unsignedlong2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedlong1 
			== &cast_const_value_number_unsignedlong2,
		"compare address between variable 'cast_value_number_unsignedlong1' "
		"and const variable 'cast_const_value_number_unsignedlong2' "
		"is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_unsignedlong1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&,
			Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedlong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray,
				value_number_unsignedlong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedlong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedlong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedlong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedlong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&,
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedlong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_unsignedlong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_unsignedlong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_unsignedlong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&, 
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedlong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedlong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&,
			Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_unsignedlong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedlong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_unsignedlong1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort,
				value_number_unsignedlong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedlong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlong1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlong1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_unsignedlong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlong1' as first argument to "
		"function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	Json::Value&& value_number_unsignedlonglong1 
		= JsonValueNumber::UnsignedLongLong();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 'value_number_unsignedlonglong1'
	const Json::Value& const_value_number_unsignedlonglong1
		= value_number_unsignedlonglong1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'To'
	JsonValueNumber::UnsignedLongLong& cast_value_number_unsignedlonglong1 
		= JsonHelper::Cast::To<JsonValueNumber::UnsignedLongLong>
			(value_number_unsignedlonglong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedlonglong1' 
	//		as first argument to function static member 'To'
	const JsonValueNumber::UnsignedLongLong& 
		cast_const_value_number_unsignedlonglong1 
			= JsonHelper::Cast::To<JsonValueNumber::UnsignedLongLong>
				(const_value_number_unsignedlonglong1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedLongLong' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	JsonValueNumber::UnsignedLongLong& cast_value_number_unsignedlonglong2 
		= JsonHelper::Cast::ToNumberUnsignedLongLong
				(value_number_unsignedlonglong1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedLongLong' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedlonglong1' 
	//		as first argument to 
	//			function static member 'ToNumberUnsignedLongLong'
	const JsonValueNumber::UnsignedLongLong& 
		cast_const_value_number_unsignedlonglong2 
			= JsonHelper::Cast::ToNumberUnsignedLongLong
				(const_value_number_unsignedlonglong1);

	//	Check compare address between 
	//		variable 'value_number_unsignedlonglong1' 
	//	and variable 'cast_value_number_unsignedlonglong1' 
	//	is same 
	SourceAssert(&value_number_unsignedlonglong1 
			== &cast_value_number_unsignedlonglong1,
		"compare address between variable 'value_number_unsignedlonglong1' "
		"and variable 'cast_value_number_unsignedlonglong1' is not same");

	//	Check compare address between 
	//		variable 'value_number_unsignedlonglong1' 
	//	and const variable 'cast_const_value_number_unsignedlonglong1' 
	//	is same 
	SourceAssert(&value_number_unsignedlonglong1 
			== &cast_const_value_number_unsignedlonglong1,
		"compare address between variable 'value_number_unsignedlonglong1' "
		"and const variable 'cast_const_value_number_unsignedlonglong1' "
		"is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedlonglong1' 
	//	and variable 'cast_value_number_unsignedlonglong2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedlonglong1 
			== &cast_value_number_unsignedlonglong2,
		"compare address between "
		"variable 'cast_value_number_unsignedlonglong1' and "
		"variable 'cast_value_number_unsignedlonglong2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedlonglong1' 
	//	and const variable 'cast_const_value_number_unsignedlonglong2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedlonglong1 
			== &cast_const_value_number_unsignedlonglong2,
		"compare address between "
		"variable 'cast_value_number_unsignedlonglong1' and "
		"const variable 'cast_const_value_number_unsignedlonglong2' "
		"is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool, 
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_unsignedlonglong1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray,
				value_number_unsignedlonglong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedlonglong1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedlonglong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject,
				value_number_unsignedlonglong1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedlonglong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString,
				value_number_unsignedlonglong1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' as first argument "
		"to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' "
	//		as first argument to function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberChar,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&,
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&, 
			Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLong,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&, 
			Json::Value>(&JsonHelper::Cast::ToNumberShort,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&,
			const Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedlonglong1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedShort&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort, 
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Check function static member 'ToNumberUnsignedShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedlonglong1' 
	//		as first argument to function static member 'ToNumberUnsignedShort'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedShort&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedShort,
				value_number_unsignedlonglong1),
		"function static member 'ToNumberUnsignedShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedlonglong1' "
		"as first argument to function static member 'ToNumberUnsignedShort'");

	//	Declaration right-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	Json::Value&& value_number_unsignedshort1 
		= JsonValueNumber::UnsignedShort();

	//	Declaration const left-value reference variable of
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with reference initialization of variable 'value_number_unsignedshort1'
	const Json::Value& const_value_number_unsignedshort1 
		= value_number_unsignedshort1;

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'To'
	JsonValueNumber::UnsignedShort& cast_value_number_unsignedshort1 
		= JsonHelper::Cast::To<JsonValueNumber::UnsignedShort>
			(value_number_unsignedshort1);

	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with reference initialization from
	//		return variable of function static member 'To<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort>' from
	//			class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedshort1' as first argument to
	//		function static member 'To'
	const JsonValueNumber::UnsignedShort& 
		cast_const_value_number_unsignedshort1 
			= JsonHelper::Cast::To<JsonValueNumber::UnsignedShort>
				(const_value_number_unsignedshort1);

	//	Declaration reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedShort' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	JsonValueNumber::UnsignedShort& cast_value_number_unsignedshort2 
		= JsonHelper::Cast::ToNumberUnsignedShort(value_number_unsignedshort1);
	
	//	Declaration const reference variable of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with reference initialization from
	//		return variable of 
	//			function static member 'ToNumberUnsignedShort' from
	//				class 'BrainMuscles::test::simple::json::helper::Cast'
	//	where variable 'const_value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedShort'
	const JsonValueNumber::UnsignedShort& 
		cast_const_value_number_unsignedshort2 
			= JsonHelper::Cast::ToNumberUnsignedShort
				(const_value_number_unsignedshort1);

	//	Check compare address between 
	//		variable 'value_number_unsignedshort1' 
	//	and variable 'cast_value_number_unsignedshort1' 
	//	is same 
	SourceAssert(&value_number_unsignedshort1 
			== &cast_value_number_unsignedshort1,
		"compare address between variable 'value_number_unsignedshort1' "
		"and variable 'cast_value_number_unsignedshort1' is not same");

	//	Check compare address between 
	//		variable 'value_number_unsignedshort1' 
	//	and const variable 'cast_const_value_number_unsignedshort1' 
	//	is same 
	SourceAssert(&value_number_unsignedshort1
			== &cast_const_value_number_unsignedshort1,
		"compare address between variable 'value_number_unsignedshort1' "
		"and variable 'cast_const_value_number_unsignedshort1' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedshort1' 
	//	and variable 'cast_value_number_unsignedshort2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedshort1 
			== &cast_value_number_unsignedshort2,
		"compare address between variable 'cast_value_number_unsignedshort1' "
		"and variable 'cast_value_number_unsignedshort2' is not same");

	//	Check compare address between 
	//		variable 'cast_value_number_unsignedshort1' 
	//	and const variable 'cast_const_value_number_unsignedshort2' 
	//	is same 
	SourceAssert(&cast_value_number_unsignedshort1 
			== &cast_const_value_number_unsignedshort2,
		"compare address between variable 'cast_value_number_unsignedshort1' "
		"and variable 'cast_const_value_number_unsignedshort2' is not same");

	//	Check function static member 'ToBool' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToBool'
	SourceAssert(IsThrowException<bool,
			const Json::Value>(&JsonHelper::Cast::ToBool, 
				value_number_unsignedshort1),
		"function static member 'ToBool' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToBool'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<JsonValue::Array&, 
			Json::Value>(&JsonHelper::Cast::ToArray, 
				value_number_unsignedshort1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToArray' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToArray'
	SourceAssert(IsThrowException<const JsonValue::Array&, 
			const Json::Value>(&JsonHelper::Cast::ToArray,
				value_number_unsignedshort1),
		"function static member 'ToArray' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToArray'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<JsonValue::Object&, 
			Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedshort1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToObject' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToObject'
	SourceAssert(IsThrowException<const JsonValue::Object&, 
			const Json::Value>(&JsonHelper::Cast::ToObject, 
				value_number_unsignedshort1),
		"function static member 'ToObject' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToObject'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<JsonValue::String&, 
			Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedshort1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToString' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToString'
	SourceAssert(IsThrowException<const JsonValue::String&, 
			const Json::Value>(&JsonHelper::Cast::ToString, 
				value_number_unsignedshort1),
		"function static member 'ToString' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToString'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<JsonValueNumber::Char&, 
			Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedshort1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberChar'
	SourceAssert(IsThrowException<const JsonValueNumber::Char&,
			const Json::Value>(&JsonHelper::Cast::ToNumberChar, 
				value_number_unsignedshort1),
		"function static member 'ToNumberChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberChar'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<JsonValueNumber::Double&, 
			Json::Value>(&JsonHelper::Cast::ToNumberDouble,
				value_number_unsignedshort1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::Double&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberDouble, 
				value_number_unsignedshort1),
		"function static member 'ToNumberDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberDouble'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<JsonValueNumber::Float&,
			Json::Value>(&JsonHelper::Cast::ToNumberFloat,
				value_number_unsignedshort1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberFloat' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberFloat'
	SourceAssert(IsThrowException<const JsonValueNumber::Float&,
			const Json::Value>(&JsonHelper::Cast::ToNumberFloat, 
				value_number_unsignedshort1),
		"function static member 'ToNumberFloat' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberFloat'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<JsonValueNumber::Int&,
			Json::Value>(&JsonHelper::Cast::ToNumberInt,
				value_number_unsignedshort1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberInt'
	SourceAssert(IsThrowException<const JsonValueNumber::Int&,
			const Json::Value>(&JsonHelper::Cast::ToNumberInt, 
				value_number_unsignedshort1),
		"function static member 'ToNumberInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberInt'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<JsonValueNumber::Long&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLong, 
				value_number_unsignedshort1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLong'
	SourceAssert(IsThrowException<const JsonValueNumber::Long&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLong,
				value_number_unsignedshort1),
		"function static member 'ToNumberLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLong'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<JsonValueNumber::LongDouble&,
			Json::Value>(&JsonHelper::Cast::ToNumberLongDouble,
				value_number_unsignedshort1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongDouble' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLongDouble'
	SourceAssert(IsThrowException<const JsonValueNumber::LongDouble&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLongDouble, 
				value_number_unsignedshort1),
		"function static member 'ToNumberLongDouble' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLongDouble'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::LongLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberLongLong, 
				value_number_unsignedshort1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::LongLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberLongLong,
				value_number_unsignedshort1),
		"function static member 'ToNumberLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberLongLong'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<JsonValueNumber::Short&,
			Json::Value>(&JsonHelper::Cast::ToNumberShort, 
				value_number_unsignedshort1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberShort' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberShort'
	SourceAssert(IsThrowException<const JsonValueNumber::Short&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberShort,
				value_number_unsignedshort1),
		"function static member 'ToNumberShort' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberShort'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedChar&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedChar' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedChar'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedChar&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedChar,
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedChar' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberUnsignedChar'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedInt&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt, 
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedInt' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedInt'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedInt&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedInt,
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedInt' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' as first argument to "
		"function static member 'ToNumberUnsignedInt'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLong&, 
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong, 
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLong&,
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLong,
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' as first argument to "
		"function static member 'ToNumberUnsignedLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<JsonValueNumber::UnsignedLongLong&,
			Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong, 
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where variable 'value_number_unsignedshort1' "
		"as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

	//	Check function static member 'ToNumberUnsignedLongLong' from
	//		class 'BrainMuscles::test::simple::json::helper::Cast' 
	//	throw exception
	//	where const variable 'value_number_unsignedshort1' as first argument to
	//		function static member 'ToNumberUnsignedLongLong'
	SourceAssert(IsThrowException<const JsonValueNumber::UnsignedLongLong&, 
			const Json::Value>(&JsonHelper::Cast::ToNumberUnsignedLongLong,
				value_number_unsignedshort1),
		"function static member 'ToNumberUnsignedLongLong' from "
		"class 'BrainMuscles::test::simple::json::helper::Cast' "
		"not throw exception, where "
		"const variable 'value_number_unsignedshort1' as first argument to "
		"function static member 'ToNumberUnsignedLongLong'");

}