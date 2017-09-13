#define _USING_TEST_

#include <cstdio>
#include <cstring>
#include <cassert>
#include <typeindex>

#include "test\simple\json\Value.h"

#include "test\simple\json\Memory.h"

#include "test\simple\json\pointer\Value.h"

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

#include "test\simple\json\helper\value\Tag.h"
#include "test\simple\json\helper\value\Declare.h"
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

//macro function AssertIfNotThrowException for check CALL_FUNCTION is throw exception
#define AssertIfNotThrowException(CALL_FUNCTION)\
do\
{\
	try\
	{\
		CALL_FUNCTION;\
		assert(false && #CALL_FUNCTION);\
	}\
	catch (exception e)\
	{\
	}\
} while(false)

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
		json::pointer::value::number::Char pointer_value_number_char1;
		json::pointer::value::number::Double pointer_value_number_double1;
		json::pointer::value::number::Float pointer_value_number_float1;
		json::pointer::value::number::Int pointer_value_number_int1;
		json::pointer::value::number::Long pointer_value_number_long1;
		json::pointer::value::number::LongDouble pointer_value_number_longdouble1;
		json::pointer::value::number::LongLong pointer_value_number_longlong1;
		json::pointer::value::number::Short pointer_value_number_short1;
		json::pointer::value::number::UnsignedChar pointer_value_number_unsignedchar1;
		json::pointer::value::number::UnsignedInt pointer_value_number_unsignedint1;
		json::pointer::value::number::UnsignedLong pointer_value_number_unsignedlong1;
		json::pointer::value::number::UnsignedLongLong pointer_value_number_unsignedlonglong1;
		json::pointer::value::number::UnsignedShort pointer_value_number_unsignedshort1;
	}

	//experiment with 'json/Value.h' 
	{
		//declaration json::value& from assignment json::value::Array();
		json::Value& value_array1 = json::value::Array();
		//cast from json::value to json::value::Array;
		auto pointer_value_array1 = dynamic_cast<json::value::Array*>(&value_array1);
		//check pointer_value_array1 is not null
		assert(pointer_value_array1);

		//declaration json::value& from assignment json::value::False();
		json::Value& value_false1 = json::value::False();
		//cast from json::value to json::value::False;
		auto pointer_value_false1 = dynamic_cast<json::value::False*>(&value_false1);
		//check pointer_value_false1 is not null
		assert(pointer_value_false1);

		//declaration json::value& from assignment json::value::Null();
		json::Value& value_null1 = json::value::Null();
		//cast from json::value to json::value::Null;
		auto pointer_value_null1 = dynamic_cast<json::value::Null*>(&value_null1);
		//check pointer_value_null1 is not null
		assert(pointer_value_null1);

		//declaration json::value& from assignment json::value::Object();
		json::Value& value_object1 = json::value::Object();
		//cast from json::value to json::value::Object;
		auto pointer_value_object1 = dynamic_cast<json::value::Object*>(&value_object1);
		//check pointer_value_object1 is not null
		assert(pointer_value_object1);

		//declaration json::value& from assignment json::value::String();
		json::Value& value_string1 = json::value::String();
		//cast from json::value to json::value::String;
		auto pointer_value_string1 = dynamic_cast<json::value::String*>(&value_string1);
		//check pointer_value_string1 is not null
		assert(pointer_value_string1);

		//declaration json::value& from assignment json::value::True();
		json::Value& value_true1 = json::value::True();
		//cast from json::value to json::value::True;
		auto pointer_value_true1 = dynamic_cast<json::value::True*>(&value_true1);
		//check pointer_value_true1 is not null
		assert(pointer_value_true1);

		//declaration json::value& from assignment json::value::number::Char();
		json::Value& value_number_char1 = json::value::number::Char();
		//cast from json::value to json::value::number::Char;
		auto pointer_value_number_char1 = dynamic_cast<json::value::number::Char*>(&value_number_char1);
		//check pointer_value_number_char1 is not null
		assert(pointer_value_number_char1);

		//declaration json::value& from assignment json::value::number::Double();
		json::Value& value_number_double1 = json::value::number::Double();
		//cast from json::value to json::value::number::Double;
		auto pointer_value_number_double1 = dynamic_cast<json::value::number::Double*>(&value_number_double1);
		//check pointer_value_number_double1 is not null
		assert(pointer_value_number_double1);

		//declaration json::value& from assignment json::value::number::Float();
		json::Value& value_number_float1 = json::value::number::Float();
		//cast from json::value to json::value::number::Float;
		auto pointer_value_number_float1 = dynamic_cast<json::value::number::Float*>(&value_number_float1);
		//check pointer_value_number_float1 is not null
		assert(pointer_value_number_float1);

		//declaration json::value& from assignment json::value::number::Int();
		json::Value& value_number_int1 = json::value::number::Int();
		//cast from json::value to json::value::number::Int;
		auto pointer_value_number_int1 = dynamic_cast<json::value::number::Int*>(&value_number_int1);
		//check pointer_value_number_int1 is not null
		assert(pointer_value_number_int1);

		//declaration json::value& from assignment json::value::number::Long();
		json::Value& value_number_long1 = json::value::number::Long();
		//cast from json::value to json::value::number::Long;
		auto pointer_value_number_long1 = dynamic_cast<json::value::number::Long*>(&value_number_long1);
		//check pointer_value_number_long1 is not null
		assert(pointer_value_number_long1);

		//declaration json::value& from assignment json::value::number::LongDouble();
		json::Value& value_number_longdouble1 = json::value::number::LongDouble();
		//cast from json::value to json::value::number::LongDouble;
		auto pointer_value_number_longdouble1 = dynamic_cast<json::value::number::LongDouble*>(&value_number_longdouble1);
		//check pointer_value_number_longdouble1 is not null
		assert(pointer_value_number_longdouble1);

		//declaration json::value& from assignment json::value::number::LongLong();
		json::Value& value_number_longlong1 = json::value::number::LongLong();
		//cast from json::value to json::value::number::LongLong;
		auto pointer_value_number_longlong1 = dynamic_cast<json::value::number::LongLong*>(&value_number_longlong1);
		//check pointer_value_number_longlong1 is not null
		assert(pointer_value_number_longlong1);

		//declaration json::value& from assignment json::value::number::Short();
		json::Value& value_number_short1 = json::value::number::Short();
		//cast from json::value to json::value::number::Short;
		auto pointer_value_number_short1 = dynamic_cast<json::value::number::Short*>(&value_number_short1);
		//check pointer_value_number_short1 is not null
		assert(pointer_value_number_short1);

		//declaration json::value& from assignment json::value::number::UnsignedChar();
		json::Value& value_number_unsignedchar1 = json::value::number::UnsignedChar();
		//cast from json::value to json::value::number::UnsignedChar;
		auto pointer_value_number_unsignedchar1 = dynamic_cast<json::value::number::UnsignedChar*>(&value_number_unsignedchar1);
		//check pointer_value_number_unsignedchar1 is not null
		assert(pointer_value_number_unsignedchar1);

		//declaration json::value& from assignment json::value::number::UnsignedInt();
		json::Value& value_number_unsignedint1 = json::value::number::UnsignedInt();
		//cast from json::value to json::value::number::UnsignedInt;
		auto pointer_value_number_unsignedint1 = dynamic_cast<json::value::number::UnsignedInt*>(&value_number_unsignedint1);
		//check pointer_value_number_unsignedint1 is not null
		assert(pointer_value_number_unsignedint1);

		//declaration json::value& from assignment json::value::number::UnsignedLong();
		json::Value& value_number_unsignedlong1 = json::value::number::UnsignedLong();
		//cast from json::value to json::value::number::UnsignedLong;
		auto pointer_value_number_unsignedlong1 = dynamic_cast<json::value::number::UnsignedLong*>(&value_number_unsignedlong1);
		//check pointer_value_number_unsignedlong1 is not null
		assert(pointer_value_number_unsignedlong1);

		//declaration json::value& from assignment json::value::number::UnsignedLongLong();
		json::Value& value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
		//cast from json::value to json::value::number::UnsignedLongLong;
		auto pointer_value_number_unsignedlonglong1 = dynamic_cast<json::value::number::UnsignedLongLong*>(&value_number_unsignedlonglong1);
		//check pointer_value_number_unsignedlonglong1 is not null
		assert(pointer_value_number_unsignedlonglong1);

		//declaration json::value& from assignment json::value::number::UnsignedShort();
		json::Value& value_number_unsignedshort1 = json::value::number::UnsignedShort();
		//cast from json::value to json::value::number::UnsignedShort;
		auto pointer_value_number_unsignedshort1 = dynamic_cast<json::value::number::UnsignedShort*>(&value_number_unsignedshort1);
		//check pointer_value_number_unsignedshort1 is not null
		assert(pointer_value_number_unsignedshort1);
	}

	//experiment with 'json/Memory.h'
	{
		//declare json::Memory::SharedPointerType<int> from fill constructor int with 123
		json::Memory::SharedPointerType<int> sharedpointer_int(new int(123));
		//declare json::Memory::SharedPointerType<const int> from json::Memory::SharedPointerType<int> 
		json::Memory::SharedPointerType<const int> sharedpointer_const_int(sharedpointer_int);
		//check value of pointer sharedpointer_int is 123
		assert(*sharedpointer_int == 123);
		//check value between pointer sharedpointer_const_int and pointer sharedpointer_int is same
		assert(*sharedpointer_const_int == *sharedpointer_int);

		//check type json::Memory::SharedPointerType<int> is base of json::Memory::SharedPointerType<?>
		assert(json::Memory::IsBaseOfSharedPointer<json::Memory::SharedPointerType<int>>());

		//definition struct Base with {
		// variable member 'Value' with int for type,
		// default and copy constructor with default by compiler,
		// abstract destructor with default by compiler}
		struct Base
		{
			int Value;
			Base() = default;
			Base(const Base&) = default;
			virtual ~Base() = default;
		};

		//definition struct DerivedA with {
		// base class 'Base' and public inheritance,
		// default and copy constructor with default by compiler}
		struct DerivedA : public Base
		{
			DerivedA() = default;
			DerivedA(const DerivedA&) = default;
		};

		//definition struct DerivedB with {
		// base class 'Base' and public inheritance,
		// default and copy constructor with default by compiler}
		struct DerivedB : public Base
		{
			DerivedB() = default;
			DerivedB(const DerivedB&) = default;
		};

		//declare json::Memory::SharedPointerType<const Base> from default constructor 
		json::Memory::SharedPointerType<const Base> pointer_const_base1(new DerivedA);
		//declare json::Memory::SharedPointerType<Base> with ConstPointerCast from json::Memory::ConstPointerCast<const Base, Base> 
		// and json::Memory::SharedPointerType<const Base>
		json::Memory::SharedPointerType<Base> pointer_base1 = json::Memory::ConstPointerCast<const Base, Base>(pointer_const_base1);
		//assignment value variable member 'Value' of pointer pointer_base1 with 4
		pointer_base1->Value = 4;
		//check value variable member 'Value' between pointer pointer_const_base1 and pointer pointer_base1 is same
		assert(pointer_const_base1->Value == pointer_base1->Value);

		//declare json::Memory::SharedPointerType<Base> from default constructor DerivedA
		json::Memory::SharedPointerType<Base> pointer_base2(new DerivedA);
		//declare json::Memory::SharedPointerType<DerivedA> with StaticPointerCast from json::Memory::StaticPointerCast<Base, DerivedA> 
		// and json::Memory::SharedPointerType<Base>
		json::Memory::SharedPointerType<DerivedA> pointer_derivedA1 = json::Memory::StaticPointerCast<Base, DerivedA>(pointer_base2);
		//assignment value variable member 'Value' of pointer pointer_derivedA1 with 8
		pointer_derivedA1->Value = 8;
		//check value variable member 'Value' between pointer pointer_base2 and pointer pointer_derivedA1 is same
		assert(pointer_base2->Value == pointer_derivedA1->Value);

		//declare json::Memory::SharedPointerType<Base> from default constructor DerivedA
		json::Memory::SharedPointerType<Base> pointer_base3(new DerivedA);
		//declare json::Memory::SharedPointerType<DerivedA> with DynamicPointerCast from json::Memory::DynamicPointerCast<Base, DerivedA> 
		// and pointer_base3
		json::Memory::SharedPointerType<DerivedA> pointer_derivedA2 = json::Memory::DynamicPointerCast<Base, DerivedA>(pointer_base3);
		//declare json::Memory::SharedPointerType<DerivedB> with DynamicPointerCast from json::Memory::DynamicPointerCast<Base, DerivedB>
		// and pointer_base3
		json::Memory::SharedPointerType<DerivedB> pointer_derivedB2 = json::Memory::DynamicPointerCast<Base, DerivedB>(pointer_base3);
		//assignment value variable member 'Value' of pointer pointer_derivedA2 with 16
		pointer_derivedA2->Value = 16;
		//check value variable member 'Value' between pointer pointer_derivedA2 and pointer pointer_base3 is same
		assert(pointer_derivedA2->Value == pointer_base3->Value);
		//ckeck pointer pointer_derivedB2 is null
		assert(pointer_derivedB2 == 0);
	}


	//experiment with 'json/pointer/Value.h'
	{
		//declare json::pointer::Value from default constructor json::value::Array
		json::pointer::Value pointer_value_array1 = json::value::Array();
		//declare json::pointer::value::Array with DynamicPointerCast from json::pointer::Value
		json::pointer::value::Array cast_pointer_value_array1 = 
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::Array>(pointer_value_array1);
		//check cast_pointer_value_array1 is not null
		assert(cast_pointer_value_array1);

		//declare json::pointer::Value from default constructor json::value::False
		json::pointer::Value pointer_value_false1 = json::value::False();
		//declare json::pointer::value::False with DynamicPointerCast from json::pointer::Value
		json::pointer::value::False cast_pointer_value_false1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::False>(pointer_value_false1);
		//check cast_pointer_value_false1 is not null
		assert(cast_pointer_value_false1);

		//declare json::pointer::Value from default constructor json::value::Null
		json::pointer::Value pointer_value_null1 = json::value::Null();
		//declare json::pointer::value::Null with DynamicPointerCast from json::pointer::Value
		json::pointer::value::Null cast_pointer_value_null1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::Null>(pointer_value_null1);
		//check cast_pointer_value_null1 is not null
		assert(cast_pointer_value_null1);

		//declare json::pointer::Value from default constructor json::value::Object
		json::pointer::Value pointer_value_object1 = json::value::Object();
		//declare json::pointer::value::Object with DynamicPointerCast from json::pointer::Value
		json::pointer::value::Object cast_pointer_value_object1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::Object>(pointer_value_object1);
		//check cast_pointer_value_object1 is not null
		assert(cast_pointer_value_object1);

		//declare json::pointer::Value from default constructor json::value::String
		json::pointer::Value pointer_value_string1 = json::value::String();
		//declare json::pointer::value::String with DynamicPointerCast from json::pointer::Value
		json::pointer::value::String cast_pointer_value_string1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::String>(pointer_value_string1);
		//check cast_pointer_value_string1 is not null
		assert(cast_pointer_value_string1);

		//declare json::pointer::Value from default constructor json::value::True
		json::pointer::Value pointer_value_true1 = json::value::True();
		//declare json::pointer::value::True with DynamicPointerCast from json::pointer::Value
		json::pointer::value::True cast_pointer_value_true1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::True>(pointer_value_true1);
		//check cast_pointer_value_true1 is not null
		assert(cast_pointer_value_true1);


		//declare json::pointer::Value from default constructor json::value::number::Char
		json::pointer::Value pointer_value_number_char1 = json::value::number::Char();
		//declare json::pointer::value::number:Char: with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Char cast_pointer_value_number_char1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Char>(pointer_value_number_char1);
		//check cast_pointer_value_number_char1 is not null
		assert(cast_pointer_value_number_char1);

		//declare json::pointer::Value from default constructor json::value::number::Double
		json::pointer::Value pointer_value_number_double1 = json::value::number::Double();
		//declare json::pointer::value::number::Double with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Double cast_pointer_value_number_double1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Double>(pointer_value_number_double1);
		//check cast_pointer_value_number_double1 is not null
		assert(cast_pointer_value_number_double1);

		//declare json::pointer::Value from default constructor json::value::number::Float
		json::pointer::Value pointer_value_number_float1 = json::value::number::Float();
		//declare json::pointer::value::number::Float with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Float cast_pointer_value_number_float1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Float>(pointer_value_number_float1);
		//check cast_pointer_value_number_float1 is not null
		assert(cast_pointer_value_number_float1);

		//declare json::pointer::Value from default constructor json::value::number::Int
		json::pointer::Value pointer_value_number_int1 = json::value::number::Int();
		//declare json::pointer::value::number::Int with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Int cast_pointer_value_number_int1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Int>(pointer_value_number_int1);
		//check cast_pointer_value_number_int1 is not null
		assert(cast_pointer_value_number_int1);

		//declare json::pointer::Value from default constructor json::value::number::Long
		json::pointer::Value pointer_value_number_long1 = json::value::number::Long();
		//declare json::pointer::value::number::Long with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Long cast_pointer_value_number_long1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Long>(pointer_value_number_long1);
		//check cast_pointer_value_number_long1 is not null
		assert(cast_pointer_value_number_long1);

		//declare json::pointer::Value from default constructor json::value::number::LongDouble
		json::pointer::Value pointer_value_number_longdouble1 = json::value::number::LongDouble();
		//declare json::pointer::value::number::LongDouble with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::LongDouble cast_pointer_value_number_longdouble1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::LongDouble>(pointer_value_number_longdouble1);
		//check cast_pointer_value_number_longdouble1 is not null
		assert(cast_pointer_value_number_longdouble1);

		//declare json::pointer::Value from default constructor json::value::number::LongLong
		json::pointer::Value pointer_value_number_longlong1 = json::value::number::LongLong();
		//declare json::pointer::value::number::LongLong with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::LongLong cast_pointer_value_number_longlong1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::LongLong>(pointer_value_number_longlong1);
		//check cast_pointer_value_number_longlong1 is not null
		assert(cast_pointer_value_number_longlong1);

		//declare json::pointer::Value from default constructor json::value::number::Short
		json::pointer::Value pointer_value_number_short1 = json::value::number::Short();
		//declare json::pointer::value::number::Short with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::Short cast_pointer_value_number_short1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::Short>(pointer_value_number_short1);
		//check cast_pointer_value_number_short1 is not null
		assert(cast_pointer_value_number_short1);

		//declare json::pointer::Value from default constructor json::value::number::UnsignedChar
		json::pointer::Value pointer_value_number_unsignedchar1 = json::value::number::UnsignedChar();
		//declare json::pointer::value::number::UnsignedChar with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::UnsignedChar cast_pointer_value_number_unsignedchar1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::UnsignedChar>(pointer_value_number_unsignedchar1);
		//check cast_pointer_value_number_unsignedchar1 is not null
		assert(cast_pointer_value_number_unsignedchar1);

		//declare json::pointer::Value from default constructor json::value::number::UnsignedInt
		json::pointer::Value pointer_value_number_unsignedint1 = json::value::number::UnsignedInt();
		//declare json::pointer::value::number::UnsignedInt with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::UnsignedInt cast_pointer_value_number_unsignedint1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::UnsignedInt>(pointer_value_number_unsignedint1);
		//check cast_pointer_value_number_unsignedint1 is not null
		assert(cast_pointer_value_number_unsignedint1);

		//declare json::pointer::Value from default constructor json::value::number::UnsignedLong
		json::pointer::Value pointer_value_number_unsignedlong1 = json::value::number::UnsignedLong();
		//declare json::pointer::value::number::UnsignedLong with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::UnsignedLong cast_pointer_value_number_unsignedlong1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::UnsignedLong>(pointer_value_number_unsignedlong1);
		//check cast_pointer_value_number_unsignedlong1 is not null
		assert(cast_pointer_value_number_unsignedlong1);

		//declare json::pointer::Value from default constructor json::value::number::UnsignedLongLong
		json::pointer::Value pointer_value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
		//declare json::pointer::value::number::UnsignedLongLong with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::UnsignedLongLong cast_pointer_value_number_unsignedlonglong1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::UnsignedLongLong>(pointer_value_number_unsignedlonglong1);
		//check cast_pointer_value_number_unsignedlonglong1 is not null
		assert(cast_pointer_value_number_unsignedlonglong1);

		//declare json::pointer::Value from default constructor json::value::number::UnsignedShort
		json::pointer::Value pointer_value_number_unsignedshort1 = json::value::number::UnsignedShort();
		//declare json::pointer::value::number::UnsignedShort with DynamicPointerCast from json::pointer::Value
		json::pointer::value::number::UnsignedShort cast_pointer_value_number_unsignedshort1 =
			json::Memory::DynamicPointerCast<json::pointer::Value, json::pointer::value::number::UnsignedShort>(pointer_value_number_unsignedshort1);
		//check cast_pointer_value_number_unsignedshort1 is not null
		assert(cast_pointer_value_number_unsignedshort1);

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

	//experiment with json\helper\value\Tag.h
	{
		//check json::helper::value::Tag::undefined is not value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::undefined) == false);
		//check json::helper::value::Tag::value_array is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_array) == true);
		//check json::helper::value::Tag::value_false is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_false) == true);
		//check json::helper::value::Tag::value_null is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_null) == true);
		//check json::helper::value::Tag::value_number is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number) == true);
		//check json::helper::value::Tag::value_object is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_object) == true);
		//check json::helper::value::Tag::value_string is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_string) == true);
		//check json::helper::value::Tag::value_true is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_true) == true);
		//check json::helper::value::Tag::value_number_char is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_char) == true);
		//check json::helper::value::Tag::value_number_double is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_double) == true);
		//check json::helper::value::Tag::value_number_float is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_float) == true);
		//check json::helper::value::Tag::value_number_int is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_int) == true);
		//check json::helper::value::Tag::value_number_long is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_long) == true);
		//check json::helper::value::Tag::value_number_longdouble is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_longdouble) == true);
		//check json::helper::value::Tag::value_number_longlong is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_longlong) == true);
		//check json::helper::value::Tag::value_number_short is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_short) == true);
		//check json::helper::value::Tag::value_number_unsignedchar is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_unsignedchar) == true);
		//check json::helper::value::Tag::value_number_unsignedint is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_unsignedint) == true);
		//check json::helper::value::Tag::value_number_unsignedlong is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_unsignedlong) == true);
		//check json::helper::value::Tag::value_number_unsignedlonglong is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_unsignedlonglong) == true);
		//check json::helper::value::Tag::value_number_unsignedshort is value tag
		assert(json::helper::value::IsTag(json::helper::value::Tag::value_number_unsignedshort) == true);

		//check json::helper::value::Tag::undefined is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::undefined) == false);
		//check json::helper::value::Tag::value_array is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_array) == false);
		//check json::helper::value::Tag::value_false is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_false) == false);
		//check json::helper::value::Tag::value_null is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_null) == false);
		//check json::helper::value::Tag::value_number is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number) == true);
		//check json::helper::value::Tag::value_object is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_object) == false);
		//check json::helper::value::Tag::value_string is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_string) == false);
		//check json::helper::value::Tag::value_true is not value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_true) == false);
		//check json::helper::value::Tag::value_number_char is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_char) == true);
		//check json::helper::value::Tag::value_number_double is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_double) == true);
		//check json::helper::value::Tag::value_number_float is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_float) == true);
		//check json::helper::value::Tag::value_number_int is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_int) == true);
		//check json::helper::value::Tag::value_number_long is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_long) == true);
		//check json::helper::value::Tag::value_number_longdouble is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_longdouble) == true);
		//check json::helper::value::Tag::value_number_longlong is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_longlong) == true);
		//check json::helper::value::Tag::value_number_short is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_short) == true);
		//check json::helper::value::Tag::value_number_unsignedchar is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_unsignedchar) == true);
		//check json::helper::value::Tag::value_number_unsignedint is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_unsignedint) == true);
		//check json::helper::value::Tag::value_number_unsignedlong is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_unsignedlong) == true);
		//check json::helper::value::Tag::value_number_unsignedlonglong is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_unsignedlonglong) == true);
		//check json::helper::value::Tag::value_number_unsignedshort is value number tag
		assert(json::helper::value::IsTagNumber(json::helper::value::Tag::value_number_unsignedshort) == true);
	}

	//experiment with json\helper\value\Declare.h
	{
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_array>::Type 
		// and json::value::Array is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_array>::Type).hash_code() ==
			typeid(json::value::Array).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_false>::Type 
		// and json::value::False is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_false>::Type).hash_code() ==
			typeid(json::value::False).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_null>::Type 
		// and json::value::Null is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_null>::Type).hash_code() ==
			typeid(json::value::Null).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number>::Type 
		// and json::value::Number is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number>::Type).hash_code() ==
			typeid(json::value::Number).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_object>::Type 
		// and json::value::Object is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_object>::Type).hash_code() ==
			typeid(json::value::Object).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_string>::Type 
		// and json::value::String is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_string>::Type).hash_code() ==
			typeid(json::value::String).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_true>::Type 
		// and json::value::True is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_true>::Type).hash_code() ==
			typeid(json::value::True).hash_code());

		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_char>::Type 
		// and json::value::number::Char is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_char>::Type).hash_code() ==
			typeid(json::value::number::Char).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_double>::Type 
		// and json::value::number::Double is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_double>::Type).hash_code() ==
			typeid(json::value::number::Double).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_float>::Type 
		// and json::value::number::Float is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_float>::Type).hash_code() ==
			typeid(json::value::number::Float).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_int>::Type 
		// and json::value::number::Int is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_int>::Type).hash_code() ==
			typeid(json::value::number::Int).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_long>::Type 
		// and json::value::number::Long is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_long>::Type).hash_code() ==
			typeid(json::value::number::Long).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_longdouble>::Type 
		// and json::value::number::LongDouble is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_longdouble>::Type).hash_code() ==
			typeid(json::value::number::LongDouble).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_longlong>::Type 
		// and json::value::number::LongLong is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_longlong>::Type).hash_code() ==
			typeid(json::value::number::LongLong).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_short>::Type 
		// and json::value::number::Short is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_short>::Type).hash_code() ==
			typeid(json::value::number::Short).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedchar>::Type 
		// and json::value::number::UnsignedChar is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedchar>::Type).hash_code() ==
			typeid(json::value::number::UnsignedChar).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedint>::Type 
		// and json::value::number::UnsignedInt is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedint>::Type).hash_code() ==
			typeid(json::value::number::UnsignedInt).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedlong>::Type 
		// and json::value::number::UnsignedLong is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedlong>::Type).hash_code() ==
			typeid(json::value::number::UnsignedLong).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedlonglong>::Type 
		// and json::value::number::UnsignedLongLong is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedlonglong>::Type).hash_code() ==
			typeid(json::value::number::UnsignedLongLong).hash_code());
		//check type between json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedshort>::Type 
		// and json::value::number::UnsignedShort is same
		assert(typeid(json::helper::value::Declare<json::helper::value::Tag::value_number_unsignedshort>::Type).hash_code() ==
			typeid(json::value::number::UnsignedShort).hash_code());
	}

	//experiment with json\helper\Cast.h
	{
		//experiment with json::value::Array
		{
			//declaration json::value& from assignment value initialization of json::value::Array();
			json::Value& value_array1 = json::value::Array();

			//declaration json::value::Array& with cast from json::helper::Cast::To<json::value::Array> and json::Value&
			json::value::Array& cast_value_array1 = json::helper::Cast::To<json::value::Array>(value_array1);
			//declaration json::value::Array& with cast from json::helper::Cast::ToArray and json::Value&
			json::value::Array& cast_value_array2 = json::helper::Cast::ToArray(value_array1);
			//check address of between value_array1 and cast_value_array1 is same 
			assert(&value_array1 == &cast_value_array1);
			//check address of between cast_value_array1 and cast_value_array2 is same 
			assert(&cast_value_array1 == &cast_value_array2);
			
			//check try cast with json::helper::Cast::ToBool and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_array1));
			//check try cast with json::helper::Cast::ToObject and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_array1));
			//check try cast with json::helper::Cast::ToString and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_array1));
			//check try cast with json::helper::Cast::ToNumberChar and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_array1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_array1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_array1));
			//check try cast with json::helper::Cast::ToNumberInt and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_array1));
			//check try cast with json::helper::Cast::ToNumberLong and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_array1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_array1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_array1));
			//check try cast with json::helper::Cast::ToNumberShort and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_array1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_array1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_array1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_array1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_array1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_array1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_array1));
		}

		//experiment with json::value::False
		{
			//declaration json::value& from assignment value initialization of json::value::False();
			json::Value& value_false1 = json::value::False();

			//declaration json::value::False& with cast from json::helper::Cast::To<json::value::False> and json::Value&
			json::value::False& cast_value_false1 = json::helper::Cast::To<json::value::False>(value_false1);
			//check address of between value_false1 and cast_value_false1 is same 
			assert(&value_false1 == &cast_value_false1);
			//check return value of function json::helper::Cast::ToBool and argument with value_false1 is false
			assert(json::helper::Cast::ToBool(value_false1) == false);

			//check try cast with json::helper::Cast::ToArray and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_false1));
			//check try cast with json::helper::Cast::ToObject and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_false1));
			//check try cast with json::helper::Cast::ToString and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_false1));
			//check try cast with json::helper::Cast::ToNumberChar and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_false1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_false1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_false1));
			//check try cast with json::helper::Cast::ToNumberInt and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_false1));
			//check try cast with json::helper::Cast::ToNumberLong and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_false1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_false1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_false1));
			//check try cast with json::helper::Cast::ToNumberShort and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_false1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_false1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_false1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_false1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_false1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_false1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_false1));
		}
		
		//experiment with json::value::Null
		{
			//declaration json::value& from assignment value initialization of json::value::Null();
			json::Value& value_null1 = json::value::Null();

			//declaration json::value::Null& with cast from json::helper::Cast::To<json::value::Null> and json::Value&
			json::value::Null& cast_value_null1 = json::helper::Cast::To<json::value::Null>(value_null1);
			//check address of between value_null1 and cast_value_null1 is same 
			assert(&value_null1 == &cast_value_null1);

			//check try cast with json::helper::Cast::ToBool and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_null1));
			//check try cast with json::helper::Cast::ToArray and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_null1));
			//check try cast with json::helper::Cast::ToObject and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_null1));
			//check try cast with json::helper::Cast::ToString and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_null1));
			//check try cast with json::helper::Cast::ToNumberChar and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_null1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_null1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_null1));
			//check try cast with json::helper::Cast::ToNumberInt and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_null1));
			//check try cast with json::helper::Cast::ToNumberLong and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_null1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_null1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_null1));
			//check try cast with json::helper::Cast::ToNumberShort and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_null1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_null1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_null1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_null1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_null1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_null1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_null1));
		}

		//experiment with json::value::Object
		{
			//declaration json::value& from assignment value initialization of json::value::Object();
			json::Value& value_object1 = json::value::Object();

			//declaration json::value::Object& with cast from json::helper::Cast::To<json::value::Object> and json::Value&
			json::value::Object& cast_value_object1 = json::helper::Cast::To<json::value::Object>(value_object1);
			//declaration json::value::Object& with cast from json::helper::Cast::ToObject and json::Value&
			json::value::Object& cast_value_object2 = json::helper::Cast::ToObject(value_object1);
			//check address of between value_object1 and cast_value_object1 is same 
			assert(&value_object1 == &cast_value_object1);
			//check address of between cast_value_object1 and cast_value_object2 is same 
			assert(&cast_value_object1 == &cast_value_object2);

			//check try cast with json::helper::Cast::ToBool and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_object1));
			//check try cast with json::helper::Cast::ToArray and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_object1));
			//check try cast with json::helper::Cast::ToString and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_object1));
			//check try cast with json::helper::Cast::ToNumberChar and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_object1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_object1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_object1));
			//check try cast with json::helper::Cast::ToNumberInt and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_object1));
			//check try cast with json::helper::Cast::ToNumberLong and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_object1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_object1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_object1));
			//check try cast with json::helper::Cast::ToNumberShort and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_object1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_object1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_object1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_object1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_object1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_object1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_object1));
		}

		//expriment with json::value::String
		{
			//declaration json::value& from assignment value initialization of json::value::String();
			json::Value& value_string1 = json::value::String();

			//declaration json::value::String& with cast from json::helper::Cast::To<json::value::String> and json::Value&
			json::value::String& cast_value_string1 = json::helper::Cast::To<json::value::String>(value_string1);
			//declaration json::value::String& with cast from json::helper::Cast::ToString and json::Value&
			json::value::String& cast_value_string2 = json::helper::Cast::ToString(value_string1);
			//check address of between value_string1 and cast_value_string1 is same 
			assert(&value_string1 == &cast_value_string1);
			//check address of between cast_value_string1 and cast_value_string2 is same 
			assert(&cast_value_string1 == &cast_value_string2);

			//check try cast with json::helper::Cast::ToBool and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_string1));
			//check try cast with json::helper::Cast::ToArray and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_string1));
			//check try cast with json::helper::Cast::ToObject and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_string1));
			//check try cast with json::helper::Cast::ToNumberChar and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_string1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_string1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_string1));
			//check try cast with json::helper::Cast::ToNumberInt and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_string1));
			//check try cast with json::helper::Cast::ToNumberLong and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_string1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_string1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_string1));
			//check try cast with json::helper::Cast::ToNumberShort and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_string1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_string1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_string1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_string1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_string1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_string1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_string1));
		}

		//experiment with json::value::True
		{
			//declaration json::value& from assignment value initialization of json::value::True();
			json::Value& value_true1 = json::value::True();

			//declaration json::value::True& with cast from json::helper::Cast::To<json::value::True> and json::Value&
			json::value::True& cast_value_true1 = json::helper::Cast::To<json::value::True>(value_true1);
			//check address of between value_true1 and cast_value_true1 is same 
			assert(&value_true1 == &cast_value_true1);
			//check return value of function json::helper::Cast::ToBool and argument with value_true1 is true
			assert(json::helper::Cast::ToBool(value_true1) == true);

			//check try cast with json::helper::Cast::ToArray and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_true1));
			//check try cast with json::helper::Cast::ToObject and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_true1));
			//check try cast with json::helper::Cast::ToString and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_true1));
			//check try cast with json::helper::Cast::ToNumberChar and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_true1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_true1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_true1));
			//check try cast with json::helper::Cast::ToNumberInt and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_true1));
			//check try cast with json::helper::Cast::ToNumberLong and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_true1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_true1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_true1));
			//check try cast with json::helper::Cast::ToNumberShort and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_true1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_true1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_true1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_true1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_true1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_true1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_true1));
		}

		//experiment with json::value::number::Char
		{
			//declaration json::value& from assignment value initialization of json::value::number::Char();
			json::Value& value_number_char1 = json::value::number::Char();

			//declaration json::value::number::Char& with cast from json::helper::Cast::To<json::value::number::Char> and json::Value&
			json::value::number::Char& cast_value_number_char1 = json::helper::Cast::To<json::value::number::Char>(value_number_char1);
			//declaration json::value::number::Char& with cast from json::helper::Cast::ToNumberChar and json::Value&
			json::value::number::Char& cast_value_number_char2 = json::helper::Cast::ToNumberChar(value_number_char1);
			//check address of between value_number_char1 and cast_value_number_char1 is same 
			assert(&value_number_char1 == &cast_value_number_char1);
			//check address of between cast_value_number_char1 and cast_value_number_char2 is same 
			assert(&cast_value_number_char1 == &cast_value_number_char2);

			//check try cast with json::helper::Cast::ToBool and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_char1));
			//check try cast with json::helper::Cast::ToArray and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_char1));
			//check try cast with json::helper::Cast::ToObject and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_char1));
			//check try cast with json::helper::Cast::ToString and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_char1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_char1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_char1));
		}

		//experiment with json::value::number::Double
		{
			//declaration json::value& from assignment value initialization of json::value::number::Double();
			json::Value& value_number_double1 = json::value::number::Double();

			//declaration json::value::number::Double& with cast from json::helper::Cast::To<json::value::number::Double> and json::Value&
			json::value::number::Double& cast_value_number_double1 = json::helper::Cast::To<json::value::number::Double>(value_number_double1);
			//declaration json::value::number::Double& with cast from json::helper::Cast::ToNumberDouble and json::Value&
			json::value::number::Double& cast_value_number_double2 = json::helper::Cast::ToNumberDouble(value_number_double1);
			//check address of between value_number_double1 and cast_value_number_double1 is same 
			assert(&value_number_double1 == &cast_value_number_double1);
			//check address of between cast_value_number_double1 and cast_value_number_double2 is same 
			assert(&cast_value_number_double1 == &cast_value_number_double2);

			//check try cast with json::helper::Cast::ToBool and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_double1));
			//check try cast with json::helper::Cast::ToArray and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_double1));
			//check try cast with json::helper::Cast::ToObject and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_double1));
			//check try cast with json::helper::Cast::ToString and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_double1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_double1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_double1));
		}
		
		//experiment with json::value::number::Float
		{
			//declaration json::value& from assignment value initialization of json::value::number::Float();
			json::Value& value_number_float1 = json::value::number::Float();

			//declaration json::value::number::Float& with cast from json::helper::Cast::To<json::value::number::Float> and json::Value&
			json::value::number::Float& cast_value_number_float1 = json::helper::Cast::To<json::value::number::Float>(value_number_float1);
			//declaration json::value::number::Float& with cast from json::helper::Cast::ToNumberFloat and json::Value&
			json::value::number::Float& cast_value_number_float2 = json::helper::Cast::ToNumberFloat(value_number_float1);
			//check address of between value_number_float1 and cast_value_number_float1 is same 
			assert(&value_number_float1 == &cast_value_number_float1);
			//check address of between cast_value_number_float1 and cast_value_number_float2 is same 
			assert(&cast_value_number_float1 == &cast_value_number_float2);

			//check try cast with json::helper::Cast::ToBool and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_float1));
			//check try cast with json::helper::Cast::ToArray and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_float1));
			//check try cast with json::helper::Cast::ToObject and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_float1));
			//check try cast with json::helper::Cast::ToString and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_float1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_float1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_float1));
		}

		//experiment with json::value::number::Int
		{
			//declaration json::value& from assignment value initialization of json::value::number::Int();
			json::Value& value_number_int1 = json::value::number::Int();

			//declaration json::value::number::Int& with cast from json::helper::Cast::To<json::value::number::Int> and json::Value&
			json::value::number::Int& cast_value_number_int1 = json::helper::Cast::To<json::value::number::Int>(value_number_int1);
			//declaration json::value::number::Int& with cast from json::helper::Cast::ToNumberInt and json::Value&
			json::value::number::Int& cast_value_number_int2 = json::helper::Cast::ToNumberInt(value_number_int1);
			//check address of between value_number_int1 and cast_value_number_int1 is same 
			assert(&value_number_int1 == &cast_value_number_int1);
			//check address of between cast_value_number_int1 and cast_value_number_int2 is same 
			assert(&cast_value_number_int1 == &cast_value_number_int2);

			//check try cast with json::helper::Cast::ToBool and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_int1));
			//check try cast with json::helper::Cast::ToArray and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_int1));
			//check try cast with json::helper::Cast::ToObject and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_int1));
			//check try cast with json::helper::Cast::ToString and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_int1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_int1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_int1));
		}

		//experiment with json::value::number::Long
		{
			//declaration json::value& from assignment value initialization of json::value::number::Long();
			json::Value& value_number_long1 = json::value::number::Long();

			//declaration json::value::number::Long& with cast from json::helper::Cast::To<json::value::number::Long> and json::Value&
			json::value::number::Long& cast_value_number_long1 = json::helper::Cast::To<json::value::number::Long>(value_number_long1);
			//declaration json::value::number::Long& with cast from json::helper::Cast::ToNumberLong and json::Value&
			json::value::number::Long& cast_value_number_long2 = json::helper::Cast::ToNumberLong(value_number_long1);
			//check address of between value_number_long1 and cast_value_number_long1 is same 
			assert(&value_number_long1 == &cast_value_number_long1);
			//check address of between cast_value_number_long1 and cast_value_number_long2 is same 
			assert(&cast_value_number_long1 == &cast_value_number_long2);

			//check try cast with json::helper::Cast::ToBool and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_long1));
			//check try cast with json::helper::Cast::ToArray and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_long1));
			//check try cast with json::helper::Cast::ToObject and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_long1));
			//check try cast with json::helper::Cast::ToString and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_long1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_long1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_long1));
		}

		//experiment with json::value::number::LongDouble
		{
			//declaration json::value& from assignment value initialization of json::value::number::LongDouble();
			json::Value& value_number_longdouble1 = json::value::number::LongDouble();

			//declaration json::value::number::LongDouble& with cast from json::helper::Cast::To<json::value::number::LongDouble> and json::Value&
			json::value::number::LongDouble& cast_value_number_longdouble1 = json::helper::Cast::To<json::value::number::LongDouble>(value_number_longdouble1);
			//declaration json::value::number::LongDouble& with cast from json::helper::Cast::ToNumberLongDouble and json::Value&
			json::value::number::LongDouble& cast_value_number_longdouble2 = json::helper::Cast::ToNumberLongDouble(value_number_longdouble1);
			//check address of between value_number_longdouble1 and cast_value_number_longdouble1 is same 
			assert(&value_number_longdouble1 == &cast_value_number_longdouble1);
			//check address of between cast_value_number_longdouble1 and cast_value_number_longdouble2 is same 
			assert(&cast_value_number_longdouble1 == &cast_value_number_longdouble2);

			//check try cast with json::helper::Cast::ToBool and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToArray and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToObject and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToString and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_longdouble1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_longdouble1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_longdouble1));
		}

		//experiment with json::value::number::LongLong
		{
			//declaration json::value& from assignment value initialization of json::value::number::LongLong();
			json::Value& value_number_longlong1 = json::value::number::LongLong();

			//declaration json::value::number::LongLong& with cast from json::helper::Cast::To<json::value::number::LongLong> and json::Value&
			json::value::number::LongLong& cast_value_number_longlong1 = json::helper::Cast::To<json::value::number::LongLong>(value_number_longlong1);
			//declaration json::value::number::LongLong& with cast from json::helper::Cast::ToNumberLongLong and json::Value&
			json::value::number::LongLong& cast_value_number_longlong2 = json::helper::Cast::ToNumberLongLong(value_number_longlong1);
			//check address of between value_number_longlong1 and cast_value_number_longlong1 is same 
			assert(&value_number_longlong1 == &cast_value_number_longlong1);
			//check address of between cast_value_number_longlong1 and cast_value_number_longlong2 is same 
			assert(&cast_value_number_longlong1 == &cast_value_number_longlong2);

			//check try cast with json::helper::Cast::ToBool and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_longlong1));
			//check try cast with json::helper::Cast::ToArray and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_longlong1));
			//check try cast with json::helper::Cast::ToObject and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_longlong1));
			//check try cast with json::helper::Cast::ToString and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_longlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_longlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_longlong1));
		}

		//experiment with json::value::number::Short
		{
			//declaration json::value& from assignment value initialization of json::value::number::Short();
			json::Value& value_number_short1 = json::value::number::Short();

			//declaration json::value::number::Short& with cast from json::helper::Cast::To<json::value::number::Short> and json::Value&
			json::value::number::Short& cast_value_number_short1 = json::helper::Cast::To<json::value::number::Short>(value_number_short1);
			//declaration json::value::number::Short& with cast from json::helper::Cast::ToNumberShort and json::Value&
			json::value::number::Short& cast_value_number_short2 = json::helper::Cast::ToNumberShort(value_number_short1);
			//check address of between value_number_short1 and cast_value_number_short1 is same 
			assert(&value_number_short1 == &cast_value_number_short1);
			//check address of between cast_value_number_short1 and cast_value_number_short2 is same 
			assert(&cast_value_number_short1 == &cast_value_number_short2);

			//check try cast with json::helper::Cast::ToBool and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_short1));
			//check try cast with json::helper::Cast::ToArray and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_short1));
			//check try cast with json::helper::Cast::ToObject and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_short1));
			//check try cast with json::helper::Cast::ToString and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_short1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_short1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_short1));
		}

		//experiment with json::value::number::UnsignedChar
		{
			//declaration json::value& from assignment value initialization of json::value::number::UnsignedChar();
			json::Value& value_number_unsignedchar1 = json::value::number::UnsignedChar();

			//declaration json::value::number::UnsignedChar& with cast from json::helper::Cast::To<json::value::number::UnsignedChar> and json::Value&
			json::value::number::UnsignedChar& cast_value_number_unsignedchar1 = json::helper::Cast::To<json::value::number::UnsignedChar>(value_number_unsignedchar1);
			//declaration json::value::number::UnsignedChar& with cast from json::helper::Cast::ToNumberUnsignedChar and json::Value&
			json::value::number::UnsignedChar& cast_value_number_unsignedchar2 = json::helper::Cast::ToNumberUnsignedChar(value_number_unsignedchar1);
			//check address of between value_number_unsignedchar1 and cast_value_number_unsignedchar1 is same 
			assert(&value_number_unsignedchar1 == &cast_value_number_unsignedchar1);
			//check address of between cast_value_number_unsignedchar1 and cast_value_number_unsignedchar2 is same 
			assert(&cast_value_number_unsignedchar1 == &cast_value_number_unsignedchar2);

			//check try cast with json::helper::Cast::ToBool and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToArray and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToObject and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToString and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_unsignedchar1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_unsignedchar1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_unsignedchar1));
		}

		//experiment with json::value::number::UnsignedInt
		{
			//declaration json::value& from assignment value initialization of json::value::number::UnsignedInt();
			json::Value& value_number_unsignedint1 = json::value::number::UnsignedInt();

			//declaration json::value::number::UnsignedInt& with cast from json::helper::Cast::To<json::value::number::UnsignedInt> and json::Value&
			json::value::number::UnsignedInt& cast_value_number_unsignedint1 = json::helper::Cast::To<json::value::number::UnsignedInt>(value_number_unsignedint1);
			//declaration json::value::number::UnsignedInt& with cast from json::helper::Cast::ToNumberUnsignedInt and json::Value&
			json::value::number::UnsignedInt& cast_value_number_unsignedint2 = json::helper::Cast::ToNumberUnsignedInt(value_number_unsignedint1);
			//check address of between value_number_unsignedint1 and cast_value_number_unsignedint1 is same 
			assert(&value_number_unsignedint1 == &cast_value_number_unsignedint1);
			//check address of between cast_value_number_unsignedint1 and cast_value_number_unsignedint2 is same 
			assert(&cast_value_number_unsignedint1 == &cast_value_number_unsignedint2);

			//check try cast with json::helper::Cast::ToBool and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToArray and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToObject and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToString and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_unsignedint1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_unsignedint1));
			//check try cast with value_number_unsignedint1 and value_number_unsignedint1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_unsignedint1));
		}

		//experiment with json::value::number::UnsignedLong
		{
			//declaration json::value& from assignment value initialization of json::value::number::UnsignedLong();
			json::Value& value_number_unsignedlong1 = json::value::number::UnsignedLong();

			//declaration json::value::number::UnsignedLong& with cast from json::helper::Cast::To<json::value::number::UnsignedLong> and json::Value&
			json::value::number::UnsignedLong& cast_value_number_unsignedlong1 = json::helper::Cast::To<json::value::number::UnsignedLong>(value_number_unsignedlong1);
			//declaration json::value::number::UnsignedLong& with cast from json::helper::Cast::ToNumberUnsignedLong and json::Value&
			json::value::number::UnsignedLong& cast_value_number_unsignedlong2 = json::helper::Cast::ToNumberUnsignedLong(value_number_unsignedlong1);
			//check address of between value_number_unsignedlong1 and cast_value_number_unsignedlong1 is same 
			assert(&value_number_unsignedlong1 == &cast_value_number_unsignedlong1);
			//check address of between cast_value_number_unsignedlong1 and cast_value_number_unsignedlong2 is same 
			assert(&cast_value_number_unsignedlong1 == &cast_value_number_unsignedlong2);

			//check try cast with json::helper::Cast::ToBool and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToArray and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToObject and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToString and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_unsignedlong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_unsignedlong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_unsignedlong1));
		}

		//experiment with json::value::number::UnsignedLongLong
		{
			//declaration json::value& from assignment value initialization of json::value::number::UnsignedLongLong();
			json::Value& value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();

			//declaration json::value::number::UnsignedLongLong& with cast from json::helper::Cast::To<json::value::number::UnsignedLongLong> and json::Value&
			json::value::number::UnsignedLongLong& cast_value_number_unsignedlonglong1 = json::helper::Cast::To<json::value::number::UnsignedLongLong>(value_number_unsignedlonglong1);
			//declaration json::value::number::UnsignedLongLong& with cast from json::helper::Cast::ToNumberUnsignedLongLong and json::Value&
			json::value::number::UnsignedLongLong& cast_value_number_unsignedlonglong2 = json::helper::Cast::ToNumberUnsignedLongLong(value_number_unsignedlonglong1);
			//check address of between value_number_unsignedlonglong1 and cast_value_number_unsignedlonglong1 is same 
			assert(&value_number_unsignedlonglong1 == &cast_value_number_unsignedlonglong1);
			//check address of between cast_value_number_unsignedlonglong1 and cast_value_number_unsignedlonglong2 is same 
			assert(&cast_value_number_unsignedlonglong1 == &cast_value_number_unsignedlonglong2);

			//check try cast with json::helper::Cast::ToBool and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToArray and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToObject and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToString and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_unsignedlonglong1));
			//check try cast with json::helper::Cast::ToNumberUnsignedShort and value_number_unsignedlonglong1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedShort(value_number_unsignedlonglong1));
		}

		//experiment with json::value::number::UnsignedShort
		{
			//declaration json::value& from assignment value initialization of json::value::number::UnsignedShort();
			json::Value& value_number_unsignedshort1 = json::value::number::UnsignedShort();

			//declaration json::value::number::UnsignedShort& with cast from json::helper::Cast::To<json::value::number::UnsignedShort> and json::Value&
			json::value::number::UnsignedShort& cast_value_number_unsignedshort1 = json::helper::Cast::To<json::value::number::UnsignedShort>(value_number_unsignedshort1);
			//declaration json::value::number::UnsignedShort& with cast from json::helper::Cast::ToNumberUnsignedShort and json::Value&
			json::value::number::UnsignedShort& cast_value_number_unsignedshort2 = json::helper::Cast::ToNumberUnsignedShort(value_number_unsignedshort1);
			//check address of between value_number_unsignedshort1 and cast_value_number_unsignedshort1 is same 
			assert(&value_number_unsignedshort1 == &cast_value_number_unsignedshort1);
			//check address of between cast_value_number_unsignedshort1 and cast_value_number_unsignedshort2 is same 
			assert(&cast_value_number_unsignedshort1 == &cast_value_number_unsignedshort2);

			//check try cast with json::helper::Cast::ToBool and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToBool(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToArray and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToArray(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToObject and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToObject(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToString and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToString(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberChar and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberChar(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberDouble and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberDouble(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberFloat and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberFloat(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberInt and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberInt(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberLong and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLong(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberLongDouble and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongDouble(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberLongLong and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberLongLong(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberShort and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberShort(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberUnsignedChar and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedChar(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberUnsignedInt and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedInt(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLong and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLong(value_number_unsignedshort1));
			//check try cast with json::helper::Cast::ToNumberUnsignedLongLong and value_number_unsignedshort1 is throw Exception
			AssertIfNotThrowException(json::helper::Cast::ToNumberUnsignedLongLong(value_number_unsignedshort1));
		}
	}
	return 1;
}