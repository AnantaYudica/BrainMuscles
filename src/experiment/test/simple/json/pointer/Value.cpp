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

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace pointer
				{
					void Value::PreTest()
					{
						SourceRequirement(experiment::test::simple::json::Value);
						SourceRequirement(experiment::test::simple::json::Memory);
					}

					void Value::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::Array
						BMTestSimple::json::pointer::Value pointer_value_array1 = BMTestSimple::json::value::Array();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::Array
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::Array>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::Array cast_pointer_value_array1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::Array>(pointer_value_array1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::Array is not null pointer
						SourceAssert(cast_pointer_value_array1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::Array is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::False
						BMTestSimple::json::pointer::Value pointer_value_false1 = BMTestSimple::json::value::False();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::False
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::False>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::False cast_pointer_value_false1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::False>(pointer_value_false1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::False is not null pointer
						SourceAssert(cast_pointer_value_false1 != nullptr, 
							"variable of class BrainMuscles::test::simple::json::pointer::value::False is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::Null
						BMTestSimple::json::pointer::Value pointer_value_null1 = BMTestSimple::json::value::Null();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::Null
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::Null>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::Null cast_pointer_value_null1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::Null>(pointer_value_null1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::Null is not null pointer
						SourceAssert(cast_pointer_value_null1 != nullptr, 
							"variable of class BrainMuscles::test::simple::json::pointer::value::Null is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::Object
						BMTestSimple::json::pointer::Value pointer_value_object1 = BMTestSimple::json::value::Object();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::Object
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::Object>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::Object cast_pointer_value_object1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::Object>(pointer_value_object1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::Object is not null pointer
						SourceAssert(cast_pointer_value_object1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::Object is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::String
						BMTestSimple::json::pointer::Value pointer_value_string1 = BMTestSimple::json::value::String();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::String
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::String>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::String cast_pointer_value_string1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::String>(pointer_value_string1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::String is not null pointer
						SourceAssert(cast_pointer_value_string1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::String is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::True
						BMTestSimple::json::pointer::Value pointer_value_true1 = BMTestSimple::json::value::True();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::True
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::True>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::True cast_pointer_value_true1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::True>(pointer_value_true1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::True is not null pointer
						SourceAssert(cast_pointer_value_true1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::True is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Char
						BMTestSimple::json::pointer::Value pointer_value_number_char1 = BMTestSimple::json::value::number::Char();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Char
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Char>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Char cast_pointer_value_number_char1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Char>(pointer_value_number_char1);

						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Char is not null pointer
						SourceAssert(cast_pointer_value_number_char1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Char is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Double
						BMTestSimple::json::pointer::Value pointer_value_number_double1 = BMTestSimple::json::value::number::Double();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Double
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Double>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Double cast_pointer_value_number_double1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Double>(pointer_value_number_double1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Double is not null pointer
						SourceAssert(cast_pointer_value_number_double1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Double is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Float
						BMTestSimple::json::pointer::Value pointer_value_number_float1 = BMTestSimple::json::value::number::Float();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Float
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Float>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Float cast_pointer_value_number_float1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Float>(pointer_value_number_float1);

						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Float is not null pointer
						SourceAssert(cast_pointer_value_number_float1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Float is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Int
						BMTestSimple::json::pointer::Value pointer_value_number_int1 = BMTestSimple::json::value::number::Int();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Int
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Int>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Int cast_pointer_value_number_int1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Int>(pointer_value_number_int1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Int is not null pointer
						SourceAssert(cast_pointer_value_number_int1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Int is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Long
						BMTestSimple::json::pointer::Value pointer_value_number_long1 = BMTestSimple::json::value::number::Long();

						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Long
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Long>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Long cast_pointer_value_number_long1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Long>(pointer_value_number_long1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Long is not null pointer
						SourceAssert(cast_pointer_value_number_long1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Long is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::LongDouble
						BMTestSimple::json::pointer::Value pointer_value_number_longdouble1 = BMTestSimple::json::value::number::LongDouble();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::LongDouble
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::LongDouble>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::LongDouble cast_pointer_value_number_longdouble1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::LongDouble>(pointer_value_number_longdouble1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::LongDouble is not null pointer
						SourceAssert(cast_pointer_value_number_longdouble1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::LongDouble is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::LongLong
						BMTestSimple::json::pointer::Value pointer_value_number_longlong1 = BMTestSimple::json::value::number::LongLong();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::LongLong
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::LongLong>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::LongLong cast_pointer_value_number_longlong1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::LongLong>(pointer_value_number_longlong1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::LongLong is not null pointer
						SourceAssert(cast_pointer_value_number_longlong1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::LongLong is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::Short
						BMTestSimple::json::pointer::Value pointer_value_number_short1 = BMTestSimple::json::value::number::Short();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::Short
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::Short>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::Short cast_pointer_value_number_short1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::Short>(pointer_value_number_short1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::Short is not null pointer
						SourceAssert(cast_pointer_value_number_short1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::Short is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::UnsignedChar
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedchar1 = BMTestSimple::json::value::number::UnsignedChar();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedChar
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::UnsignedChar>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::UnsignedChar cast_pointer_value_number_unsignedchar1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::UnsignedChar>(pointer_value_number_unsignedchar1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedChar is not null pointer
						SourceAssert(cast_pointer_value_number_unsignedchar1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedChar is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::UnsignedInt
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedint1 = BMTestSimple::json::value::number::UnsignedInt();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedInt
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::UnsignedInt>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::UnsignedInt cast_pointer_value_number_unsignedint1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::UnsignedInt>(pointer_value_number_unsignedint1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedInt is not null pointer
						SourceAssert(cast_pointer_value_number_unsignedint1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedInt is not null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::UnsignedLong
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedlong1 = BMTestSimple::json::value::number::UnsignedLong();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLong
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::UnsignedLong>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::UnsignedLong cast_pointer_value_number_unsignedlong1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::UnsignedLong>(pointer_value_number_unsignedlong1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLong is not null pointer
						SourceAssert(cast_pointer_value_number_unsignedlong1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLong is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::UnsignedLongLong
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedlonglong1 = BMTestSimple::json::value::number::UnsignedLongLong();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLongLong
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::UnsignedLongLong>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::UnsignedLongLong cast_pointer_value_number_unsignedlonglong1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::UnsignedLongLong>(pointer_value_number_unsignedlonglong1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLongLong is not null pointer
						SourceAssert(cast_pointer_value_number_unsignedlonglong1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedLongLong is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with direct initialization from value initalization of BrainMuscles::test::simple::json::value::number::UnsignedShort
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedshort1 = BMTestSimple::json::value::number::UnsignedShort();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedShort
						// with copy initialization from static function member 'DynamicPointerCast<BrainMuscles::test::simple::json::pointer::Value, BrainMuscles::test::simple::json::pointer::value::number::UnsignedShort>'
						// of BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						BMTestSimple::json::pointer::value::number::UnsignedShort cast_pointer_value_number_unsignedshort1 =
							BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::pointer::Value, BMTestSimple::json::pointer::value::number::UnsignedShort>(pointer_value_number_unsignedshort1);
						
						//check variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedShort is not null pointer
						SourceAssert(cast_pointer_value_number_unsignedshort1 != nullptr,
							"variable of class BrainMuscles::test::simple::json::pointer::value::number::UnsignedShort is null pointer");
					}
				}
			}
		}
	}
}