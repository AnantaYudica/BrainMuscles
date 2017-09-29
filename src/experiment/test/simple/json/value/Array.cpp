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
#include "experiment\test\simple\json\value\Array.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					void Array::PreTest()
					{
						SourceRequirement(experiment::test::simple::json::Memory);
						SourceRequirement(experiment::test::simple::json::Value);
						SourceRequirement(experiment::test::simple::json::pointer::Value);
					}

					void Array::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//declare variable of class BrainMuscles::test::simple::json::value::Array with default initialization
						BMTestSimple::json::value::Array value_array1;
						//declare variable of class BrainMuscles::test::simple::json::value::Array with default initialization
						BMTestSimple::json::value::Array value_array2;

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::Array
						value_array1.Insert(BMTestSimple::json::value::Array());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::False
						value_array1.Insert(BMTestSimple::json::value::False());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::Null
						value_array1.Insert(BMTestSimple::json::value::Null());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::Object
						value_array1.Insert(BMTestSimple::json::value::Object());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::String
						value_array1.Insert(BMTestSimple::json::value::String());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::True
						value_array1.Insert(BMTestSimple::json::value::True());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Char
						value_array1.Insert(BMTestSimple::json::value::number::Char());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Double
						value_array1.Insert(BMTestSimple::json::value::number::Double());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Float
						value_array1.Insert(BMTestSimple::json::value::number::Float());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Int
						value_array1.Insert(BMTestSimple::json::value::number::Int());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Long
						value_array1.Insert(BMTestSimple::json::value::number::Long());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::LongDouble
						value_array1.Insert(BMTestSimple::json::value::number::LongDouble());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::LongLong
						value_array1.Insert(BMTestSimple::json::value::number::LongLong());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::Short
						value_array1.Insert(BMTestSimple::json::value::number::Short());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedChar
						value_array1.Insert(BMTestSimple::json::value::number::UnsignedChar());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedInt
						value_array1.Insert(BMTestSimple::json::value::number::UnsignedInt());
						
						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedLong
						value_array1.Insert(BMTestSimple::json::value::number::UnsignedLong());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
						value_array1.Insert(BMTestSimple::json::value::number::UnsignedLongLong());

						//call function member 'Insert()' from class BrainMuscles::test::simple::json::value::Array and
						// argument with value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedShort
						value_array1.Insert(BMTestSimple::json::value::number::UnsignedShort());

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::Array>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::Array>'
						// and argument with element value at 0 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_array3 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::Array>(value_array1[0]);

						//check variable 'pointer_value_array3' is not equal with null pointer
						SourceAssert(pointer_value_array3 != nullptr, 
							"variable 'pointer_value_array3' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::False>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::False>'
						// and argument with element value at 1 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_false1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::False>(value_array1[1]);

						//check variable 'pointer_value_false1' is not equal with null pointer
						SourceAssert(pointer_value_false1 != nullptr,
							"variable 'pointer_value_false1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::Null>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::Null>'
						// and argument with element value at 2 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_null1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::Null>(value_array1[2]);

						//check variable 'pointer_value_null1' is not equal with null pointer
						SourceAssert(pointer_value_null1 != nullptr,
							"variable 'pointer_value_null1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::Object>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::Object>'
						// and argument with element value at 3 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_object1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::Object>(value_array1[3]);

						//check variable 'pointer_value_object1' is not equal with null pointer
						SourceAssert(pointer_value_object1 != nullptr,
							"variable 'pointer_value_object1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::String>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::String>'
						// and argument with element value at 4 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_string1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::String>(value_array1[4]);

						//check variable 'pointer_value_string1' is not equal with null pointer
						SourceAssert(pointer_value_string1 != nullptr,
							"variable 'pointer_value_string1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::True>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::True>'
						// and argument with element value at 5 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_true1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::True>(value_array1[5]);

						//check variable 'pointer_value_true1' is not equal with null pointer
						SourceAssert(pointer_value_true1 != nullptr,
							"variable 'pointer_value_true1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Char>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Char>'
						// and argument with element value at 6 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_char1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Char>(value_array1[6]);

						//check variable 'pointer_value_number_char1' is not equal with null pointer
						SourceAssert(pointer_value_number_char1 != nullptr,
							"variable 'pointer_value_number_char1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Double>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Double>'
						// and argument with element value at 7 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_double1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Double>(value_array1[7]);

						//check variable 'pointer_value_number_double1' is not equal with null pointer
						SourceAssert(pointer_value_number_double1 != nullptr,
							"variable 'pointer_value_number_double1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Float>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Float>'
						// and argument with element value at 8 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_float1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Float>(value_array1[8]);

						//check variable 'pointer_value_number_float1' is not equal with null pointer
						SourceAssert(pointer_value_number_float1 != nullptr,
							"variable 'pointer_value_number_float1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Int>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Int>'
						// and argument with element value at 9 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_int1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Int>(value_array1[9]);

						//check variable 'pointer_value_number_int1' is not equal with null pointer
						SourceAssert(pointer_value_number_int1 != nullptr,
							"variable 'pointer_value_number_int1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Long>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Long>'
						// and argument with element value at 10 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_long1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Long>(value_array1[10]);

						//check variable 'pointer_value_number_long1' is not equal with null pointer
						SourceAssert(pointer_value_number_long1 != nullptr,
							"variable 'pointer_value_number_long1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::LongDouble>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::LongDouble>'
						// and argument with element value at 11 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_longdouble1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::LongDouble>(value_array1[11]);

						//check variable 'pointer_value_number_longdouble1' is not equal with null pointer
						SourceAssert(pointer_value_number_longdouble1 != nullptr,
							"variable 'pointer_value_number_longdouble1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::LongLong>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::LongLong>'
						// and argument with element value at 12 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_longlong1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::LongLong>(value_array1[12]);

						//check variable 'pointer_value_number_longlong1' is not equal with null pointer
						SourceAssert(pointer_value_number_longlong1 != nullptr,
							"variable 'pointer_value_number_longlong1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::Short>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::Short>'
						// and argument with element value at 13 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_short1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::Short>(value_array1[13]);

						//check variable 'pointer_value_number_short1' is not equal with null pointer
						SourceAssert(pointer_value_number_short1 != nullptr,
							"variable 'pointer_value_number_short1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::UnsignedChar>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::UnsignedChar>'
						// and argument with element value at 14 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_unsignedchar1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::UnsignedChar>(value_array1[14]);

						//check variable 'pointer_value_number_unsignedchar1' is not equal with null pointer
						SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
							"variable 'pointer_value_number_unsignedchar1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::UnsignedInt>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::UnsignedInt>'
						// and argument with element value at 15 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_unsignedint1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::UnsignedInt>(value_array1[15]);

						//check variable 'pointer_value_number_unsignedint1' is not equal with null pointer
						SourceAssert(pointer_value_number_unsignedint1 != nullptr,
							"variable 'pointer_value_number_unsignedint1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::UnsignedLong>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::UnsignedLong>'
						// and argument with element value at 16 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_unsignedlong1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::UnsignedLong>(value_array1[16]);

						//check variable 'pointer_value_number_unsignedlong1' is not equal with null pointer
						SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
							"variable 'pointer_value_number_unsignedlong1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::UnsignedLongLong>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::UnsignedLongLong>'
						// and argument with element value at 17 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_unsignedlonglong1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::UnsignedLongLong>(value_array1[17]);

						//check variable 'pointer_value_number_unsignedlonglong1' is not equal with null pointer
						SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
							"variable 'pointer_value_number_unsignedlonglong1' is null pointer");

						//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<BrainMuscles::test::simple::json::value::number::UnsignedShort>
						// with copy initialization from static function 'DynamicPointerCast<BrainMuscles::test::simple::json::Value, BrainMuscles::test::simple::json::value::number::UnsignedShort>'
						// and argument with element value at 18 from variable of class BrainMuscles::test::simple::json::value::Array
						auto pointer_value_number_unsignedshort1 = BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::number::UnsignedShort>(value_array1[18]);

						//check variable 'pointer_value_number_unsignedshort1' is not equal with null pointer
						SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
							"variable 'pointer_value_number_unsignedshort1' is null pointer");

						//call function member 'Clear' from class BrainMuscles::test::simple::json::value::Array
						value_array1.Clear();

						//check size element of value_array1 is zero
						SourceAssert(value_array1.Size() == 0,
							"size element of value_array1 is not zero");

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::Array
						BMTestSimple::json::pointer::Value pointer_value_array4 = BMTestSimple::json::value::Array();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::False
						BMTestSimple::json::pointer::Value pointer_value_false2 = BMTestSimple::json::value::False();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::Null
						BMTestSimple::json::pointer::Value pointer_value_null2 = BMTestSimple::json::value::Null();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::Object
						BMTestSimple::json::pointer::Value pointer_value_object2 = BMTestSimple::json::value::Object();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::String
						BMTestSimple::json::pointer::Value pointer_value_string2 = BMTestSimple::json::value::String();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::True
						BMTestSimple::json::pointer::Value pointer_value_true2 = BMTestSimple::json::value::True();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Char
						BMTestSimple::json::pointer::Value pointer_value_number_char2 = BMTestSimple::json::value::number::Char();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Double
						BMTestSimple::json::pointer::Value pointer_value_number_double2 = BMTestSimple::json::value::number::Double();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Float
						BMTestSimple::json::pointer::Value pointer_value_number_float2 = BMTestSimple::json::value::number::Float();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Int
						BMTestSimple::json::pointer::Value pointer_value_number_int2 = BMTestSimple::json::value::number::Int();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Long
						BMTestSimple::json::pointer::Value pointer_value_number_long2 = BMTestSimple::json::value::number::Long();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::LongDouble
						BMTestSimple::json::pointer::Value pointer_value_number_longdouble2 = BMTestSimple::json::value::number::LongDouble();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::LongLong
						BMTestSimple::json::pointer::Value pointer_value_number_longlong2 = BMTestSimple::json::value::number::LongLong();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::Short
						BMTestSimple::json::pointer::Value pointer_value_number_short2 = BMTestSimple::json::value::number::Short();
						
						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedChar
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedchar2 = BMTestSimple::json::value::number::UnsignedChar();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedInt
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedint2 = BMTestSimple::json::value::number::UnsignedInt();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedLong
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedlong2 = BMTestSimple::json::value::number::UnsignedLong();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedlonglong2 = BMTestSimple::json::value::number::UnsignedLongLong();

						//declare variable of class BrainMuscles::test::simple::json::pointer::Value 
						// with copy initialization from value initialization of class BrainMuscles::test::simple::json::value::number::UnsignedShort
						BMTestSimple::json::pointer::Value pointer_value_number_unsignedshort2 = BMTestSimple::json::value::number::UnsignedShort();

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert1 = value_array1.Insert(pointer_value_array4);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert1' 
						// and element value at 0 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert1) == value_array1[0],
							"variable value of element variable from iterator variable 'it_value_array1_insert1'  "
							"and element value at 0 index in variable 'value_array1' is not same");

						//check value between element value at 0 index from variable 'value_array1' and variable 'pointer_value_array4' is same
						SourceAssert(value_array1[0] == pointer_value_array4,
							"element value at 0 index from variable 'value_array1' and variable 'pointer_value_array4' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert2 = value_array1.Insert(pointer_value_false2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert2' 
						// and element value at 1 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert2) == value_array1[1],
							"variable value of element variable from iterator variable 'it_value_array1_insert2'  "
							"and element value at 1 index in variable 'value_array1' is not same");

						//check value between element value at 1 index from variable 'value_array1' and variable 'pointer_value_false2' is same
						SourceAssert(value_array1[1] == pointer_value_false2,
							"element value at 1 index from variable 'value_array1' and variable 'pointer_value_false2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert3 = value_array1.Insert(pointer_value_null2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert3' 
						// and element value at 2 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert3) == value_array1[2],
							"variable value of element variable from iterator variable 'it_value_array1_insert3'  "
							"and element value at 2 index in variable 'value_array1' is not same");

						//check value between element value at 2 index from variable 'value_array1' and variable 'pointer_value_null2' is same
						SourceAssert(value_array1[2] == pointer_value_null2,
							"element value at 2 index from variable 'value_array1' and variable 'pointer_value_null2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert4 = value_array1.Insert(pointer_value_object2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert4' 
						// and element value at 3 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert4) == value_array1[3],
							"variable value of element variable from iterator variable 'it_value_array1_insert4'  "
							"and element value at 3 index in variable 'value_array1' is not same");

						//check value between element value at 3 index from variable 'value_array1' and variable 'pointer_value_object2' is same
						SourceAssert(value_array1[3] == pointer_value_object2,
							"element value at 3 index from variable 'value_array1' and variable 'pointer_value_object2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert5 = value_array1.Insert(pointer_value_string2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert5' 
						// and element value at 4 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert5) == value_array1[4],
							"variable value of element variable from iterator variable 'it_value_array1_insert5'  "
							"and element value at 4 index in variable 'value_array1' is not same");

						//check value between element value at 4 index from variable 'value_array1' and variable 'pointer_value_string2' is same
						SourceAssert(value_array1[4] == pointer_value_string2,
							"element value at 4 index from variable 'value_array1' and variable 'pointer_value_string2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert6 = value_array1.Insert(pointer_value_true2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert6' 
						// and element value at 5 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert6) == value_array1[5],
							"variable value of element variable from iterator variable 'it_value_array1_insert6'  "
							"and element value at 5 index in variable 'value_array1' is not same");

						//check value between element value at 5 index from variable 'value_array1' and variable 'pointer_value_true2' is same
						SourceAssert(value_array1[5] == pointer_value_true2,
							"element value at 5 index from variable 'value_array1' and variable 'pointer_value_true2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert7 = value_array1.Insert(pointer_value_number_char2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert7' 
						// and element value at 6 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert7) == value_array1[6],
							"variable value of element variable from iterator variable 'it_value_array1_insert7'  "
							"and element value at 6 index in variable 'value_array1' is not same");

						//check value between element value at 6 index from variable 'value_array1' and variable 'pointer_value_number_char2' is same
						SourceAssert(value_array1[6] == pointer_value_number_char2,
							"element value at 6 index from variable 'value_array1' and variable 'pointer_value_number_char2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert8 = value_array1.Insert(pointer_value_number_double2);
						
						//check value between variable value of element variable from iterator variable 'it_value_array1_insert8' 
						// and element value at 7 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert8) == value_array1[7],
							"variable value of element variable from iterator variable 'it_value_array1_insert8'  "
							"and element value at 7 index in variable 'value_array1' is not same");

						//check value between element value at 7 index from variable 'value_array1' and variable 'pointer_value_number_double2' is same
						SourceAssert(value_array1[7] == pointer_value_number_double2,
							"element value at 7 index from variable 'value_array1' and variable 'pointer_value_number_double2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert9 = value_array1.Insert(pointer_value_number_float2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert9' 
						// and element value at 8 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert9) == value_array1[8],
							"variable value of element variable from iterator variable 'it_value_array1_insert9'  "
							"and element value at 8 index in variable 'value_array1' is not same");

						//check value between element value at 8 index from variable 'value_array1' and variable 'pointer_value_number_float2' is same
						SourceAssert(value_array1[8] == pointer_value_number_float2,
							"element value at 8 index from variable 'value_array1' and variable 'pointer_value_number_float2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert10 = value_array1.Insert(pointer_value_number_int2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert10' 
						// and element value at 9 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert10) == value_array1[9],
							"variable value of element variable from iterator variable 'it_value_array1_insert10'  "
							"and element value at 9 index in variable 'value_array1' is not same");

						//check value between element value at 9 index from variable 'value_array1' and variable 'pointer_value_number_int2' is same
						SourceAssert(value_array1[9] == pointer_value_number_int2,
							"element value at 9 index from variable 'value_array1' and variable 'pointer_value_number_int2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert11 = value_array1.Insert(pointer_value_number_long2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert11' 
						// and element value at 10 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert11) == value_array1[10],
							"variable value of element variable from iterator variable 'it_value_array1_insert11'  "
							"and element value at 10 index in variable 'value_array1' is not same");

						//check value between element value at 10 index from variable 'value_array1' and variable 'pointer_value_number_long2' is same
						SourceAssert(value_array1[10] == pointer_value_number_long2,
							"element value at 10 index from variable 'value_array1' and variable 'pointer_value_number_long2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert12 = value_array1.Insert(pointer_value_number_longdouble2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert12' 
						// and element value at 11 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert12) == value_array1[11],
							"variable value of element variable from iterator variable 'it_value_array1_insert12'  "
							"and element value at 11 index in variable 'value_array1' is not same");

						//check value between element value at 11 index from variable 'value_array1' and variable 'pointer_value_number_longdouble2' is same
						SourceAssert(value_array1[11] == pointer_value_number_longdouble2,
							"element value at 11 index from variable 'value_array1' and variable 'pointer_value_number_longdouble2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert13 = value_array1.Insert(pointer_value_number_longlong2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert13' 
						// and element value at 12 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert13) == value_array1[12],
							"variable value of element variable from iterator variable 'it_value_array1_insert13'  "
							"and element value at 12 index in variable 'value_array1' is not same");

						//check value between element value at 12 index from variable 'value_array1' and variable 'pointer_value_number_longlong2' is same
						SourceAssert(value_array1[12] == pointer_value_number_longlong2,
							"element value at 12 index from variable 'value_array1' and variable 'pointer_value_number_longlong2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert14 = value_array1.Insert(pointer_value_number_short2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert14' 
						// and element value at 13 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert14) == value_array1[13],
							"variable value of element variable from iterator variable 'it_value_array1_insert14'  "
							"and element value at 13 index in variable 'value_array1' is not same");

						//check value between element value at 13 index from variable 'value_array1' and variable 'pointer_value_number_short2' is same
						SourceAssert(value_array1[13] == pointer_value_number_short2,
							"element value at 13 index from variable 'value_array1' and variable 'pointer_value_number_short2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert15 = value_array1.Insert(pointer_value_number_unsignedchar2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert15' 
						// and element value at 14 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert15) == value_array1[14],
							"variable value of element variable from iterator variable 'it_value_array1_insert15'  "
							"and element value at 14 index in variable 'value_array1' is not same");

						//check value between element value at 14 index from variable 'value_array1' and variable 'pointer_value_number_unsignedchar2' is same
						SourceAssert(value_array1[14] == pointer_value_number_unsignedchar2,
							"element value at 14 index from variable 'value_array1' and variable 'pointer_value_number_unsignedchar2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert16 = value_array1.Insert(pointer_value_number_unsignedint2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert16' 
						// and element value at 15 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert16) == value_array1[15],
							"variable value of element variable from iterator variable 'it_value_array1_insert16'  "
							"and element value at 15 index in variable 'value_array1' is not same");

						//check value between element value at 15 index from variable 'value_array1' and variable 'pointer_value_number_unsignedint2' is same
						SourceAssert(value_array1[15] == pointer_value_number_unsignedint2,
							"element value at 15 index from variable 'value_array1' and variable 'pointer_value_number_unsignedint2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert17 = value_array1.Insert(pointer_value_number_unsignedlong2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert17' 
						// and element value at 16 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert17) == value_array1[16],
							"variable value of element variable from iterator variable 'it_value_array1_insert17'  "
							"and element value at 16 index in variable 'value_array1' is not same");

						//check value between element value at 16 index from variable 'value_array1' and variable 'pointer_value_number_unsignedlong2' is same
						SourceAssert(value_array1[16] == pointer_value_number_unsignedlong2,
							"element value at 16 index from variable 'value_array1' and variable 'pointer_value_number_unsignedlong2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert18 = value_array1.Insert(pointer_value_number_unsignedlonglong2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert18' 
						// and element value at 17 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert18) == value_array1[17],
							"variable value of element variable from iterator variable 'it_value_array1_insert18'  "
							"and element value at 17 index in variable 'value_array1' is not same");

						//check value between element value at 17 index from variable 'value_array1' and variable 'pointer_value_number_unsignedlonglong2' is same
						SourceAssert(value_array1[17] == pointer_value_number_unsignedlonglong2,
							"element value at 17 index from variable 'value_array1' and variable 'pointer_value_number_unsignedlonglong2' is not same");

						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from static function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of class BrainMuscles::test::simple::json::pointer::Value 
						auto it_value_array1_insert19 = value_array1.Insert(pointer_value_number_unsignedshort2);

						//check value between variable value of element variable from iterator variable 'it_value_array1_insert19' 
						// and element value at 18 index in variable 'value_array1' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*it_value_array1_insert19) == value_array1[18],
							"variable value of element variable from iterator variable 'it_value_array1_insert19'  "
							"and element value at 18 index in variable 'value_array1' is not same");

						//check value between element value at 18 index from variable 'value_array1' and variable 'pointer_value_number_unsignedshort2' is same
						SourceAssert(value_array1[18] == pointer_value_number_unsignedshort2,
							"element value at 18 index from variable 'value_array1' and variable 'pointer_value_number_unsignedshort2' is not same");

						//check range-for is work in variable of class BrainMuscles::test::simple::json::value::Array
						for (auto it : value_array1)
						{
							//check value between value of element variable from variable 'value_array1' 
							// and element value of variable 'value_array1' with key from element variable from variable 'value_array1' is same
							SourceAssert(BMTestSimple::json::value::Array::Value(it) == value_array1[value_array1.Key(it)],
								"Value of element variable from variable 'value_array1' and "
								"element value of variable 'value_array1' with key from element variable from variable 'value_array1' is not  same");
						}

						//check range-for is work in const variable of class BrainMuscles::test::simple::json::value::Array
						for (auto it : std::as_const(value_array1))
						{
							//check value between value of element variable from variable 'value_array1' as const
							// and element value of variable 'value_array1' with key from element variable from variable 'value_array1' as const is same
							SourceAssert(BMTestSimple::json::value::Array::Value(it) == value_array1[value_array1.Key(it)],
								"Value of element variable from variable 'value_array1' as const and "
								"element value of variable 'value_array1' with key from element variable from variable 'value_array1' as const is not  same");
						}

						//check static function member 'ConstBegin' and 'ConstEnd' from class BrainMuscles::test::simple::json::value::Array
						for (auto it = value_array1.ConstBegin(); it < value_array1.ConstEnd(); ++it)
						{
							//check value between value of pointer variable from iterator of variable 'value_array1'
							// and element value of variable 'value_array1' with key from element variable from iterator of variable 'value_array1' is same
							SourceAssert(BMTestSimple::json::value::Array::Value(*it) == value_array1[value_array1.Key(*it)],
								"value of pointer variable from iterator of variable 'value_array1' "
								"and element value of variable 'value_array1' with key from element variable from iterator of variable 'value_array1' is not same");
						}

						//call function member 'Insert' of class BrainMuscles::test::simple::json::value::Array
						// and arguments function member 'Begin' and 'End' from class BrainMuscles::test::simple::json::value::Array
						value_array1.Insert(value_array1.Begin(), value_array1.End());

						//check value between element value from 0 to 18 index and element value from 19 to 37 is same
						for (size_t i = 0, j = value_array1.Size() / 2; i < value_array1.Size() / 2; ++i, ++j)
						{
							SourceAssert(value_array1[i] == value_array1[j],
								"element value at %zu index of variable 'value_array1' "
								"and element value at %zu index of variable 'value_array1' is not same", i, j);
						}
						
						//declare variable of class BrainMuscles::test::simple::json::value::Array::IteratorType
						// with copy initialization from return function member 'Emplace' of class BrainMuscles::test::simple::json::value::Array
						// and argument with value initialization of BrainMuscles::test::simple::json::value::Array
						auto it_value_array_emplace1 = value_array1.Emplace(BMTestSimple::json::value::Array());
					
						//check cast from BrainMuscles::test::simple::json::pointer::Value to BrainMuscles::test::simple::json::pointer::value::Array is not null pointer
						SourceAssert((BMTestSimple::json::Memory::DynamicPointerCast<BMTestSimple::json::Value, BMTestSimple::json::value::Array>(*it_value_array_emplace1) != nullptr),
							"cannot cast from BrainMuscles::test::simple::json::pointer::Value to BrainMuscles::test::simple::json::pointer::value::Array");

						//call function member 'Erase' of class BrainMuscles::test::simple::json::value::Array
						// and argument with variable of BrainMuscles::test::simple::json::value::Array::IteratorType
						// from last element of variable of BrainMuscles::test::simple::json::value::Array
						value_array1.Erase(value_array1.End() - 1);

						//declare variable of std::size_t with copy initialization from half of total element of class BrainMuscles::test::simple::json::value::Array
						auto half_value_array1_size = value_array1.Size() / 2;

						//check half of total element of variable 'value_array1' is even
						SourceAssert(value_array1.Size() % 2 == 0, 
							"half of total element of variable 'value_array1' is odd");

						//call function member 'Erase' of class BrainMuscles::test::simple::json::value::Array
						// and arguments with variable of class BrainMuscles::test::simple::json::value::Array::IteratorType at middle
						// and variable of class BrainMuscles::test::simple::json::value::Array::IteratorType at last
						value_array1.Erase(value_array1.Begin() + half_value_array1_size, value_array1.End());

						//check total element of class BrainMuscles::test::simple::json::value::Array 
						// is half size before call function member 'Erase' of class BrainMuscles::test::simple::json::value::Array
						SourceAssert(value_array1.Size() == half_value_array1_size,
							"total element of variable 'value_array1' is not "
							"half size before call function member 'Erase' of class BrainMuscles::test::simple::json::value::Array");

						//call function member 'Swap' of class BrainMuscles::test::simple::json::value::Array
						// and argument with other variable of class BrainMuscles::test::simple::json::value::Array
						value_array1.Swap(value_array2);

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (0) as key and variable 'pointer_value_array4' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(0)) == pointer_value_array4,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (0) as key and variable 'pointer_value_array4' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (1) as key and variable 'pointer_value_false2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(1)) == pointer_value_false2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (1) as key and variable 'pointer_value_false2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (2) as key and variable 'pointer_value_null2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(2)) == pointer_value_null2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (2) as key and variable 'pointer_value_null2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (3) as key and variable 'pointer_value_object2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(3)) == pointer_value_object2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (3) as key and variable 'pointer_value_object2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (4) as key and variable 'pointer_value_string2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(4)) == pointer_value_string2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (4) as key and variable 'pointer_value_string2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (5) as key and variable 'pointer_value_true2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(5)) == pointer_value_true2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (5) as key and variable 'pointer_value_true2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (6) as key and variable 'pointer_value_number_char2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(6)) == pointer_value_number_char2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (6) as key and variable 'pointer_value_number_char2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (7) as key and variable 'pointer_value_number_double2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(7)) == pointer_value_number_double2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (7) as key and variable 'pointer_value_number_double2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (8) as key and variable 'pointer_value_number_float2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(8)) == pointer_value_number_float2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (8) as key and variable 'pointer_value_number_float2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (9) as key and variable 'pointer_value_number_int2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(9)) == pointer_value_number_int2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (9) as key and variable 'pointer_value_number_int2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (10) as key and variable 'pointer_value_number_long2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(10)) == pointer_value_number_long2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (10) as key and variable 'pointer_value_number_long2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (11) as key and variable 'pointer_value_number_longdouble2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(11)) == pointer_value_number_longdouble2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (11) as key and variable 'pointer_value_number_longdouble2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (12) as key and variable 'pointer_value_number_longlong2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(12)) == pointer_value_number_longlong2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (12) as key and variable 'pointer_value_number_longlong2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (13) as key and variable 'pointer_value_number_short2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(13)) == pointer_value_number_short2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (13) as key and variable 'pointer_value_number_short2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (14) as key and variable 'pointer_value_number_unsignedchar2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(14)) == pointer_value_number_unsignedchar2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (14) as key and variable 'pointer_value_number_unsignedchar2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (15) as key and variable 'pointer_value_number_unsignedint2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(15)) == pointer_value_number_unsignedint2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (15) as key and variable 'pointer_value_number_unsignedint2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (16) as key and variable 'pointer_value_number_unsignedlong2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(16)) == pointer_value_number_unsignedlong2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (16) as key and variable 'pointer_value_number_unsignedlong2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (17) as key and variable 'pointer_value_number_unsignedlonglong2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(17)) == pointer_value_number_unsignedlonglong2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (17) as key and variable 'pointer_value_number_unsignedlonglong2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (18) as key and variable 'pointer_value_number_unsignedshort2' is same
						SourceAssert(BMTestSimple::json::value::Array::Value(*value_array2.Find(18)) == pointer_value_number_unsignedshort2,
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (18) as key and variable 'pointer_value_number_unsignedshort2' is not same");

						//check value between Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'
						// and argument with int (19) as key and end iterator of variable 'value_array2' is same
						SourceAssert(value_array2.Find(19) == value_array2.End(),
							"Value of pointer of iterator variable from return value function member 'Find' of variable 'value_array2'"
							" and argument with int (19) as key and end iterator of variable 'value_array2' is not same");

						//check value between function (or const) member of class BrainMuscles::test::simple::json::value::Array 'operator[]' and 'At' is same 
						for (size_t i = 0; i < value_array2.Size(); ++i)
						{
							SourceAssert(value_array2[i] == value_array2.At(i),
								"element value of variable 'value_array2' with key %zu and return value function member 'At' varible of 'value_array2' with key %zu is not same", i, i);
							SourceAssert(std::as_const(value_array2)[i] == std::as_const(value_array2).At(i),
								"element value of variable 'value_array2' as const with key %zu and return value function member 'At' varible of 'value_array2' as const with key %zu is not same", i, i);
						}

						//declare variable of class BrainMuscles::test::simple::json::value::Array
						// with copy initalization from variable of class BrainMuscles::test::simple::json::value::Array
						BMTestSimple::json::value::Array value_array5(value_array2);

						//declare variable of class BrainMuscles::test::simple::json::value::Array
						// with copy initalization from variable of class BrainMuscles::test::simple::json::value::Array
						BMTestSimple::json::value::Array value_array6 = value_array5;

						//check element value with same index between variable of 'value_array5' 
						// and variable of 'value_array6' is same 
						for (std::size_t i = 0; i < value_array1.Size(); ++i)
						{
							SourceAssert(value_array1[i] == value_array5[i] && value_array1[i] == value_array6[i],
								"element value with %zu index between variable of 'value_array5' "
								" and variable of 'value_array6' is not same ", i);
						}

						//check type index between return type functio member 'Container()' of variable 'value_array1' 
						// and type definition of BrainMuscles::test::simple::json::Constant::ContainerArrayType is same
						SourceAssert(typeid(value_array1.Container()).hash_code() == typeid(BMTestSimple::json::Constant::ContainerArrayType).hash_code(),
							"return type functio member 'Container()' of variable 'value_array1' "
							"and type definition of BrainMuscles::test::simple::json::Constant::ContainerArrayType is not same");
					}
				}
			}
		}
	}
}