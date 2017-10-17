#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\Value.h"
#include "test\simple\json\value\Array.h"
#include "test\simple\json\value\False.h"
#include "test\simple\json\value\Null.h"
#include "test\simple\json\value\Number.h"
#include "test\simple\json\value\Object.h"
#include "test\simple\json\value\String.h"
#include "test\simple\json\value\True.h"

#include "test\simple\json\value\number\Char.h"
#include "test\simple\json\value\number\Double.h"
#include "test\simple\json\value\number\Float.h"
#include "test\simple\json\value\number\Int.h"
#include "test\simple\json\value\number\Long.h"
#include "test\simple\json\value\number\LongDouble.h"
#include "test\simple\json\value\number\LongLong.h"
#include "test\simple\json\value\number\Short.h"
#include "test\simple\json\value\number\UnsignedChar.h"
#include "test\simple\json\value\number\UnsignedInt.h"
#include "test\simple\json\value\number\UnsignedLong.h"
#include "test\simple\json\value\number\UnsignedLongLong.h"
#include "test\simple\json\value\number\UnsignedShort.h"

#include "experiment\test\simple\json\Value.h"

#include "experiment\test\simple\json\value\Number.h"

void experiment::test::simple::json::Value::Test()
{
	//	Declare namespace from 
	//		'BrainMuscles::test::simple'
	//	to 
	//		'BMTestSimple'
	namespace BMTestSimple = BrainMuscles::test::simple;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value'
	//	to 
	//		'JsonValue'
	namespace JsonValue = BMTestSimple::json::value;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::value::number'
	//	to
	//		'JsonValueNumber'
	namespace JsonValueNumber = JsonValue::number;

	//	Declare alias type 'Value' 
	//	with prototype class
	//		'BrainMuscles::test::simple::json::Value'
	typedef BMTestSimple::json::Value Value;

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	Value& value_array1 = JsonValue::Array();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with copy initialization from 
	//		keyword 'dynamic_cast'
	//	where  pointer class 'BrainMuscles::test::simple::json::Array'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_array1' as 
	//		first argument of keyword 'dynamic_cast'
	auto pointer_value_array1 = dynamic_cast<JsonValue::Array*>(&value_array1);

	//	Check variable 'pointer_value_array1'
	//	is not null pointer
	SourceAssert(pointer_value_array1 != nullptr,
		"variable 'pointer_value_array1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	Value& value_false1 = JsonValue::False();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::False'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_false1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_false1 = dynamic_cast<JsonValue::False*>(&value_false1);

	//	Check variable 'pointer_value_false1'
	//	is not null pointer
	SourceAssert(pointer_value_false1 != nullptr,
		"variable 'pointer_value_false1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	Value& value_null1 = JsonValue::Null();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::Null'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_null1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_null1 = dynamic_cast<JsonValue::Null*>(&value_null1);

	//	Check variable 'pointer_value_null1'
	//	is not null pointer
	SourceAssert(pointer_value_null1 != nullptr,
		"variable 'pointer_value_null1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	Value& value_object1 = JsonValue::Object();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::Object'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_object1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_object1 
		= dynamic_cast<JsonValue::Object*>(&value_object1);

	//	Check variable 'pointer_value_object1'
	//	is not null pointer
	SourceAssert(pointer_value_object1 != nullptr,
		"variable 'pointer_value_object1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	Value& value_string1 = JsonValue::String();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::String'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_string1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_string1
		= dynamic_cast<JsonValue::String*>(&value_string1);

	//	Check variable 'pointer_value_string1'
	//	is not null pointer
	SourceAssert(pointer_value_string1 != nullptr,
		"variable 'pointer_value_string1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	Value& value_true1 = JsonValue::True();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::True'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_true1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_true1 = dynamic_cast<JsonValue::True*>(&value_true1);

	//	Check variable 'pointer_value_true1'
	//	is not null pointer
	SourceAssert(pointer_value_true1 != nullptr,
		"variable 'pointer_value_true1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	Value& value_number_char1 = JsonValueNumber::Char();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number::Char'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_number_char1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_char1 
		= dynamic_cast<JsonValueNumber::Char*>(&value_number_char1);

	//	Check variable 'pointer_value_number_char1'
	//	is not null pointer
	SourceAssert(pointer_value_number_char1 != nullptr,
		"variable 'pointer_value_number_char1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	Value& value_number_double1 = JsonValueNumber::Double();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number::Double'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_number_double1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_double1 
		= dynamic_cast<JsonValueNumber::Double*>(&value_number_double1);

	//	Check variable 'pointer_value_number_double1'
	//	is not null pointer
	SourceAssert(pointer_value_number_double1 != nullptr,
		"variable 'pointer_value_number_double1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	Value& value_number_float1 = JsonValueNumber::Float();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number::Float'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_number_float1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_float1 
		= dynamic_cast<JsonValueNumber::Float*>(&value_number_float1);

	//	Check variable 'pointer_value_number_float1'
	//	is not null pointer
	SourceAssert(pointer_value_number_float1 != nullptr,
		"variable 'pointer_value_number_float1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	Value& value_number_int1 = JsonValueNumber::Int();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number::Int'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_number_int1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_int1 
		= dynamic_cast<JsonValueNumber::Int*>(&value_number_int1);

	//	Check variable 'pointer_value_number_int1'
	//	is not null pointer
	SourceAssert(pointer_value_number_int1 != nullptr,
		"variable 'pointer_value_number_int1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	Value& value_number_long1 = JsonValueNumber::Long();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number::Long'
	//		as first argument template of dynamic_cast
	//	and address of variable 'value_number_long1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_long1 
		= dynamic_cast<JsonValueNumber::Long*>(&value_number_long1);

	//	Check variable 'pointer_value_number_long1'
	//	is not null pointer
	SourceAssert(pointer_value_number_long1 != nullptr,
		"variable 'pointer_value_number_long1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble
	Value& value_number_longdouble1 = JsonValueNumber::LongDouble();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::LongDouble' as first argument template of dynamic_cast
	//	and address of variable 'value_number_longdouble1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_longdouble1 = 
		dynamic_cast<JsonValueNumber::LongDouble*>(&value_number_longdouble1);

	//	Check variable 'pointer_value_number_longdouble1'
	//	is not null pointer
	SourceAssert(pointer_value_number_longdouble1 != nullptr,
		"variable 'pointer_value_number_longdouble1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong
	Value& value_number_longlong1 = JsonValueNumber::LongLong();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::LongLong' as first argument template of dynamic_cast
	//	and address of variable 'value_number_longlong1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_longlong1 
		= dynamic_cast<JsonValueNumber::LongLong*>(&value_number_longlong1);

	//	Check variable 'pointer_value_number_longlong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_longlong1 != nullptr,
		"variable 'pointer_value_number_longlong1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short
	Value& value_number_short1 = JsonValueNumber::Short();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::Short' as first argument template of dynamic_cast
	//	and address of variable 'value_number_short1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_short1 
		= dynamic_cast<JsonValueNumber::Short*>(&value_number_short1);

	//	Check variable 'pointer_value_number_short1'
	//	is not null pointer
	SourceAssert(pointer_value_number_short1 != nullptr,
		"variable 'pointer_value_number_short1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	Value& value_number_unsignedchar1 = JsonValueNumber::UnsignedChar();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::UnsignedChar' as first argument template of dynamic_cast
	//	and address of variable 'value_number_unsignedchar1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_unsignedchar1 = dynamic_cast<
		JsonValueNumber::UnsignedChar*>(&value_number_unsignedchar1);

	//	Check variable 'pointer_value_number_unsignedchar1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
		"variable 'pointer_value_number_unsignedchar1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	Value& value_number_unsignedint1 = JsonValueNumber::UnsignedInt();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::UnsignedInt' as first argument template of dynamic_cast
	//	and address of variable 'value_number_unsignedint1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_unsignedint1 = dynamic_cast<
		JsonValueNumber::UnsignedInt*>(&value_number_unsignedint1);

	//	Check variable 'pointer_value_number_unsignedint1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedint1 != nullptr,
		"variable 'pointer_value_number_unsignedint1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	Value& value_number_unsignedlong1 = JsonValueNumber::UnsignedLong();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json
	//		::number::UnsignedLong' as first argument template of dynamic_cast
	//	and address of variable 'value_number_unsignedlong1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_unsignedlong1 = dynamic_cast<
		JsonValueNumber::UnsignedLong*>(&value_number_unsignedlong1);

	//	Check variable 'pointer_value_number_unsignedlong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
		"variable 'pointer_value_number_unsignedlong1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	Value& value_number_unsignedlonglong1 
		= JsonValueNumber::UnsignedLongLong();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number
	//		::UnsignedLongLong' as first argument template of dynamic_cast
	//	and address of variable 'value_number_unsignedlonglong1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_unsignedlonglong1 = dynamic_cast<
		JsonValueNumber::UnsignedLongLong*>(&value_number_unsignedlonglong1);

	//	Check variable 'pointer_value_number_unsignedlonglong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
		"variable 'pointer_value_number_unsignedlonglong1' is null pointer");

	//	Declare variable reference of 
	//		class 'BrainMuscles::test::simple::json::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	Value& value_number_unsignedshort1 = JsonValueNumber::UnsignedShort();

	//	Declare variable pointer of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with copy initialization from
	//		keyword 'dynamic_cast'
	//	where pointer class 'BrainMuscles::test::simple::json::number
	//		::UnsignedShort' as first argument template of dynamic_cast
	//	and address of variable 'value_number_unsignedshort1' as 
	//		first argument function of keyword 'dynamic_cast'
	auto pointer_value_number_unsignedshort1 = dynamic_cast<
		JsonValueNumber::UnsignedShort*>(&value_number_unsignedshort1);

	//	Check variable 'pointer_value_number_unsignedshort1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
		"variable 'pointer_value_number_unsignedshort1' is null pointer");
}

void experiment::test::simple::json::Value::PostTest()
{
	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::Number'
	SourceCall(experiment::test::simple::json::value::Number);
}