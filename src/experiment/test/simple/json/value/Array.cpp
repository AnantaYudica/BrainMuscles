#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test/simple/json/Memory.h"

#include "test/simple/json/Value.h"
#include "test/simple/json/value/Array.h"
#include "test/simple/json/value/False.h"
#include "test/simple/json/value/Null.h"
#include "test/simple/json/value/Number.h"
#include "test/simple/json/value/Object.h"
#include "test/simple/json/value/String.h"
#include "test/simple/json/value/True.h"

#include "test/simple/json/value/number/Char.h"
#include "test/simple/json/value/number/Double.h"
#include "test/simple/json/value/number/Float.h"
#include "test/simple/json/value/number/Int.h"
#include "test/simple/json/value/number/Long.h"
#include "test/simple/json/value/number/LongDouble.h"
#include "test/simple/json/value/number/LongLong.h"
#include "test/simple/json/value/number/Short.h"
#include "test/simple/json/value/number/UnsignedChar.h"
#include "test/simple/json/value/number/UnsignedInt.h"
#include "test/simple/json/value/number/UnsignedLong.h"
#include "test/simple/json/value/number/UnsignedLongLong.h"
#include "test/simple/json/value/number/UnsignedShort.h"

#include "experiment/test/simple/json/Memory.h"
#include "experiment/test/simple/json/Value.h"
#include "experiment/test/simple/json/pointer/Value.h"
#include "experiment/test/simple/json/value/Array.h"

void experiment::test::simple::json::value::Array::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Memory'
	SourceRequirement(experiment::test::simple::json::Memory);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Value'
	SourceRequirement(experiment::test::simple::json::Value);

	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::pointer::Value'
	SourceRequirement(experiment::test::simple::json::pointer::Value);
}

