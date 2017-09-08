#define _USING_TEST_

#include <cstdio>
#include <cstring>
#include <cassert>

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

#include "test\simple\json\helper\Cast.h"
#include "test\simple\json\helper\Value.h"

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

#include "test\simple\json\helper\pointer\Cast.h"
#include "test\simple\json\helper\pointer\Value.h"

using namespace BrainMuscles::test::simple;

using namespace std;

int main(int argc, char *argv[])
{
	//experiment with default constructor 'json/value'
	{
		//json value
		json::value::Array array1;
		json::value::False false1;
		json::value::Null null1;
		// json::value::Number is abstract type
		json::value::Object object1;
		json::value::String string1;
		json::value::True true1;

		//json value number
		json::value::number::Char number_char1;
		json::value::number::Double number_double1;
		json::value::number::Float number_float1;
		json::value::number::Int number_int1;
		json::value::number::Long number_long1;
		json::value::number::LongDouble number_longdouble1;
		json::value::number::LongLong number_longlong1;
		json::value::number::Short number_short1;
		json::value::number::UnsignedChar number_unsignedchar1;
		json::value::number::UnsignedInt number_unsignedint1;
		json::value::number::UnsignedLong number_unsignedlong1;
		json::value::number::UnsignedLongLong number_unsignedlonglong1;
		json::value::number::UnsignedShort number_unsignedshort1;
	}

	//experiment with default constructor 'json/pointer'
	{
		//json value
		json::pointer::Value pointer_value1;
		json::pointer::value::Array pointer_value_array1;
		json::pointer::value::False pointer_value_false1;
		json::pointer::value::Null pointer_value_null1;
		json::pointer::value::Number pointer_value_number1;
		json::pointer::value::Object pointer_value_object1;
		json::pointer::value::String pointer_value_string1;
		json::pointer::value::True pointer_value_true1;

		//json pointer value number
		json::pointer::value::number::Char pointer_number_char1;
		json::pointer::value::number::Double pointer_number_double1;
		json::pointer::value::number::Float pointer_number_float1;
		json::pointer::value::number::Int pointer_number_int1;
		json::pointer::value::number::Long pointer_number_long1;
		json::pointer::value::number::LongDouble pointer_number_longdouble1;
		json::pointer::value::number::LongLong pointer_number_longlong1;
		json::pointer::value::number::Short pointer_number_short1;
		json::pointer::value::number::UnsignedChar pointer_number_unsignedchar1;
		json::pointer::value::number::UnsignedInt pointer_number_unsignedint1;
		json::pointer::value::number::UnsignedLong pointer_number_unsignedlong1;
		json::pointer::value::number::UnsignedLongLong pointer_number_unsignedlonglong1;
		json::pointer::value::number::UnsignedShort pointer_number_unsignedshort1;
	}

	//experiment with 'json/value/Array.h'
	{
		//main variable with default constructor json::value::Array
		json::value::Array array1;

		//add json value array to value array
		array1.push_back(json::value::Array());

		//add json value false to value array
		array1.push_back(json::value::False());

		//add json value null to value array
		array1.push_back(json::value::Null());

		//add json value object to value array
		array1.push_back(json::value::Object());

		//add json value string to value array
		array1.push_back(json::value::String());

		//add json value true to value array
		array1.push_back(json::value::True());

		//add json value number char to value array
		array1.push_back(json::value::number::Char());

		//add json value number double to value array
		array1.push_back(json::value::number::Double());

		//add json value number float to value array
		array1.push_back(json::value::number::Float());

		//add json value number int to value array
		array1.push_back(json::value::number::Int());

		//add json value number long to value array
		array1.push_back(json::value::number::Long());

		//add json value number long double to value array
		array1.push_back(json::value::number::LongDouble());

		//add json value number long long to value array
		array1.push_back(json::value::number::LongLong());

		//add json value number short to value array
		array1.push_back(json::value::number::Short());

		//add json value number unsigned char to value array
		array1.push_back(json::value::number::UnsignedChar());

		//add json value number unsigned int to value array
		array1.push_back(json::value::number::UnsignedInt());

		//add json value number unsigned long to value array
		array1.push_back(json::value::number::UnsignedLong());

		//add json value number unsigned long long to value array
		array1.push_back(json::value::number::UnsignedLongLong());

		//add json value number unsigned short to value array
		array1.push_back(json::value::number::UnsignedShort());

		//get index 0 of json value array and cast to json value array
		auto pointer_array2 = dynamic_cast<json::value::Array*>(array1[0].get());
		//check pointer_array2 is not null
		assert(pointer_array2);

		//get index 1 of json value array and cast to json value false
		auto pointer_false1 = dynamic_cast<json::value::False*>(array1[1].get());
		//check pointer_false1 is not null
		assert(pointer_false1);

		//get index 2 of json value array and cast to json value null
		auto pointer_null1 = dynamic_cast<json::value::Null*>(array1[2].get());
		//check pointer_null1 is not null
		assert(pointer_null1);

		//get index 3 of json value array and cast to json value object
		auto pointer_object1 = dynamic_cast<json::value::Object*>(array1[3].get());
		//check pointer_object1 is not null
		assert(pointer_object1);

		//get index 4 of json value array and cast to json value string
		auto pointer_string1 = dynamic_cast<json::value::String*>(array1[4].get());
		//check pointer_string1 is not null
		assert(pointer_string1);

		//get index 5 of json value array and cast to json value true
		auto pointer_true1 = dynamic_cast<json::value::True*>(array1[5].get());
		//check pointer_true1 is not null
		assert(pointer_true1);

		//get index 6 of json value array and cast to json value number char
		auto pointer_number_char1 = dynamic_cast<json::value::number::Char*>(array1[6].get());
		//check pointer_number_char1 is not null
		assert(pointer_number_char1);

		//get index 7 of json value array and cast to json value number double
		auto pointer_number_double1 = dynamic_cast<json::value::number::Double*>(array1[7].get());
		//check pointer_number_double1 is not null
		assert(pointer_number_double1);

		//get index 8 of json value array and cast to json value number float
		auto pointer_number_float1 = dynamic_cast<json::value::number::Float*>(array1[8].get());
		//check pointer_number_float1 is not null
		assert(pointer_number_float1);

		//get index 9 of json value array and cast to json value number int
		auto pointer_number_int1 = dynamic_cast<json::value::number::Int*>(array1[9].get());
		//check pointer_number_int1 is not null
		assert(pointer_number_int1);

		//get index 10 of json value array and cast to json value number long
		auto pointer_number_long1 = dynamic_cast<json::value::number::Long*>(array1[10].get());
		//check pointer_number_long1 is not null
		assert(pointer_number_long1);

		//get index 11 of json value array and cast to json value number long double
		auto pointer_number_longdouble1 = dynamic_cast<json::value::number::LongDouble*>(array1[11].get());
		//check pointer_number_longdouble1 is not null
		assert(pointer_number_longdouble1);

		//get index 12 of json value array and cast to json value number long long
		auto pointer_number_longlong1 = dynamic_cast<json::value::number::LongLong*>(array1[12].get());
		//check pointer_number_longlong1 is not null
		assert(pointer_number_longlong1);

		//get index 13 of json value array and cast to json value number short
		auto pointer_number_short1 = dynamic_cast<json::value::number::Short*>(array1[13].get());
		//check pointer_number_short1 is not null
		assert(pointer_number_short1);

		//get index 14 of json value array and cast to json value number unsigned char
		auto pointer_number_unsignedchar1 = dynamic_cast<json::value::number::UnsignedChar*>(array1[14].get());
		//check pointer_number_unsignedchar1 is not null
		assert(pointer_number_unsignedchar1);

		//get index 15 of json value array and cast to json value number unsigned int
		auto pointer_number_unsignedint1 = dynamic_cast<json::value::number::UnsignedInt*>(array1[15].get());
		//check pointer_number_unsignedint1 is not null
		assert(pointer_number_unsignedint1);

		//get index 16 of json value array and cast to json value number unsigned long
		auto pointer_number_unsignedlong1 = dynamic_cast<json::value::number::UnsignedLong*>(array1[16].get());
		//check pointer_number_unsignedlong1 is not null
		assert(pointer_number_unsignedlong1);

		//get index 17 of json value array and cast to json value number unsigned long long
		auto pointer_number_unsignedlonglong1 = dynamic_cast<json::value::number::UnsignedLongLong*>(array1[17].get());
		//check pointer_number_unsignedlonglong1 is not null
		assert(pointer_number_unsignedlonglong1);

		//get index 18 of json value array and cast to json value number unsigned short
		auto pointer_number_unsignedshort1 = dynamic_cast<json::value::number::UnsignedShort*>(array1[18].get());
		//check pointer_number_unsignedshort1 is not null
		assert(pointer_number_unsignedshort1);

		//copy array1
		json::value::Array array3(array1);
		//check array1 and array3 is same pointer
		assert(array3 == array1);
	}

	//experiment with 'json/value/False.h'
	{
		//main variable with default constructor json::value::False
		json::value::False false1;

		//check false1 is false
		assert(false1 == false);

		//check false1 is "false" or json::Constant::FalseCString
		assert(strcmp(false1, json::Constant::FalseCString) == 0);
	}

	//experiment with 'json/value/Null.h'
	{
		//main variable with default constructor json::value::Null
		json::value::Null null1;

		//check null1 is "null" or json::Constant::NullCString
		assert(strcmp(null1, json::Constant::NullCString) == 0);
	}

	//experiment with 'json/value/Number.h'
	{
		//experiment with assignment reference variable json::value::Number with zero-initialization of 'json/value/number'
		{
			json::value::Number& number1 = json::value::number::Char();
			json::value::Number& number2 = json::value::number::Double();
			json::value::Number& number3 = json::value::number::Float();
			json::value::Number& number4 = json::value::number::Int();
			json::value::Number& number5 = json::value::number::Long();
			json::value::Number& number6 = json::value::number::LongDouble();
			json::value::Number& number7 = json::value::number::LongLong();
			json::value::Number& number8 = json::value::number::Short();
			json::value::Number& number9 = json::value::number::UnsignedChar();
			json::value::Number& number10 = json::value::number::UnsignedInt();
			json::value::Number& number11 = json::value::number::UnsignedLong();
			json::value::Number& number12 = json::value::number::UnsignedLongLong();
			json::value::Number& number13 = json::value::number::UnsignedShort();
		}

		//experiment with 'json/value/number/Char.h'
		{
			//default constructor
			json::value::number::Char number_char1;
			//check value number_char1 is 0 
			assert(number_char1 == 0);

			//fill constructor
			json::value::number::Char number_char2(15);
			//check value number_char2 is 15
			assert(number_char2 == 15);

			//copy constructor
			json::value::number::Char number_char3(number_char2);
			//check value number_char3 and number_char2 is same 
			assert(number_char3 == number_char2);

			//assignment with int
			number_char1 = 12;
			//check value number_char1 is 12
			assert(number_char1 == 12);

			//assignment with json::value::number::Char to char&
			char &ref_char1 = number_char1;

			//assignment with int
			ref_char1 = 16;
			//check value ref_char1 is 16 
			assert(ref_char1 == 16);

			//check value ref_char1 and number_char1 is same 
			assert(ref_char1 == number_char1);
		}

		//experiment with 'json/value/number/Double.h'
		{
			//default constructor
			json::value::number::Double number_double1;
			//check value number_double1 is 0 
			assert(number_double1 == 0);

			//fill constructor
			json::value::number::Double number_double2(15.15);
			//check value number_double2 is 15.15
			assert(number_double2 == 15.15);

			//copy constructor
			json::value::number::Double number_double3(number_double2);
			//check value number_double3 and number_double2 is same 
			assert(number_double3 == number_double2);

			//assignment with double
			number_double1 = 12.12;
			//check value number_double1 is 12.12
			assert(number_double1 == 12.12);

			//assignment with json::value::number::Double to double&
			double &ref_double1 = number_double1;

			//assignment with double
			ref_double1 = 16.16;
			//check value ref_double1 is 16.16
			assert(ref_double1 == 16.16);

			//check value ref_double1 and number_double1 is same 
			assert(ref_double1 == number_double1);
		}

		//experiment with 'json/value/number/Float.h'
		{
			//default constructor
			json::value::number::Float number_float1;
			//check value number_float1 is 0 
			assert(number_float1 == 0);

			//fill constructor
			json::value::number::Float number_float2(15.15f);
			//check value number_float2 is 15.15
			assert(number_float2 == 15.15f);

			//copy constructor
			json::value::number::Double number_float3(number_float2);
			//check value number_float3 and number_float2 is same 
			assert(number_float3 == number_float2);

			//assignment with float
			number_float1 = 12.12f;
			//check value number_float1 is 12.12
			assert(number_float1 == 12.12f);

			//assignment with json::value::number::Float to float&
			float &ref_float1 = number_float1;

			//assignment with float
			ref_float1 = 16.16f;
			//check value ref_float1 is 16.16
			assert(ref_float1 == 16.16f);

			//check value ref_float1 and number_float1 is same 
			assert(ref_float1 == number_float1);
		}

		//experiment with 'json/value/number/Int.h'
		{
			//default constructor
			json::value::number::Int number_int1;
			//check value number_int1 is 0 
			assert(number_int1 == 0);

			//fill constructor
			json::value::number::Int number_int2(15);
			//check value number_int2 is 15
			assert(number_int2 == 15);

			//copy constructor
			json::value::number::Int number_int3(number_int2);
			//check value number_int3 and number_int2 is same 
			assert(number_int3 == number_int2);

			//assignment with int
			number_int1 = 12;
			//check value number_int1 is 12
			assert(number_int1 == 12);

			//assignment with json::value::number::Int to int&
			int &ref_int1 = number_int1;

			//assignment with int
			ref_int1 = 16;
			//check value ref_int1 is 16 
			assert(ref_int1 == 16);

			//check value ref_int1 and number_int1 is same 
			assert(ref_int1 == number_int1);
		}

		//experiment with 'json/value/number/Long.h'
		{
			//default constructor
			json::value::number::Long number_long1;
			//check value number_long1 is 0 
			assert(number_long1 == 0);

			//fill constructor
			json::value::number::Long number_long2(15L);
			//check value number_long2 is 15
			assert(number_long2 == 15L);

			//copy constructor
			json::value::number::Long number_long3(number_long2);
			//check value number_long3 and number_long2 is same 
			assert(number_long3 == number_long2);

			//assignment with long
			number_long1 = 12L;
			//check value number_long1 is 12
			assert(number_long1 == 12L);

			//assignment with json::value::number::Long to long&
			long &ref_long1 = number_long1;

			//assignment with long
			ref_long1 = 16L;
			//check value ref_long1 is 16 
			assert(ref_long1 == 16L);

			//check value ref_long1 and number_long1 is same 
			assert(ref_long1 == number_long1);
		}

		//experiment with 'json/value/number/LongDouble.h'
		{
			//default constructor
			json::value::number::LongDouble number_longdouble1;
			//check value number_longdouble1 is 0 
			assert(number_longdouble1 == 0);

			//fill constructor
			json::value::number::LongDouble number_longdouble2(15.15L);
			//check value number_longdouble2 is 15.15
			assert(number_longdouble2 == 15.15L);

			//copy constructor
			json::value::number::LongDouble number_longdouble3(number_longdouble2);
			//check value number_longdouble3 and number_longdouble2 is same 
			assert(number_longdouble3 == number_longdouble2);

			//assignment with long double
			number_longdouble1 = 12.12L;
			//check value number_longdouble1 is 12.12
			assert(number_longdouble1 == 12.12L);

			//assignment with json::value::number::LongDouble to long double&
			long double &ref_longdouble1 = number_longdouble1;

			//assignment with long double
			ref_longdouble1 = 16.16L;
			//check value ref_longdouble1 is 16.16
			assert(ref_longdouble1 == 16.16L);

			//check value ref_longdouble1 and number_longdouble1 is same 
			assert(ref_longdouble1 == number_longdouble1);
		}

		//experiment with 'json/value/number/LongLong.h'
		{
			//default constructor
			json::value::number::LongLong number_longlong1;
			//check value number_longlong1 is 0 
			assert(number_longlong1 == 0);

			//fill constructor
			json::value::number::LongLong number_longlong2(15LL);
			//check value number_longlong2 is 15
			assert(number_longlong2 == 15LL);

			//copy constructor
			json::value::number::LongLong number_longlong3(number_longlong2);
			//check value number_longlong3 and number_longlong2 is same 
			assert(number_longlong3 == number_longlong2);

			//assignment with long long
			number_longlong1 = 12LL;
			//check value number_longlong1 is 12
			assert(number_longlong1 == 12LL);

			//assignment with json::value::number::LongLong to long long&
			long long &ref_longlong1 = number_longlong1;

			//assignment with long long
			ref_longlong1 = 16LL;
			//check value ref_longlong1 is 16 
			assert(ref_longlong1 == 16LL);

			//check value ref_longlong1 and number_longlong1 is same 
			assert(ref_longlong1 == number_longlong1);
		}

		//experiment with 'json/value/number/Short.h'
		{
			//default constructor
			json::value::number::Short number_short1;
			//check value number_short1 is 0 
			assert(number_short1 == 0);

			//fill constructor
			json::value::number::Short number_short2(15);
			//check value number_short2 is 15
			assert(number_short2 == 15);

			//copy constructor
			json::value::number::Short number_short3(number_short2);
			//check value number_short3 and number_short2 is same 
			assert(number_short3 == number_short2);

			//assignment with int
			number_short1 = 12;
			//check value number_short1 is 12
			assert(number_short1 == 12);

			//assignment with json::value::number::Short to short&
			short &ref_short1 = number_short1;

			//assignment with int
			ref_short1 = 16;
			//check value ref_short1 is 16 
			assert(ref_short1 == 16);

			//check value ref_short1 and number_short1 is same 
			assert(ref_short1 == number_short1);
		}

		//experiment with 'json/value/number/UnsignedChar.h'
		{
			//default constructor
			json::value::number::UnsignedChar number_unsginedchar1;
			//check value number_unsginedchar1 is 0 
			assert(number_unsginedchar1 == 0);

			//fill constructor
			json::value::number::UnsignedChar number_unsignedchar2(15U);
			//check value number_unsignedchar2 is 15
			assert(number_unsignedchar2 == 15U);

			//copy constructor
			json::value::number::UnsignedChar number_unsignedchar3(number_unsignedchar2);
			//check value number_unsignedchar3 and number_unsignedchar2 is same 
			assert(number_unsignedchar3 == number_unsignedchar2);

			//assignment with unsigned int
			number_unsginedchar1 = 12U;
			//check value number_unsginedchar1 is 12
			assert(number_unsginedchar1 == 12U);

			//assignment with json::value::number::UnsignedChar to unsigned char&
			unsigned char &ref_unsignedchar1 = number_unsginedchar1;

			//assignment with unsigned int
			ref_unsignedchar1 = 16U;
			//check value ref_unsignedchar1 is 16 
			assert(ref_unsignedchar1 == 16U);

			//check value ref_unsignedchar1 and number_unsginedchar1 is same 
			assert(ref_unsignedchar1 == number_unsginedchar1);
		}

		//experiment with 'json/value/number/UnsignedInt.h'
		{
			//default constructor
			json::value::number::UnsignedInt number_unsignedint1;
			//check value number_unsignedint1 is 0 
			assert(number_unsignedint1 == 0);

			//fill constructor
			json::value::number::UnsignedInt number_unsignedint2(15U);
			//check value number_unsignedint2 is 15
			assert(number_unsignedint2 == 15U);

			//copy constructor
			json::value::number::UnsignedInt number_unsignedint3(number_unsignedint2);
			//check value number_unsignedint3 and number_unsignedint2 is same 
			assert(number_unsignedint3 == number_unsignedint2);

			//assignment with unsigned int
			number_unsignedint1 = 12U;
			//check value number_unsignedint1 is 12
			assert(number_unsignedint1 == 12U);

			//assignment with json::value::number::UnsignedInt to unsigned int&
			unsigned int &ref_unsignedint1 = number_unsignedint1;

			//assignment with unsigned int
			ref_unsignedint1 = 16U;
			//check value ref_unsignedint1 is 16 
			assert(ref_unsignedint1 == 16U);

			//check value ref_unsignedint1 and number_unsignedint1 is same 
			assert(ref_unsignedint1 == number_unsignedint1);
		}

		//experiment with 'json/value/number/UnsignedLong.h'
		{
			//default constructor
			json::value::number::UnsignedLong number_unsignedlong1;
			//check value number_unsignedlong1 is 0 
			assert(number_unsignedlong1 == 0);

			//fill constructor
			json::value::number::UnsignedLong number_unsignedlong2(15UL);
			//check value number_unsignedlong2 is 15
			assert(number_unsignedlong2 == 15UL);

			//copy constructor
			json::value::number::UnsignedLong number_unsignedlong3(number_unsignedlong2);
			//check value number_unsignedlong3 and number_unsignedlong2 is same 
			assert(number_unsignedlong3 == number_unsignedlong2);

			//assignment with unsigned long
			number_unsignedlong1 = 12UL;
			//check value number_unsignedlong1 is 12
			assert(number_unsignedlong1 == 12UL);

			//assignment with json::value::number::UnsignedLong to unsigned long&
			unsigned long &ref_unsignedlong1 = number_unsignedlong1;

			//assignment with unsigned long
			ref_unsignedlong1 = 16UL;
			//check value ref_unsignedlong1 is 16 
			assert(ref_unsignedlong1 == 16UL);

			//check value ref_unsignedlong1 and number_unsignedlong1 is same 
			assert(ref_unsignedlong1 == number_unsignedlong1);
		}

		//experiment with 'json/value/number/UnsignedLongLong.h'
		{
			//default constructor
			json::value::number::UnsignedLongLong number_unsignedlonglong1;
			//check value number_unsignedlonglong1 is 0 
			assert(number_unsignedlonglong1 == 0);

			//fill constructor
			json::value::number::UnsignedLongLong number_unsignedlonglong2(15ULL);
			//check value number_unsignedlonglong2 is 15
			assert(number_unsignedlonglong2 == 15ULL);

			//copy constructor
			json::value::number::UnsignedLongLong number_unsignedlonglong3(number_unsignedlonglong2);
			//check value number_unsignedlonglong3 and number_unsignedlonglong2 is same 
			assert(number_unsignedlonglong3 == number_unsignedlonglong2);

			//assignment with unsigned long long
			number_unsignedlonglong1 = 12ULL;
			//check value number_unsignedlonglong1 is 12
			assert(number_unsignedlonglong1 == 12ULL);

			//assignment with json::value::number::UnsignedLongLong to unsigned long long&
			unsigned long long &ref_unsignedlonglong1 = number_unsignedlonglong1;

			//assignment with unsigned long long
			ref_unsignedlonglong1 = 16ULL;
			//check value ref_unsignedlonglong1 is 16 
			assert(ref_unsignedlonglong1 == 16ULL);

			//check value ref_unsignedlonglong1 and number_unsignedlonglong1 is same 
			assert(ref_unsignedlonglong1 == number_unsignedlonglong1);
		}

		//experiment with 'json/value/number/UnsignedShort.h'
		{
			//default constructor
			json::value::number::UnsignedShort number_unsignedshort1;
			//check value number_unsignedshort1 is 0 
			assert(number_unsignedshort1 == 0);

			//fill constructor
			json::value::number::UnsignedShort number_unsignedshort2(15U);
			//check value number_unsignedshort2 is 15
			assert(number_unsignedshort2 == 15U);

			//copy constructor
			json::value::number::UnsignedShort number_unsignedshort3(number_unsignedshort2);
			//check value number_unsignedshort3 and number_unsignedshort2 is same 
			assert(number_unsignedshort3 == number_unsignedshort2);

			//assignment with unsigned int
			number_unsignedshort1 = 12U;
			//check value number_short1 is 12
			assert(number_unsignedshort1 == 12U);

			//assignment with json::value::number::UnsignedShort to unsgined short&
			unsigned short &ref_usignedshort1 = number_unsignedshort1;

			//assignment with unsigned int
			ref_usignedshort1 = 16U;
			//check value ref_usignedshort1 is 16 
			assert(ref_usignedshort1 == 16U);

			//check value ref_usignedshort1 and number_unsignedshort1 is same 
			assert(ref_usignedshort1 == number_unsignedshort1);
		}
	}

	//experiment with 'json/value/Object.h'
	{
		//main variable with default constructor json::value::Object
		json::value::Object object1;

		//add json value array to value object with key is "array1"
		object1["array1"] = json::value::Array();

		//add json value false to value object with key is "false1"
		object1["false1"] = json::value::False();

		//add json value null to value object with key is "null1"
		object1["null1"] = json::value::Null();

		//add json value object to value object with key is "object2"
		object1["object2"] = json::value::Object();

		//add json value string to value object with key is "string1"
		object1["string1"] = json::value::String();

		//add json value true to value object with key is "true1"
		object1["true1"] = json::value::True();

		//add json value number char to value object with key is "number_char1"
		object1["number_char1"] = json::value::number::Char();

		//add json value number double to value object with key is "number_double1"
		object1["number_double1"] = json::value::number::Double();

		//add json value number float to value object with key is "number_float1"
		object1["number_float1"] = json::value::number::Float();

		//add json value number int to value object with key is "number_int1"
		object1["number_int1"] = json::value::number::Int();

		//add json value number long to value object with key is "number_long1"
		object1["number_long1"] = json::value::number::Long();

		//add json value number long double to value object with key is "number_longdouble1"
		object1["number_longdouble1"] = json::value::number::LongDouble();

		//add json value number long long to value object with key is "number_longlong1"
		object1["number_longlong1"] = json::value::number::LongLong();

		//add json value number short to value object with key is "number_short1"
		object1["number_short1"] = json::value::number::Short();

		//add json value number unsigned char to value object with key is "number_unsignedchar1"
		object1["number_unsignedchar1"] = json::value::number::UnsignedChar();

		//add json value number unsigned int to value object with key is "number_unsignedint1"
		object1["number_unsignedint1"] = json::value::number::UnsignedInt();

		//add json value number unsigned long to value object with key is "number_unsignedlong1"
		object1["number_unsignedlong1"] = json::value::number::UnsignedLong();

		//add json value number unsigned long long to value object with key is "number_unsignedlonglong1"
		object1["number_unsignedlonglong1"] = json::value::number::UnsignedLongLong();

		//add json value number unsigned short to value object with key is "number_unsignedshort1"
		object1["number_unsignedshort1"] = json::value::number::UnsignedShort();

		//get key "array1" of json value object and cast to json value array
		auto pointer_array1 = dynamic_cast<json::value::Array*>(object1["array1"].get());
		//check pointer_array1 is not null
		assert(pointer_array1);

		//get key "false1" of json value object and cast to json value false
		auto pointer_false1 = dynamic_cast<json::value::False*>(object1["false1"].get());
		//check pointer_false1 is not null
		assert(pointer_false1);

		//get key "null1" of json value object and cast to json value null
		auto pointer_null1 = dynamic_cast<json::value::Null*>(object1["null1"].get());
		//check pointer_null1 is not null
		assert(pointer_null1);

		//get key "object2" of json value object and cast to json value object
		auto pointer_object2 = dynamic_cast<json::value::Object*>(object1["object2"].get());
		//check pointer_object1 is not null
		assert(pointer_object2);

		//get key "string1" of json value object and cast to json value string
		auto pointer_string1 = dynamic_cast<json::value::String*>(object1["string1"].get());
		//check pointer_string1 is not null
		assert(pointer_string1);

		//get key "true1" of json value object and cast to json value true
		auto pointer_true1 = dynamic_cast<json::value::True*>(object1["true1"].get());
		//check pointer_true1 is not null
		assert(pointer_true1);

		//get key "number_char1" of json value object and cast to json value number char
		auto pointer_number_char1 = dynamic_cast<json::value::number::Char*>(object1["number_char1"].get());
		//check pointer_number_char1 is not null
		assert(pointer_number_char1);

		//get key "number_double1" of json value object and cast to json value number double
		auto pointer_number_double1 = dynamic_cast<json::value::number::Double*>(object1["number_double1"].get());
		//check pointer_number_double1 is not null
		assert(pointer_number_double1);

		//get key "number_float1" of json value object and cast to json value number float
		auto pointer_number_float1 = dynamic_cast<json::value::number::Float*>(object1["number_float1"].get());
		//check pointer_number_float1 is not null
		assert(pointer_number_float1);

		//get key "number_int1" of json value object and cast to json value number int
		auto pointer_number_int1 = dynamic_cast<json::value::number::Int*>(object1["number_int1"].get());
		//check pointer_number_int1 is not null
		assert(pointer_number_int1);

		//get key "number_long1" of json value object and cast to json value number long
		auto pointer_number_long1 = dynamic_cast<json::value::number::Long*>(object1["number_long1"].get());
		//check pointer_number_long1 is not null
		assert(pointer_number_long1);

		//get key "number_longdouble1" of json value object and cast to json value number long double
		auto pointer_number_longdouble1 = dynamic_cast<json::value::number::LongDouble*>(object1["number_longdouble1"].get());
		//check pointer_number_longdouble1 is not null
		assert(pointer_number_longdouble1);

		//get key "number_longlong1" of json value object and cast to json value number long long
		auto pointer_number_longlong1 = dynamic_cast<json::value::number::LongLong*>(object1["number_longlong1"].get());
		//check pointer_number_longlong1 is not null
		assert(pointer_number_longlong1);

		//get key "number_short1" of json value object and cast to json value number short
		auto pointer_number_short1 = dynamic_cast<json::value::number::Short*>(object1["number_short1"].get());
		//check pointer_number_short1 is not null
		assert(pointer_number_short1);

		//get key "number_unsignedchar1" of json value object and cast to json value number unsigned char
		auto pointer_number_unsignedchar1 = dynamic_cast<json::value::number::UnsignedChar*>(object1["number_unsignedchar1"].get());
		//check pointer_number_unsignedchar1 is not null
		assert(pointer_number_unsignedchar1);

		//get key "number_unsignedint1" of json value object and cast to json value number unsigned int
		auto pointer_number_unsignedint1 = dynamic_cast<json::value::number::UnsignedInt*>(object1["number_unsignedint1"].get());
		//check pointer_number_unsignedint1 is not null
		assert(pointer_number_unsignedint1);

		//get key "number_unsignedlong1" of json value object and cast to json value number unsigned long
		auto pointer_number_unsignedlong1 = dynamic_cast<json::value::number::UnsignedLong*>(object1["number_unsignedlong1"].get());
		//check pointer_number_unsignedlong1 is not null
		assert(pointer_number_unsignedlong1);

		//get key "number_unsignedlonglong1" of json value object and cast to json value number unsigned long long
		auto pointer_number_unsignedlonglong1 = dynamic_cast<json::value::number::UnsignedLongLong*>(object1["number_unsignedlonglong1"].get());
		//check pointer_number_unsignedlonglong1 is not null
		assert(pointer_number_unsignedlonglong1);

		//get key "number_unsignedshort1" of json value object and cast to json value number unsigned short
		auto pointer_number_unsignedshort1 = dynamic_cast<json::value::number::UnsignedShort*>(object1["number_unsignedshort1"].get());
		//check pointer_number_unsignedshort1 is not null
		assert(pointer_number_unsignedshort1);

		//copy object1
		json::value::Object object3(object1);
		//check object3 and object1 is same pointer
		assert(object3 == object1);
	}

	//experiment with 'json/value/String.h'
	{
		//default constructor json::value::String
		json::value::String string1;

		//fill constructor with const char *
		json::value::String string2(std::string("cstring"));
		//check compare string2 and "cstring" is same
		assert(strcmp(string2, "cstring") == 0);

		//fill constructor with std::string
		json::value::String string3("string"s);
		//check compare string3 and "string" is same
		assert(strcmp(string3, "string") == 0);

		//assignment with connst char*
		string1 = "cstring";

		//check compare string1 and "cstring" is same
		assert(strcmp(string1, "cstring") == 0);
	}

	//experiment with 'json/value/True.h'
	{
		//main variable with default constructor json::value::True
		json::value::True true1;

		//check true1 is true
		assert(true1 == true);

		//check true1 is "true" or json::Constant::TrueCString
		assert(strcmp(true1, json::Constant::TrueCString) == 0);
	}

	return 1;
}