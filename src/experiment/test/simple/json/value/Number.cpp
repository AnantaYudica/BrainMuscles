#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\Number.h"

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

#include "experiment\test\simple\json\value\number\Char.h"
#include "experiment\test\simple\json\value\number\Double.h"
#include "experiment\test\simple\json\value\number\Float.h"
#include "experiment\test\simple\json\value\number\Int.h"
#include "experiment\test\simple\json\value\number\Long.h"
#include "experiment\test\simple\json\value\number\LongDouble.h"
#include "experiment\test\simple\json\value\number\LongLong.h"
#include "experiment\test\simple\json\value\number\Short.h"
#include "experiment\test\simple\json\value\number\UnsignedChar.h"
#include "experiment\test\simple\json\value\number\UnsignedInt.h"
#include "experiment\test\simple\json\value\number\UnsignedLong.h"
#include "experiment\test\simple\json\value\number\UnsignedLongLong.h"
#include "experiment\test\simple\json\value\number\UnsignedShort.h"

void experiment::test::simple::json::value::Number::PreTest()
{
	//	Call function static member 'Requirement' from
	//		class 'experiment::test::simple::json::Value'
	SourceRequirement(experiment::test::simple::json::Value);
}

void experiment::test::simple::json::value::Number::Test()
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

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	JsonValue::Number& value_number1 = JsonValueNumber::Char();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Char'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Char*>'
	//	where address of variable 'value_number1' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_char1 
		= dynamic_cast<JsonValueNumber::Char*>(&value_number1);

	//	check variable pointer 'pointer_value_number_char1'
	//	is not null pointer
	SourceAssert(pointer_value_number_char1 != nullptr,
		"variable pointer 'pointer_value_number_char1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	JsonValue::Number& value_number2 = JsonValueNumber::Double();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Double'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Double*>'
	//	where address of variable 'value_number2' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_double1 
		= dynamic_cast<JsonValueNumber::Double*>(&value_number2);

	//	check variable pointer 'pointer_value_number_double1'
	//	is not null pointer
	SourceAssert(pointer_value_number_double1 != nullptr,
		"variable pointer 'pointer_value_number_double1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	JsonValue::Number& value_number3 = JsonValueNumber::Float();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Float'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Float*>'
	//	where address of variable 'value_number3' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_float1 
		= dynamic_cast<JsonValueNumber::Float*>(&value_number3);

	//	check variable pointer 'pointer_value_number_float1'
	//	is not null pointer
	SourceAssert(pointer_value_number_float1 != nullptr,
		"variable pointer 'pointer_value_number_float1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	JsonValue::Number& value_number4 = JsonValueNumber::Int();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Int'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Int*>'
	//	where address of variable 'value_number4' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_int1
		= dynamic_cast<JsonValueNumber::Int*>(&value_number4);

	//	check variable pointer 'pointer_value_number_int1'
	//	is not null pointer
	SourceAssert(pointer_value_number_int1 != nullptr,
		"variable pointer 'pointer_value_number_int1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	JsonValue::Number& value_number5 = JsonValueNumber::Long();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Long'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Long*>'
	//	where address of variable 'value_number5' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_long1 
		= dynamic_cast<JsonValueNumber::Long*>(&value_number5);

	//	check variable pointer 'pointer_value_number_long1'
	//	is not null pointer
	SourceAssert(pointer_value_number_long1 != nullptr,
		"variable pointer 'pointer_value_number_long1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	JsonValue::Number& value_number6 = JsonValueNumber::LongDouble();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongDouble'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::LongDouble*>'
	//	where address of variable 'value_number6' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_longdouble1
		= dynamic_cast<JsonValueNumber::LongDouble*>(&value_number6);

	//	check variable pointer 'pointer_value_number_longdouble1'
	//	is not null pointer
	SourceAssert(pointer_value_number_longdouble1 != nullptr,
		"variable pointer 'pointer_value_number_longdouble1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	JsonValue::Number& value_number7 = JsonValueNumber::LongLong();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::LongLong'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::LongLong*>'
	//	where address of variable 'value_number7' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_longlong1 
		= dynamic_cast<JsonValueNumber::LongLong*>(&value_number7);

	//	check variable pointer 'pointer_value_number_longlong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_longlong1 != nullptr,
		"variable pointer 'pointer_value_number_longlong1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	JsonValue::Number& value_number8 = JsonValueNumber::Short();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value::number::Short'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::Short*>'
	//	where address of variable 'value_number8' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_short1 
		= dynamic_cast<JsonValueNumber::Short*>(&value_number8);

	//	check variable pointer 'pointer_value_number_short1'
	//	is not null pointer
	SourceAssert(pointer_value_number_short1 != nullptr,
		"variable pointer 'pointer_value_number_short1' is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	JsonValue::Number& value_number9 = JsonValueNumber::UnsignedChar();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedChar'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::UnsignedChar*>'
	//	where address of variable 'value_number9' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_unsignedchar1 
		= dynamic_cast<JsonValueNumber::UnsignedChar*>(&value_number9);

	//	check variable pointer 'pointer_value_number_unsignedchar1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
		"variable pointer 'pointer_value_number_unsignedchar1' "
		"is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	JsonValue::Number& value_number10 = JsonValueNumber::UnsignedInt();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedInt'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::UnsignedInt*>'
	//	where address of variable 'value_number10' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_unsignedint1 
		= dynamic_cast<JsonValueNumber::UnsignedInt*>(&value_number10);

	//	check variable pointer 'pointer_value_number_unsignedint1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedint1 != nullptr,
		"variable pointer 'pointer_value_number_unsignedint1' "
		"is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	JsonValue::Number& value_number11 = JsonValueNumber::UnsignedLong();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLong'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::UnsignedLong*>'
	//	where address of variable 'value_number11' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_unsignedlong1
		= dynamic_cast<JsonValueNumber::UnsignedLong*>(&value_number11);

	//	check variable pointer 'pointer_value_number_unsignedlong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
		"variable pointer  'pointer_value_number_unsignedlong1' "
		"is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	JsonValue::Number& value_number12 = JsonValueNumber::UnsignedLongLong();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value
	//			::number::UnsignedLongLong*>'
	//	where address of variable 'value_number12' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_unsignedlonglong1
		= dynamic_cast<JsonValueNumber::UnsignedLongLong*>(&value_number12);

	//	check variable pointer 'pointer_value_number_unsignedlonglong1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
		"variable pointer 'pointer_value_number_unsignedlonglong1' "
		"is null pointer");

	//	Declare reference variable of 
	//		class 'BrainMuscles::test::simple::json::value::Number'
	//	with reference initialization from value initialization of
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	JsonValue::Number& value_number13 = JsonValueNumber::UnsignedShort();

	//	Declare pointer variable of 
	//		class 'BrainMuscles::test::simple::json::value
	//			::number::UnsignedShort'
	//	with copy initialization from keyword 'dynamic_cast<
	//		BrainMuscles::test::simple::json::value::number::UnsignedShort*>'
	//	where address of variable 'value_number13' as first argument to 
	//		keyword 'dynamic_cast'
	auto pointer_value_number_unsignedshort1
		= dynamic_cast<JsonValueNumber::UnsignedShort*>(&value_number13);

	//	check variable pointer 'pointer_value_number_unsignedshort1'
	//	is not null pointer
	SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
		"variable pointer 'pointer_value_number_unsignedshort1' "
		"is null pointer");
}

void experiment::test::simple::json::value::Number::PostTest()
{
	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Char'
	SourceCall(experiment::test::simple::json::value::number::Char);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Double'
	SourceCall(experiment::test::simple::json::value::number::Double);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Float'
	SourceCall(experiment::test::simple::json::value::number::Float);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Int'
	SourceCall(experiment::test::simple::json::value::number::Int);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Long'
	SourceCall(experiment::test::simple::json::value::number::Long);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::LongDouble'
	SourceCall(experiment::test::simple::json::value::number::LongDouble);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::LongLong'
	SourceCall(experiment::test::simple::json::value::number::LongLong);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::Short'
	SourceCall(experiment::test::simple::json::value::number::Short);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::UnsignedChar'
	SourceCall(experiment::test::simple::json::value::number::UnsignedChar);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::UnsignedInt'
	SourceCall(experiment::test::simple::json::value::number::UnsignedInt);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value::number::UnsignedLong'
	SourceCall(experiment::test::simple::json::value::number::UnsignedLong);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value
	//			::number::UnsignedLongLong'
	SourceCall(
		experiment::test::simple::json::value::number::UnsignedLongLong);

	//	Call function static member 'Call' of
	//		class 'experiment::test::simple::json::value
	//			::number::UnsignedShort'
	SourceCall(experiment::test::simple::json::value::number::UnsignedShort);
}