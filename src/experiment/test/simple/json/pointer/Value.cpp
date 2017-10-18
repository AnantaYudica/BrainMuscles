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

#include "test\simple\json\pointer\Value.h"

#include "test\simple\json\pointer\value\Array.h"
#include "test\simple\json\pointer\value\False.h"
#include "test\simple\json\pointer\value\Null.h"
#include "test\simple\json\pointer\value\Number.h"
#include "test\simple\json\pointer\value\Object.h"
#include "test\simple\json\pointer\value\String.h"
#include "test\simple\json\pointer\value\True.h"

#include "test\simple\json\pointer\value\number\Char.h"
#include "test\simple\json\pointer\value\number\Double.h"
#include "test\simple\json\pointer\value\number\Float.h"
#include "test\simple\json\pointer\value\number\Int.h"
#include "test\simple\json\pointer\value\number\Long.h"
#include "test\simple\json\pointer\value\number\LongDouble.h"
#include "test\simple\json\pointer\value\number\LongLong.h"
#include "test\simple\json\pointer\value\number\Short.h"
#include "test\simple\json\pointer\value\number\UnsignedChar.h"
#include "test\simple\json\pointer\value\number\UnsignedInt.h"
#include "test\simple\json\pointer\value\number\UnsignedLong.h"
#include "test\simple\json\pointer\value\number\UnsignedLongLong.h"
#include "test\simple\json\pointer\value\number\UnsignedShort.h"

#include "experiment\test\simple\json\Value.h"
#include "experiment\test\simple\json\Memory.h"
#include "experiment\test\simple\json\pointer\Value.h"

void experiment::test::simple::json::pointer::Value::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Value'
	SourceRequirement(experiment::test::simple::json::Value);

	//	Call function static member 'Requirement' from
	//		class experiment::test::simple::json::Memory
	SourceRequirement(experiment::test::simple::json::Memory);
}

