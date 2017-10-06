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
					void Number::PreTest()
					{
						SourceRequirement(experiment::test::simple::json::Value);
					}

					void Number::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization
						// from value initialization class BrainMuscles::test::simple::json::value::number::Char
						BMTestSimple::json::value::Number& value_number1 = 
							BMTestSimple::json::value::number::Char();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Char 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_char1 = dynamic_cast<BMTestSimple::json::value::number::Char*>(&value_number1);

						//check pointer variable 'pointer_value_number_char1' is not null pointer
						SourceAssert(pointer_value_number_char1 != nullptr,
							"pointer variable 'pointer_value_number_char1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::Double
						BMTestSimple::json::value::Number& value_number2 = 
							BMTestSimple::json::value::number::Double();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Double
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_double1 = dynamic_cast<BMTestSimple::json::value::number::Double*>(&value_number2);

						//check pointer variable 'pointer_value_number_double1' is not null pointer
						SourceAssert(pointer_value_number_double1 != nullptr,
							"pointer variable 'pointer_value_number_double1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::Float
						BMTestSimple::json::value::Number& value_number3 = 
							BMTestSimple::json::value::number::Float();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Float 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_float1 = dynamic_cast<BMTestSimple::json::value::number::Float*>(&value_number3);

						//check pointer variable 'pointer_value_number_float1' is not null pointer
						SourceAssert(pointer_value_number_float1 != nullptr,
							"pointer variable 'pointer_value_number_float1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::Int
						BMTestSimple::json::value::Number& value_number4 = 
							BMTestSimple::json::value::number::Int();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Int 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_int1 = dynamic_cast<BMTestSimple::json::value::number::Int*>(&value_number4);

						//check pointer variable 'pointer_value_number_int1' is not null pointer
						SourceAssert(pointer_value_number_int1 != nullptr,
							"pointer variable 'pointer_value_number_int1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::Long
						BMTestSimple::json::value::Number& value_number5 = 
							BMTestSimple::json::value::number::Long();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Long 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_long1 = dynamic_cast<BMTestSimple::json::value::number::Long*>(&value_number5);

						//check pointer variable 'pointer_value_number_long1' is not null pointer
						SourceAssert(pointer_value_number_long1 != nullptr,
							"pointer variable 'pointer_value_number_long1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::LongDouble
						BMTestSimple::json::value::Number& value_number6 = 
							BMTestSimple::json::value::number::LongDouble();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::LongDouble 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_longdouble1 = dynamic_cast<BMTestSimple::json::value::number::LongDouble*>(&value_number6);

						//check pointer variable 'pointer_value_number_longdouble1' is not null pointer
						SourceAssert(pointer_value_number_longdouble1 != nullptr,
							"pointer variable 'pointer_value_number_longdouble1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::LongLong
						BMTestSimple::json::value::Number& value_number7 = 
							BMTestSimple::json::value::number::LongLong();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::LongLong 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_longlong1 = dynamic_cast<BMTestSimple::json::value::number::LongLong*>(&value_number7);

						//check pointer variable 'pointer_value_number_longlong1' is not null pointer
						SourceAssert(pointer_value_number_longlong1 != nullptr,
							"pointer variable 'pointer_value_number_longlong1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::Short
						BMTestSimple::json::value::Number& value_number8 = 
							BMTestSimple::json::value::number::Short();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::Short 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_short1 = dynamic_cast<BMTestSimple::json::value::number::Short*>(&value_number8);

						//check pointer variable 'pointer_value_number_short1' is not null pointer
						SourceAssert(pointer_value_number_short1 != nullptr,
							"pointer variable 'pointer_value_number_short1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedChar
						BMTestSimple::json::value::Number& value_number9 = 
							BMTestSimple::json::value::number::UnsignedChar();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::UnsignedChar 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_unsignedchar1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedChar*>(&value_number9);

						//check pointer variable 'pointer_value_number_unsignedchar1' is not null pointer
						SourceAssert(pointer_value_number_unsignedchar1 != nullptr,
							"pointer variable 'pointer_value_number_unsignedchar1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedInt
						BMTestSimple::json::value::Number& value_number10 = 
							BMTestSimple::json::value::number::UnsignedInt();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::UnsignedInt 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_unsignedint1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedInt*>(&value_number10);

						//check pointer variable 'pointer_value_number_unsignedint1' is not null pointer
						SourceAssert(pointer_value_number_unsignedint1 != nullptr,
							"pointer variable 'pointer_value_number_unsignedint1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedLong
						BMTestSimple::json::value::Number& value_number11 = 
							BMTestSimple::json::value::number::UnsignedLong();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::UnsignedLong 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_unsignedlong1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedLong*>(&value_number11);

						//check pointer variable 'pointer_value_number_unsignedlong1' is not null pointer
						SourceAssert(pointer_value_number_unsignedlong1 != nullptr,
							"pointer variable 'pointer_value_number_unsignedlong1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedLongLong
						BMTestSimple::json::value::Number& value_number12 = 
							BMTestSimple::json::value::number::UnsignedLongLong();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::UnsignedLongLong 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_unsignedlonglong1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedLongLong*>(&value_number12);

						//check pointer variable 'pointer_value_number_unsignedlonglong1' is not null pointer
						SourceAssert(pointer_value_number_unsignedlonglong1 != nullptr,
							"pointer variable 'pointer_value_number_unsignedlonglong1' is null pointer");

						//declare reference variable of class BrainMuscles::test::simple::json::value::Number with reference initialization 
						// from value initialization class BrainMuscles::test::simple::json::value::number::UnsignedShort
						BMTestSimple::json::value::Number& value_number13 = 
							BMTestSimple::json::value::number::UnsignedShort();

						//declare pointer variable of class BrainMuscles::test::simple::json::value::number::UnsignedShort 
						// with copy initialization from dynamic cast from address of reference variable of class BrainMuscles::test::simple::json::value::Number
						auto pointer_value_number_unsignedshort1 = dynamic_cast<BMTestSimple::json::value::number::UnsignedShort*>(&value_number13);

						//check pointer variable 'pointer_value_number_unsignedshort1' is not null pointer
						SourceAssert(pointer_value_number_unsignedshort1 != nullptr,
							"pointer variable 'pointer_value_number_unsignedshort1' is null pointer");
					}

					void Number::PostTest()
					{
						SourceCall(experiment::test::simple::json::value::number::Char);
						SourceCall(experiment::test::simple::json::value::number::Double);
						SourceCall(experiment::test::simple::json::value::number::Float);
						SourceCall(experiment::test::simple::json::value::number::Int);
						SourceCall(experiment::test::simple::json::value::number::Long);
						SourceCall(experiment::test::simple::json::value::number::LongDouble);
						SourceCall(experiment::test::simple::json::value::number::LongLong);
						SourceCall(experiment::test::simple::json::value::number::Short);
						SourceCall(experiment::test::simple::json::value::number::UnsignedChar);
						SourceCall(experiment::test::simple::json::value::number::UnsignedInt);
						SourceCall(experiment::test::simple::json::value::number::UnsignedLong);
						SourceCall(experiment::test::simple::json::value::number::UnsignedLongLong);
						SourceCall(experiment::test::simple::json::value::number::UnsignedShort);
					}
				}
			}
		}
	}
}