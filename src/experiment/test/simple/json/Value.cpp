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

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				void Value::Test()
				{
					//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
					namespace BMTestSimple = BrainMuscles::test::simple;

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::Array
					BMTestSimple::json::Value& value_array1 = BMTestSimple::json::value::Array();

					//declare pointer class BrainMuscles::test::simple::json::value::Array with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_array1 = dynamic_cast<BMTestSimple::json::value::Array*>(&value_array1);

					//check pointer class BrainMuscles::test::simple::json::value::Array is not null pointer
					SourceAssert(pointer_value_array1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::Array is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::False
					BMTestSimple::json::Value& value_false1 = BMTestSimple::json::value::False();

					//declare pointer class BrainMuscles::test::simple::json::value::False with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_false1 = dynamic_cast<BMTestSimple::json::value::False*>(&value_false1);

					//check pointer class BrainMuscles::test::simple::json::value::False is not null pointer
					SourceAssert(pointer_value_false1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::False is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::Null
					BMTestSimple::json::Value& value_null1 = BMTestSimple::json::value::Null();

					//declare pointer class BrainMuscles::test::simple::json::value::Null with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_null1 = dynamic_cast<BMTestSimple::json::value::Null*>(&value_null1);

					//check pointer class BrainMuscles::test::simple::json::value::Null is not null pointer
					SourceAssert(pointer_value_null1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::Null is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::Object
					BMTestSimple::json::Value& value_object1 = BMTestSimple::json::value::Object();

					//declare pointer class BrainMuscles::test::simple::json::value::Object with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_object1 = dynamic_cast<BMTestSimple::json::value::Object*>(&value_object1);

					//check pointer class BrainMuscles::test::simple::json::value::Object is not null pointer
					SourceAssert(pointer_value_object1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::Object is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::String
					BMTestSimple::json::Value& value_string1 = BMTestSimple::json::value::String();

					//declare pointer class BrainMuscles::test::simple::json::value::String with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_string1 = dynamic_cast<BMTestSimple::json::value::String*>(&value_string1);

					//check pointer class BrainMuscles::test::simple::json::value::String is not null pointer
					SourceAssert(pointer_value_string1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::String is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::True
					BMTestSimple::json::Value& value_true1 = BMTestSimple::json::value::True();

					//declare pointer class BrainMuscles::test::simple::json::value::True with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_true1 = dynamic_cast<BMTestSimple::json::value::True*>(&value_true1);

					//check pointer class BrainMuscles::test::simple::json::value::True is not null pointer
					SourceAssert(pointer_value_true1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::True is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Char
					BMTestSimple::json::Value& value_number_char1 = BMTestSimple::json::value::number::Char();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Char with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_char1 = dynamic_cast<BMTestSimple::json::value::number::Char*>(&value_number_char1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Char is not null pointer
					SourceAssert(pointer_value_number_char1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Char is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Double
					BMTestSimple::json::Value& value_number_double1 = BMTestSimple::json::value::number::Double();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Double with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_double1 = dynamic_cast<BMTestSimple::json::value::number::Double*>(&value_number_double1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Double is not null pointer
					SourceAssert(pointer_value_number_double1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Double is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Float
					BMTestSimple::json::Value& value_number_float1 = BMTestSimple::json::value::number::Float();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Float with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_float1 = dynamic_cast<BMTestSimple::json::value::number::Float*>(&value_number_float1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Float is not null pointer
					SourceAssert(pointer_value_number_float1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Float is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Int
					BMTestSimple::json::Value& value_number_int1 = BMTestSimple::json::value::number::Int();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Int with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_int1 = dynamic_cast<BMTestSimple::json::value::number::Int*>(&value_number_int1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Int is not null pointer
					SourceAssert(pointer_value_number_int1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Int is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Long
					BMTestSimple::json::Value& value_number_long1 = BMTestSimple::json::value::number::Long();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Long with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_long1 = dynamic_cast<BMTestSimple::json::value::number::Long*>(&value_number_long1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Long is not null pointer
					SourceAssert(pointer_value_number_long1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Long is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::LongDouble
					BMTestSimple::json::Value& value_number_longdouble1 = BMTestSimple::json::value::number::LongDouble();

					//declare pointer class BrainMuscles::test::simple::json::value::number::LongDouble with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_longdouble1 = dynamic_cast<BMTestSimple::json::value::number::LongDouble*>(&value_number_longdouble1);

					//check pointer class BrainMuscles::test::simple::json::value::number::LongDouble is not null pointer
					SourceAssert(pointer_value_number_longdouble1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::LongDouble is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::LongLong
					BMTestSimple::json::Value& value_number_longlong1 = BMTestSimple::json::value::number::LongLong();

					//declare pointer class BrainMuscles::test::simple::json::value::number::LongLong with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_longlong1 = dynamic_cast<BMTestSimple::json::value::number::LongLong*>(&value_number_longlong1);

					//check pointer class BrainMuscles::test::simple::json::value::number::LongLong is not null pointer
					SourceAssert(pointer_value_number_longlong1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::LongLong is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::Short
					BMTestSimple::json::Value& value_number_short1 = BMTestSimple::json::value::number::Short();

					//declare pointer class BrainMuscles::test::simple::json::value::number::Short with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_short1 = dynamic_cast<BMTestSimple::json::value::number::Short*>(&value_number_short1);

					//check pointer class BrainMuscles::test::simple::json::value::number::Short is not null pointer
					SourceAssert(pointer_value_number_short1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::Short is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedChar
					BMTestSimple::json::Value& value_number_unsignedchar1 = BMTestSimple::json::value::number::UnsignedChar();

					//declare pointer class BrainMuscles::test::simple::json::value::number::UnsignedChar with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_unsignedchar1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedChar*>(&value_number_unsignedchar1);

					//check pointer class BrainMuscles::test::simple::json::value::number::UnsignedChar is not null pointer
					SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::UnsignedChar is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedInt
					BMTestSimple::json::Value& value_number_unsignedint1 = BMTestSimple::json::value::number::UnsignedInt();

					//declare pointer class BrainMuscles::test::simple::json::value::number::UnsignedInt with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_unsignedint1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedInt*>(&value_number_unsignedint1);

					//check pointer class BrainMuscles::test::simple::json::value::number::UnsignedInt is not null pointer
					SourceAssert(pointer_value_number_unsignedint1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::UnsignedInt is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedLong
					BMTestSimple::json::Value& value_number_unsignedlong1 = BMTestSimple::json::value::number::UnsignedLong();

					//declare pointer class BrainMuscles::test::simple::json::value::number::UnsignedLong with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_unsignedlong1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedLong*>(&value_number_unsignedlong1);

					//check pointer class BrainMuscles::test::simple::json::value::number::UnsignedLong is not null pointer
					SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::UnsignedLong is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
					BMTestSimple::json::Value& value_number_unsignedlonglong1 = BMTestSimple::json::value::number::UnsignedLongLong();

					//declare pointer class BrainMuscles::test::simple::json::value::number::UnsignedLongLong with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_unsignedlonglong1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedLongLong*>(&value_number_unsignedlonglong1);

					//check pointer class BrainMuscles::test::simple::json::value::number::UnsignedLongLong is not null pointer
					SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::UnsignedLongLong is null pointer");

					//declare reference class BrainMuscles::test::simple::json::Value with copy initialization 
					// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedShort
					BMTestSimple::json::Value& value_number_unsignedshort1 = BMTestSimple::json::value::number::UnsignedShort();

					//declare pointer class BrainMuscles::test::simple::json::value::number::UnsignedShort with copy initialization 
					// from dynamic cast from reference class BrainMuscles::test::simple::json::Value
					auto pointer_value_number_unsignedshort1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedShort*>(&value_number_unsignedshort1);

					//check pointer class BrainMuscles::test::simple::json::value::number::UnsignedShort is not null pointer
					SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
						"pointer class BrainMuscles::test::simple::json::value::number::UnsignedShort is null pointer");
				}
			}
		}
	}
}