void experiment::test::simple::json::pointer::Value::Test()
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
	//		'JsonPointer'
	namespace JsonPointer = Json::pointer;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::pointer::value'
	//	to 
	//		'JsonPointerValue'
	namespace JsonPointerValue = JsonPointer::value;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::pointer::value::number'
	//	to 
	//		'JsonPointerValueNumber'
	namespace JsonPointerValueNumber = JsonPointerValue::number;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value' 
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::Array'
	JsonPointer::Value pointer_value_array1 = JsonValue::Array();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::Array'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::Array>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	 where variable 'pointer_value_array1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValue::Array cast_pointer_value_array1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::Array>(pointer_value_array1);

	//	Check variable 'cast_pointer_value_array1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_array1 != nullptr,
		"variable 'cast_pointer_value_array1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of
	//		class 'BrainMuscles::test::simple::json::value::False'
	JsonPointer::Value pointer_value_false1 = JsonValue::False();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::False'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::False>' of
	//			class BrainMuscles::test::simple::json::Memory 
	//	where variable 'pointer_value_false1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValue::False cast_pointer_value_false1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::False>(pointer_value_false1);

	//	Check variable 'cast_pointer_value_false1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_false1 != nullptr,
		"variable 'cast_pointer_value_false1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::Null'
	JsonPointer::Value pointer_value_null1 = JsonValue::Null();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::Null'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::Null>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_null1' as first argument to 
	//		function static member 'DynamicPointerCast'
	JsonPointerValue::Null cast_pointer_value_null1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::Null>(pointer_value_null1);

	//	Check variable 'cast_pointer_value_null1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_null1 != nullptr,
		"variable 'cast_pointer_value_null1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::Object'
	JsonPointer::Value pointer_value_object1 = JsonValue::Object();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::Object'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::Object>' of 
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_object1' as first argument to
	//		function static mmeber 'DynamicPointerCast'
	JsonPointerValue::Object cast_pointer_value_object1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::Object>(pointer_value_object1);

	//	Check variable 'cast_pointer_value_object1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_object1 != nullptr,
		"variable 'cast_pointer_value_object1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::String'
	JsonPointer::Value pointer_value_string1 = JsonValue::String();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::String'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::String>' of 
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_string1' as first argument to
	//		function static member 'DynamicPointerCast' 
	JsonPointerValue::String cast_pointer_value_string1
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::String>(pointer_value_string1);

	//	Check variable 'cast_pointer_value_string1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_string1 != nullptr,
		"variable 'cast_pointer_value_string1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::True'
	JsonPointer::Value pointer_value_true1 = JsonValue::True();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value::True'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value::True>' of
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_true1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValue::True cast_pointer_value_true1
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValue::True>(pointer_value_true1);

	//	check variable 'cast_pointer_value_true1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_true1 != nullptr,
		"variable 'cast_pointer_value_true1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	JsonPointer::Value pointer_value_number_char1 = JsonValueNumber::Char();

	//	declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Char'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Char>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_char1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Char cast_pointer_value_number_char1
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
		JsonPointerValueNumber::Char>(pointer_value_number_char1);

	//	Check variable 'cast_pointer_value_number_char1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_char1 != nullptr,
		"variable 'cast_pointer_value_number_char1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	JsonPointer::Value pointer_value_number_double1
		= JsonValueNumber::Double();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Double'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Double>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_double1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Double cast_pointer_value_number_double1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::Double>(pointer_value_number_double1);

	//	Check variable 'cast_pointer_value_number_double1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_double1 != nullptr,
		"variable 'cast_pointer_value_number_double1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	JsonPointer::Value pointer_value_number_float1 =JsonValueNumber::Float();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Float'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Float>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_float1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Float cast_pointer_value_number_float1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::Float>(pointer_value_number_float1);

	//	Check variable 'cast_pointer_value_number_float1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_float1 != nullptr,
		"variable 'cast_pointer_value_number_float1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	JsonPointer::Value pointer_value_number_int1 = JsonValueNumber::Int();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Int'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Int>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_int1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Int cast_pointer_value_number_int1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::Int>(pointer_value_number_int1);

	//	Check variable 'cast_pointer_value_number_int1'
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_int1 != nullptr,
		"variable 'cast_pointer_value_number_int1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	JsonPointer::Value pointer_value_number_long1 = JsonValueNumber::Long();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Long'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Long>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_long1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Long cast_pointer_value_number_long1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::Long>(pointer_value_number_long1);

	//	Check variable 'cast_pointer_value_number_long1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_long1 != nullptr,
		"variable 'cast_pointer_value_number_long1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	JsonPointer::Value pointer_value_number_longdouble1
		= JsonValueNumber::LongDouble();

	//	Declare variable of 
	//		class BrainMuscles::test::simple::json::pointer::value
	//			::number::LongDouble
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::LongDouble>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_longdouble1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::LongDouble cast_pointer_value_number_longdouble1
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::LongDouble>(
				pointer_value_number_longdouble1);

	//	Check variable 'cast_pointer_value_number_longdouble1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_longdouble1 != nullptr,
		"variable 'cast_pointer_value_number_longdouble1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	JsonPointer::Value pointer_value_number_longlong1 
		= JsonValueNumber::LongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::LongLong'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::LongLong>' of
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_value_number_longlong1' as first argument to
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::LongLong cast_pointer_value_number_longlong1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value,
			JsonPointerValueNumber::LongLong>(pointer_value_number_longlong1);

	//	Check variable 'cast_pointer_value_number_longlong1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_longlong1 != nullptr,
		"variable 'cast_pointer_value_number_longlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	JsonPointer::Value pointer_value_number_short1 = JsonValueNumber::Short();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::Short'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::Short>' of 
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_number_short1' as first argument to 
	//		function static member 'DynamicPointerCast'
	JsonPointerValueNumber::Short cast_pointer_value_number_short1 
		= Json::Memory::DynamicPointerCast<JsonPointer::Value, 
			JsonPointerValueNumber::Short>(pointer_value_number_short1);

	//	Check variable 'cast_pointer_value_number_short1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_short1 != nullptr,
		"variable 'cast_pointer_value_number_short1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	JsonPointer::Value pointer_value_number_unsignedchar1
		= JsonValueNumber::UnsignedChar();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::UnsignedChar'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::UnsignedChar>' of
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_number_unsignedchar1' 
	//		as first argument to function static member 'DynamicPointerCast'
	JsonPointerValueNumber::UnsignedChar 
		cast_pointer_value_number_unsignedchar1
			= Json::Memory::DynamicPointerCast<JsonPointer::Value,
				JsonPointerValueNumber::UnsignedChar>(
					pointer_value_number_unsignedchar1);

	//	Check variable 'cast_pointer_value_number_unsignedchar1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_unsignedchar1 != nullptr,
		"variable 'cast_pointer_value_number_unsignedchar1' "
		"is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	JsonPointer::Value pointer_value_number_unsignedint1 
		= JsonValueNumber::UnsignedInt();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::UnsignedInt'
	//	with copy initialization from 
	//		return variable function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::UnsignedInt>' of 
	//			class 'BrainMuscles::test::simple::json::Memory' 
	//	where variable 'pointer_value_number_unsignedint1'
	//		as first argument to function static member 'DynamicPointerCast'
	JsonPointerValueNumber::UnsignedInt cast_pointer_value_number_unsignedint1
		= Json::Memory::DynamicPointerCast<JsonPointer::Value, 
			JsonPointerValueNumber::UnsignedInt>(
				pointer_value_number_unsignedint1);

	//	Check variable 'cast_pointer_value_number_unsignedint1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_unsignedint1 != nullptr,
		"variable 'cast_pointer_value_number_unsignedint1' "
		"is not null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	JsonPointer::Value pointer_value_number_unsignedlong1 
		= JsonValueNumber::UnsignedLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::UnsignedLong'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::UnsignedLong>' of
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_number_unsignedlong1' 
	//		as first argument to function static member 'DynamicPointerCast'
	JsonPointerValueNumber::UnsignedLong 
		cast_pointer_value_number_unsignedlong1
			= Json::Memory::DynamicPointerCast<JsonPointer::Value, 
				JsonPointerValueNumber::UnsignedLong>(
					pointer_value_number_unsignedlong1);

	//	Check variable 'cast_pointer_value_number_unsignedlong1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_unsignedlong1 != nullptr,
		"variable 'cast_pointer_value_number_unsignedlong1' is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	JsonPointer::Value pointer_value_number_unsignedlonglong1
		= JsonValueNumber::UnsignedLongLong();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::UnsignedLongLong'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::UnsignedLongLong>' of
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_number_unsignedlonglong1' 
	//		as first argument to function static member 'DynamicPointerCast'
	JsonPointerValueNumber::UnsignedLongLong 
		cast_pointer_value_number_unsignedlonglong1 
			= Json::Memory::DynamicPointerCast<JsonPointer::Value, 
				JsonPointerValueNumber::UnsignedLongLong>(
					pointer_value_number_unsignedlonglong1);

	//	Check variable 'cast_pointer_value_number_unsignedlonglong1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_unsignedlonglong1 != nullptr,
		"variable 'cast_pointer_value_number_unsignedlonglong1' "
		"is null pointer");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::Value'
	//	with direct initialization from value initalization of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	JsonPointer::Value pointer_value_number_unsignedshort1
		= JsonValueNumber::UnsignedShort();

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::pointer::value
	//			::number::UnsignedShort'
	//	with copy initialization from 
	//		return variable of function static member 'DynamicPointerCast<
	//			BrainMuscles::test::simple::json::pointer::Value, 
	//			BrainMuscles::test::simple::json::pointer::value
	//				::number::UnsignedShort>' of 
	//			class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_value_number_unsignedshort1'
	//		as first argument to function static member 'DynamicPointerCast'
	JsonPointerValueNumber::UnsignedShort 
		cast_pointer_value_number_unsignedshort1 
			= Json::Memory::DynamicPointerCast<JsonPointer::Value, 
				JsonPointerValueNumber::UnsignedShort>(
					pointer_value_number_unsignedshort1);

	//	Check variable 'cast_pointer_value_number_unsignedshort1' 
	//	is not null pointer
	SourceAssert(cast_pointer_value_number_unsignedshort1 != nullptr,
		"variable 'cast_pointer_value_number_unsignedshort1' is null pointer");
}