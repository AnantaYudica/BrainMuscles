#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\Memory.h"

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

#include "experiment\test\simple\json\Memory.h"
#include "experiment\test\simple\json\Value.h"
#include "experiment\test\simple\json\pointer\Value.h"

#include "experiment\test\simple\json\value\Object.h"


void experiment::test::simple::json::value::Object::PreTest()
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

void experiment::test::simple::json::value::Object::Test()
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
	namespace JsonValueNumber = Json::value::number;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::pointer'
	//	to 
	//		'JsonPointer'
	namespace JsonPointer = Json::pointer;

	//	Declare alias type 'Memory' 
	//	with prototype class
	//		'BrainMuscles::test::simple::json::Memory'
	typedef BMTestSimple::json::Memory Memory;

	//	Declare alias type 'JsonValueObject' 
	//	with prototype class
	//		'BrainMuscles::test::simple::json::value::Object'
	typedef JsonValue::Object JsonValueObject;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	with default initialization
	Json::value::Object value_object1;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::value::Object' 
	//	with default initialization
	Json::value::Object value_object2;

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//	where 'array1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["array1"] = JsonValue::Array();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with initializationvalue of 
	//		class 'BrainMuscles::test::simple::json::value::False'
	//	where 'false1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["false1"] = JsonValue::False();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	//	where 'null1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["null1"] = JsonValue::Null();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	//	where 'object3' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["object3"] = JsonValue::Object();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	//	where 'string1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["string1"] = JsonValue::String();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	//	where 'true1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["true1"] = JsonValue::True();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	where 'number_char1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_char1"] = JsonValueNumber::Char();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	where 'number_double1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_double1"] = JsonValueNumber::Double();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	where 'number_float1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_float1"] = JsonValueNumber::Float();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	where 'number_int1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_int1"] = JsonValueNumber::Int();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	where 'number_long1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_long1"] = JsonValueNumber::Long();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	where 'number_longdouble1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_longdouble1"] = JsonValueNumber::LongDouble();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	where 'number_longlong1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_longlong1"] = JsonValueNumber::LongLong();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	where 'number_short1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_short1"] = JsonValueNumber::Short();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	where 'number_unsignedchar1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_unsignedchar1"] = JsonValueNumber::UnsignedChar();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	where 'number_unsignedint1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_unsignedint1"] = JsonValueNumber::UnsignedInt();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	where 'number_unsignedlong1' as key to access element variable from 
	//		variable 'value_object1'
	value_object1["number_unsignedlong1"] = JsonValueNumber::UnsignedLong();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	where 'number_unsignedlonglong1' as key to access element variable from
	//		variable 'value_object1'
	value_object1["number_unsignedlonglong1"] 
		= JsonValueNumber::UnsignedLongLong();

	//	Assignment to element variable of 
	//		variable 'value_object1' 
	//	with value initialization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	where 'number_unsignedshort1' as key to access element variable from 
	//		variable 'value_object1' 
	value_object1["number_unsignedshort1"] = JsonValueNumber::UnsignedShort();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::Array>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Array>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'array1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_array1 = 
		Memory::DynamicPointerCast<
			Json::Value, JsonValue::Array>(value_object1["array1"]);

	//	Check variable 'pointer_value_array1' is not null pointer
	SourceAssert(pointer_value_array1 != nullptr,
		"variable 'pointer_value_array1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::False>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::False>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'false1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_false1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValue::False>(value_object1["false1"]);

	//	Check variable 'pointer_value_false1' is not null pointer
	SourceAssert(pointer_value_false1 != nullptr,
		"variable 'pointer_value_false1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::Null>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Null>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'null1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_null1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValue::Null>(value_object1["null1"]);

	//	Check variable 'pointer_value_null1' is not null pointer
	SourceAssert(pointer_value_null1 != nullptr,
		"variable 'pointer_value_null1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::Object>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::Object>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'object3' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_object3 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValue::Object>(value_object1["object3"]);

	//	Check variable 'pointer_value_object3' is not null pointer
	SourceAssert(pointer_value_object3 != nullptr,
		"variable 'pointer_value_object3' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::String>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::String>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'string1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_string1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValue::String>(value_object1["string1"]);

	//	Check variable 'pointer_value_string1' is not null pointer
	SourceAssert(pointer_value_string1 != nullptr,
		"variable 'pointer_value_string1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::True>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::True>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'true1' as key to access element variable from 
	//		variable 'value_object1'
	auto pointer_value_true1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValue::True>(value_object1["true1"]);

	//	Check variable 'pointer_value_true1' is not null pointer
	SourceAssert(pointer_value_true1 != nullptr,
		"variable 'pointer_value_true1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Char>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Char>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_char1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_char1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Char>(value_object1["number_char1"]);

	//	Check variable 'pointer_value_number_char1' is not null pointer
	SourceAssert(pointer_value_number_char1 != nullptr,
		"variable 'pointer_value_number_char1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Double>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Double>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_double1' as key to access element variable from
	//		variable 'value_object1' 
	auto pointer_value_number_double1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Double>(value_object1["number_double1"]);

	//	Check variable 'pointer_value_number_double1' is not null pointer
	SourceAssert(pointer_value_number_double1 != nullptr,
		"variable 'pointer_value_number_double1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Float>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Float>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_float1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_float1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Float>(value_object1["number_float1"]);

	//	Check variable 'pointer_value_number_float1' is not null pointer
	SourceAssert(pointer_value_number_float1 != nullptr,
		"variable 'pointer_value_number_float1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Int>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Int>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_int1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_int1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Int>(value_object1["number_int1"]);

	//	Check variable 'pointer_value_number_int1' is not null pointer
	SourceAssert(pointer_value_number_int1 != nullptr,
		"variable 'pointer_value_number_int1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Long>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Long>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_long1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_long1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Long>(value_object1["number_long1"]);

	//	Check variable 'pointer_value_number_long1' is not null pointer
	SourceAssert(pointer_value_number_long1 != nullptr,
		"variable 'pointer_value_number_long1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::LongDouble>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::LongDouble>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_longdouble1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_longdouble1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::LongDouble>(value_object1["number_longdouble1"]);

	//	Check variable 'pointer_value_number_longdouble1' is not null pointer
	SourceAssert(pointer_value_number_longdouble1 != nullptr,
		"variable 'pointer_value_number_longdouble1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::LongLong>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::LongLong>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_longlong1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_longlong1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::LongLong>(value_object1["number_longlong1"]);

	//	Check variable 'pointer_value_number_longlong1' is not null pointer
	SourceAssert(pointer_value_number_longlong1 != nullptr,
		"variable 'pointer_value_number_longlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::Short>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::Short>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_short1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_short1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::Short>(value_object1["number_short1"]);

	//	Check variable 'pointer_value_number_short1' is not null pointer
	SourceAssert(pointer_value_number_short1 != nullptr,
		"variable 'pointer_value_number_short1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::UnsignedChar>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedChar>'
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_unsignedchar1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_unsignedchar1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedChar>(
				value_object1["number_unsignedchar1"]);

	//	Check variable 'pointer_value_number_unsignedchar1' is not null pointer
	SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
		"variable 'pointer_value_number_unsignedchar1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::UnsignedInt>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedInt>' 
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_unsignedint1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_unsignedint1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedInt>(
				value_object1["number_unsignedint1"]);

	//	Check variable 'pointer_value_number_unsignedint1' is not null pointer
	SourceAssert(pointer_value_number_unsignedint1 != nullptr,
		"variable 'pointer_value_number_unsignedint1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value::number::UnsignedLong>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value::number::UnsignedLong>'
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_unsignedlong1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_unsignedlong1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedLong>(
				value_object1["number_unsignedlong1"]);

	//	Check variable 'pointer_value_number_unsignedlong1' is not null pointer
	SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
		"variable 'pointer_value_number_unsignedlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong>'
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_unsignedlonglong1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_unsignedlonglong1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedLongLong>(
				value_object1["number_unsignedlonglong1"]);

	//	Check variable 'pointer_value_number_unsignedlonglong1' 
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
		"variable 'pointer_value_number_unsignedlonglong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory::SharedPointerType<
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort>'
	//	with copy initialization from 
	//		function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::Value, 
	//			BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort>'
	//		from class 'BrainMuscles::test::simple::json::Memory'
	//	where element variable of variable 'value_object1' 
	//		as first argument to function static member 'DynamicPointerCast'
	//	and 'number_unsignedshort1' as key to access element variable from 
	//		variable 'value_object1' 
	auto pointer_value_number_unsignedshort1 = 
		Memory::DynamicPointerCast<Json::Value, 
			JsonValueNumber::UnsignedShort>(
				value_object1["number_unsignedshort1"]);

	//	Check variable 'pointer_value_number_unsignedshort1' 
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
		"variable 'pointer_value_number_unsignedshort1' is null pointer");

	//	Call function member 'Clear' from 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	value_object1.Clear();

	//	Check size element of variable 'value_object1' is zero
	SourceAssert(value_object1.Size() == 0,
		"size element of variable 'value_object1' is not zero");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::Array'
	JsonPointer::Value pointer_value_array2 = JsonValue::Array();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::False'
	JsonPointer::Value pointer_value_false2 = JsonValue::False();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::Null'
	JsonPointer::Value pointer_value_null2 = JsonValue::Null();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::Object'
	JsonPointer::Value pointer_value_object4 = JsonValue::Object();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::String'
	JsonPointer::Value pointer_value_string2 = JsonValue::String();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::True'
	JsonPointer::Value pointer_value_true2 = JsonValue::True();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Char'
	JsonPointer::Value pointer_value_number_char2 = JsonValueNumber::Char();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Double'
	JsonPointer::Value pointer_value_number_double2 
		= JsonValueNumber::Double();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Float'
	JsonPointer::Value pointer_value_number_float2 = JsonValueNumber::Float();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Int'
	JsonPointer::Value pointer_value_number_int2 = JsonValueNumber::Int();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Long'
	JsonPointer::Value pointer_value_number_long2 = JsonValueNumber::Long();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::LongDouble'
	JsonPointer::Value pointer_value_number_longdouble2 
		= JsonValueNumber::LongDouble();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::LongLong'
	JsonPointer::Value pointer_value_number_longlong2 
		= JsonValueNumber::LongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value::number::Short'
	JsonPointer::Value pointer_value_number_short2 = JsonValueNumber::Short();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedChar'
	JsonPointer::Value pointer_value_number_unsignedchar2 
		= JsonValueNumber::UnsignedChar();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedInt'
	JsonPointer::Value pointer_value_number_unsignedint2 
		= JsonValueNumber::UnsignedInt();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedLong'
	JsonPointer::Value pointer_value_number_unsignedlong2 
		= JsonValueNumber::UnsignedLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedLongLong'
	JsonPointer::Value pointer_value_number_unsignedlonglong2
		= JsonValueNumber::UnsignedLongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with copy initialization from 
	//		value initialization of 
	//			class 'BrainMuscles::test::simple::json::value
	//				::number::UnsignedShort'
	JsonPointer::Value pointer_value_number_unsignedshort2 
		= JsonValueNumber::UnsignedShort();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_array1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_array2' as second argument to 
	//		function member 'Emplace'
	auto it_value_object1_emplace1 = 
		value_object1.Emplace("value_array1", pointer_value_array2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace1' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_array1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace1) 
			== value_object1["value_array1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace1' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_array1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_array2' 
	//	is same
	//	where 'value_array1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_array1"] == pointer_value_array2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_array2' "
		"is not same, where 'value_array1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_false1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_false2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace2 
		= value_object1.Emplace("value_false1", pointer_value_false2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace2' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_false1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace2) 
			== value_object1["value_false1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace2' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_false1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_false2' 
	//	is same
	//	where 'value_false1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_false1"] == pointer_value_false2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_false2' "
		"is not same, where 'value_false1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_null1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_null2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace3 
		= value_object1.Emplace("value_null1", pointer_value_null2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace3' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_null1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace3) 
			== value_object1["value_null1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace3' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_null1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_null2' 
	//	is same
	//	where 'value_null1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_null1"] == pointer_value_null2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_null2' "
		"is not same, where 'value_null1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_object4' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_object4' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace4 
		= value_object1.Emplace("value_object4", pointer_value_object4);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace4' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_object4' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace4)
			== value_object1["value_object4"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace4' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_object4' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_object4' 
	//	is same
	//	where 'value_object4' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_object4"] == pointer_value_object4,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_object4' "
		"is not same, where 'value_object1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_string1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_string2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace5
		= value_object1.Emplace("value_string1", pointer_value_string2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace5' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_string1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace5) 
			== value_object1["value_string1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace5' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_string1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_string2' 
	//	is same
	//	where 'value_string1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_string1"] == pointer_value_string2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_string2' "
		"is not same, where 'value_string1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_true1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_true2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace6 
		= value_object1.Emplace("value_true1", pointer_value_true2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace6' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_true1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace6) 
			== value_object1["value_true1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace6' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_true1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_true2' 
	//	is same
	//	where 'value_true1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_true1"] == pointer_value_true2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_true2' "
		"is not same, where 'value_true1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_char1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_char2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace7 
		= value_object1.Emplace("value_number_char1", 
			pointer_value_number_char2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace7' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_char1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace7) 
			== value_object1["value_number_char1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace7' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_char1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_char2' 
	//	is same
	//	where 'value_number_char1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_char1"] 
			== pointer_value_number_char2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_char2' "
		"is not same, where 'value_number_char1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_double1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_double2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace8 = 
		value_object1.Emplace("value_number_double1", 
			pointer_value_number_double2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace8' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_double1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace8)
			== value_object1["value_number_double1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace8' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_double1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_double2' 
	//	is same
	//	where 'value_number_double1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_double1"] 
		== pointer_value_number_double2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_double2' "
		"is not same, where 'value_number_double1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_float1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_float2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace9 = 
		value_object1.Emplace("value_number_float1", 
			pointer_value_number_float2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace9' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_float1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace9) 
			== value_object1["value_number_float1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace9' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_float1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_float2' 
	//	is same
	//	where 'value_number_float1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_float1"] 
			== pointer_value_number_float2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_float2' "
		"is not same, where 'value_number_float1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_int1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_int2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace10 = 
		value_object1.Emplace("value_number_int1", pointer_value_number_int2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace10' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_int1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace10) 
			== value_object1["value_number_int1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace10' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_int1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_int2' 
	//	is same
	//	where 'value_number_int1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_int1"] 
			== pointer_value_number_int2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_int2' "
		"is not same, where 'value_number_int1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_long1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_long2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace11 = 
		value_object1.Emplace("value_number_long1", 
			pointer_value_number_long2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace11' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_long1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace11) 
			== value_object1["value_number_long1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace11' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_long1' as key to access element variable from "
		"variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_long2' 
	//	is same
	//	where 'value_number_long1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_long1"] 
			== pointer_value_number_long2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_long2' "
		"is not same, where 'value_number_long1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_longdouble1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_longdouble2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace12 = 
		value_object1.Emplace("value_number_longdouble1", 
			pointer_value_number_longdouble2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace12' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_longdouble1' as key to access element variable from
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace12)
			== value_object1["value_number_longdouble1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace12' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_longdouble1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_longdouble2' 
	//	is same
	//	where 'value_number_longdouble1' as key to access element variable from
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_longdouble1"] 
			== pointer_value_number_longdouble2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_longdouble2' "
		"is not same, where 'value_number_longdouble1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_longlong1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_longlong2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace13 =
		value_object1.Emplace("value_number_longlong1", 
			pointer_value_number_longlong2);

	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace13' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_longlong1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace13) 
			== value_object1["value_number_longlong1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace13' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_longlong1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_longlong2' 
	//	is same
	//	where 'value_number_longlong1' as key to access element variable from
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_longlong1"] 
			== pointer_value_number_longlong2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_longlong2' "
		"is not same, where 'value_number_longlong1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_short1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_short2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace14 = 
		value_object1.Emplace("value_number_short1", 
			pointer_value_number_short2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace14' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_short1' as key to access element variable from 
	//		variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace14) 
			== value_object1["value_number_short1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace14' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_short1' as key to access element variable from "
		"variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_short2' 
	//	is same
	//	where 'value_number_short1' as key to access element variable from
	//		variable 'value_object1' 
	SourceAssert(value_object1["value_number_short1"] 
			== pointer_value_number_short2,
		"compare variable between element variable from "
		"variable 'value_object1' and variable 'pointer_value_number_short2' "
		"is not same, where 'value_number_short1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_unsignedchar1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_unsignedchar2' as second argumnet to
	//		function member 'Emplace'
	auto it_value_object1_emplace15 = 
		value_object1.Emplace("value_number_unsignedchar1",
			pointer_value_number_unsignedchar2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace15' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_unsignedchar1' as key to 
	//		access element variable from 
	//			variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace15) 
			== value_object1["value_number_unsignedchar1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace15' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_unsignedchar1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_unsignedchar2' 
	//	is same
	//	where 'value_number_unsignedchar1' 
	//		as key to access element variable from
	//			variable 'value_object1' 
	SourceAssert(value_object1["value_number_unsignedchar1"] 
			== pointer_value_number_unsignedchar2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_unsignedchar2' "
		"is not same, where 'value_number_unsignedchar1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_unsignedint1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_unsignedint2' as second argumnet to 
	//		function member 'Emplace'
	auto it_value_object1_emplace16 = 
		value_object1.Emplace("value_number_unsignedint1", 
			pointer_value_number_unsignedint2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace16' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_unsignedint1' as key to 
	//		access element variable from 
	//			variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace16) 
			== value_object1["value_number_unsignedint1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace16' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_unsignedint1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_unsignedint2' 
	//	is same
	//	where 'value_number_unsignedint1' 
	//		as key to access element variable from
	//			variable 'value_object1' 
	SourceAssert(value_object1["value_number_unsignedint1"] 
			== pointer_value_number_unsignedint2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_unsignedint2' "
		"is not same, where 'value_number_unsignedint1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_unsignedlong1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_unsignedlong2' as second argumnet to
	//		function member 'Emplace'
	auto it_value_object1_emplace17 =
		value_object1.Emplace("value_number_unsignedlong1", 
			pointer_value_number_unsignedlong2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace17' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_unsignedlong1' as key to 
	//		access element variable from 
	//			variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace17) 
			== value_object1["value_number_unsignedlong1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace17' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_unsignedlong1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_unsignedlong2' 
	//	is same
	//	where 'value_number_unsignedlong1' as key to 
	//		access element variable from
	//			variable 'value_object1' 
	SourceAssert(value_object1["value_number_unsignedlong1"] 
			== pointer_value_number_unsignedlong2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_unsignedlong2' "
		"is not same, where 'value_number_unsignedlong1' as key to "
		"access element variable from variable 'value_object1' ");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_unsignedlonglong1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_unsignedlonglong2' 
	//		as second argumnet to
	//			function member 'Emplace'
	auto it_value_object1_emplace18 = 
		value_object1.Emplace("value_number_unsignedlonglong1", 
			pointer_value_number_unsignedlonglong2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace18' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_unsignedlonglong1' as key to 
	//		access element variable from
	//			variable 'value_object1' 
	SourceAssert(JsonValueObject::Value(*it_value_object1_emplace18) 
			== value_object1["value_number_unsignedlonglong1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace18' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_unsignedlonglong1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_unsignedlonglong2' 
	//	is same
	//	where 'value_number_unsignedlonglong1' as key to 
	//		access element variable from
	//			variable 'value_object1' 
	SourceAssert(value_object1["value_number_unsignedlonglong1"] 
			== pointer_value_number_unsignedlonglong2,
		"compare variable between element variable from "
		"variable 'value_object1' and "
		"variable 'pointer_value_number_unsignedlonglong2' "
		"is not same, where 'value_number_unsignedlonglong1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Emplace' from 
	//			variable 'value_object1'
	//	where 'value_number_unsignedshort1' as first argument to 
	//		function member 'Emplace'
	//	and variable 'pointer_value_number_unsignedshort2' 
	//		as second argumnet to
	//			function member 'Emplace'
	auto it_value_object1_emplace19 =
		value_object1.Emplace("value_number_unsignedshort1", 
			pointer_value_number_unsignedshort2);
	
	//	Check compare variable between 
	//		variable value of element variable from 
	//			iterator variable 'it_value_object1_emplace19' 
	//	and element variable of variable 'value_object1' 
	//	is same
	//	where 'value_number_unsignedshort1' as key to 
	//		access element variable from
	//			variable 'value_object1' 
	SourceAssert(JsonValue::Object::Value(*it_value_object1_emplace19) 
		== value_object1["value_number_unsignedshort1"],
		"compare variable between return value of variable value of "
		"element variable from iterator variable 'it_value_object1_emplace19' "
		"and element variable of variable 'value_object1' is not same "
		"where 'value_number_unsignedshort1' as key to "
		"access element variable from variable 'value_object1' ");
	
	//	Check compare variable between 
	//		element variable from variable 'value_object1' 
	//	and variable 'pointer_value_number_unsignedshort2' 
	//	is same
	//	where 'value_number_unsignedshort1' as key to 
	//		access element variable from
	//			variable 'value_object1' 
	SourceAssert(value_object1["value_number_unsignedshort1"] 
		== pointer_value_number_unsignedshort2);

	//	Check range-for is work to
	//		variable 'value_object1'
	for (auto it_value : value_object1)
	{
		//	Check compare variable between 
		//		variable value of 
		//			variable iterator 'it_value'
		//	and 
		//		element variable of variable 'value_object1' 
		//	is same
		//	where 'it_value' as key to access element variable from
		//		variable 'value_object1' 
		SourceAssert(JsonValue::Object::Value(it_value) 
				== value_object1[value_object1.Key(it_value)],
			"compare variable between variable value of "
			"variable iterator 'it_value' and element variable of "
			"variable 'value_object1' at \"%s\" is not same",
			value_object1.Key(it_value).c_str());
	}

	//	Check range-for is work to
	//	const variable 'value_object1'
	for (auto it_const_value : std::as_const(value_object1))
	{
		//	Check compare variable between 
		//		variable value of 
		//			variable const iterator 'it_const_value'
		//	and 
		//		element variable of variable 'value_object1' 
		//	is same
		//	where 'it_const_value' as key to access element variable from
		//		variable 'value_object1' 
		SourceAssert(JsonValue::Object::Value(it_const_value) 
				== value_object1[value_object1.Key(it_const_value)],
			"compare variable between variable value of "
			"variable const iterator 'it_const_value' and element variable of "
			"variable 'value_object1' at \"%s\" is not same",
			value_object1.Key(it_const_value).c_str());
	}

	//	Check functions static member 'ConstBegin' and 'ConstEnd' from
	//		class 'BrainMuscles::test::simple::json::value::Object'
	for (auto const_it_value_object1 = value_object1.ConstBegin();
		const_it_value_object1 != value_object1.ConstEnd();
		++const_it_value_object1)
	{
		//	Check compare variable between 
		//		variable const iterator 'const_it_value_object1'
		//	and 
		//		element variable of variable 'value_object1' 
		//	is same
		//	where 'const_it_value_object1' as key to 
		//		access element variable from
		//			variable 'value_object1' 
		SourceAssert(JsonValue::Object::Value(*const_it_value_object1)
				== value_object1[value_object1.Key(*const_it_value_object1)],
			"compare variable between "
			"variable const iterator 'const_it_value_object1' "
			"and element variable of variable 'value_object1' "
			"at \"%d\" is not same", 
			value_object1.Key(*const_it_value_object1).c_str());
	}

	//	Declare variable of 
	//		class BrainMuscles::test::simple::json::value::Object
	//	with default initialization 
	JsonValue::Object value_object5;

	//	Declare variable of
	//		class BrainMuscles::test::simple::json::value::Object::KeyType 
	//	with copy initialization  "z_" from "z_" of const char*
	typename JsonValue::Object::KeyType key = "z_";

	//	Add element to variable 'value_object5' from 
	//		variable 'value_object1'
	//	where variable 'key' append key of element variable from  
	//		variable 'value_object1' as key to variable 'value_object5'
	for (auto it_value : value_object1)
	{
		value_object5[key + value_object1.Key(it_value)] 
			= JsonValue::Object::Value(it_value);
	}

	//	Call function member 'Insert' of
	//		variable 'value_object1'
	//	where return variable of function member 'Begin' from
	//		variable 'value_object5' as first argument to
	//			function member 'Insert'
	//	and return variable of funciton member 'End' from
	//		variable 'value_object5' as second argument to
	//			function member 'Insert'
	value_object1.Insert(value_object5.Begin(), value_object5.End());

	for (auto it_value : value_object1)
	{
		if (!(value_object1.Key(it_value)[0] == key[0]
			&& value_object1.Key(it_value)[1] == key[1]))
		{
			//	Check compare variable between
			//		variable value of element variable from
			//			variable 'value_object1'
			//	and element variable of
			//		variable 'value_object1'
			//	is same
			//	where variable 'key' append key variable of
			//		variable 'it_value' as key access to
			//			element variable of variable 'value_object1'
			SourceAssert(JsonValue::Object::Value(it_value) 
					== value_object1[key + value_object1.Key(it_value)],
				"compare variable between variable value of "
				"element variable from variable 'value_object1' and "
				"element variable of variable 'value_object1' "
				"at \"%s\"", 
				std::string(key + value_object1.Key(it_value).c_str()));
		}
	}
	
	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::IteratorType'
	//	with copy initialization from 
	//		return variable of function member 'Insert' from
	//			variable 'value_object1'
	//	where direct initialization of
	//		class 'BrainMuscles::test::simple::json
	//			::value::Object::ElementType',
	//	'i_value_array2' as first argument to 
	//		direct initialization of
	//			class 'BrainMuscles::test::simple::json
	//				::value::Object::ElementType'
	//	and value initialization of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	//			as second argument to direct initialization of
	//				class 'BrainMuscles::test::simple::json
	//					::value::Object::ElementType'
	auto it_value_object1_insert1 
		= value_object1.Insert(JsonValue::Object::ElementType(
			"i_value_array2", JsonValue::Array()));
	
	//	Check variable from
	//		keyword 'dynamic_cast<BrainMuscles::test::simple::json
	//			::value::Array*>'
	//	is not null pointer
	//	where pointer variable of variable 'it_value_object1_insert1'
	//		as first argument to pointer variable of 
	//			iterator variable 'it_value_object1_insert1'
	SourceAssert(dynamic_cast<JsonValue::Array*>(
		JsonValue::Object::Value(*it_value_object1_insert1).get()) != nullptr,
		"variable from keyword "
		"'dynamic_cast<BrainMuscles::test::simple::json ::value::Array*> "
		"is null pointer, where pointer variable of "
		"variable 'it_value_object1_insert1' as first argument to "
		"pointer variable of iterator variable 'it_value_object1_insert1'");

	//	Call function member 'Erase' of
	//		variable 'value_object1'
	//	where return variable of funciton member 'Find' from
	//		variable 'value_object1' as first argument to
	//			function member 'Erase'
	//	and 'i_value_array2' as first argument to
	//		function member 'Find'
	value_object1.Erase(value_object1.Find("i_value_array2"));

	//	Call function member 'Erase' of
	//		variable 'value_object5'
	//	where return variable of function member 'Begin' from
	//		variable 'value_object5' as first argument to
	//			function member 'Erase'
	//	and return variable of function member 'End' from 
	//		variable 'value_object5' as second argument to
	//			function member 'Erase'
	value_object5.Erase(value_object5.Begin(), value_object5.End());

	//	check variable return of function member 'Size' from
	//		variable 'value_object5'
	//	is zero
	SourceAssert(value_object5.Size() == 0,
		"variable return of function member 'Size' from "
		"variable 'value_object5' is not zero");

	//	Call function member 'Swap' of
	//		variable 'value_object1'
	//	where variable 'value_object2'
	//		 as first argument to function member 'Swap'
	value_object1.Swap(value_object2);

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_array2'
	//	is same
	//	where 'value_array1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_array1")) 
			== pointer_value_array2, 
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_array2' is not same, where 'value_array1' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_false2'
	//	is same
	//	where 'value_false1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_false1")) 
			== pointer_value_false2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_false2' is not same, where 'value_false1' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_null2'
	//	is same
	//	where 'value_null1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_null1"))
			== pointer_value_null2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_null2' is not same, where 'value_null1' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_object4'
	//	is same
	//	where 'value_object4' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_object4"))
			== pointer_value_object4,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_object4' is snot ame, where 'value_object4' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_string2'
	//	is same
	//	where 'value_string1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_string1"))
			== pointer_value_string2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_string2' is not same, where 'value_string1' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_true2'
	//	is same
	//	where 'value_true1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(*value_object2.Find("value_true1"))
			== pointer_value_true2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_true2' is not same, where 'value_true1' "
		"as first argument to function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_char2'
	//	is same
	//	where 'value_number_char1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_char1"))
			== pointer_value_number_char2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_char2' is not same, "
		"where 'value_number_char1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_double2'
	//	is same
	//	where 'value_number_double1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_double1"))
			== pointer_value_number_double2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_double2' is not same, "
		"where 'value_number_double1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_float2'
	//	is same
	//	where 'value_number_float1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_float1")) 
			== pointer_value_number_float2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_float2' is not same, "
		"where 'value_number_float1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_int2'
	//	is same
	//	where 'value_number_int1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_int1")) 
			== pointer_value_number_int2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_int2' is not same, "
		"where 'value_number_int1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_long2'
	//	is same
	//	where 'value_number_long1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_long1"))
			== pointer_value_number_long2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_long2' is not same, "
		"where 'value_number_long1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_longdouble2'
	//	is same
	//	where 'value_number_longdouble1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_longdouble1")) 
			== pointer_value_number_longdouble2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_longdouble2' is not same, "
		"where 'value_number_longdouble1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_longlong2'
	//	is same
	//	where 'value_number_longlong1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_longlong1"))
			== pointer_value_number_longlong2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_longlong2' is not same, "
		"where 'value_number_longlong1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_short2'
	//	is same
	//	where 'value_number_short1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_short1"))
			== pointer_value_number_short2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_short2' is not same, "
		"where 'value_number_short1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_unsignedchar2'
	//	is same
	//	where 'value_number_unsignedchar1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_unsignedchar1")) 
			== pointer_value_number_unsignedchar2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_unsignedchar2' is not same, "
		"where 'value_number_unsignedchar1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_unsignedint2'
	//	is same
	//	where 'value_number_unsignedint1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_unsignedint1"))
			== pointer_value_number_unsignedint2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_unsignedint2' is not same, "
		"where 'value_number_unsignedint1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_unsignedlong2'
	//	is same
	//	where 'value_number_unsignedlong1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_unsignedlong1")) 
			== pointer_value_number_unsignedlong2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_unsignedlong2' is not same, "
		"where 'value_number_unsignedlong1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_unsignedlonglong2'
	//	is same
	//	where 'value_number_unsignedlonglong1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_unsignedlonglong1")) 
			== pointer_value_number_unsignedlonglong2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_unsignedlonglong2' is not same, "
		"where 'value_number_unsignedlonglong1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		variable 'pointer_value_number_unsignedshort2'
	//	is same
	//	where 'value_number_unsignedshort1' as first argument to 
	//		function member 'Find'
	SourceAssert(JsonValue::Object::Value(
		*value_object2.Find("value_number_unsignedshort1")) 
			== pointer_value_number_unsignedshort2,
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"variable 'pointer_value_number_unsignedshort2' is not same, "
		"where 'value_number_unsignedshort1' as first argument to "
		"function member 'Find'");

	//	Check compare variable between
	//		iterator variable of return variable of function member 'Find' from
	//			variable 'value_object2'
	//	and
	//		iterator variable of return variable of function member 'End' from
	//			variable 'value_object2'
	//	is same
	//	where '' as first argument to 
	//		function member 'Find'
	SourceAssert(value_object2.Find("") == value_object2.End(),
		"compare variable between iterator variable of return variable of "
		"function member 'Find' from variable 'value_object2' and "
		"iterator variable of return variable of function member 'End' from "
		"variable 'value_object2' is not same, where '' as first argument to "
		"function member 'Find'");

	//	check compare variable between 
	//		element variable of
	//			variable 'value_object2'
	//	and
	//		return variable of function (or const) member 'At' from
	//			variable 'value_object2'
	//	is same 
	for (auto it_value : value_object2)
	{
		//	check compare variable between 
		//		element variable of
		//			variable 'value_object2'
		//	and return variable of function member 'At' from
		//		variable 'value_object2'
		//	is same
		//	where variable 'it_value' as key to access element variable of
		//		variable 'value_object2'
		//	and key variable 'it_value' as first argument to
		//		function member 'At'
		SourceAssert(value_object2[value_object2.Key(it_value)]
				== value_object2.At(value_object2.Key(it_value)),
			"compare variable between element variable at \"%s\" of "
			"variable 'value_object2' and return variable of "
			"function member 'At' from variable 'value_object2' is not same, "
			"where key variable(\"%s\") of 'it_value' as first argument to"
			"function member 'At'", value_object2.Key(it_value).c_str(),
			value_object2.Key(it_value).c_str());

		//	declare const variable of
		//		class 'BrainMuscles::test::simple::json::value::Object' 
		//	with copy initialization from variable 'value_object2'
		auto const_value_object2 = std::as_const(value_object2);

		//	check compare variable between 
		//		element variable of
		//			variable 'value_object2'
		//	and return variable of function const member 'At' from
		//		variable 'value_object2'
		//	is same
		//	where variable 'it_value' as key to access element variable of
		//		variable 'value_object2'
		//	and key variable 'it_value' as first argument to
		//		function member const 'At'
		SourceAssert(const_value_object2[value_object2.Key(it_value)]
				== const_value_object2.At(value_object2.Key(it_value)),
			"compare variable between element variable at \"%s\" of ",
			"variable 'value_object2' and return variable of "
			"function const member 'At' from variable 'value_object2' "
			"is same where key variable 'it_value' as first argument to "
			"function member const 'At'", value_object2.Key(it_value).c_str(),
			value_object2.Key(it_value).c_str());
	}

	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json::value::Object' 
	//	with copy intialization from variable 'value_object2'
	JsonValue::Object value_object6(value_object2);

	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json::value::Object' 
	//	with copy intialization from variable 'value_object6'
	JsonValue::Object value_object7 = value_object6;

	//	Check element variable between
	//		variable 'value_object2',
	//		variable 'value_object6'
	//	and 
	//		variable 'value_object7' 
	//	is same 
	for (auto it_value : value_object2)
	{
		//	Check compare variable between 
		//		element variable of
		//			variable 'value_object2'
		//	and
		//		element variable of
		//			variable 'value_object6'
		//	is same
		//	where key variable 'it_value' as key to 
		//		access element variable of variable 'value_object6'
		SourceAssert(JsonValue::Object::Value(it_value)
				== value_object6[value_object2.Key(it_value)],
			"compare variable between element variable at \"%s\" of "
			"variable 'value_object2' and element variable of "
			"variable 'value_object6' is same, "
			"where key variable (\"%s\") 'it_value' as key to ",
			"access element variable of variable 'value_object6'",
			value_object2.Key(it_value).c_str(), 
			value_object2.Key(it_value).c_str());

		//	Check compare variable between 
		//		element variable of
		//			variable 'value_object2'
		//	and
		//		element variable of
		//			variable 'value_object7'
		//	is same
		//	where key variable 'it_value' as key to
		//		access element variable of variable 'value_object7'
		SourceAssert(JsonValue::Object::Value(it_value) 
				== value_object7[value_object2.Key(it_value)],
			"compare variable between element variable at \"%s\" of "
			"variable 'value_object2' and element variable of "
			"variable 'value_object7' is same, "
			"where key variable (\"%s\") 'it_value' as key to ",
			"access element variable of variable 'value_object7'",
			value_object2.Key(it_value).c_str(),
			value_object2.Key(it_value).c_str());
	}

	//	Check compare type between
	//		return variable of function member 'Container' from
	//			variable 'value_object2'
	//	and
	//		type definition of 'Json::Constant::ContainerObjectType'
	//	is same
	SourceAssert(typeid(value_object2.Container()).hash_code() 
		== typeid(Json::Constant::ContainerObjectType).hash_code(),
		"compare type between return variable of "
		"function member 'Container' from variable 'value_object2' and "
		"type definition of 'Json::Constant::ContainerObjectType' "
		"is not same");
}