void experiment::test::simple::json::value::Array::Test()
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

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::pointer'
	//	to 
	//		'Json'
	namespace JsonPointer = Json::pointer;

	//	declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with default initialization
	JsonValue::Array value_array1;

	//	Declare const left-value reference of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization of variable 'value_array1'
	const JsonValue::Array& const_value_array1 = value_array1;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with default initialization
	JsonValue::Array value_array2;

	//	Declare const left-valur reference of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization of variable 'value_array2'
	const JsonValue::Array& const_value_array2 = value_array2;

	//	Declare const left-value reference of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with reference initialization of variable 'value_array1'

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::Array());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::False());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::Null());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::Object());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::String());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValue::True());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Char());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Double());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Float());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Int());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Long());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::LongDouble());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::LongLong());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::Short());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::UnsignedChar());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::UnsignedInt());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::UnsignedLong());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::UnsignedLongLong());

	//	Call function member 'Insert' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	as first argument to function member 'Insert'
	value_array1.Insert(JsonValueNumber::UnsignedShort());

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::Array>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Array>'
	//	where element variable at 0 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_array3 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::Array>(value_array1[0]);

	//	Check variable 'pointer_value_array3' is not null pointer
	SourceAssert(pointer_value_array3 != nullptr,
		"variable 'pointer_value_array3' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::False>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::False>'
	//	where element variable at 1 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_false1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::False>(value_array1[1]);

	//	Check variable 'pointer_value_false1' is not null pointer
	SourceAssert(pointer_value_false1 != nullptr,
		"variable 'pointer_value_false1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::Null>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Null>'
	//	where element variable at 2 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_null1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::Null>(value_array1[2]);

	//	Check variable 'pointer_value_null1' is not null pointer
	SourceAssert(pointer_value_null1 != nullptr,
		"variable 'pointer_value_null1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::Object>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Object>'
	//	where element variable at 3 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_object1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::Object>(value_array1[3]);

	//	Check variable 'pointer_value_object1' is not null pointer
	SourceAssert(pointer_value_object1 != nullptr,
		"variable 'pointer_value_object1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::String>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::String>'
	//	where element variable at 4 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_string1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::String>(value_array1[4]);

	//	Check variable 'pointer_value_string1' is not null pointer
	SourceAssert(pointer_value_string1 != nullptr,
		"variable 'pointer_value_string1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::True>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::True>'
	//	where element variable at 5 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_true1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValue::True>(value_array1[5]);

	//	Check variable 'pointer_value_true1' is not null pointer
	SourceAssert(pointer_value_true1 != nullptr,
		"variable 'pointer_value_true1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Char>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Char>'
	//	where element variable at 6 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_char1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Char>(value_array1[6]);

	//	Check variable 'pointer_value_number_char1' is not null pointer
	SourceAssert(pointer_value_number_char1 != nullptr,
		"variable 'pointer_value_number_char1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Double>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Double>'
	//	where element variable at 7 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_double1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Double>(value_array1[7]);

	//	Check variable 'pointer_value_number_double1' is not null pointer
	SourceAssert(pointer_value_number_double1 != nullptr,
		"variable 'pointer_value_number_double1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Float>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Float>'
	//	where element variable at 8 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_float1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Float>(value_array1[8]);

	//	Check variable 'pointer_value_number_float1' is not null pointer
	SourceAssert(pointer_value_number_float1 != nullptr,
		"variable 'pointer_value_number_float1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Int>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Int>'
	//	where element variable at 9 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_int1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Int>(value_array1[9]);

	//	Check variable 'pointer_value_number_int1' is not null pointer
	SourceAssert(pointer_value_number_int1 != nullptr,
		"variable 'pointer_value_number_int1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Long>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Long>'
	//	where element variable at 10 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_long1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Long>(value_array1[10]);

	//	Check variable 'pointer_value_number_long1' is not null pointer
	SourceAssert(pointer_value_number_long1 != nullptr,
		"variable 'pointer_value_number_long1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::LongDouble>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::LongDouble>'
	//	where element variable at 11 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_longdouble1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::LongDouble>(value_array1[11]);

	//	Check variable 'pointer_value_number_longdouble1' is not null pointer
	SourceAssert(pointer_value_number_longdouble1 != nullptr,
		"variable 'pointer_value_number_longdouble1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::LongLong>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::LongLong>'
	//	where element variable at 12 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_longlong1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::LongLong>(value_array1[12]);

	//	Check variable 'pointer_value_number_longlong1' is not null pointer
	SourceAssert(pointer_value_number_longlong1 != nullptr,
		"variable 'pointer_value_number_longlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value::number::Short>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Short>'
	//	where element variable at 13 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_short1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::Short>(value_array1[13]);

	//	Check variable 'pointer_value_number_short1' is not null pointer
	SourceAssert(pointer_value_number_short1 != nullptr,
		"variable 'pointer_value_number_short1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::UnsignedChar>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedChar>'
	//	where element variable at 14 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_unsignedchar1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::UnsignedChar>(value_array1[14]);

	//	Check variable 'pointer_value_number_unsignedchar1' is not null pointer
	SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
		"variable 'pointer_value_number_unsignedchar1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::UnsignedInt>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedInt>'
	//	where element variable at 15 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_unsignedint1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::UnsignedInt>(value_array1[15]);

	//	Check variable 'pointer_value_number_unsignedint1' is not null pointer
	SourceAssert(pointer_value_number_unsignedint1 != nullptr,
		"variable 'pointer_value_number_unsignedint1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::UnsignedLong>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedLong>'
	//	where element variable at 16 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_unsignedlong1 = Json::Memory::DynamicPointerCast<
		Json::Value, JsonValueNumber::UnsignedLong>(value_array1[16]);

	//	Check variable 'pointer_value_number_unsignedlong1' is not null pointer
	SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
		"variable 'pointer_value_number_unsignedlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::UnsignedLongLong>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong>'
	//	where element variable at 17 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_unsignedlonglong1
		= Json::Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedLongLong>(value_array1[17]);

	//	Check variable 'pointer_value_number_unsignedlonglong1' 
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
		"variable 'pointer_value_number_unsignedlonglong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//				BrainMuscles::test::simple::json::value
	//					::number::UnsignedShort>
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort>'
	//	where element variable at 18 from variable 'value_array1'
	//		as first argument to function static member 'DynamicPointerCast'
	auto pointer_value_number_unsignedshort1
		= Json::Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedShort>(value_array1[18]);

	//	Check variable 'pointer_value_number_unsignedshort1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
		"variable 'pointer_value_number_unsignedshort1' is null pointer");

	//	Call function member 'Clear' from 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	value_array1.Clear();

	//	Check size element of variable 'value_array1' is zero
	SourceAssert(value_array1.Size() == 0,
		"size element of variable 'value_array1' is not zero");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	JsonPointer::Value pointer_value_array4 = JsonValue::Array();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	JsonPointer::Value pointer_value_false2 = JsonValue::False();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	JsonPointer::Value pointer_value_null2 = JsonValue::Null();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	JsonPointer::Value pointer_value_object2 = JsonValue::Object();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	JsonPointer::Value pointer_value_string2 = JsonValue::String();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	JsonPointer::Value pointer_value_true2 = JsonValue::True();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	JsonPointer::Value pointer_value_number_char2 = JsonValueNumber::Char();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	JsonPointer::Value pointer_value_number_double2 
		= JsonValueNumber::Double();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	JsonPointer::Value pointer_value_number_float2 = JsonValueNumber::Float();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	JsonPointer::Value pointer_value_number_int2 = JsonValueNumber::Int();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	JsonPointer::Value pointer_value_number_long2 = JsonValueNumber::Long();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	JsonPointer::Value pointer_value_number_longdouble2
		= JsonValueNumber::LongDouble();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	JsonPointer::Value pointer_value_number_longlong2
		= JsonValueNumber::LongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	JsonPointer::Value pointer_value_number_short2 = JsonValueNumber::Short();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	JsonPointer::Value pointer_value_number_unsignedchar2
		= JsonValueNumber::UnsignedChar();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	JsonPointer::Value pointer_value_number_unsignedint2
		= JsonValueNumber::UnsignedInt();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	JsonPointer::Value pointer_value_number_unsignedlong2
		= JsonValueNumber::UnsignedLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	JsonPointer::Value pointer_value_number_unsignedlonglong2
		= JsonValueNumber::UnsignedLongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	JsonPointer::Value pointer_value_number_unsignedshort2
		= JsonValueNumber::UnsignedShort();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_array4' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert1 = value_array1.Insert(pointer_value_array4);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert1' 
	//	and 
	//		element variable at 0 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert1) == value_array1[0],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert1' and element variable "
		"at 0 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 0 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_array4' 
	//	is same
	SourceAssert(value_array1[0] == pointer_value_array4,
		"compare variable between element variable at 0 index from "
		"variable 'value_array1' and variable 'pointer_value_array4' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_false2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert2 = value_array1.Insert(pointer_value_false2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert2' 
	//	and 
	//		element variable at 1 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert2) == value_array1[1],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert2' and element variable "
		"at 1 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 1 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_false2' 
	//	is same
	SourceAssert(value_array1[1] == pointer_value_false2,
		"compare variable between element variable at 1 index from "
		"variable 'value_array1' and variable 'pointer_value_false2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_null2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert3 = value_array1.Insert(pointer_value_null2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert3' 
	//	and 
	//		element variable at 2 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert3) == value_array1[2],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert3' and element variable "
		"at 2 from "
		"variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 2 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_null2' 
	//	is same
	SourceAssert(value_array1[2] == pointer_value_null2,
		"compare variable between element variable at 2 index from "
		"variable 'value_array1' and variable 'pointer_value_null2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_object2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert4 = value_array1.Insert(pointer_value_object2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert4' 
	//	and 
	//		element variable at 3 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert4) == value_array1[3],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert4' and element variable "
		"at 3 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 3 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_object2' 
	//	is same
	SourceAssert(value_array1[3] == pointer_value_object2,
		"compare variable between element variable at 3 index from "
		"variable 'value_array1' and variable 'pointer_value_object2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_string2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert5 = value_array1.Insert(pointer_value_string2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert5' 
	//	and 
	//		element variable at 4 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert5) == value_array1[4],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert5' and element variable "
		"at 4 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 4 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_string2' 
	//	is same
	SourceAssert(value_array1[4] == pointer_value_string2,
		"compare variable between element variable at 4 index from "
		"variable 'value_array1' and variable 'pointer_value_string2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_true2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert6 = value_array1.Insert(pointer_value_true2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert6' 
	//	and 
	//		element variable at 5 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert6) == value_array1[5],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert6' and element variable "
		"at 5 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 5 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_true2' 
	//	is same
	SourceAssert(value_array1[5] == pointer_value_true2,
		"compare variable between element variable at 5 index from "
		"variable 'value_array1' and variable 'pointer_value_true2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_char2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert7 
		= value_array1.Insert(pointer_value_number_char2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert7' 
	//	and 
	//		element variable at 6 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert7) == value_array1[6],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert7' and element variable "
		"at 6 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 6 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_char2' 
	//	is same
	SourceAssert(value_array1[6] == pointer_value_number_char2,
		"compare variable between element variable at 6 index from "
		"variable 'value_array1' and variable 'pointer_value_number_char2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_double2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert8 
		= value_array1.Insert(pointer_value_number_double2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert8' 
	//	and 
	//		element variable at 7 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert8) == value_array1[7],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert8' and element variable "
		"at 7 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 7 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_double2' 
	//	is same
	SourceAssert(value_array1[7] == pointer_value_number_double2,
		"compare variable between element variable at 7 index from "
		"variable 'value_array1' and variable 'pointer_value_number_double2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_float2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert9 
		= value_array1.Insert(pointer_value_number_float2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert9' 
	//	and 
	//		element variable at 8 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert9) == value_array1[8],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert9' and element variable "
		"at 8 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 8 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_float2' 
	//	is same
	SourceAssert(value_array1[8] == pointer_value_number_float2,
		"compare variable between element variable at 8 index from "
		"variable 'value_array1' and variable 'pointer_value_number_float2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_int2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert10 
		= value_array1.Insert(pointer_value_number_int2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert10' 
	//	and 
	//		element variable at 9 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert10) == value_array1[9],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert10' and element variable "
		"at 9 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 9 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_int2' 
	//	is same
	SourceAssert(value_array1[9] == pointer_value_number_int2,
		"compare variable between element variable at 9 index from "
		"variable 'value_array1' and variable 'pointer_value_number_int2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_long2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert11 
		= value_array1.Insert(pointer_value_number_long2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert11' 
	//	and 
	//		element variable at 10 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert11) == value_array1[10],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert11' and element variable "
		"at 10 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 10 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_long2' 
	//	is same
	SourceAssert(value_array1[10] == pointer_value_number_long2,
		"compare variable between element variable at 10 index from "
		"variable 'value_array1' and variable 'pointer_value_number_long2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_longdouble2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert12 
		= value_array1.Insert(pointer_value_number_longdouble2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert12' 
	//	and 
	//		element variable at 11 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert12) == value_array1[11],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert12' and element variable "
		"at 11 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 11 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_longdouble2 
	//	is same
	SourceAssert(value_array1[11] == pointer_value_number_longdouble2,
		"compare variable between element variable at 11 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_longdouble2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_longlong2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert13 
		= value_array1.Insert(pointer_value_number_longlong2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert13' 
	//	and 
	//		element variable at 12 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert13) == value_array1[12],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert13' and element variable "
		"at 12 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 12 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_longlong2' 
	//	is same
	SourceAssert(value_array1[12] == pointer_value_number_longlong2,
		"compare variable between element variable at 12 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_longlong2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_short2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert14 
		= value_array1.Insert(pointer_value_number_short2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert14' 
	//	and 
	//		element variable at 13 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert14) == value_array1[13],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert14' and element variable "
		"at 13 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 13 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_short2' 
	//	is same
	SourceAssert(value_array1[13] == pointer_value_number_short2,
		"compare variable between element variable at 13 index from "
		"variable 'value_array1' and variable 'pointer_value_number_short2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_unsignedchar2' 
	//		as first argument to function member 'Insert'
	auto it_value_array1_insert15 
		= value_array1.Insert(pointer_value_number_unsignedchar2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert15' 
	//	and 
	//		element variable at 14 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert15) == value_array1[14],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert15' and element variable "
		"at 14 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 14 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_unsignedchar2' 
	//	is same
	SourceAssert(value_array1[14] == pointer_value_number_unsignedchar2,
		"compare variable between element variable at 14 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_unsignedchar2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_unsignedint2' as first argument to
	//		function member 'Insert'
	auto it_value_array1_insert16 
		= value_array1.Insert(pointer_value_number_unsignedint2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert16' 
	//	and 
	//		element variable at 15 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert16) == value_array1[15],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert16' and element variable "
		"at 15 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 15 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_unsignedint2' 
	//	is same
	SourceAssert(value_array1[15] == pointer_value_number_unsignedint2,
		"compare variable between element variable at 15 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_unsignedint2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_unsignedlong2'
	//		as first argument to function member 'Insert'
	auto it_value_array1_insert17 
		= value_array1.Insert(pointer_value_number_unsignedlong2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert17' 
	//	and 
	//		element variable at 16 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert17) == value_array1[16],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert17' and element variable "
		"at 16 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 16 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_unsignedlong2' 
	//	is same
	SourceAssert(value_array1[16] == pointer_value_number_unsignedlong2,
		"compare variable between element variable at 16 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_unsignedlong2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_unsignedlonglong2'
	//		as first argument to function member 'Insert'
	auto it_value_array1_insert18 
		= value_array1.Insert(pointer_value_number_unsignedlonglong2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert18' 
	//	and 
	//		element variable at 17 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert18) == value_array1[17],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert18' and element variable "
		"at 17 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 17 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_unsignedlonglong2' 
	//	is same
	SourceAssert(value_array1[17] == pointer_value_number_unsignedlonglong2,
		"compare variable between element variable at 17 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_unsignedlonglong2' "
		"is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_array1'
	//	where variable 'pointer_value_number_unsignedshort2'
	//		as first argument to function member 'Insert'
	auto it_value_array1_insert19 
		= value_array1.Insert(pointer_value_number_unsignedshort2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_array1_insert19' 
	//	and 
	//		element variable at 18 from 
	//			variable 'value_array1' 
	//	is same
	SourceAssert(
		JsonValue::Array::Value(*it_value_array1_insert19) == value_array1[18],
		"compare variable between variable value of element variable from "
		"iterator variable 'it_value_array1_insert19' and element variable "
		"at 18 from variable 'value_array1' is not same");

	//	check compare variable between 
	//		element variable at 18 from 
	//			variable 'value_array1' 
	//	and 
	//		variable 'pointer_value_number_unsignedshort2' 
	//	is same
	SourceAssert(value_array1[18] == pointer_value_number_unsignedshort2,
		"compare variable between element variable at 18 index from "
		"variable 'value_array1' "
		"and variable 'pointer_value_number_unsignedshort2' "
		"is not same");

	//	Check range-for is work to
	//		variable 'value_array1'
	for (auto it_value : value_array1)
	{
		//	Check compare variable between 
		//		variable value of 
		//			variable iterator 'it_value'
		//	and 
		//		element variable of variable 'value_array1' 
		//	is same
		//	where 'it_value' as key to access element variable from
		//		variable 'value_array1' 
		SourceAssert(JsonValue::Array::Value(it_value) 
			== value_array1[value_array1.Key(it_value)],
			"compare variable between variable value of "
			"variable iterator 'it_value' and element variable of "
			"variable 'value_array1' at %d is not same",
			value_array1.Key(it_value));
	}

	//	Check range-for is work to
	//	const variable 'value_array1'
	for (auto it_const_value : const_value_array1)
	{
		//	Check compare variable between 
		//		variable value of 
		//			variable const iterator 'it_const_value'
		//	and 
		//		element variable of variable 'value_array1' 
		//	is same
		//	where 'it_const_value' as key to access element variable from
		//		variable 'value_array1' 
		SourceAssert(JsonValue::Array::Value(it_const_value) 
			== value_array1[value_array1.Key(it_const_value)],
			"compare variable between variable value of "
			"variable const iterator 'it_const_value' and element variable of "
			"variable 'value_array1' at %d is not same",
			value_array1.Key(it_const_value));
	}

	//	Check functions static member 'ConstBegin' and 'ConstEnd' from
	//		class 'BrainMuscles::test::simple::json::value::Array'
	for (auto const_it_value_array1 = value_array1.ConstBegin(); 
		const_it_value_array1 < value_array1.ConstEnd(); 
		++const_it_value_array1)
	{
		//	Check compare variable between 
		//		variable const iterator 'const_it_value_array1'
		//	and 
		//		element variable of variable 'value_array1' 
		//	is same
		//	where 'const_it_value_array1' as key to 
		//		access element variable from
		//			variable 'value_array1' 
		SourceAssert(JsonValue::Array::Value(*const_it_value_array1)
			== value_array1[value_array1.Key(*const_it_value_array1)],
			"compare variable between "
			"variable const iterator 'const_it_value_array1' "
			"and element variable of variable 'value_array1' at %d is same",
			value_array1.Key(*const_it_value_array1));
	}

	//	Call function member 'Insert' from
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where return variable of function member 'Begin' from 
	//		variable 'value_array1' as first argument to 
	//			function member 'Insert'
	//	and 
	//		return variable of function member 'End' from  
	//			variable 'value_array1' as second argument to 
	//				function member 'Insert'
	value_array1.Insert(value_array1.Begin(), value_array1.End());

	//	Check compare varible between 
	//		element variable at between 0 and 18 from
	//			variable 'value_array1'
	//	and 
	//		element variable at between 19 and 37 from
	//			variable 'value_array1'
	//	is same
	for (size_t i = 0, j = value_array1.Size() / 2; 
		i < value_array1.Size() / 2; ++i, ++j)
	{
		//	Check compare varible between 
		//		element variable at variable 'i' from
		//			variable 'value_array1'
		//	and 
		//		element variable at variable 'j' from
		//			variable 'value_array1'
		//	is same
		SourceAssert(value_array1[i] == value_array1[j],
			"compare varible between element variable at %zu from "
			"variable 'value_array1' and element variable at j from "
			"variable 'value_array1' is not same", i, j);
	}

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Array::IteratorType'
	//	with copy initialization from 
	//		return function member 'Emplace' of 
	//			class 'BrainMuscles::test::simple::json::value::Array'
	//	where value initialization of 
	//		class BrainMuscles::test::simple::json::value::Array 
	//			as first argument to function member 'Emplace'
	auto it_value_array_emplace1 = value_array1.Emplace(JsonValue::Array());

	//	Check return variable from 
	//		function static member 'DynamicPointerCast<'
	//			BrainMuscles::test::simple::json::Value,
	//			BrainMuscles::test::simple::json::value::Array>' of
	//				class 'BrainMuscles::test::simple::json::Memory'
	//	is not null pointer
	//	where variable value of pointer variable from
	//		variable 'it_value_array_emplace1' as first argumnet to
	//			function static member 'DynamicPointerCast'
	SourceAssert((Json::Memory::DynamicPointerCast<Json::Value, 
		JsonValue::Array>(*it_value_array_emplace1) != nullptr),
		"return variable from function static member 'DynamicPointerCast<'"
		"BrainMuscles::test::simple::json::Value, "
		"BrainMuscles::test::simple::json::value::Array>' of "
		"class 'BrainMuscles::test::simple::json::Memory' "
		"is not null pointer, where variable value of pointer variable from "
		"variable 'it_value_array_emplace1' as first argumnet to "
		"function static member 'DynamicPointerCast'");

	//	Call function member 'Erase' of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where return variable minus 1 of function member 'End' from
	//		variable 'value_array1' as first argument to 
	//			function member 'Erase'
	value_array1.Erase(value_array1.End() - 1);

	//	Declare variable of std::size_t
	//	with copy initialization from half of return variable of
	//		function member 'Size' from 
	//			variabe 'value_array1'
	auto half_value_array1_size = value_array1.Size() / 2;

	//	Check return variable of 
	//		function member 'Size' from
	//			variabe 'value_array1'
	//	is even
	SourceAssert(value_array1.Size() % 2 == 0,
		"return variable of function member 'Size' "
		"from variabe 'value_array1' is odd");

	//	Call function member 'Erase' of 
	//		variable 'value_array1'
	//	where return variable plus variable 'half_value_array1_size' of 
	//		function member 'Begin' from
	//			variable 'value_array1' as first argument to
	//				function member 'Erase'
	//	and return variable of 
	//		function member 'End' from
	//			variable 'value_array1' as first argument to
	//				function member 'Erase'
	value_array1.Erase(
		value_array1.Begin() + half_value_array1_size, value_array1.End());

	//	Check compare variable between 
	//		return variable of function member 'Size' from
	//			variable 'value_array1'
	//	and
	//		variable 'half_value_array1_size'
	//	is same
	SourceAssert(value_array1.Size() == half_value_array1_size,
		"compare variable between return variable of "
		"function member 'Size' from variable 'value_array1' and "
		"variable 'half_value_array1_size' is not same");

	//	Call function member 'Swap' of 
	//		variable 'value_array1'
	//	where variable 'value_array2' as first argument to
	//		function member 'Swap'
	value_array1.Swap(value_array2);

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_array4'
	//	is same
	//	where 0 of int as first argument to function member 'Find'
	SourceAssert(
		JsonValue::Array::Value(*value_array2.Find(0)) == pointer_value_array4,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_array4' "
		"is not same, where 0 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_false2'
	//	is same
	//	where 1 of int as first argument to function member 'Find'
	SourceAssert(
		JsonValue::Array::Value(*value_array2.Find(1)) == pointer_value_false2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_false2' "
		"is not same, where 1 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_null2'
	//	is same
	//	where 2 of int as first argument to function member 'Find'
	SourceAssert(
		JsonValue::Array::Value(*value_array2.Find(2)) == pointer_value_null2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_null2' "
		"is not same, where 2 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_object2'
	//	is same
	//	where 3 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(3)) 
		== pointer_value_object2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_object2' "
		"is not same, where 3 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_string2'
	//	is same
	//	where 4 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(4))
		== pointer_value_string2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_string2' "
		"is not same, where 4 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_true2'
	//	is same
	//	where 5 of int as first argument to function member 'Find'
	SourceAssert(
		JsonValue::Array::Value(*value_array2.Find(5)) == pointer_value_true2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_true2' "
		"is not same, where 5 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_char2'
	//	is same
	//	where 6 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(6)) 
		== pointer_value_number_char2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_char2' "
		"is not same, where 6 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_double2'
	//	is same
	//	where 7 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(7)) 
		== pointer_value_number_double2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_double2' "
		"is not same, where 7 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_float2'
	//	is same
	//	where 8 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(8))
		== pointer_value_number_float2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_float2' "
		"is not same, where 8 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_int2'
	//	is same
	//	where 9 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(9))
		== pointer_value_number_int2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_int2' "
		"is not same, where 9 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_long2'
	//	is same
	//	where 10 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(10))
		== pointer_value_number_long2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_long2' "
		"is not same, where 10 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_longdouble2'
	//	is same
	//	where 11 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(11)) 
		== pointer_value_number_longdouble2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_longdouble2' "
		"is not same, where 11 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_longlong2'
	//	is same
	//	where 12 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(12)) 
		== pointer_value_number_longlong2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_longlong2' "
		"is not same, where 12 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_short2'
	//	is same
	//	where 13 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(13)) 
		== pointer_value_number_short2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and variable 'pointer_value_number_short2' "
		"is not same, where 13 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_unsignedchar2'
	//	is same
	//	where 14 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(14))
		== pointer_value_number_unsignedchar2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_unsignedchar2' "
		"is not same, where 14 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_unsignedint2'
	//	is same
	//	where 15 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(15))
		== pointer_value_number_unsignedint2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_unsignedint2' "
		"is not same, where 15 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_unsignedlong2'
	//	is same
	//	where 16 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(16))
		== pointer_value_number_unsignedlong2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_unsignedlong2' "
		"is not same, where 16 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_unsignedlonglong2'
	//	is same
	//	where 17 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(17))
		== pointer_value_number_unsignedlonglong2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_unsignedlonglong2' "
		"is not same, where 17 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		variable value of pointer variable from 
	//			return variable of function member 'Find' from
	//				variable 'value_array2'
	//	and 
	//		variable 'pointer_value_number_unsignedshort2'
	//	is same
	//	where 18 of int as first argument to function member 'Find'
	SourceAssert(JsonValue::Array::Value(*value_array2.Find(18)) 
		== pointer_value_number_unsignedshort2,
		"compare variable between variable value of pointer variable from "
		"return variable of function member 'Find' from "
		"variable 'value_array2' and "
		"variable 'pointer_value_number_unsignedshort2' "
		"is not same, where 18 of int as first argument to "
		"function member 'Find'");

	//	Check compare variable between 
	//		return variable of function member 'Find' from
	//			variable 'value_array2'
	//	and 
	//		return variable of functon member 'End' from
	//			variable 'value_array2'
	//	is same
	//	where 19 of int as first argument to function member 'Find'
	SourceAssert(value_array2.Find(19) == value_array2.End(),
		"compare variable between return variable of "
		"function member 'Find' from variable 'value_array2' "
		"and return variable of functon member 'End' from "
		"variable 'value_array2' is not same, "
		"where 19 of int as first argument to function member 'Find'");

	//	check compare variable between 
	//		element variable of
	//			variable 'value_array2'
	//	and
	//		return variable of function (or const) member 'At' from
	//			variable 'value_array2'
	//	is same 
	for (size_t i = 0; i < value_array2.Size(); ++i)
	{
		//	check compare variable between 
		//		element variable at variable 'i' of
		//			variable 'value_array2'
		//	and return variable of function member 'At' from
		//		variable 'value_array2'
		//	is same
		//	where variable 'i' as first argument to
		//		function member 'At'
		SourceAssert(value_array2[i] == value_array2.At(i),
			"compare variable between element variable at %zu of "
			"variable 'value_array2' and return variable of "
			"function member 'At' from variable 'value_array2' is not same "
			"where %zu as first argument to function member 'At'", i, i);

		//	check compare variable between 
		//		element variable at variable 'i' of
		//			variable 'value_array2'
		//	and return variable of function const member 'At' from
		//		variable 'value_array2'
		//	is same
		//	where variable 'i' as first argument to
		//		function const member 'At'
		SourceAssert(const_value_array2[i] 
			== const_value_array2.At(i),
			"compare variable between element variable at %zu of "
			"variable 'value_array2' and return variable of "
			"function const member 'At' from variable 'value_array2' "
			"is not same where %zu as first argument to "
			"function const member 'At'", i, i);
	}

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with copy initalization from variable 'value_array2'
	BMTestSimple::json::value::Array value_array5(value_array2);

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	with copy initalization from variable 'value_array5'
	BMTestSimple::json::value::Array value_array6 = value_array5;

	//	Check element variable between
	//		variable 'value_array1',
	//		variable 'value_array5'
	//	and 
	//		variable 'value_array6' 
	//	is same 
	for (std::size_t i = 0; i < value_array1.Size(); ++i)
	{
		//	Check compare variable between 
		//		element variable at variable 'i' of
		//			variable 'value_array1'
		//	and
		//		element variable at variable 'i' of
		//			variable 'value_array5'
		//	is same
		SourceAssert(value_array1[i] == value_array5[i] ,
			"compare variable between element variable at %zu of "
			"variable 'value_array1' and element variable at %zu of "
			"variable 'value_array5' is not same ", i, i);

		//	Check compare variable between 
		//		element variable at variable 'i' of
		//			variable 'value_array1'
		//	and
		//		element variable at variable 'i' of
		//			variable 'value_array6'
		//	is same
		SourceAssert(value_array1[i] == value_array6[i],
			"compare variable between element variable at %zu of "
			"variable 'value_array1' and element variable at %zu of "
			"variable 'value_array6' is not same ", i, i);
	}

	//	Check compare type between
	//		return variable of function member 'Container' from
	//			variable 'value_array1'
	//	and
	//		type definition of 'Json::Constant::ContainerArrayType'
	//	is same
	SourceAssert(typeid(value_array1.Container()).hash_code() 
		== typeid(Json::Constant::ContainerArrayType).hash_code(),
		"compare type between return variable of "
		"function member 'Container' from variable 'value_array1' and "
		"type definition of 'Json::Constant::ContainerArrayType' is not same");
}