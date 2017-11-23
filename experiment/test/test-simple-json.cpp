#define _USING_TEST_

#include <cstdio>
#include <cstring>
#include <cassert>
#include <typeindex>

#include "test/simple/json/exception/BadCast.h"
#include "test/simple/json/exception/UndefinedType.h"

#include "test/simple/json/Value.h"

#include "test/simple/json/Memory.h"

#include "test/simple/json/pointer/Value.h"

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

#include "test/simple/json/helper/Cast.h"
#include "test/simple/json/helper/Value.h"

#include "test/simple/json/helper/Tag.h"

#include "test/simple/json/helper/value/Declare.h"

#include "test/simple/json/helper/value/Case.h"

#include "test/simple/json/pointer/value/Array.h"
#include "test/simple/json/pointer/value/False.h"
#include "test/simple/json/pointer/value/Null.h"
#include "test/simple/json/pointer/value/Number.h"
#include "test/simple/json/pointer/value/Object.h"
#include "test/simple/json/pointer/value/String.h"
#include "test/simple/json/pointer/value/True.h"

#include "test/simple/json/pointer/value/number/Char.h"
#include "test/simple/json/pointer/value/number/Double.h"
#include "test/simple/json/pointer/value/number/Float.h"
#include "test/simple/json/pointer/value/number/Int.h"
#include "test/simple/json/pointer/value/number/Long.h"
#include "test/simple/json/pointer/value/number/LongDouble.h"
#include "test/simple/json/pointer/value/number/LongLong.h"
#include "test/simple/json/pointer/value/number/Short.h"
#include "test/simple/json/pointer/value/number/UnsignedChar.h"
#include "test/simple/json/pointer/value/number/UnsignedInt.h"
#include "test/simple/json/pointer/value/number/UnsignedLong.h"
#include "test/simple/json/pointer/value/number/UnsignedLongLong.h"
#include "test/simple/json/pointer/value/number/UnsignedShort.h"

#include "test/simple/json/helper/pointer/Cast.h"
#include "test/simple/json/helper/pointer/Value.h"

#include "test/simple/json/helper/value/Case.h"

//#include "test/simple/json/helper/value/Copy.h"

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

//helper enum for Identify for return static function 'Case' in experiment /json/helper/value/Case.h
enum ReturnHelperValueCase
{
	call_with_parameter_tag,
	call_with_parameter_tag_array,
	call_with_parameter_tag_false,
	call_with_parameter_tag_null,
	call_with_parameter_tag_number,
	call_with_parameter_tag_object,
	call_with_parameter_tag_string,
	call_with_parameter_tag_true,
	call_with_parameter_tag_number_char,
	call_with_parameter_tag_number_double,
	call_with_parameter_tag_number_float,
	call_with_parameter_tag_number_floatingpoint,
	call_with_parameter_tag_number_int,
	call_with_parameter_tag_number_integer,
	call_with_parameter_tag_number_long,
	call_with_parameter_tag_number_longdouble,
	call_with_parameter_tag_number_longlong,
	call_with_parameter_tag_number_short,
	call_with_parameter_tag_number_signed,
	call_with_parameter_tag_number_unsigned,
	call_with_parameter_tag_number_unsignedchar,
	call_with_parameter_tag_number_unsignedint,
	call_with_parameter_tag_number_unsignedlong,
	call_with_parameter_tag_number_unsignedlonglong,
	call_with_parameter_tag_number_unsignedshort
};

//helper struct for full implement class of json::helper::value::Case in experiment /json/helper/value/Case.h
struct FullImplementHelperValueCase
{
	static ReturnHelperValueCase Case(const json::helper::tag::Array&, const json::Value& value)
	{
		return call_with_parameter_tag_array;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::False&, const json::Value& value)
	{
		return call_with_parameter_tag_false;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::Null&, const json::Value& value)
	{
		return call_with_parameter_tag_null;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::Number&, const json::Value& value)
	{
		return call_with_parameter_tag_number;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::Object&, const json::Value& value)
	{
		return call_with_parameter_tag_object;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::String&, const json::Value& value)
	{
		return call_with_parameter_tag_string;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::True&, const json::Value& value)
	{
		return call_with_parameter_tag_true;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Char&, const json::Value& value)
	{
		return call_with_parameter_tag_number_char;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Double&, const json::Value& value)
	{
		return call_with_parameter_tag_number_double;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Float&, const json::Value& value)
	{
		return call_with_parameter_tag_number_float;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Int&, const json::Value& value)
	{
		return call_with_parameter_tag_number_int;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Long&, const json::Value& value)
	{
		return call_with_parameter_tag_number_long;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::LongDouble&, const json::Value& value)
	{
		return call_with_parameter_tag_number_longdouble;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::LongLong&, const json::Value& value)
	{
		return call_with_parameter_tag_number_longlong;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Short&, const json::Value& value)
	{
		return call_with_parameter_tag_number_short;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::UnsignedChar&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsignedchar;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::UnsignedInt&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsignedint;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::UnsignedLong&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsignedlong;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::UnsignedLongLong&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsignedlonglong;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::UnsignedShort&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsignedshort;
	}
};

//helper struct for default implement class of json::helper::value::Case in experiment /json/helper/value/Case.h
struct DefaultImplementHelperValueCase
{
	static ReturnHelperValueCase Case(const json::helper::Tag&, const json::Value& value)
	{
		return call_with_parameter_tag;
	}
};

//helper struct for handle FloatingPoint, Signed or Unsigned implement class of json::helper::value::Case in experiment /json/helper/value/Case.h
struct TypeNumber1ImplementHelperValueCase
{
	static ReturnHelperValueCase Case(const json::helper::Tag&, const json::Value& value)
	{
		return call_with_parameter_tag;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::FloatingPoint&, const json::Value& value)
	{
		return call_with_parameter_tag_number_floatingpoint;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Signed&, const json::Value& value)
	{
		return call_with_parameter_tag_number_signed;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Unsigned&, const json::Value& value)
	{
		return call_with_parameter_tag_number_unsigned;
	}
};

//helper struct for handle integer or number implement class of json::helper::value::Case in experiment /json/helper/value/Case.h
struct TypeNumber2ImplementHelperValueCase
{
	static ReturnHelperValueCase Case(const json::helper::Tag&, const json::Value& value)
	{
		return call_with_parameter_tag;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::Number&, const json::Value& value)
	{
		return call_with_parameter_tag_number;
	}

	static ReturnHelperValueCase Case(const json::helper::tag::number::Integer&, const json::Value& value)
	{
		return call_with_parameter_tag_number_integer;
	}
};

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
		json::Value&& value_array1 = json::value::Array();
		//cast from json::value to json::value::Array;
		auto pointer_value_array1 = dynamic_cast<json::value::Array*>(&value_array1);
		//check pointer_value_array1 is not null
		assert(pointer_value_array1);

		//declaration json::value& from assignment json::value::False();
		json::Value&& value_false1 = json::value::False();
		//cast from json::value to json::value::False;
		auto pointer_value_false1 = dynamic_cast<json::value::False*>(&value_false1);
		//check pointer_value_false1 is not null
		assert(pointer_value_false1);

		//declaration json::value& from assignment json::value::Null();
		json::Value&& value_null1 = json::value::Null();
		//cast from json::value to json::value::Null;
		auto pointer_value_null1 = dynamic_cast<json::value::Null*>(&value_null1);
		//check pointer_value_null1 is not null
		assert(pointer_value_null1);

		//declaration json::value& from assignment json::value::Object();
		json::Value&& value_object1 = json::value::Object();
		//cast from json::value to json::value::Object;
		auto pointer_value_object1 = dynamic_cast<json::value::Object*>(&value_object1);
		//check pointer_value_object1 is not null
		assert(pointer_value_object1);

		//declaration json::value& from assignment json::value::String();
		json::Value&& value_string1 = json::value::String();
		//cast from json::value to json::value::String;
		auto pointer_value_string1 = dynamic_cast<json::value::String*>(&value_string1);
		//check pointer_value_string1 is not null
		assert(pointer_value_string1);

		//declaration json::value& from assignment json::value::True();
		json::Value&& value_true1 = json::value::True();
		//cast from json::value to json::value::True;
		auto pointer_value_true1 = dynamic_cast<json::value::True*>(&value_true1);
		//check pointer_value_true1 is not null
		assert(pointer_value_true1);

		//declaration json::value& from assignment json::value::number::Char();
		json::Value&& value_number_char1 = json::value::number::Char();
		//cast from json::value to json::value::number::Char;
		auto pointer_value_number_char1 = dynamic_cast<json::value::number::Char*>(&value_number_char1);
		//check pointer_value_number_char1 is not null
		assert(pointer_value_number_char1);

		//declaration json::value& from assignment json::value::number::Double();
		json::Value&& value_number_double1 = json::value::number::Double();
		//cast from json::value to json::value::number::Double;
		auto pointer_value_number_double1 = dynamic_cast<json::value::number::Double*>(&value_number_double1);
		//check pointer_value_number_double1 is not null
		assert(pointer_value_number_double1);

		//declaration json::value& from assignment json::value::number::Float();
		json::Value&& value_number_float1 = json::value::number::Float();
		//cast from json::value to json::value::number::Float;
		auto pointer_value_number_float1 = dynamic_cast<json::value::number::Float*>(&value_number_float1);
		//check pointer_value_number_float1 is not null
		assert(pointer_value_number_float1);

		//declaration json::value& from assignment json::value::number::Int();
		json::Value&& value_number_int1 = json::value::number::Int();
		//cast from json::value to json::value::number::Int;
		auto pointer_value_number_int1 = dynamic_cast<json::value::number::Int*>(&value_number_int1);
		//check pointer_value_number_int1 is not null
		assert(pointer_value_number_int1);

		//declaration json::value& from assignment json::value::number::Long();
		json::Value&& value_number_long1 = json::value::number::Long();
		//cast from json::value to json::value::number::Long;
		auto pointer_value_number_long1 = dynamic_cast<json::value::number::Long*>(&value_number_long1);
		//check pointer_value_number_long1 is not null
		assert(pointer_value_number_long1);

		//declaration json::value& from assignment json::value::number::LongDouble();
		json::Value&& value_number_longdouble1 = json::value::number::LongDouble();
		//cast from json::value to json::value::number::LongDouble;
		auto pointer_value_number_longdouble1 = dynamic_cast<json::value::number::LongDouble*>(&value_number_longdouble1);
		//check pointer_value_number_longdouble1 is not null
		assert(pointer_value_number_longdouble1);

		//declaration json::value& from assignment json::value::number::LongLong();
		json::Value&& value_number_longlong1 = json::value::number::LongLong();
		//cast from json::value to json::value::number::LongLong;
		auto pointer_value_number_longlong1 = dynamic_cast<json::value::number::LongLong*>(&value_number_longlong1);
		//check pointer_value_number_longlong1 is not null
		assert(pointer_value_number_longlong1);

		//declaration json::value& from assignment json::value::number::Short();
		json::Value&& value_number_short1 = json::value::number::Short();
		//cast from json::value to json::value::number::Short;
		auto pointer_value_number_short1 = dynamic_cast<json::value::number::Short*>(&value_number_short1);
		//check pointer_value_number_short1 is not null
		assert(pointer_value_number_short1);

		//declaration json::value& from assignment json::value::number::UnsignedChar();
		json::Value&& value_number_unsignedchar1 = json::value::number::UnsignedChar();
		//cast from json::value to json::value::number::UnsignedChar;
		auto pointer_value_number_unsignedchar1 = dynamic_cast<json::value::number::UnsignedChar*>(&value_number_unsignedchar1);
		//check pointer_value_number_unsignedchar1 is not null
		assert(pointer_value_number_unsignedchar1);

		//declaration json::value& from assignment json::value::number::UnsignedInt();
		json::Value&& value_number_unsignedint1 = json::value::number::UnsignedInt();
		//cast from json::value to json::value::number::UnsignedInt;
		auto pointer_value_number_unsignedint1 = dynamic_cast<json::value::number::UnsignedInt*>(&value_number_unsignedint1);
		//check pointer_value_number_unsignedint1 is not null
		assert(pointer_value_number_unsignedint1);

		//declaration json::value& from assignment json::value::number::UnsignedLong();
		json::Value&& value_number_unsignedlong1 = json::value::number::UnsignedLong();
		//cast from json::value to json::value::number::UnsignedLong;
		auto pointer_value_number_unsignedlong1 = dynamic_cast<json::value::number::UnsignedLong*>(&value_number_unsignedlong1);
		//check pointer_value_number_unsignedlong1 is not null
		assert(pointer_value_number_unsignedlong1);

		//declaration json::value& from assignment json::value::number::UnsignedLongLong();
		json::Value&& value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
		//cast from json::value to json::value::number::UnsignedLongLong;
		auto pointer_value_number_unsignedlonglong1 = dynamic_cast<json::value::number::UnsignedLongLong*>(&value_number_unsignedlonglong1);
		//check pointer_value_number_unsignedlonglong1 is not null
		assert(pointer_value_number_unsignedlonglong1);

		//declaration json::value& from assignment json::value::number::UnsignedShort();
		json::Value&& value_number_unsignedshort1 = json::value::number::UnsignedShort();
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

	//experiment with json/value/Array.h
	{
		//main variable with default constructor json::value::Array
		json::value::Array array1;
		json::value::Array array2;
		const json::value::Array& const_array1 = array1;
		const json::value::Array& const_array2 = array2;

		//experiment with Insert and operator[] of json::value::Array with initialization value of jsonvalue
		{
			//add json value array to value array
			array1.Insert(json::value::Array());

			//add json value false to value array
			array1.Insert(json::value::False());

			//add json value null to value array
			array1.Insert(json::value::Null());

			//add json value object to value array
			array1.Insert(json::value::Object());

			//add json value string to value array
			array1.Insert(json::value::String());

			//add json value true to value array
			array1.Insert(json::value::True());

			//add json value number char to value array
			array1.Insert(json::value::number::Char());

			//add json value number double to value array
			array1.Insert(json::value::number::Double());

			//add json value number float to value array
			array1.Insert(json::value::number::Float());

			//add json value number int to value array
			array1.Insert(json::value::number::Int());

			//add json value number long to value array
			array1.Insert(json::value::number::Long());

			//add json value number long double to value array
			array1.Insert(json::value::number::LongDouble());

			//add json value number long long to value array
			array1.Insert(json::value::number::LongLong());

			//add json value number short to value array
			array1.Insert(json::value::number::Short());

			//add json value number unsigned char to value array
			array1.Insert(json::value::number::UnsignedChar());

			//add json value number unsigned int to value array
			array1.Insert(json::value::number::UnsignedInt());

			//add json value number unsigned long to value array
			array1.Insert(json::value::number::UnsignedLong());

			//add json value number unsigned long long to value array
			array1.Insert(json::value::number::UnsignedLongLong());

			//add json value number unsigned short to value array
			array1.Insert(json::value::number::UnsignedShort());

			//assignment from cast 1st index of array1 to pointer of json::value::Array
			auto pointer_array3 = dynamic_cast<json::value::Array*>(array1[0].get());
			//check pointer_array3 is not null
			assert(pointer_array3);

			//assignment from cast 2nd index of array1 to pointer of json::value::False
			auto pointer_false1 = dynamic_cast<json::value::False*>(array1[1].get());
			//check pointer_false1 is not null
			assert(pointer_false1);

			//assignment from cast 3rd index of array1 to pointer of json::value::Null
			auto pointer_null1 = dynamic_cast<json::value::Null*>(array1[2].get());
			//check pointer_null1 is not null
			assert(pointer_null1);

			//assignment from cast 4th index of array1 to pointer of json::value::Object
			auto pointer_object1 = dynamic_cast<json::value::Object*>(array1[3].get());
			//check pointer_object1 is not null
			assert(pointer_object1);

			//assignment from cast 5th index of array1 to pointer of json::value::String
			auto pointer_string1 = dynamic_cast<json::value::String*>(array1[4].get());
			//check pointer_string1 is not null
			assert(pointer_string1);

			//assignment from cast 6th index of array1 to pointer of json::value::True
			auto pointer_true1 = dynamic_cast<json::value::True*>(array1[5].get());
			//check pointer_true1 is not null
			assert(pointer_true1);

			//assignment from cast 7th index of array1 to pointer of json::value::number::Char
			auto pointer_number_char1 = dynamic_cast<json::value::number::Char*>(array1[6].get());
			//check pointer_number_char1 is not null
			assert(pointer_number_char1);

			//assignment from cast 8th index of array1 to pointer of json::value::number::Double
			auto pointer_number_double1 = dynamic_cast<json::value::number::Double*>(array1[7].get());
			//check pointer_number_double1 is not null
			assert(pointer_number_double1);

			//assignment from cast 9th index of array1 to pointer of json::value::number::Float
			auto pointer_number_float1 = dynamic_cast<json::value::number::Float*>(array1[8].get());
			//check pointer_number_float1 is not null
			assert(pointer_number_float1);

			//assignment from cast 10th index of array1 to pointer of json::value::number::Int
			auto pointer_number_int1 = dynamic_cast<json::value::number::Int*>(array1[9].get());
			//check pointer_number_int1 is not null
			assert(pointer_number_int1);

			//assignment from cast th index of array1 to pointer of json::value::number::Long
			auto pointer_number_long1 = dynamic_cast<json::value::number::Long*>(array1[10].get());
			//check pointer_number_long1 is not null
			assert(pointer_number_long1);

			//assignment from cast 11th index of array1 to pointer of json::value::number::LongDouble
			auto pointer_number_longdouble1 = dynamic_cast<json::value::number::LongDouble*>(array1[11].get());
			//check pointer_number_longdouble1 is not null
			assert(pointer_number_longdouble1);

			//assignment from cast 12th index of array1 to pointer of json::value::number::LongLong
			auto pointer_number_longlong1 = dynamic_cast<json::value::number::LongLong*>(array1[12].get());
			//check pointer_number_longlong1 is not null
			assert(pointer_number_longlong1);

			//assignment from cast 13th index of array1 to pointer of json::value::number::Short
			auto pointer_number_short1 = dynamic_cast<json::value::number::Short*>(array1[13].get());
			//check pointer_number_short1 is not null
			assert(pointer_number_short1);

			//assignment from cast 14th index of array1 to pointer of json::value::number::UnsignedChar
			auto pointer_number_unsignedchar1 = dynamic_cast<json::value::number::UnsignedChar*>(array1[14].get());
			//check pointer_number_unsignedchar1 is not null
			assert(pointer_number_unsignedchar1);

			//assignment from cast 15th index of array1 to pointer of json::value::number::UnsignedInt
			auto pointer_number_unsignedint1 = dynamic_cast<json::value::number::UnsignedInt*>(array1[15].get());
			//check pointer_number_unsignedint1 is not null
			assert(pointer_number_unsignedint1);

			//assignment from cast 16th index of array1 to pointer of json::value::number::UnsignedLong
			auto pointer_number_unsignedlong1 = dynamic_cast<json::value::number::UnsignedLong*>(array1[16].get());
			//check pointer_number_unsignedlong1 is not null
			assert(pointer_number_unsignedlong1);

			//assignment from cast 17th index of array1 to pointer of json::value::number::UnsignedLongLong
			auto pointer_number_unsignedlonglong1 = dynamic_cast<json::value::number::UnsignedLongLong*>(array1[17].get());
			//check pointer_number_unsignedlonglong1 is not null
			assert(pointer_number_unsignedlonglong1);

			//assignment from cast 18th index of array1 to pointer of json::value::number::UnsignedShort
			auto pointer_number_unsignedshort1 = dynamic_cast<json::value::number::UnsignedShort*>(array1[18].get());
			//check pointer_number_unsignedshort1 is not null
			assert(pointer_number_unsignedshort1);
		}

		//clear elements array1 
		array1.Clear();
		//check size array1 is zero
		assert(array1.Size() == 0);

		//experiment with Insert of json::value::Array with assignment variable of json/pointer/value
		{
			//declare json::pointer::Value from default constructor json::value::Array
			json::pointer::Value pointer_value_array4 = json::value::Array();
			//declare json::pointer::Value from default constructor json::value::False
			json::pointer::Value pointer_value_false1 = json::value::False();
			//declare json::pointer::Value from default constructor json::value::Null
			json::pointer::Value pointer_value_null1 = json::value::Null();
			//declare json::pointer::Value from default constructor json::value::Object
			json::pointer::Value pointer_value_object1 = json::value::Object();
			//declare json::pointer::Value from default constructor json::value::String
			json::pointer::Value pointer_value_string1 = json::value::String();
			//declare json::pointer::Value from default constructor json::value::True
			json::pointer::Value pointer_value_true1 = json::value::True();

			//declare json::pointer::Value from default constructor json::value::number::Char
			json::pointer::Value pointer_value_number_char1 = json::value::number::Char();
			//declare json::pointer::Value from default constructor json::value::number::Double
			json::pointer::Value pointer_value_number_double1 = json::value::number::Double();
			//declare json::pointer::Value from default constructor json::value::number::Float
			json::pointer::Value pointer_value_number_float1 = json::value::number::Float();
			//declare json::pointer::Value from default constructor json::value::number::Int
			json::pointer::Value pointer_value_number_int1 = json::value::number::Int();
			//declare json::pointer::Value from default constructor json::value::number::Long
			json::pointer::Value pointer_value_number_long1 = json::value::number::Long();
			//declare json::pointer::Value from default constructor json::value::number::LongDouble
			json::pointer::Value pointer_value_number_longdouble1 = json::value::number::LongDouble();
			//declare json::pointer::Value from default constructor json::value::number::LongLong
			json::pointer::Value pointer_value_number_longlong1 = json::value::number::LongLong();
			//declare json::pointer::Value from default constructor json::value::number::Short
			json::pointer::Value pointer_value_number_short1 = json::value::number::Short();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedChar
			json::pointer::Value pointer_value_number_unsignedchar1 = json::value::number::UnsignedChar();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedInt
			json::pointer::Value pointer_value_number_unsignedint1 = json::value::number::UnsignedInt();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedLong
			json::pointer::Value pointer_value_number_unsignedlong1 = json::value::number::UnsignedLong();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedLongLong
			json::pointer::Value pointer_value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedShort
			json::pointer::Value pointer_value_number_unsignedshort1 = json::value::number::UnsignedShort();

			//add json::pointer::Value to array1 with variable pointer_value_array4 
			// and assignment to iterator of array1 
			auto it_array1_insert1 = array1.Insert(pointer_value_array4);
			//check value between it_array1_insert1 and 1st index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert1) == array1[0]);
			//check value between 1st index of array1 and pointer_value_array4 is same
			assert(array1[0] == pointer_value_array4);

			//add json::pointer::Value to array1 with variable pointer_value_false1
			// and assignment to iterator of array1 
			auto it_array1_insert2 = array1.Insert(pointer_value_false1);
			//check value between it_array1_insert2 and 2nd index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert2) == array1[1]);
			//check value between 2nd index of array1 and pointer_value_false1 is same
			assert(array1[1] == pointer_value_false1);

			//add json::pointer::Value to array1 with variable pointer_value_null1
			// and assignment to iterator of array1 
			auto it_array1_insert3 = array1.Insert(pointer_value_null1);
			//check value between it_array1_insert3 and 3rd index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert3) == array1[2]);
			//check value between 3rd index of array1 and pointer_value_null1 is same
			assert(array1[2] == pointer_value_null1);

			//add json::pointer::Value to array1 with variable pointer_value_object1
			// and assignment to iterator of array1 
			auto it_array1_insert4 = array1.Insert(pointer_value_object1);
			//check value between it_array1_insert4 and 4th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert4) == array1[3]);
			//check value between 4th index of array1 and pointer_value_object1 is same
			assert(array1[3] == pointer_value_object1);

			//add json::pointer::Value to array1 with variable pointer_value_string1
			// and assignment to iterator of array1 
			auto it_array1_insert5 = array1.Insert(pointer_value_string1);
			//check value between it_array1_insert5 and 5th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert5) == array1[4]);
			//check value between 5th index of array1 and pointer_value_string1 is same
			assert(array1[4] == pointer_value_string1);

			//add json::pointer::Value to array1 with variable pointer_value_true1
			// and assignment to iterator of array1 
			auto it_array1_insert6 = array1.Insert(pointer_value_true1);
			//check value between it_array1_insert6 and 6th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert6) == array1[5]);
			//check value between 6th index of array1 and pointer_value_true1 is same
			assert(array1[5] == pointer_value_true1);


			//add json::pointer::Value to array1 with variable pointer_value_number_char1
			// and assignment to iterator of array1 
			auto it_array1_insert7 = array1.Insert(pointer_value_number_char1);
			//check value between it_array1_insert7 and 7th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert7) == array1[6]);
			//check value between 7th index of array1 and pointer_value_number_char1 is same
			assert(array1[6] == pointer_value_number_char1);

			//add json::pointer::Value to array1 with variable pointer_value_number_double1
			// and assignment to iterator of array1 
			auto it_array1_insert8 = array1.Insert(pointer_value_number_double1);
			//check value between it_array1_insert8 and 8th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert8) == array1[7]);
			//check value between 8th index of array1 and pointer_value_number_double1 is same
			assert(array1[7] == pointer_value_number_double1);

			//add json::pointer::Value to array1 with variable pointer_value_number_float1
			// and assignment to iterator of array1 
			auto it_array1_insert9 = array1.Insert(pointer_value_number_float1);
			//check value between it_array1_insert9 and 9th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert9) == array1[8]);
			//check value between 9th index of array1 and pointer_value_number_float1 is same
			assert(array1[8] == pointer_value_number_float1);

			//add json::pointer::Value to array1 with variable pointer_value_number_int1
			// and assignment to iterator of array1 
			auto it_array1_insert10 = array1.Insert(pointer_value_number_int1);
			//check value between it_array1_insert10 and 10th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert10) == array1[9]);
			//check value between 10th index of array1 and pointer_value_number_int1 is same
			assert(array1[9] == pointer_value_number_int1);

			//add json::pointer::Value to array1 with variable pointer_value_number_long1
			// and assignment to iterator of array1 
			auto it_array1_insert11 = array1.Insert(pointer_value_number_long1);
			//check value between it_array1_insert11 and 11th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert11) == array1[10]);
			//check value between 11th index of array1 and pointer_value_number_long1 is same
			assert(array1[10] == pointer_value_number_long1);

			//add json::pointer::Value to array1 with variable pointer_value_number_longdouble1
			// and assignment to iterator of array1 
			auto it_array1_insert12 = array1.Insert(pointer_value_number_longdouble1);
			//check value between it_array1_insert12 and 12th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert12) == array1[11]);
			//check value between 12th index of array1 and pointer_value_number_longdouble1 is same
			assert(array1[11] == pointer_value_number_longdouble1);

			//add json::pointer::Value to array1 with variable pointer_value_number_longlong1
			// and assignment to iterator of array1 
			auto it_array1_insert13 = array1.Insert(pointer_value_number_longlong1);
			//check value between it_array1_insert13 and 13th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert13) == array1[12]);
			//check value between 13th index of array1 and pointer_value_number_longlong1 is same
			assert(array1[12] == pointer_value_number_longlong1);

			//add json::pointer::Value to array1 with variable pointer_value_number_short1
			// and assignment to iterator of array1 
			auto it_array1_insert14 = array1.Insert(pointer_value_number_short1);
			//check value between it_array1_insert14 and 14th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert14) == array1[13]);
			//check value between 14th index of array1 and pointer_value_number_short1 is same
			assert(array1[13] == pointer_value_number_short1);

			//add json::pointer::Value to array1 with variable pointer_value_number_unsignedchar1
			// and assignment to iterator of array1 
			auto it_array1_insert15 = array1.Insert(pointer_value_number_unsignedchar1);
			//check value between it_array1_insert15 and 15th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert15) == array1[14]);
			//check value between 15th index of array1 and pointer_value_number_unsignedchar1 is same
			assert(array1[14] == pointer_value_number_unsignedchar1);

			//add json::pointer::Value to array1 with variable pointer_value_number_unsignedint1
			// and assignment to iterator of array1 
			auto it_array1_insert16 = array1.Insert(pointer_value_number_unsignedint1);
			//check value between it_array1_insert16 and 16th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert16) == array1[15]);
			//check value between 16th index of array1 and pointer_value_number_unsignedint1 is same
			assert(array1[15] == pointer_value_number_unsignedint1);

			//add json::pointer::Value to array1 with variable pointer_value_number_unsignedlong1
			// and assignment to iterator of array1 
			auto it_array1_insert17 = array1.Insert(pointer_value_number_unsignedlong1);
			//check value between it_array1_insert17 and 17th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert17) == array1[16]);
			//check value between 17th index of array1 and pointer_value_number_unsignedlong1 is same
			assert(array1[16] == pointer_value_number_unsignedlong1);

			//add json::pointer::Value to array1 with variable pointer_value_number_unsignedlonglong1
			// and assignment to iterator of array1 
			auto it_array1_insert18 = array1.Insert(pointer_value_number_unsignedlonglong1);
			//check value between it_array1_insert18 and 18th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert18) == array1[17]);
			//check value between 18th index of array1 and pointer_value_number_unsignedlonglong1 is same
			assert(array1[17] == pointer_value_number_unsignedlonglong1);

			//add json::pointer::Value to array1 with variable pointer_value_number_unsignedshort1
			// and assignment to iterator of array1 
			auto it_array1_insert19 = array1.Insert(pointer_value_number_unsignedshort1);
			//check value between it_array1_insert19 and 19th index of array1 is same
			assert(json::value::Array::Value(*it_array1_insert19) == array1[18]);
			//check value between 19th index of array1 and pointer_value_number_unsignedshort1 is same
			assert(array1[18] == pointer_value_number_unsignedshort1);

			//check range-for is work
			for (auto it : array1)
			{
				assert(json::value::Array::Value(it) == array1[array1.Key(it)]);
			}

			//check range-for is work with const variable of array1
			for (auto it : const_array1)
			{
				assert(json::value::Array::Value(it) == array1[array1.Key(it)]);
			}

			//check ConstBegin and ConstEnd from variable of array1 is work
			for (auto it = array1.ConstBegin(); it < array1.ConstEnd(); ++it)
			{
				assert(json::value::Array::Value(*it) == array1[array1.Key(*it)]);
			}

			//insert to array1 with iterator first and last of array
			array1.Insert(array1.Begin(), array1.End());
			//check value between array1[{0,...,18}]  and values of array1[{19,... ,37}]
			for (size_t i = 0, j = array1.Size() / 2; i < array1.Size() / 2; ++i, ++j)
			{
				assert(array1[i] == array1[j]);
			}

			//emplace to array1 with json::value::Array 
			// and assignment to iterator of array1 
			auto it_array_emplace1 = array1.Emplace(json::value::Array());
			//check value of cast value of it_array_emplace1 to json::value::Array* is not null
			assert(dynamic_cast<json::value::Array*>(json::value::Array::Value(*it_array_emplace1).get()) != 0);

			//erase value the last element of array1
			array1.Erase(array1.End() - 1);

			//assignment from half size of array to variable half_array1_size
			auto half_array1_size = array1.Size() / 2;
			//check size of array is even
			assert(array1.Size() % 2 == 0);

			//erase elements half of array1
			array1.Erase(array1.Begin() + half_array1_size, array1.End());
			//check value between size of array and half_array1_size is same 
			assert(array1.Size() == half_array1_size);

			//swap value from array1 to array2
			array1.Swap(array2);

			//check value between return from Find in array2 with key is 0 and pointer_value_array4 is same
			assert(json::value::Array::Value(*array2.Find(0)) == pointer_value_array4);
			//check value between return from Find in array2 with key is 1 and pointer_value_false1 is same
			assert(json::value::Array::Value(*array2.Find(1)) == pointer_value_false1);
			//check value between return from Find in array2 with key is 2 and pointer_value_null1 is same
			assert(json::value::Array::Value(*array2.Find(2)) == pointer_value_null1);
			//check value between return from Find in array2 with key is 3 and pointer_value_object1 is same
			assert(json::value::Array::Value(*array2.Find(3)) == pointer_value_object1);
			//check value between return from Find in array2 with key is 4 and pointer_value_string1 is same
			assert(json::value::Array::Value(*array2.Find(4)) == pointer_value_string1);
			//check value between return from Find in array2 with key is 5 and pointer_value_true1 is same
			assert(json::value::Array::Value(*array2.Find(5)) == pointer_value_true1);

			//check value between return from Find in array2 with key is 6 and pointer_value_number_char1 is same
			assert(json::value::Array::Value(*array2.Find(6)) == pointer_value_number_char1);
			//check value between return from Find in array2 with key is 7 and pointer_value_number_double1 is same
			assert(json::value::Array::Value(*array2.Find(7)) == pointer_value_number_double1);
			//check value between return from Find in array2 with key is 8 and pointer_value_number_float1 is same
			assert(json::value::Array::Value(*array2.Find(8)) == pointer_value_number_float1);
			//check value between return from Find in array2 with key is 9 and pointer_value_number_int1 is same
			assert(json::value::Array::Value(*array2.Find(9)) == pointer_value_number_int1);
			//check value between return from Find in array2 with key is 10 and pointer_value_number_long1 is same
			assert(json::value::Array::Value(*array2.Find(10)) == pointer_value_number_long1);
			//check value between return from Find in array2 with key is 11 and pointer_value_number_longdouble1 is same
			assert(json::value::Array::Value(*array2.Find(11)) == pointer_value_number_longdouble1);
			//check value between return from Find in array2 with key is 12 and pointer_value_number_longlong1 is same
			assert(json::value::Array::Value(*array2.Find(12)) == pointer_value_number_longlong1);
			//check value between return from Find in array2 with key is 13 and pointer_value_number_short1 is same
			assert(json::value::Array::Value(*array2.Find(13)) == pointer_value_number_short1);
			//check value between return from Find in array2 with key is 14 and pointer_value_number_unsignedchar1 is same
			assert(json::value::Array::Value(*array2.Find(14)) == pointer_value_number_unsignedchar1);
			//check value between return from Find in array2 with key is 15 and pointer_value_number_unsignedint1 is same
			assert(json::value::Array::Value(*array2.Find(15)) == pointer_value_number_unsignedint1);
			//check value between return from Find in array2 with key is 16 and pointer_value_number_unsignedlong1 is same
			assert(json::value::Array::Value(*array2.Find(16)) == pointer_value_number_unsignedlong1);
			//check value between return from Find in array2 with key is 17 and pointer_value_number_unsignedlonglong1 is same
			assert(json::value::Array::Value(*array2.Find(17)) == pointer_value_number_unsignedlonglong1);
			//check value between return from Find in array2 with key is 18 and pointer_value_number_unsignedshort1 is same
			assert(json::value::Array::Value(*array2.Find(18)) == pointer_value_number_unsignedshort1);
			//check value between return from Find in array2 with key is 18 and End of array2 is same
			assert(array2.Find(19) == array2.End());

			//check value between function (or const) member of json::value::Array operator[] and At is same 
			for (size_t i = 0; i < array2.Size(); ++i)
			{
				assert(array2[i] == array2.At(i));
				assert(const_array2[i] == const_array2.At(i));
			}
		}

		//copy from array1
		json::value::Array array5(array2);

		//assignment from array5
		json::value::Array array6 = array5;

		//check value of array2 and array5 and array6 is same
		for (std::size_t i = 0; i < array1.Size(); ++i)
		{
			assert(array1[i] == array5[i] && array1[i] == array6[i]);
		}

		//check type between return type of array1.Container() and json::Constant::ContainerArrayType is same
		assert(typeid(array1.Container()).hash_code() == typeid(json::Constant::ContainerArrayType).hash_code());
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
			json::value::Number&& number1 = json::value::number::Char();
			json::value::Number&& number2 = json::value::number::Double();
			json::value::Number&& number3 = json::value::number::Float();
			json::value::Number&& number4 = json::value::number::Int();
			json::value::Number&& number5 = json::value::number::Long();
			json::value::Number&& number6 = json::value::number::LongDouble();
			json::value::Number&& number7 = json::value::number::LongLong();
			json::value::Number&& number8 = json::value::number::Short();
			json::value::Number&& number9 = json::value::number::UnsignedChar();
			json::value::Number&& number10 = json::value::number::UnsignedInt();
			json::value::Number&& number11 = json::value::number::UnsignedLong();
			json::value::Number&& number12 = json::value::number::UnsignedLongLong();
			json::value::Number&& number13 = json::value::number::UnsignedShort();
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

	//experiment with json/value/Object.h
	{
		//main variable with default constructor json::value::Object
		json::value::Object object1;
		json::value::Object object2;
		const json::value::Object& const_object1 = object1;
		const json::value::Object& const_object2 = object2;

		//experiment with Insert and operator[] of json::value::Object with initialization value of json/value
		{
			//add json value array to value object with key is "array1"
			object1["array1"] = json::value::Array();

			//add json value false to value object with key is "false1"
			object1["false1"] = json::value::False();

			//add json value null to value object with key is "null1"
			object1["null1"] = json::value::Null();

			//add json value object to value object with key is "object2"
			object1["object3"] = json::value::Object();

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
			auto pointer_object2 = dynamic_cast<json::value::Object*>(object1["object3"].get());
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
		}
		
		//clear elements object1 
		object1.Clear();
		//check size object1 is zero
		assert(object1.Size() == 0);

		//experiment with Insert of json::value::Object with assignment variable of json/pointer/value
		{
			//declare json::pointer::Value from default constructor json::value::Array
			json::pointer::Value pointer_value_array1 = json::value::Array();
			//declare json::pointer::Value from default constructor json::value::False
			json::pointer::Value pointer_value_false1 = json::value::False();
			//declare json::pointer::Value from default constructor json::value::Null
			json::pointer::Value pointer_value_null1 = json::value::Null();
			//declare json::pointer::Value from default constructor json::value::Object
			json::pointer::Value pointer_value_object4 = json::value::Object();
			//declare json::pointer::Value from default constructor json::value::String
			json::pointer::Value pointer_value_string1 = json::value::String();
			//declare json::pointer::Value from default constructor json::value::True
			json::pointer::Value pointer_value_true1 = json::value::True();

			//declare json::pointer::Value from default constructor json::value::number::Char
			json::pointer::Value pointer_value_number_char1 = json::value::number::Char();
			//declare json::pointer::Value from default constructor json::value::number::Double
			json::pointer::Value pointer_value_number_double1 = json::value::number::Double();
			//declare json::pointer::Value from default constructor json::value::number::Float
			json::pointer::Value pointer_value_number_float1 = json::value::number::Float();
			//declare json::pointer::Value from default constructor json::value::number::Int
			json::pointer::Value pointer_value_number_int1 = json::value::number::Int();
			//declare json::pointer::Value from default constructor json::value::number::Long
			json::pointer::Value pointer_value_number_long1 = json::value::number::Long();
			//declare json::pointer::Value from default constructor json::value::number::LongDouble
			json::pointer::Value pointer_value_number_longdouble1 = json::value::number::LongDouble();
			//declare json::pointer::Value from default constructor json::value::number::LongLong
			json::pointer::Value pointer_value_number_longlong1 = json::value::number::LongLong();
			//declare json::pointer::Value from default constructor json::value::number::Short
			json::pointer::Value pointer_value_number_short1 = json::value::number::Short();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedChar
			json::pointer::Value pointer_value_number_unsignedchar1 = json::value::number::UnsignedChar();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedInt
			json::pointer::Value pointer_value_number_unsignedint1 = json::value::number::UnsignedInt();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedLong
			json::pointer::Value pointer_value_number_unsignedlong1 = json::value::number::UnsignedLong();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedLongLong
			json::pointer::Value pointer_value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
			//declare json::pointer::Value from default constructor json::value::number::UnsignedShort
			json::pointer::Value pointer_value_number_unsignedshort1 = json::value::number::UnsignedShort();

			//add json::pointer::Value to object1 with key is "value_array1" and value is variable of pointer_value_array1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_array1 = object1.Emplace("value_array1", pointer_value_array1);
			//check value between value of it_object1_emplace_value_array1 and element of object1 with key is "value_array1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_array1) == object1["value_array1"]);
			//check value between element of object1 with key is "value_array1" and pointer_value_array1 is same
			assert(object1["value_array1"] == pointer_value_array1);

			//add json::pointer::Value to object1 with key is "value_false1" and value is variable of pointer_value_false1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_false1 = object1.Emplace("value_false1", pointer_value_false1);
			//check value between value of it_object1_emplace_value_false1 and element of object1 with key is "value_false1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_false1) == object1["value_false1"]);
			//check value between element of object1 with key is "value_false1" and pointer_value_false1 is same
			assert(object1["value_false1"] == pointer_value_false1);

			//add json::pointer::Value to object1 with key is "value_null1" and value is variable of pointer_value_null1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_null1 = object1.Emplace("value_null1", pointer_value_null1);
			//check value between value of it_object1_emplace_value_null1 and element of object1 with key is "value_null1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_null1) == object1["value_null1"]);
			//check value between element of object1 with key is "value_null1" and pointer_value_null1 is same
			assert(object1["value_null1"] == pointer_value_null1);

			//add json::pointer::Value to object1 with key is "value_object4" and value is variable of pointer_value_object4
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_object4 = object1.Emplace("value_object4", pointer_value_object4);
			//check value between value of it_object1_emplace_value_object4 and element of object1 with key is "value_object4" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_object4) == object1["value_object4"]);
			//check value between element of object1 with key is "value_object1" and pointer_value_object4 is same
			assert(object1["value_object4"] == pointer_value_object4);

			//add json::pointer::Value to object1 with key is "value_string1" and value is variable of pointer_value_string1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_string1 = object1.Emplace("value_string1", pointer_value_string1);
			//check value between value of it_object1_emplace_value_string1 and element of object1 with key is "value_string1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_string1) == object1["value_string1"]);
			//check value between element of object1 with key is "value_string1" and pointer_value_string1 is same
			assert(object1["value_string1"] == pointer_value_string1);

			//add json::pointer::Value to object1 with key is "value_true1" and value is variable of pointer_value_true1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_true1 = object1.Emplace("value_true1", pointer_value_true1);
			//check value between value of it_object1_emplace_value_true1 and element of object1 with key is "value_true1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_true1) == object1["value_true1"]);
			//check value between element of object1 with key is "value_true1" and pointer_value_true1 is same
			assert(object1["value_true1"] == pointer_value_true1);


			//add json::pointer::Value to object1 with key is "value_number_char1" and value is variable of pointer_value_number_char1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_char1 = object1.Emplace("value_number_char1", pointer_value_number_char1);
			//check value between value of it_object1_emplace_value_number_char1 and element of object1 with key is "value_number_char1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_char1) == object1["value_number_char1"]);
			//check value between element of object1 with key is "value_number_char1" and pointer_value_number_char1 is same
			assert(object1["value_number_char1"] == pointer_value_number_char1);

			//add json::pointer::Value to object1 with key is "value_number_double1" and value is variable of pointer_value_number_double1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_double1 = object1.Emplace("value_number_double1", pointer_value_number_double1);
			//check value between value of it_object1_emplace_value_number_double1 and element of object1 with key is "value_number_double1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_double1) == object1["value_number_double1"]);
			//check value between element of object1 with key is "value_number_double1" and pointer_value_number_double1 is same
			assert(object1["value_number_double1"] == pointer_value_number_double1);

			//add json::pointer::Value to object1 with key is "value_number_float1" and value is variable of pointer_value_number_float1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_float1 = object1.Emplace("value_number_float1", pointer_value_number_float1);
			//check value between value of it_object1_emplace_value_number_float1 and element of object1 with key is "value_number_float1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_float1) == object1["value_number_float1"]);
			//check value between element of object1 with key is "value_number_float1" and pointer_value_number_float1 is same
			assert(object1["value_number_float1"] == pointer_value_number_float1);

			//add json::pointer::Value to object1 with key is "value_number_int1" and value is variable of pointer_value_number_int1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_int1 = object1.Emplace("value_number_int1", pointer_value_number_int1);
			//check value between value of it_object1_emplace_value_number_int1 and element of object1 with key is "value_number_int1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_int1) == object1["value_number_int1"]);
			//check value between element of object1 with key is "value_number_int1" and pointer_value_number_int1 is same
			assert(object1["value_number_int1"] == pointer_value_number_int1);

			//add json::pointer::Value to object1 with key is "value_number_long1" and value is variable of pointer_value_number_long1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_long1 = object1.Emplace("value_number_long1", pointer_value_number_long1);
			//check value between value of it_object1_emplace_value_number_long1 and element of object1 with key is "value_number_long1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_long1) == object1["value_number_long1"]);
			//check value between element of object1 with key is "value_number_long1" and pointer_value_number_long1 is same
			assert(object1["value_number_long1"] == pointer_value_number_long1);

			//add json::pointer::Value to object1 with key is "value_number_longdouble1" and value is variable of pointer_value_number_longdouble1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_longdouble1 = object1.Emplace("value_number_longdouble1", pointer_value_number_longdouble1);
			//check value between value of it_object1_emplace_value_number_longdouble1 and element of object1 with key is "value_number_longdouble1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_longdouble1) == object1["value_number_longdouble1"]);
			//check value between element of object1 with key is "value_number_longdouble1" and pointer_value_number_longdouble1 is same
			assert(object1["value_number_longdouble1"] == pointer_value_number_longdouble1);

			//add json::pointer::Value to object1 with key is "value_number_longlong1" and value is variable of pointer_value_number_longlong1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_longlong1 = object1.Emplace("value_number_longlong1", pointer_value_number_longlong1);
			//check value between value of it_object1_emplace_value_number_longlong1 and element of object1 with key is "value_number_longlong1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_longlong1) == object1["value_number_longlong1"]);
			//check value between element of object1 with key is "" and  is same
			assert(object1["value_number_longlong1"] == pointer_value_number_longlong1);

			//add json::pointer::Value to object1 with key is "value_number_short1" and value is variable of pointer_value_number_short1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_short1 = object1.Emplace("value_number_short1", pointer_value_number_short1);
			//check value between value of it_object1_emplace_value_number_short1 and element of object1 with key is "value_number_short1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_short1) == object1["value_number_short1"]);
			//check value between element of object1 with key is "value_number_longlong1" and pointer_value_number_short1 is same
			assert(object1["value_number_short1"] == pointer_value_number_short1);

			//add json::pointer::Value to object1 with key is "value_number_unsignedchar1" and value is variable of pointer_value_number_unsignedchar1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_unsignedchar1 = object1.Emplace("value_number_unsignedchar1", pointer_value_number_unsignedchar1);
			//check value between value of it_object1_emplace_value_number_unsignedchar1 and element of object1 with key is "value_number_unsignedchar1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_unsignedchar1) == object1["value_number_unsignedchar1"]);
			//check value between element of object1 with key is "value_number_unsignedchar1" and pointer_value_number_unsignedchar1 is same
			assert(object1["value_number_unsignedchar1"] == pointer_value_number_unsignedchar1);

			//add json::pointer::Value to object1 with key is "value_number_unsignedint1" and value is variable of pointer_value_number_unsignedint1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_unsignedint1 = object1.Emplace("value_number_unsignedint1", pointer_value_number_unsignedint1);
			//check value between it_object1_emplace_value_number_unsignedint1 and element of object1 with key is "value_number_unsignedint1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_unsignedint1) == object1["value_number_unsignedint1"]);
			//check value between element of object1 with key is "value_number_unsignedint1" and  pointer_value_number_unsignedint1is same
			assert(object1["value_number_unsignedint1"] == pointer_value_number_unsignedint1);

			//add json::pointer::Value to object1 with key is "value_number_unsignedlong1" and value is variable of pointer_value_number_unsignedlong1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_unsignedlong1 = object1.Emplace("value_number_unsignedlong1", pointer_value_number_unsignedlong1);
			//check value between value of it_object1_emplace_value_number_unsignedlong1 and element of object1 with key is "value_number_unsignedlong1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_unsignedlong1) == object1["value_number_unsignedlong1"]);
			//check value between element of object1 with key is "value_number_unsignedlong1" and pointer_value_number_unsignedlong1 is same
			assert(object1["value_number_unsignedlong1"] == pointer_value_number_unsignedlong1);

			//add json::pointer::Value to object1 with key is "value_number_unsignedlonglong1" and value is variable of pointer_value_number_unsignedlonglong1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_unsignedlonglong1 = object1.Emplace("value_number_unsignedlonglong1", pointer_value_number_unsignedlonglong1);
			//check value between value of it_object1_emplace_value_number_unsignedlonglong1 and element of object1 with key is "value_number_unsignedlonglong1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_unsignedlonglong1) == object1["value_number_unsignedlonglong1"]);
			//check value between element of object1 with key is "value_number_unsignedlonglong1" and pointer_value_number_unsignedlonglong1 is same
			assert(object1["value_number_unsignedlonglong1"] == pointer_value_number_unsignedlonglong1);

			//add json::pointer::Value to object1 with key is "value_number_unsignedshort1" and value is variable of pointer_value_number_unsignedshort1
			// and assignment to iterator of object1 
			auto it_object1_emplace_value_number_unsignedshort1 = object1.Emplace("value_number_unsignedshort1", pointer_value_number_unsignedshort1);
			//check value between value of it_object1_emplace_value_number_unsignedshort1 and element of object1 with key is "value_number_unsignedshort1" is same
			assert(json::value::Object::Value(*it_object1_emplace_value_number_unsignedshort1) == object1["value_number_unsignedshort1"]);
			//check value between element of object1 with key is "value_number_unsignedshort1" and pointer_value_number_unsignedshort1 is same
			assert(object1["value_number_unsignedshort1"] == pointer_value_number_unsignedshort1);

			//check range-for is work
			for (auto it : object1)
			{
				assert(json::value::Object::Value(it) == object1[object1.Key(it)]);
			}

			//check range-for is work with const variable of object1
			for (auto it : const_object1)
			{
				assert(json::value::Object::Value(it) == object1[object1.Key(it)]);
			}

			//check ConstBegin and ConstEnd from variable of object1 is work
			for (auto it = object1.ConstBegin(); it != object1.ConstEnd(); ++it)
			{
				assert(json::value::Object::Value(*it) == object1[object1.Key(*it)]);
			}

			//declare default constructor of json::value::Object
			json::value::Object object5;

			//declare json::value::Object::KeyType from assignment const char* = "z_"
			typename json::value::Object::KeyType key = "z_";

			//copy elements of object1 with key added "z_" in beginning
			{
				for (auto it : object1)
				{
					object5[key + object1.Key(it)] = json::value::Object::Value(it);
				}
			}

			//insert to object1 with iterator first and last of object
			object1.Insert(object5.Begin(), object5.End());

			//check value between value of element with key "(name)" and value of element with key "z_(name)" is same
			for (auto it : object1)
			{
				if (!(object1.Key(it)[0] == key[0] && object1.Key(it)[1] == key[1]))
				{
					assert(json::value::Object::Value(it) == object1[key + object1.Key(it)]);
				}
			}

			//insert to object1 with json::value::Array 
			// and assignment to iterator of object1 
			auto it_object_insert_i_value_array2 = object1.Insert(json::value::Object::ElementType("i_value_array2", json::value::Array()));
			//check value of cast value of it_object_insert_i_value_array2 to json::value::Array* is not null
			assert(dynamic_cast<json::value::Array*>(json::value::Object::Value(*it_object_insert_i_value_array2).get()) != 0);

			//erase element with key is "i_value_array2"
			object1.Erase(object1.Find("i_value_array2"));

			//erase elements of object5
			object5.Erase(object5.Begin(), object5.End());
			//check value between size of object5 is zero 
			assert(object5.Size() == 0);

			//swap value from object1 to object2
			object1.Swap(object2);

			//check value between return from Find in object2 with key is value_array1 and pointer_value_array4 is same
			assert(json::value::Object::Value(*object2.Find("value_array1")) == pointer_value_array1);
			//check value between return from Find in object2 with key is value_false1 and pointer_value_false1 is same
			assert(json::value::Object::Value(*object2.Find("value_false1")) == pointer_value_false1);
			//check value between return from Find in object2 with key is value_null1 and pointer_value_null1 is same
			assert(json::value::Object::Value(*object2.Find("value_null1")) == pointer_value_null1);
			//check value between return from Find in object2 with key is value_object4 and pointer_value_object4 is same
			assert(json::value::Object::Value(*object2.Find("value_object4")) == pointer_value_object4);
			//check value between return from Find in object2 with key is value_string1 and pointer_value_string1 is same
			assert(json::value::Object::Value(*object2.Find("value_string1")) == pointer_value_string1);
			//check value between return from Find in object2 with key is value_true1 and pointer_value_true1 is same
			assert(json::value::Object::Value(*object2.Find("value_true1")) == pointer_value_true1);

			//check value between return from Find in object2 with key is value_number_char1 and pointer_value_number_char1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_char1")) == pointer_value_number_char1);
			//check value between return from Find in object2 with key is value_number_double1 and pointer_value_number_double1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_double1")) == pointer_value_number_double1);
			//check value between return from Find in object2 with key is value_number_float1 and pointer_value_number_float1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_float1")) == pointer_value_number_float1);
			//check value between return from Find in object2 with key is value_number_int1 and pointer_value_number_int1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_int1")) == pointer_value_number_int1);
			//check value between return from Find in object2 with key is value_number_long1 and pointer_value_number_long1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_long1")) == pointer_value_number_long1);
			//check value between return from Find in object2 with key is value_number_longdouble1 and pointer_value_number_longdouble1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_longdouble1")) == pointer_value_number_longdouble1);
			//check value between return from Find in object2 with key is value_number_longlong1 and pointer_value_number_longlong1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_longlong1")) == pointer_value_number_longlong1);
			//check value between return from Find in object2 with key is value_number_short1 and pointer_value_number_short1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_short1")) == pointer_value_number_short1);
			//check value between return from Find in object2 with key is value_number_unsignedchar1 and pointer_value_number_unsignedchar1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_unsignedchar1")) == pointer_value_number_unsignedchar1);
			//check value between return from Find in object2 with key is value_number_unsignedint1 and pointer_value_number_unsignedint1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_unsignedint1")) == pointer_value_number_unsignedint1);
			//check value between return from Find in object2 with key is value_number_unsignedlong1 and pointer_value_number_unsignedlong1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_unsignedlong1")) == pointer_value_number_unsignedlong1);
			//check value between return from Find in object2 with key is value_number_unsignedlonglong1 and pointer_value_number_unsignedlonglong1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_unsignedlonglong1")) == pointer_value_number_unsignedlonglong1);
			//check value between return from Find in object2 with key is value_number_unsignedshort1 and pointer_value_number_unsignedshort1 is same
			assert(json::value::Object::Value(*object2.Find("value_number_unsignedshort1")) == pointer_value_number_unsignedshort1);
			//check value between return from Find in object2 with key is "" and End of object2 is same
			assert(object2.Find("") == object2.End());

			//check value between function (or const) member of json::value::Object operator[] and At is same 
			for (auto it : object2)
			{
				assert(object2[object2.Key(it)] == object2.At(object2.Key(it)));
				assert(const_object2[object2.Key(it)] == const_object2.At(object2.Key(it)));
			}
		}

		//copy object1
		json::value::Object object6(object2);

		//assignment from object
		json::value::Object object7 = object6;

		//check value of object2 and object6 and object7 is same
		for (auto it : object2)
		{
			assert(json::value::Object::Value(it) == object6[object2.Key(it)] && json::value::Object::Value(it) == object7[object2.Key(it)]);
		}

		//check type between return type of object2.Container() and json::Constant::ContainerObjectType is same
		assert(typeid(object2.Container()).hash_code() == typeid(json::Constant::ContainerObjectType).hash_code());
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
		json::value::String string3(std::string("string"));
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

	//experiment with json/helper/value/Declare.h
	{
		/*
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
			*/
	}

	//experiment with json/helper/Cast.h
	{
		//experiment with json::value::Array
		{
			//declaration json::value& from assignment value initialization of json::value::Array();
			json::Value&& value_array1 = json::value::Array();

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
			json::Value&& value_false1 = json::value::False();

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
			json::Value&& value_null1 = json::value::Null();

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
			json::Value&& value_object1 = json::value::Object();

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
			json::Value&& value_string1 = json::value::String();

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
			json::Value&& value_true1 = json::value::True();

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
			json::Value&& value_number_char1 = json::value::number::Char();

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
			json::Value&& value_number_double1 = json::value::number::Double();

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
			json::Value&& value_number_float1 = json::value::number::Float();

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
			json::Value&& value_number_int1 = json::value::number::Int();

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
			json::Value&& value_number_long1 = json::value::number::Long();

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
			json::Value&& value_number_longdouble1 = json::value::number::LongDouble();

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
			json::Value&& value_number_longlong1 = json::value::number::LongLong();

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
			json::Value&& value_number_short1 = json::value::number::Short();

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
			json::Value&& value_number_unsignedchar1 = json::value::number::UnsignedChar();

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
			json::Value&& value_number_unsignedint1 = json::value::number::UnsignedInt();

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
			json::Value&& value_number_unsignedlong1 = json::value::number::UnsignedLong();

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
			json::Value&& value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();

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
			json::Value&& value_number_unsignedshort1 = json::value::number::UnsignedShort();

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
	
	//experiment with /json/helper/Value.h
	{
		//check function json::helper::Value::IsArray with /json/value
		{
			//check function json::helper::Value::IsArray with json::value::Array() is true
			assert(json::helper::Value::IsArray(json::value::Array()) == true);
			//check function json::helper::Value::IsArray with json::value::False() is false
			assert(json::helper::Value::IsArray(json::value::False()) == false);
			//check function json::helper::Value::IsArray with json::value::Null() is false
			assert(json::helper::Value::IsArray(json::value::Null()) == false);
			//check function json::helper::Value::IsArray with json::value::Object() is false
			assert(json::helper::Value::IsArray(json::value::Object()) == false);
			//check function json::helper::Value::IsArray with json::value::String() is false
			assert(json::helper::Value::IsArray(json::value::String()) == false);
			//check function json::helper::Value::IsArray with json::value::True() is false
			assert(json::helper::Value::IsArray(json::value::True()) == false);

			//check function json::helper::Value::IsArray with json::value::Char() is false
			assert(json::helper::Value::IsArray(json::value::number::Char()) == false);
			//check function json::helper::Value::IsArray with json::value::Double() is false
			assert(json::helper::Value::IsArray(json::value::number::Double()) == false);
			//check function json::helper::Value::IsArray with json::value::Float() is false
			assert(json::helper::Value::IsArray(json::value::number::Float()) == false);
			//check function json::helper::Value::IsArray with json::value::Int() is false
			assert(json::helper::Value::IsArray(json::value::number::Int()) == false);
			//check function json::helper::Value::IsArray with json::value::Long() is false
			assert(json::helper::Value::IsArray(json::value::number::Long()) == false);
			//check function json::helper::Value::IsArray with json::value::LongDouble() is false
			assert(json::helper::Value::IsArray(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsArray with json::value::LongLong() is false
			assert(json::helper::Value::IsArray(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsArray with json::value::Short() is false
			assert(json::helper::Value::IsArray(json::value::number::Short()) == false);
			//check function json::helper::Value::IsArray with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsArray(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsArray with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsArray(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsArray with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsArray(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsArray with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsArray(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsArray with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsArray(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsFalse with /json/value
		{
			//check function json::helper::Value::IsFalse with json::value::Array() is false
			assert(json::helper::Value::IsFalse(json::value::Array()) == false);
			//check function json::helper::Value::IsFalse with json::value::False() is true
			assert(json::helper::Value::IsFalse(json::value::False()) == true);
			//check function json::helper::Value::IsFalse with json::value::Null() is false
			assert(json::helper::Value::IsFalse(json::value::Null()) == false);
			//check function json::helper::Value::IsFalse with json::value::Object() is false
			assert(json::helper::Value::IsFalse(json::value::Object()) == false);
			//check function json::helper::Value::IsFalse with json::value::String() is false
			assert(json::helper::Value::IsFalse(json::value::String()) == false);
			//check function json::helper::Value::IsFalse with json::value::True() is false
			assert(json::helper::Value::IsFalse(json::value::True()) == false);

			//check function json::helper::Value::IsFalse with json::value::Char() is false
			assert(json::helper::Value::IsFalse(json::value::number::Char()) == false);
			//check function json::helper::Value::IsFalse with json::value::Double() is false
			assert(json::helper::Value::IsFalse(json::value::number::Double()) == false);
			//check function json::helper::Value::IsFalse with json::value::Float() is false
			assert(json::helper::Value::IsFalse(json::value::number::Float()) == false);
			//check function json::helper::Value::IsFalse with json::value::Int() is false
			assert(json::helper::Value::IsFalse(json::value::number::Int()) == false);
			//check function json::helper::Value::IsFalse with json::value::Long() is false
			assert(json::helper::Value::IsFalse(json::value::number::Long()) == false);
			//check function json::helper::Value::IsFalse with json::value::LongDouble() is false
			assert(json::helper::Value::IsFalse(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsFalse with json::value::LongLong() is false
			assert(json::helper::Value::IsFalse(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsFalse with json::value::Short() is false
			assert(json::helper::Value::IsFalse(json::value::number::Short()) == false);
			//check function json::helper::Value::IsFalse with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsFalse(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsFalse with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsFalse(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsFalse with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsFalse(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsFalse with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsFalse(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsFalse with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsFalse(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNull with /json/value
		{
			//check function json::helper::Value::IsNull with json::value::Array() is false
			assert(json::helper::Value::IsNull(json::value::Array()) == false);
			//check function json::helper::Value::IsNull with json::value::False() is false
			assert(json::helper::Value::IsNull(json::value::False()) == false);
			//check function json::helper::Value::IsNull with json::value::Null() is true
			assert(json::helper::Value::IsNull(json::value::Null()) == true);
			//check function json::helper::Value::IsNull with json::value::Object() is false
			assert(json::helper::Value::IsNull(json::value::Object()) == false);
			//check function json::helper::Value::IsNull with json::value::String() is false
			assert(json::helper::Value::IsNull(json::value::String()) == false);
			//check function json::helper::Value::IsNull with json::value::True() is false
			assert(json::helper::Value::IsNull(json::value::True()) == false);

			//check function json::helper::Value::IsNull with json::value::Char() is false
			assert(json::helper::Value::IsNull(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNull with json::value::Double() is false
			assert(json::helper::Value::IsNull(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNull with json::value::Float() is false
			assert(json::helper::Value::IsNull(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNull with json::value::Int() is false
			assert(json::helper::Value::IsNull(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNull with json::value::Long() is false
			assert(json::helper::Value::IsNull(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNull with json::value::LongDouble() is false
			assert(json::helper::Value::IsNull(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNull with json::value::LongLong() is false
			assert(json::helper::Value::IsNull(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNull with json::value::Short() is false
			assert(json::helper::Value::IsNull(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNull with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNull(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNull with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNull(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNull with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNull(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNull with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNull(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNull with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNull(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumber with /json/value
		{
			//check function json::helper::Value::IsNumber with json::value::Array() is false
			assert(json::helper::Value::IsNumber(json::value::Array()) == false);
			//check function json::helper::Value::IsNumber with json::value::False() is false
			assert(json::helper::Value::IsNumber(json::value::False()) == false);
			//check function json::helper::Value::IsNumber with json::value::Null() is false
			assert(json::helper::Value::IsNumber(json::value::Null()) == false);
			//check function json::helper::Value::IsNumber with json::value::Object() is false
			assert(json::helper::Value::IsNumber(json::value::Object()) == false);
			//check function json::helper::Value::IsNumber with json::value::String() is false
			assert(json::helper::Value::IsNumber(json::value::String()) == false);
			//check function json::helper::Value::IsNumber with json::value::True() is false
			assert(json::helper::Value::IsNumber(json::value::True()) == false);

			//check function json::helper::Value::IsNumber with json::value::Char() is true
			assert(json::helper::Value::IsNumber(json::value::number::Char()) == true);
			//check function json::helper::Value::IsNumber with json::value::Double() is true
			assert(json::helper::Value::IsNumber(json::value::number::Double()) == true);
			//check function json::helper::Value::IsNumber with json::value::Float() is true
			assert(json::helper::Value::IsNumber(json::value::number::Float()) == true);
			//check function json::helper::Value::IsNumber with json::value::Int() is true
			assert(json::helper::Value::IsNumber(json::value::number::Int()) == true);
			//check function json::helper::Value::IsNumber with json::value::Long() is true
			assert(json::helper::Value::IsNumber(json::value::number::Long()) == true);
			//check function json::helper::Value::IsNumber with json::value::LongDouble() is true
			assert(json::helper::Value::IsNumber(json::value::number::LongDouble()) == true);
			//check function json::helper::Value::IsNumber with json::value::LongLong() is true
			assert(json::helper::Value::IsNumber(json::value::number::LongLong()) == true);
			//check function json::helper::Value::IsNumber with json::value::Short() is true
			assert(json::helper::Value::IsNumber(json::value::number::Short()) == true);
			//check function json::helper::Value::IsNumber with json::value::UnsignedChar() is true
			assert(json::helper::Value::IsNumber(json::value::number::UnsignedChar()) == true);
			//check function json::helper::Value::IsNumber with json::value::UnsignedInt() is true
			assert(json::helper::Value::IsNumber(json::value::number::UnsignedInt()) == true);
			//check function json::helper::Value::IsNumber with json::value::UnsignedLong() is true
			assert(json::helper::Value::IsNumber(json::value::number::UnsignedLong()) == true);
			//check function json::helper::Value::IsNumber with json::value::UnsignedLongLong() is true
			assert(json::helper::Value::IsNumber(json::value::number::UnsignedLongLong()) == true);
			//check function json::helper::Value::IsNumber with json::value::UnsignedShort() is true
			assert(json::helper::Value::IsNumber(json::value::number::UnsignedShort()) == true);
		}

		//check function json::helper::Value::IsObject with /json/value
		{
			//check function json::helper::Value::IsObject with json::value::Array() is false
			assert(json::helper::Value::IsObject(json::value::Array()) == false);
			//check function json::helper::Value::IsObject with json::value::False() is false
			assert(json::helper::Value::IsObject(json::value::False()) == false);
			//check function json::helper::Value::IsObject with json::value::Null() is false
			assert(json::helper::Value::IsObject(json::value::Null()) == false);
			//check function json::helper::Value::IsObject with json::value::Object() is true
			assert(json::helper::Value::IsObject(json::value::Object()) == true);
			//check function json::helper::Value::IsObject with json::value::String() is false
			assert(json::helper::Value::IsObject(json::value::String()) == false);
			//check function json::helper::Value::IsObject with json::value::True() is false
			assert(json::helper::Value::IsObject(json::value::True()) == false);

			//check function json::helper::Value::IsObject with json::value::Char() is false
			assert(json::helper::Value::IsObject(json::value::number::Char()) == false);
			//check function json::helper::Value::IsObject with json::value::Double() is false
			assert(json::helper::Value::IsObject(json::value::number::Double()) == false);
			//check function json::helper::Value::IsObject with json::value::Float() is false
			assert(json::helper::Value::IsObject(json::value::number::Float()) == false);
			//check function json::helper::Value::IsObject with json::value::Int() is false
			assert(json::helper::Value::IsObject(json::value::number::Int()) == false);
			//check function json::helper::Value::IsObject with json::value::Long() is false
			assert(json::helper::Value::IsObject(json::value::number::Long()) == false);
			//check function json::helper::Value::IsObject with json::value::LongDouble() is false
			assert(json::helper::Value::IsObject(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsObject with json::value::LongLong() is false
			assert(json::helper::Value::IsObject(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsObject with json::value::Short() is false
			assert(json::helper::Value::IsObject(json::value::number::Short()) == false);
			//check function json::helper::Value::IsObject with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsObject(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsObject with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsObject(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsObject with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsObject(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsObject with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsObject(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsObject with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsObject(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsString with /json/value
		{
			//check function json::helper::Value::IsString with json::value::Array() is false
			assert(json::helper::Value::IsString(json::value::Array()) == false);
			//check function json::helper::Value::IsString with json::value::False() is false
			assert(json::helper::Value::IsString(json::value::False()) == false);
			//check function json::helper::Value::IsString with json::value::Null() is false
			assert(json::helper::Value::IsString(json::value::Null()) == false);
			//check function json::helper::Value::IsString with json::value::Object() is false
			assert(json::helper::Value::IsString(json::value::Object()) == false);
			//check function json::helper::Value::IsString with json::value::String() is true
			assert(json::helper::Value::IsString(json::value::String()) == true);
			//check function json::helper::Value::IsString with json::value::True() is false
			assert(json::helper::Value::IsString(json::value::True()) == false);

			//check function json::helper::Value::IsString with json::value::Char() is false
			assert(json::helper::Value::IsString(json::value::number::Char()) == false);
			//check function json::helper::Value::IsString with json::value::Double() is false
			assert(json::helper::Value::IsString(json::value::number::Double()) == false);
			//check function json::helper::Value::IsString with json::value::Float() is false
			assert(json::helper::Value::IsString(json::value::number::Float()) == false);
			//check function json::helper::Value::IsString with json::value::Int() is false
			assert(json::helper::Value::IsString(json::value::number::Int()) == false);
			//check function json::helper::Value::IsString with json::value::Long() is false
			assert(json::helper::Value::IsString(json::value::number::Long()) == false);
			//check function json::helper::Value::IsString with json::value::LongDouble() is false
			assert(json::helper::Value::IsString(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsString with json::value::LongLong() is false
			assert(json::helper::Value::IsString(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsString with json::value::Short() is false
			assert(json::helper::Value::IsString(json::value::number::Short()) == false);
			//check function json::helper::Value::IsString with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsString(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsString with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsString(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsString with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsString(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsString with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsString(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsString with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsString(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsTrue with /json/value
		{
			//check function json::helper::Value::IsTrue with json::value::Array() is false
			assert(json::helper::Value::IsTrue(json::value::Array()) == false);
			//check function json::helper::Value::IsTrue with json::value::False() is false
			assert(json::helper::Value::IsTrue(json::value::False()) == false);
			//check function json::helper::Value::IsTrue with json::value::Null() is false
			assert(json::helper::Value::IsTrue(json::value::Null()) == false);
			//check function json::helper::Value::IsTrue with json::value::Object() is false
			assert(json::helper::Value::IsTrue(json::value::Object()) == false);
			//check function json::helper::Value::IsTrue with json::value::String() is false
			assert(json::helper::Value::IsTrue(json::value::String()) == false);
			//check function json::helper::Value::IsTrue with json::value::True() is true
			assert(json::helper::Value::IsTrue(json::value::True()) == true);

			//check function json::helper::Value::IsTrue with json::value::Char() is false
			assert(json::helper::Value::IsTrue(json::value::number::Char()) == false);
			//check function json::helper::Value::IsTrue with json::value::Double() is false
			assert(json::helper::Value::IsTrue(json::value::number::Double()) == false);
			//check function json::helper::Value::IsTrue with json::value::Float() is false
			assert(json::helper::Value::IsTrue(json::value::number::Float()) == false);
			//check function json::helper::Value::IsTrue with json::value::Int() is false
			assert(json::helper::Value::IsTrue(json::value::number::Int()) == false);
			//check function json::helper::Value::IsTrue with json::value::Long() is false
			assert(json::helper::Value::IsTrue(json::value::number::Long()) == false);
			//check function json::helper::Value::IsTrue with json::value::LongDouble() is false
			assert(json::helper::Value::IsTrue(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsTrue with json::value::LongLong() is false
			assert(json::helper::Value::IsTrue(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsTrue with json::value::Short() is false
			assert(json::helper::Value::IsTrue(json::value::number::Short()) == false);
			//check function json::helper::Value::IsTrue with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsTrue(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsTrue with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsTrue(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsTrue with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsTrue(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsTrue with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsTrue(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsTrue with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsTrue(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberChar with /json/value
		{
			//check function json::helper::Value::IsNumberChar with json::value::Array() is false
			assert(json::helper::Value::IsNumberChar(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::False() is false
			assert(json::helper::Value::IsNumberChar(json::value::False()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Null() is false
			assert(json::helper::Value::IsNumberChar(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Object() is false
			assert(json::helper::Value::IsNumberChar(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::String() is false
			assert(json::helper::Value::IsNumberChar(json::value::String()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::True() is false
			assert(json::helper::Value::IsNumberChar(json::value::True()) == false);

			//check function json::helper::Value::IsNumberChar with json::value::Char() is true
			assert(json::helper::Value::IsNumberChar(json::value::number::Char()) == true);
			//check function json::helper::Value::IsNumberChar with json::value::Double() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Float() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Int() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Long() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::Short() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberChar with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberChar(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberDouble with /json/value
		{
			//check function json::helper::Value::IsNumberDouble with json::value::Array() is false
			assert(json::helper::Value::IsNumberDouble(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::False() is false
			assert(json::helper::Value::IsNumberDouble(json::value::False()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Null() is false
			assert(json::helper::Value::IsNumberDouble(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Object() is false
			assert(json::helper::Value::IsNumberDouble(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::String() is false
			assert(json::helper::Value::IsNumberDouble(json::value::String()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::True() is false
			assert(json::helper::Value::IsNumberDouble(json::value::True()) == false);

			//check function json::helper::Value::IsNumberDouble with json::value::Char() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Double() is true
			assert(json::helper::Value::IsNumberDouble(json::value::number::Double()) == true);
			//check function json::helper::Value::IsNumberDouble with json::value::Float() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Int() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Long() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::Short() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberDouble with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberDouble(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberFloat with /json/value
		{
			//check function json::helper::Value::IsNumberFloat with json::value::Array() is false
			assert(json::helper::Value::IsNumberFloat(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::False() is false
			assert(json::helper::Value::IsNumberFloat(json::value::False()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Null() is false
			assert(json::helper::Value::IsNumberFloat(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Object() is false
			assert(json::helper::Value::IsNumberFloat(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::String() is false
			assert(json::helper::Value::IsNumberFloat(json::value::String()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::True() is false
			assert(json::helper::Value::IsNumberFloat(json::value::True()) == false);

			//check function json::helper::Value::IsNumberFloat with json::value::Char() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Double() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Float() is true
			assert(json::helper::Value::IsNumberFloat(json::value::number::Float()) == true);
			//check function json::helper::Value::IsNumberFloat with json::value::Int() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Long() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::Short() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberFloat with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberFloat(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberInt with /json/value
		{
			//check function json::helper::Value::IsNumberInt with json::value::Array() is false
			assert(json::helper::Value::IsNumberInt(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::False() is false
			assert(json::helper::Value::IsNumberInt(json::value::False()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Null() is false
			assert(json::helper::Value::IsNumberInt(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Object() is false
			assert(json::helper::Value::IsNumberInt(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::String() is false
			assert(json::helper::Value::IsNumberInt(json::value::String()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::True() is false
			assert(json::helper::Value::IsNumberInt(json::value::True()) == false);

			//check function json::helper::Value::IsNumberInt with json::value::Char() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Double() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Float() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Int() is true
			assert(json::helper::Value::IsNumberInt(json::value::number::Int()) == true);
			//check function json::helper::Value::IsNumberInt with json::value::Long() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::Short() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberInt with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberInt(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberLong with /json/value
		{
			//check function json::helper::Value::IsNumberLong with json::value::Array() is false
			assert(json::helper::Value::IsNumberLong(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::False() is false
			assert(json::helper::Value::IsNumberLong(json::value::False()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Null() is false
			assert(json::helper::Value::IsNumberLong(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Object() is false
			assert(json::helper::Value::IsNumberLong(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::String() is false
			assert(json::helper::Value::IsNumberLong(json::value::String()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::True() is false
			assert(json::helper::Value::IsNumberLong(json::value::True()) == false);

			//check function json::helper::Value::IsNumberLong with json::value::Char() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Double() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Float() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Int() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Long() is true
			assert(json::helper::Value::IsNumberLong(json::value::number::Long()) == true);
			//check function json::helper::Value::IsNumberLong with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::Short() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberLong with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberLong(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberLongDouble with /json/value
		{
			//check function json::helper::Value::IsNumberLongDouble with json::value::Array() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::False() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::False()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Null() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Object() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::String() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::String()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::True() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::True()) == false);

			//check function json::helper::Value::IsNumberLongDouble with json::value::Char() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Double() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Float() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Int() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Long() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::LongDouble() is true
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::LongDouble()) == true);
			//check function json::helper::Value::IsNumberLongDouble with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::Short() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberLongDouble with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberLongDouble(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberLongLong with /json/value
		{
			//check function json::helper::Value::IsNumberLongLong with json::value::Array() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::False() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::False()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Null() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Object() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::String() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::String()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::True() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::True()) == false);

			//check function json::helper::Value::IsNumberLongLong with json::value::Char() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Double() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Float() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Int() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::Long() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::LongLong() is true
			assert(json::helper::Value::IsNumberLongLong(json::value::number::LongLong()) == true);
			//check function json::helper::Value::IsNumberLongLong with json::value::Short() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberLongLong with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberLongLong(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberShort with /json/value
		{
			//check function json::helper::Value::IsNumberShort with json::value::Array() is false
			assert(json::helper::Value::IsNumberShort(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::False() is false
			assert(json::helper::Value::IsNumberShort(json::value::False()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Null() is false
			assert(json::helper::Value::IsNumberShort(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Object() is false
			assert(json::helper::Value::IsNumberShort(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::String() is false
			assert(json::helper::Value::IsNumberShort(json::value::String()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::True() is false
			assert(json::helper::Value::IsNumberShort(json::value::True()) == false);

			//check function json::helper::Value::IsNumberShort with json::value::Char() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Double() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Float() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Int() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Long() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::Short() is true
			assert(json::helper::Value::IsNumberShort(json::value::number::Short()) == true);
			//check function json::helper::Value::IsNumberShort with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberShort with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberShort(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberUnsignedChar with /json/value
		{
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Array() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::False() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::False()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Null() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Object() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::String() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::String()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::True() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::True()) == false);

			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Char() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Double() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Float() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Int() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Long() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::Short() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::UnsignedChar() is true
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::UnsignedChar()) == true);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedChar with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberUnsignedChar(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberUnsignedInt with /json/value
		{
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Array() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::False() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::False()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Null() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Object() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::String() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::String()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::True() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::True()) == false);

			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Char() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Double() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Float() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Int() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Long() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::Short() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::UnsignedInt() is true
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::UnsignedInt()) == true);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedInt with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberUnsignedInt(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberUnsignedLong with /json/value
		{
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Array() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::False() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::False()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Null() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Object() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::String() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::String()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::True() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::True()) == false);

			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Char() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Double() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Float() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Int() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Long() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::Short() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::UnsignedLong() is true
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::UnsignedLong()) == true);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedLong with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberUnsignedLong(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberUnsignedLongLong with /json/value
		{
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Array() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::False() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::False()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Null() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Object() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::String() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::String()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::True() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::True()) == false);

			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Char() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Double() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Float() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Int() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Long() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::Short() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::UnsignedLongLong() is true
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::UnsignedLongLong()) == true);
			//check function json::helper::Value::IsNumberUnsignedLongLong with json::value::UnsignedShort() is false
			assert(json::helper::Value::IsNumberUnsignedLongLong(json::value::number::UnsignedShort()) == false);
		}

		//check function json::helper::Value::IsNumberUnsignedShort with /json/value
		{
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Array() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::Array()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::False() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::False()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Null() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::Null()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Object() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::Object()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::String() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::String()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::True() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::True()) == false);

			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Char() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Char()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Double() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Double()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Float() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Float()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Int() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Int()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Long() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Long()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::LongDouble() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::LongDouble()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::LongLong() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::LongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::Short() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::Short()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::UnsignedChar() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::UnsignedChar()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::UnsignedInt() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::UnsignedInt()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::UnsignedLong() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::UnsignedLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::UnsignedLongLong() is false
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::UnsignedLongLong()) == false);
			//check function json::helper::Value::IsNumberUnsignedShort with json::value::UnsignedShort() is true
			assert(json::helper::Value::IsNumberUnsignedShort(json::value::number::UnsignedShort()) == true);
		}
	}

	//experiment with /json/helper/Tag.h
	{
		//check static function json::helper::Tag::IsValue with json::helper::Enum
		{
			//check static function json::helper::Tag::IsValue with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsValue(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_array is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_array) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_false is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_false) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_null is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_null) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_object is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_object) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_string is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_string) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_true is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_true) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_char is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_char) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_double is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_double) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_float is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_float) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_int is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_int) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_long is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_long) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_longdouble is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_longdouble) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_longlong is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_longlong) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_short is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_short) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_unsignedchar is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_unsignedchar) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_unsignedint is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_unsignedint) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_unsignedlong is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_unsignedlong) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_unsignedlonglong is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_unsignedlonglong) == true);
			//check static function json::helper::Tag::IsValue with json::helper::Enum::value_number_unsignedshort is true
			assert(json::helper::Tag::IsValue(json::helper::Enum::value_number_unsignedshort) == true);
		}

		//check static function json::helper::Tag::IsValueNumber with json::helper::Enum
		{
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_array is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_array) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_false is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_false) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_null is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_null) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_object is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_object) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_string is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_string) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_true is false
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_true) == false);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_char is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_char) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_double is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_double) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_float is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_float) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_int is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_int) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_long is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_long) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_longdouble is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_longdouble) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_longlong is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_longlong) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_short is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_short) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_unsignedchar is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_unsignedchar) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_unsignedint is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_unsignedint) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_unsignedlong is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_unsignedlong) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_unsignedlonglong is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_unsignedlonglong) == true);
			//check static function json::helper::Tag::IsValueNumber with json::helper::Enum::value_number_unsignedshort is true
			assert(json::helper::Tag::IsValueNumber(json::helper::Enum::value_number_unsignedshort) == true);
		}

		//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum
		{
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_array is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_array) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_false is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_false) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_null is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_null) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_object is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_object) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_string is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_string) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_true is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_true) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_char is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_char) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_double is true
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_double) == true);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_float is true
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_float) == true);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_int is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_int) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_long is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_long) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_longdouble is true
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_longdouble) == true);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_longlong is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_longlong) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_short is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_short) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_unsignedchar is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_unsignedchar) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_unsignedint is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_unsignedint) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_unsignedlong is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_unsignedlong) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_unsignedlonglong is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_unsignedlonglong) == false);
			//check static function json::helper::Tag::IsFloatingPoint with json::helper::Enum::value_number_unsignedshort is false
			assert(json::helper::Tag::IsFloatingPoint(json::helper::Enum::value_number_unsignedshort) == false);
		}

		//check static function json::helper::Tag::IsInteger with json::helper::Enum
		{
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_array is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_array) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_false is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_false) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_null is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_null) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_object is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_object) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_string is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_string) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_true is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_true) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_char is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_char) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_double is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_double) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_float is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_float) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_int is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_int) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_long is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_long) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_longdouble is false
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_longdouble) == false);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_longlong is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_longlong) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_short is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_short) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_unsignedchar is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_unsignedchar) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_unsignedint is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_unsignedint) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_unsignedlong is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_unsignedlong) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_unsignedlonglong is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_unsignedlonglong) == true);
			//check static function json::helper::Tag::IsInteger with json::helper::Enum::value_number_unsignedshort is true
			assert(json::helper::Tag::IsInteger(json::helper::Enum::value_number_unsignedshort) == true);
		}

		//check static function json::helper::Tag::IsSigned with json::helper::Enum
		{
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_array is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_array) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_false is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_false) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_null is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_null) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_object is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_object) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_string is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_string) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_true is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_true) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_char is true
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_char) == true);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_double is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_double) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_float is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_float) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_int is true
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_int) == true);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_long is true
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_long) == true);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_longdouble is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_longdouble) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_longlong is true
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_longlong) == true);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_short is true
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_short) == true);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_unsignedchar is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_unsignedchar) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_unsignedint is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_unsignedint) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_unsignedlong is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_unsignedlong) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_unsignedlonglong is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_unsignedlonglong) == false);
			//check static function json::helper::Tag::IsSigned with json::helper::Enum::value_number_unsignedshort is false
			assert(json::helper::Tag::IsSigned(json::helper::Enum::value_number_unsignedshort) == false);
		}

		//check static function json::helper::Tag::IsUnsigned with json::helper::Enum
		{
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::undefined is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::undefined) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_array is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_array) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_false is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_false) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_null is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_null) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_object is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_object) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_string is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_string) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_true is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_true) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_char is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_char) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_double is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_double) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_float is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_float) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_int is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_int) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_long is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_long) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_longdouble is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_longdouble) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_longlong is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_longlong) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_short is false
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_short) == false);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_unsignedchar is true
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_unsignedchar) == true);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_unsignedint is true
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_unsignedint) == true);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_unsignedlong is true
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_unsignedlong) == true);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_unsignedlonglong is true
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_unsignedlonglong) == true);
			//check static function json::helper::Tag::IsUnsigned with json::helper::Enum::value_number_unsignedshort is true
			assert(json::helper::Tag::IsUnsigned(json::helper::Enum::value_number_unsignedshort) == true);
		}

		//check between default constructor of json/helper/tag and json::helper::Enum is same
		{
			//check between json::helper::tag::Array and json::helper::Enum::value_array is same
			assert(json::helper::tag::Array() == json::helper::Enum::value_array);
			//check between json::helper::tag::False and json::helper::Enum::value_false is same
			assert(json::helper::tag::False() == json::helper::Enum::value_false);
			//check between json::helper::tag::Null and json::helper::Enum::value_null is same
			assert(json::helper::tag::Null() == json::helper::Enum::value_null);
			//check between json::helper::tag::Number and json::helper::Enum::value_number is same
			assert(json::helper::tag::Number() == json::helper::Enum::value_number);
			//check between json::helper::tag::Object and json::helper::Enum::value_object is same
			assert(json::helper::tag::Object() == json::helper::Enum::value_object);
			//check between json::helper::tag::String and json::helper::Enum::value_string is same
			assert(json::helper::tag::String() == json::helper::Enum::value_string);
			//check between json::helper::tag::True and json::helper::Enum::value_true is same
			assert(json::helper::tag::True() == json::helper::Enum::value_true);

			//check between json::helper::tag::number::Char and json::helper::Enum::value_number_char is same
			assert(json::helper::tag::number::Char() == json::helper::Enum::value_number_char);
			//check between json::helper::tag::number::Double and json::helper::Enum::value_number_double is same
			assert(json::helper::tag::number::Double() == json::helper::Enum::value_number_double);
			//check between json::helper::tag::number::Float and json::helper::Enum::value_number_float is same
			assert(json::helper::tag::number::Float() == json::helper::Enum::value_number_float);
			//check between json::helper::tag::number::Int and json::helper::Enum::value_number_int is same
			assert(json::helper::tag::number::Int() == json::helper::Enum::value_number_int);
			//check between json::helper::tag::number::Long and json::helper::Enum::value_number_long is same
			assert(json::helper::tag::number::Long() == json::helper::Enum::value_number_long);
			//check between json::helper::tag::number::LongDouble and json::helper::Enum::value_number_longdouble is same
			assert(json::helper::tag::number::LongDouble() == json::helper::Enum::value_number_longdouble);
			//check between json::helper::tag::number::LongLong and json::helper::Enum::value_number_longlong is same
			assert(json::helper::tag::number::LongLong() == json::helper::Enum::value_number_longlong);
			//check between json::helper::tag::number::Short and json::helper::Enum::value_number_short is same
			assert(json::helper::tag::number::Short() == json::helper::Enum::value_number_short);
			//check between json::helper::tag::number::UnsignedChar and json::helper::Enum::value_number_unsignedchar is same
			assert(json::helper::tag::number::UnsignedChar() == json::helper::Enum::value_number_unsignedchar);
			//check between json::helper::tag::number::UnsignedInt and json::helper::Enum::value_number_unsignedint is same
			assert(json::helper::tag::number::UnsignedInt() == json::helper::Enum::value_number_unsignedint);
			//check between json::helper::tag::number::UnsignedLong and json::helper::Enum::value_number_unsignedlong is same
			assert(json::helper::tag::number::UnsignedLong() == json::helper::Enum::value_number_unsignedlong);
			//check between json::helper::tag::number::UnsignedLongLong and json::helper::Enum::value_number_unsignedlonglong is same
			assert(json::helper::tag::number::UnsignedLongLong() == json::helper::Enum::value_number_unsignedlonglong);
			//check between json::helper::tag::number::UnsignedShort and json::helper::Enum::value_number_unsignedshort is same
			assert(json::helper::tag::number::UnsignedShort() == json::helper::Enum::value_number_unsignedshort);
		}

		//declare json::helper::Tag with assignment json::helper::Enum
		{
			//declare json::helper::Tag with assignment from json::helper::Enum::value_array
			json::helper::Tag tag_array1 = json::helper::Enum::value_array;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_array1 = tag_array1;
			//check between tag_array1 and json::helper::Enum::value_array is same
			assert(tag_array1 == json::helper::Enum::value_array);
			//check between enum_array1 and json::helper::Enum::value_array is same
			assert(enum_array1 == json::helper::Enum::value_array);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_false
			json::helper::Tag tag_false1 = json::helper::Enum::value_false;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_false1 = tag_false1;
			//check between tag_false1 and json::helper::Enum::value_false is same
			assert(tag_false1 == json::helper::Enum::value_false);
			//check between enum_false1 and json::helper::Enum::value_false is same
			assert(enum_false1 == json::helper::Enum::value_false);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_null
			json::helper::Tag tag_null1 = json::helper::Enum::value_null;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_null1 = tag_null1;
			//check between tag_null1 and json::helper::Enum::value_null is same
			assert(tag_null1 == json::helper::Enum::value_null);
			//check between enum_null1 and json::helper::Enum::value_null is same
			assert(enum_null1 == json::helper::Enum::value_null);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number
			json::helper::Tag tag_number1 = json::helper::Enum::value_number;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number1 = tag_number1;
			//check between  and json::helper::Enum::value_number is same
			assert(tag_number1  == json::helper::Enum::value_number);
			//check between enum_number1 and json::helper::Enum::value_number is same
			assert(enum_number1 == json::helper::Enum::value_number);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_object
			json::helper::Tag tag_object1 = json::helper::Enum::value_object;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_object1 = tag_object1;
			//check between tag_object1 and json::helper::Enum::value_object is same
			assert(tag_object1 == json::helper::Enum::value_object);
			//check between enum_object1 and json::helper::Enum::value_object is same
			assert(enum_object1 == json::helper::Enum::value_object);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_string
			json::helper::Tag tag_string1 = json::helper::Enum::value_string;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_string1 = tag_string1;
			//check between tag_string1 and json::helper::Enum::value_string is same
			assert(tag_string1 == json::helper::Enum::value_string);
			//check between enum_string1 and json::helper::Enum::value_string is same
			assert(enum_string1 == json::helper::Enum::value_string);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_true
			json::helper::Tag tag_true1 = json::helper::Enum::value_true;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_true1 = tag_true1;
			//check between tag_true1 and json::helper::Enum::value_true is same
			assert(tag_true1 == json::helper::Enum::value_true);
			//check between enum_true1 and json::helper::Enum::value_true is same
			assert(enum_true1 == json::helper::Enum::value_true);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_char
			json::helper::Tag tag_number_char1 = json::helper::Enum::value_number_char;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_char1 = tag_number_char1;
			//check between tag_number_char1 and json::helper::Enum::value_number_char is same
			assert(tag_number_char1 == json::helper::Enum::value_number_char);
			//check between enum_number_char1 and json::helper::Enum::value_number_char is same
			assert(enum_number_char1 == json::helper::Enum::value_number_char);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_double
			json::helper::Tag tag_number_double1 = json::helper::Enum::value_number_double;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_double1 = tag_number_double1;
			//check between tag_number_double1 and json::helper::Enum::value_number_double is same
			assert(tag_number_double1 == json::helper::Enum::value_number_double);
			//check between enum_number_double1 and json::helper::Enum::value_number_double is same
			assert(enum_number_double1 == json::helper::Enum::value_number_double);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_float
			json::helper::Tag tag_number_float1 = json::helper::Enum::value_number_float;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_float1 = tag_number_float1;
			//check between tag_number_float1 and json::helper::Enum::value_number_float is same
			assert(tag_number_float1 == json::helper::Enum::value_number_float);
			//check between enum_number_float1 and json::helper::Enum::value_number_float is same
			assert(enum_number_float1 == json::helper::Enum::value_number_float);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_int
			json::helper::Tag tag_number_int1 = json::helper::Enum::value_number_int;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_int1 = tag_number_int1;
			//check between tag_number_int1 and json::helper::Enum::value_number_int is same
			assert(tag_number_int1 == json::helper::Enum::value_number_int);
			//check between enum_number_int1 and json::helper::Enum::value_number_int is same
			assert(enum_number_int1 == json::helper::Enum::value_number_int);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_long
			json::helper::Tag tag_number_long1 = json::helper::Enum::value_number_long;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_long1 = tag_number_long1;
			//check between tag_number_long1 and json::helper::Enum::value_number_long is same
			assert(tag_number_long1 == json::helper::Enum::value_number_long);
			//check between enum_number_long1 and json::helper::Enum::value_number_long is same
			assert(enum_number_long1 == json::helper::Enum::value_number_long);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_longdouble
			json::helper::Tag tag_number_longdouble1 = json::helper::Enum::value_number_longdouble;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_longdouble1 = tag_number_longdouble1;
			//check between tag_number_longdouble1 and json::helper::Enum::value_number_longdouble is same
			assert(tag_number_longdouble1 == json::helper::Enum::value_number_longdouble);
			//check betweenenum_number_longdouble1  and json::helper::Enum::value_number_longdouble is same
			assert(enum_number_longdouble1 == json::helper::Enum::value_number_longdouble);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_longlong
			json::helper::Tag tag_number_longlong1 = json::helper::Enum::value_number_longlong;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_longlong1 = tag_number_longlong1;
			//check between tag_number_longlong1 and json::helper::Enum::value_number_longlong is same
			assert(tag_number_longlong1 == json::helper::Enum::value_number_longlong);
			//check between enum_number_longlong1 and json::helper::Enum::value_number_longlong is same
			assert(enum_number_longlong1 == json::helper::Enum::value_number_longlong);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_short
			json::helper::Tag tag_number_short1 = json::helper::Enum::value_number_short;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_short1 = tag_number_short1;
			//check between tag_number_short1 and json::helper::Enum::value_number_short is same
			assert(tag_number_short1 == json::helper::Enum::value_number_short);
			//check between enum_number_short1 and json::helper::Enum::value_number_short is same
			assert(enum_number_short1 == json::helper::Enum::value_number_short);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_unsignedchar
			json::helper::Tag tag_number_unsignedchar1 = json::helper::Enum::value_number_unsignedchar;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_unsignedchar1 = tag_number_unsignedchar1;
			//check between tag_number_unsignedchar1 and json::helper::Enum::value_number_unsignedchar is same
			assert(tag_number_unsignedchar1 == json::helper::Enum::value_number_unsignedchar);
			//check between enum_number_unsignedchar1 and json::helper::Enum:value_number_unsignedchar: is same
			assert(enum_number_unsignedchar1 == json::helper::Enum::value_number_unsignedchar);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_unsignedint
			json::helper::Tag tag_number_unsignedint1 = json::helper::Enum::value_number_unsignedint;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_unsignedint1 = tag_number_unsignedint1;
			//check between tag_number_unsignedint1 and json::helper::Enum::value_number_unsignedint is same
			assert(tag_number_unsignedint1 == json::helper::Enum::value_number_unsignedint);
			//check between enum_number_unsignedint1 and json::helper::Enum::value_number_unsignedint is same
			assert(enum_number_unsignedint1 == json::helper::Enum::value_number_unsignedint);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_unsignedlong
			json::helper::Tag tag_number_unsignedlong1 = json::helper::Enum::value_number_unsignedlong;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_unsignedlong1 = tag_number_unsignedlong1;
			//check between tag_number_unsignedlong1 and json::helper::Enum::value_number_unsignedlong is same
			assert(tag_number_unsignedlong1 == json::helper::Enum::value_number_unsignedlong);
			//check between enum_number_unsignedlong1 and json::helper::Enum::value_number_unsignedlong is same
			assert(enum_number_unsignedlong1 == json::helper::Enum::value_number_unsignedlong);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_unsignedlonglong
			json::helper::Tag tag_number_unsignedlonglong1 = json::helper::Enum::value_number_unsignedlonglong;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_unsignedlonglong1 = tag_number_unsignedlonglong1;
			//check between tag_number_unsignedlonglong1 and json::helper::Enum::value_number_unsignedlonglong is same
			assert(tag_number_unsignedlonglong1 == json::helper::Enum::value_number_unsignedlonglong);
			//check between enum_number_unsignedlonglong1 and json::helper::Enum::value_number_unsignedlonglong is same
			assert(enum_number_unsignedlonglong1 == json::helper::Enum::value_number_unsignedlonglong);

			//declare json::helper::Tag with assignment from json::helper::Enum::value_number_unsignedshort
			json::helper::Tag tag_number_unsignedshort1 = json::helper::Enum::value_number_unsignedshort;
			//declare json::helper::Enum with assignment from json::helper::Tag
			json::helper::Enum enum_number_unsignedshort1 = tag_number_unsignedshort1;
			//check between tag_number_unsignedshort1 and json::helper::Enum::tag_number_unsignedshort1 is same
			assert(tag_number_unsignedshort1 == json::helper::Enum::value_number_unsignedshort);
			//check between enum_number_unsignedshort1 and json::helper::Enum::tag_number_unsignedshort1 is same
			assert(enum_number_unsignedshort1 == json::helper::Enum::value_number_unsignedshort);
		}

		//check between json::helper::tag::Number and json::helper::Enum is same
		{
			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Char()
			json::helper::tag::Number&& tag_number_char1 = json::helper::tag::number::Char();
			//check between value of tag_number_char1 and json::helper::Enum::value_number_char is same
			assert(tag_number_char1 == json::helper::Enum::value_number_char);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Double()
			json::helper::tag::Number&& tag_number_double1 = json::helper::tag::number::Double();
			//check between value of tag_number_double1 and json::helper::Enum::value_number_double is same
			assert(tag_number_double1 == json::helper::Enum::value_number_double);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Float()
			json::helper::tag::Number&& tag_number_float1 = json::helper::tag::number::Float();
			//check between value of tag_number_float1 and json::helper::Enum::value_number_float is same
			assert(tag_number_float1 == json::helper::Enum::value_number_float);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Int()
			json::helper::tag::Number&& tag_number_int1 = json::helper::tag::number::Int();
			//check between value of tag_number_int1 and json::helper::Enum::value_number_int is same
			assert(tag_number_int1 == json::helper::Enum::value_number_int);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Long()
			json::helper::tag::Number&& tag_number_long1 = json::helper::tag::number::Long();
			//check between value of tag_number_long1 and json::helper::Enum::value_number_long is same
			assert(tag_number_long1 == json::helper::Enum::value_number_long);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::LongDouble()
			json::helper::tag::Number&& tag_number_longdouble1 = json::helper::tag::number::LongDouble();
			//check between value of tag_number_longdouble1 and json::helper::Enum::value_number_longdouble is same
			assert(tag_number_longdouble1 == json::helper::Enum::value_number_longdouble);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::LongLong()
			json::helper::tag::Number&& tag_number_longlong1 = json::helper::tag::number::LongLong();
			//check between value of tag_number_longlong1 and json::helper::Enum::value_number_longlong is same
			assert(tag_number_longlong1 == json::helper::Enum::value_number_longlong);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::Short()
			json::helper::tag::Number&& tag_number_short1 = json::helper::tag::number::Short();
			//check between value of tag_number_short1 and json::helper::Enum::value_number_short is same
			assert(tag_number_short1 == json::helper::Enum::value_number_short);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::UnsignedChar()
			json::helper::tag::Number&& tag_number_unsignedchar1 = json::helper::tag::number::UnsignedChar();
			//check between value of tag_number_unsignedchar1 and json::helper::Enum::value_number_unsignedchar is same
			assert(tag_number_unsignedchar1 == json::helper::Enum::value_number_unsignedchar);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::UnsignedInt()
			json::helper::tag::Number&& tag_number_unsignedint1 = json::helper::tag::number::UnsignedInt();
			//check between value of tag_number_unsignedint1 and json::helper::Enum::value_number_unsignedint is same
			assert(tag_number_unsignedint1 == json::helper::Enum::value_number_unsignedint);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::UnsignedLong()
			json::helper::tag::Number&& tag_number_unsignedlong1 = json::helper::tag::number::UnsignedLong();
			//check between value of tag_number_unsignedlong1 and json::helper::Enum::value_number_unsignedlong is same
			assert(tag_number_unsignedlong1 == json::helper::Enum::value_number_unsignedlong);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::UnsignedLongLong()
			json::helper::tag::Number&& tag_number_unsignedlonglong1 = json::helper::tag::number::UnsignedLongLong();
			//check between value of tag_number_unsignedlonglong1 and json::helper::Enum::value_number_unsignedlonglong is same
			assert(tag_number_unsignedlonglong1 == json::helper::Enum::value_number_unsignedlonglong);

			//declare json::helper::tag::Number& with assignment from json::helper::tag::number::UnsignedShort()
			json::helper::tag::Number&& tag_number_unsignedshort1 = json::helper::tag::number::UnsignedShort();
			//check between value of tag_number_unsignedshort1 and json::helper::Enum::value_number_unsignedshort is same
			assert(tag_number_unsignedshort1 == json::helper::Enum::value_number_unsignedshort);
		}

		//check between json::helper::tag::number::FloatingPoint and json::helper::Enum is same
		{
			//declare json::helper::tag::number::FloatingPoint& with assignment json::helper::tag::number::Double()
			json::helper::tag::number::FloatingPoint&&  tag_number_floatingpoint_double1 = json::helper::tag::number::Double();
			//check between value of tag_number_floatingpoint_double1 and json::helper::Enum::value_number_double is same
			assert(tag_number_floatingpoint_double1 == json::helper::Enum::value_number_double);

			//declare json::helper::tag::number::FloatingPoint& with assignment json::helper::tag::number::Float()
			json::helper::tag::number::FloatingPoint&& tag_number_floatingpoint_float1 = json::helper::tag::number::Float();
			//check between value of tag_number_floatingpoint_float1 and json::helper::Enum::value_number_float is same
			assert(tag_number_floatingpoint_float1 == json::helper::Enum::value_number_float);

			//declare json::helper::tag::number::FloatingPoint& with assignment json::helper::tag::number::LongDouble()
			json::helper::tag::number::FloatingPoint&& tag_number_floatingpoint_longdouble1 = json::helper::tag::number::LongDouble();
			//check between value of tag_number_floatingpoint_longdouble1 and json::helper::Enum::value_number_longdouble is same
			assert(tag_number_floatingpoint_longdouble1 == json::helper::Enum::value_number_longdouble);
		}

		//check between json::helper::tag::number::Integer and json::helper::Enum is same
		{
			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::Char()
			json::helper::tag::number::Integer&& tag_number_integer_char1 = json::helper::tag::number::Char();
			//check between value of tag_number_integer_char1 and json::helper::Enum::value_number_char is same
			assert(tag_number_integer_char1 == json::helper::Enum::value_number_char);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::Int()
			json::helper::tag::number::Integer&& tag_number_integer_int1 = json::helper::tag::number::Int();
			//check between value of tag_number_integer_int1 and json::helper::Enum::value_number_int is same
			assert(tag_number_integer_int1 == json::helper::Enum::value_number_int);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::Long()
			json::helper::tag::number::Integer&& tag_number_integer_long1 = json::helper::tag::number::Long();
			//check between value of tag_number_integer_long1 and json::helper::Enum::value_number_long is same
			assert(tag_number_integer_long1 == json::helper::Enum::value_number_long);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::LongLong()
			json::helper::tag::number::Integer&& tag_number_integer_longlong1 = json::helper::tag::number::LongLong();
			//check between value of tag_number_integer_longlong1 and json::helper::Enum::value_number_longlong is same
			assert(tag_number_integer_longlong1 == json::helper::Enum::value_number_longlong);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::Short()
			json::helper::tag::number::Integer&& tag_number_integer_short1 = json::helper::tag::number::Short();
			//check between value of tag_number_integer_short1 and json::helper::Enum::value_number_short is same
			assert(tag_number_integer_short1 == json::helper::Enum::value_number_short);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::UnsignedChar()
			json::helper::tag::number::Integer&& tag_number_integer_unsignedchar1 = json::helper::tag::number::UnsignedChar();
			//check between value of tag_number_integer_unsignedchar1 and json::helper::Enum::value_number_unsignedchar is same
			assert(tag_number_integer_unsignedchar1 == json::helper::Enum::value_number_unsignedchar);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::UnsignedInt()
			json::helper::tag::number::Integer&& tag_number_integer_unsignedint1 = json::helper::tag::number::UnsignedInt();
			//check between value of tag_number_integer_unsignedint1 and json::helper::Enum::value_number_unsignedint is same
			assert(tag_number_integer_unsignedint1 == json::helper::Enum::value_number_unsignedint);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::UnsignedLong()
			json::helper::tag::number::Integer&& tag_number_integer_unsignedlong1 = json::helper::tag::number::UnsignedLong();
			//check between value of tag_number_integer_unsignedlong1 and json::helper::Enum::value_number_unsignedlong is same
			assert(tag_number_integer_unsignedlong1 == json::helper::Enum::value_number_unsignedlong);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::UnsignedLongLong()
			json::helper::tag::number::Integer&& tag_number_integer_unsignedlonglong1 = json::helper::tag::number::UnsignedLongLong();
			//check between value of tag_number_integer_unsignedlonglong1 and json::helper::Enum::value_number_unsignedlonglong is same
			assert(tag_number_integer_unsignedlonglong1 == json::helper::Enum::value_number_unsignedlonglong);

			//declare json::helper::tag::number::Integer& with assignment json::helper::tag::number::UnsignedShort()
			json::helper::tag::number::Integer&& tag_number_integer_unsignedshort1 = json::helper::tag::number::UnsignedShort();
			//check between value of tag_number_integer_unsignedshort1 and json::helper::Enum::value_number_unsignedshort is same
			assert(tag_number_integer_unsignedshort1 == json::helper::Enum::value_number_unsignedshort);
		}

		//check between json::helper::tag::number::Signed and json::helper::Enum is same
		{
			//declare json::helper::tag::number::Signed& with assignment json::helper::tag::number::Char()
			json::helper::tag::number::Signed&& tag_number_signed_char1 = json::helper::tag::number::Char();
			//check between value of tag_number_signed_char1 and json::helper::Enum::value_number_char is same
			assert(tag_number_signed_char1 == json::helper::Enum::value_number_char);

			//declare json::helper::tag::number::Signed& with assignment json::helper::tag::number::Int()
			json::helper::tag::number::Signed&& tag_number_signed_int1 = json::helper::tag::number::Int();
			//check between value of tag_number_signed_int1 and json::helper::Enum::value_number_int is same
			assert(tag_number_signed_int1 == json::helper::Enum::value_number_int);

			//declare json::helper::tag::number::Signed& with assignment json::helper::tag::number::Long()
			json::helper::tag::number::Signed&& tag_number_signed_long1 = json::helper::tag::number::Long();
			//check between value of tag_number_signed_long1 and json::helper::Enum::value_number_long is same
			assert(tag_number_signed_long1 == json::helper::Enum::value_number_long);

			//declare json::helper::tag::number::Signed& with assignment json::helper::tag::number::LongLong()
			json::helper::tag::number::Signed&& tag_number_signed_longlong1 = json::helper::tag::number::LongLong();
			//check between value of tag_number_signed_longlong1 and json::helper::Enum::value_number_longlong is same
			assert(tag_number_signed_longlong1 == json::helper::Enum::value_number_longlong);

			//declare json::helper::tag::number::Signed& with assignment json::helper::tag::number::Short()
			json::helper::tag::number::Signed&& tag_number_signed_short1 = json::helper::tag::number::Short();
			//check between value of tag_number_signed_short1 and json::helper::Enum::value_number_short is same
			assert(tag_number_signed_short1 == json::helper::Enum::value_number_short);
		}

		//check between json::helper::tag::number::Unsigned and json::helper::Enum is same
		{
			//declare json::helper::tag::number::Unsigned& with assignment json::helper::tag::number::UnsignedChar()
			json::helper::tag::number::Unsigned&& tag_number_unsigned_unsignedchar1 = json::helper::tag::number::UnsignedChar();
			//check between value of tag_number_unsigned_unsignedchar1 and json::helper::Enum::value_number_unsignedchar is same
			assert(tag_number_unsigned_unsignedchar1 == json::helper::Enum::value_number_unsignedchar);

			//declare json::helper::tag::number::Unsigned& with assignment json::helper::tag::number::UnsignedInt()
			json::helper::tag::number::Unsigned&& tag_number_unsigned_unsignedint1 = json::helper::tag::number::UnsignedInt();
			//check between value of tag_number_unsigned_unsignedint1 and json::helper::Enum::value_number_unsignedint is same
			assert(tag_number_unsigned_unsignedint1 == json::helper::Enum::value_number_unsignedint);

			//declare json::helper::tag::number::Unsigned& with assignment json::helper::tag::number::UnsignedLong()
			json::helper::tag::number::Unsigned&& tag_number_unsigned_unsignedlong1 = json::helper::tag::number::UnsignedLong();
			//check between value of tag_number_unsigned_unsignedlong1 and json::helper::Enum::value_number_unsignedlong is same
			assert(tag_number_unsigned_unsignedlong1 == json::helper::Enum::value_number_unsignedlong);

			//declare json::helper::tag::number::Unsigned& with assignment json::helper::tag::number::UnsignedLongLong()
			json::helper::tag::number::Unsigned&& tag_number_unsigned_unsignedlonglong1 = json::helper::tag::number::UnsignedLongLong();
			//check between value of tag_number_unsigned_unsignedlonglong1 and json::helper::Enum::value_number_unsignedlonglong is same
			assert(tag_number_unsigned_unsignedlonglong1 == json::helper::Enum::value_number_unsignedlonglong);

			//declare json::helper::tag::number::Unsigned& with assignment json::helper::tag::number::UnsignedShort()
			json::helper::tag::number::Unsigned&& tag_number_unsigned_unsignedshort1 = json::helper::tag::number::UnsignedShort();
			//check between value of tag_number_unsigned_unsignedshort1 and json::helper::Enum::value_number_unsignedshort is same
			assert(tag_number_unsigned_unsignedshort1 == json::helper::Enum::value_number_unsignedshort);
		}

		//check function json::helper::Tag::Identification with HELPER_VALUE_TYPE is json::helper::Value 
		// and INPUT_VALUE_TYPE = const json::value&
		{
			//declare pointer function with json::helper::Tag::Identification<json::helper::Value, const json::Value&>
			auto TagIdentification = json::helper::Tag::Identification<json::helper::Value, const json::Value&>;

			//declare json::Value& with assignment from json::value::Array()
			json::Value&& value_array1 = json::value::Array();
			//check return function of TagIdentification with value_array1 is json::helper::value_array
			assert(TagIdentification(value_array1) == json::helper::value_array);

			//declare json::Value& with assignment from json::value::False()
			json::Value&& value_false1 = json::value::False();
			//check return function of TagIdentification with value_false1 is json::helper::value_false
			assert(TagIdentification(value_false1) == json::helper::value_false);

			//declare json::Value& with assignment from json::value::Null()
			json::Value&& value_null1 = json::value::Null();
			//check return function of TagIdentification with value_null1 is json::helper::value_null
			assert(TagIdentification(value_null1) == json::helper::value_null);

			//declare json::Value& with assignment from json::value::Object()
			json::Value&& value_object1 = json::value::Object();
			//check return function of TagIdentification with value_object1 is json::helper::value_object
			assert(TagIdentification(value_object1) == json::helper::value_object);

			//declare json::Value& with assignment from json::value::String()
			json::Value&& value_string1 = json::value::String();
			//check return function of TagIdentification with value_string1 is json::helper::value_string
			assert(TagIdentification(value_string1) == json::helper::value_string);

			//declare json::Value& with assignment from json::value::True()
			json::Value&& value_true1 = json::value::True();
			//check return function of TagIdentification with value_true1 is json::helper::value_true
			assert(TagIdentification(value_true1) == json::helper::value_true);

			//declare json::Value& with assignment from json::value::number::Char()
			json::Value&& value_number_char1 = json::value::number::Char();
			//check return function of TagIdentification with value_number_char1 is json::helper::value_number_char
			assert(TagIdentification(value_number_char1) == json::helper::value_number_char);

			//declare json::Value& with assignment from json::value::number::Double()
			json::Value&& value_number_double1 = json::value::number::Double();
			//check return function of TagIdentification with value_number_double1 is json::helper::value_number_double
			assert(TagIdentification(value_number_double1) == json::helper::value_number_double);

			//declare json::Value& with assignment from json::value::number::Float()
			json::Value&& value_number_float1 = json::value::number::Float();
			//check return function of TagIdentification with value_number_float1 is json::helper::value_number_float
			assert(TagIdentification(value_number_float1) == json::helper::value_number_float);

			//declare json::Value& with assignment from json::value::number::Int()
			json::Value&& value_number_int1 = json::value::number::Int();
			//check return function of TagIdentification with value_number_int1 is json::helper::value_number_int
			assert(TagIdentification(value_number_int1) == json::helper::value_number_int);

			//declare json::Value& with assignment from json::value::number::Long()
			json::Value&& value_number_long1 = json::value::number::Long();
			//check return function of TagIdentification with value_number_long1 is json::helper::value_number_long
			assert(TagIdentification(value_number_long1) == json::helper::value_number_long);

			//declare json::Value& with assignment from json::value::number::LongDouble()
			json::Value&& value_number_longdouble1 = json::value::number::LongDouble();
			//check return function of TagIdentification with value_number_longdouble1 is json::helper::value_number_longdouble
			assert(TagIdentification(value_number_longdouble1) == json::helper::value_number_longdouble);

			//declare json::Value& with assignment from json::value::number::LongLong()
			json::Value&& value_number_longlong1 = json::value::number::LongLong();
			//check return function of TagIdentification with value_number_longlong1 is json::helper::value_number_longlong
			assert(TagIdentification(value_number_longlong1) == json::helper::value_number_longlong);

			//declare json::Value& with assignment from json::value::number::UnsignedChar()
			json::Value&& value_number_unsignedchar1 = json::value::number::UnsignedChar();
			//check return function of TagIdentification with value_number_unsignedchar1 is json::helper::value_number_unsignedchar
			assert(TagIdentification(value_number_unsignedchar1) == json::helper::value_number_unsignedchar);

			//declare json::Value& with assignment from json::value::number::UnsignedInt()
			json::Value&& value_number_unsignedint1 = json::value::number::UnsignedInt();
			//check return function of TagIdentification with value_number_unsignedint1 is json::helper::value_number_unsignedint
			assert(TagIdentification(value_number_unsignedint1) == json::helper::value_number_unsignedint);

			//declare json::Value& with assignment from json::value::number::UnsignedLong()
			json::Value&& value_number_unsignedlong1 = json::value::number::UnsignedLong();
			//check return function of TagIdentification with value_number_unsignedlong1 is json::helper::value_number_unsignedlong
			assert(TagIdentification(value_number_unsignedlong1) == json::helper::value_number_unsignedlong);

			//declare json::Value& with assignment from json::value::number::UnsignedLongLong()
			json::Value&& value_number_unsignedlonglong1 = json::value::number::UnsignedLongLong();
			//check return function of TagIdentification with value_number_unsignedlonglong is json::helper::value_number_unsignedlonglong
			assert(TagIdentification(value_number_unsignedlonglong1) == json::helper::value_number_unsignedlonglong);

			//declare json::Value& with assignment from json::value::number::UnsignedShort()
			json::Value&& value_number_unsignedshort1 = json::value::number::UnsignedShort();
			//check return function of TagIdentification with value_number_unsignedshort is json::helper::value_number_unsignedshort
			assert(TagIdentification(value_number_unsignedshort1) == json::helper::value_number_unsignedshort);
		}
	}

	//experiment with /json/helper/value/Case.h
	{
		//check helper before use
		{
			//declare json::Value& for argument for function Case
			json::Value&& value_string = json::value::String();

			//check struct FullImplementHelperValueCase
			{
				assert(FullImplementHelperValueCase::Case(json::helper::tag::Array(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_array);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::False(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_false);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::Null(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_null);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::Object(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_object);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::String(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_string);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::True(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_true);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Char(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_char);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Double(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_double);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Float(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_float);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Int(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_int);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Long(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_long);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::LongDouble(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_longdouble);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::LongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_longlong);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::Short(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_short);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::UnsignedChar(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsignedchar);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::UnsignedInt(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsignedint);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlong);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlonglong);

				assert(FullImplementHelperValueCase::Case(json::helper::tag::number::UnsignedShort(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsignedshort);
			}

			//check struct DefaultImplementHelperValueCase
			{
				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Array(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::False(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Null(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Object(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::String(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::True(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Char(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Double(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Float(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Int(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Long(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::LongDouble(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::LongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Short(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedChar(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedInt(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedShort(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);
			}

			//check struct DefaultImplementHelperValueCase
			{
				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Array(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::False(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Null(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::Object(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::String(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::True(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Char(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Double(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Float(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Int(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Long(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::LongDouble(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::LongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::Short(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedChar(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedInt(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(DefaultImplementHelperValueCase::Case(json::helper::tag::number::UnsignedShort(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);
			}

			//check struct TypeNumber1ImplementHelperValueCase
			{
				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::Array(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::False(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::Null(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::Object(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::String(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::True(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Char(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_signed);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Double(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Float(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Int(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_signed);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Long(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_signed);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::LongDouble(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::LongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_signed);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::Short(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_signed);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedChar(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedInt(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

				assert(TypeNumber1ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedShort(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);
			}

			//check struct TypeNumber2ImplementHelperValueCase
			{
				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::Array(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::False(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::Null(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::Object(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::String(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::True(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Char(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Double(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Float(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Int(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Long(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::LongDouble(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::LongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::Short(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedChar(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedInt(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedLongLong(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);

				assert(TypeNumber2ImplementHelperValueCase::Case(json::helper::tag::number::UnsignedShort(), value_string)
					== ReturnHelperValueCase::call_with_parameter_tag_number_integer);
			}

		}

		/*
		//check return value of function json::helper::value::Case with 
		//	parameter template {
		//		RETURN_TYPE = ReturnHelperValueCase, 
		//		CALLBACK_TYPE = {FullImplementHelperValueCase::Case, DefaultImplementHelperValueCase, TypeNumber1ImplementHelperValueCase or TypeNumber2ImplementHelperValueCase},
		//		ARGS... = {}}
		*/
		{
			//check json::helper::value::Case without parameter const BrainMuscles::test::simple::json::helper::Tag&
			{
				//declare pointer function json::value::Case with IMPLEMENT_TYPE = FullImplementHelperValueCase and const json::Value& for argument
				ReturnHelperValueCase(*CaseFullImplementConstValue)(const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, FullImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = DefaultImplementHelperValueCase and const json::Value& for argument
				ReturnHelperValueCase(*CaseDefaultImplementConstValue)(const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, DefaultImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = TypeNumber1ImplementHelperValueCase and const json::Value& for argument
				ReturnHelperValueCase(*CaseTypeNumber1ImplementConstValue)(const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, TypeNumber1ImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = TypeNumber2ImplementHelperValueCase and const json::Value& for argument
				ReturnHelperValueCase(*CaseTypeNumber2ImplementConstValue)(const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, TypeNumber2ImplementHelperValueCase>;
				
				//check argument const json::Value& with json::value::Array
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_array
					assert(CaseFullImplementConstValue(json::value::Array()) == ReturnHelperValueCase::call_with_parameter_tag_array);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::Array()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::Array()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::Array()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::False
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_false
					assert(CaseFullImplementConstValue(json::value::False()) == ReturnHelperValueCase::call_with_parameter_tag_false);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::False()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::False()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::False()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::Null
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_null
					assert(CaseFullImplementConstValue(json::value::Null()) == ReturnHelperValueCase::call_with_parameter_tag_null);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::Null()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::Null()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::Null()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::Object
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_object
					assert(CaseFullImplementConstValue(json::value::Object()) == ReturnHelperValueCase::call_with_parameter_tag_object);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::Object()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::Object()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::Object()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::String
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_string
					assert(CaseFullImplementConstValue(json::value::String()) == ReturnHelperValueCase::call_with_parameter_tag_string);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::String()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::String()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::String()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::True
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_true
					assert(CaseFullImplementConstValue(json::value::True()) == ReturnHelperValueCase::call_with_parameter_tag_true);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::True()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementConstValue(json::value::True()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementConstValue(json::value::True()) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check argument const json::Value& with json::value::number::Char
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_char
					assert(CaseFullImplementConstValue(json::value::number::Char()) == ReturnHelperValueCase::call_with_parameter_tag_number_char);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Char()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Char()) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Char()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::Double
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_double
					assert(CaseFullImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number_double);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number);
				}

				//check argument const json::Value& with json::value::number::Double
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_double
					assert(CaseFullImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number_double);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Double()) == ReturnHelperValueCase::call_with_parameter_tag_number);
				}

				//check argument const json::Value& with json::value::number::Float
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_float
					assert(CaseFullImplementConstValue(json::value::number::Float()) == ReturnHelperValueCase::call_with_parameter_tag_number_float);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Float()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Float()) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Float()) == ReturnHelperValueCase::call_with_parameter_tag_number);
				}

				//check argument const json::Value& with json::value::number::Int
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_int
					assert(CaseFullImplementConstValue(json::value::number::Int()) == ReturnHelperValueCase::call_with_parameter_tag_number_int);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Int()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Int()) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Int()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::Long
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_long
					assert(CaseFullImplementConstValue(json::value::number::Long()) == ReturnHelperValueCase::call_with_parameter_tag_number_long);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Long()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Long()) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Long()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::LongDouble
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_longdouble
					assert(CaseFullImplementConstValue(json::value::number::LongDouble()) == ReturnHelperValueCase::call_with_parameter_tag_number_longdouble);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::LongDouble()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::LongDouble()) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::LongDouble()) == ReturnHelperValueCase::call_with_parameter_tag_number);
				}

				//check argument const json::Value& with json::value::number::LongLong
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_longlong
					assert(CaseFullImplementConstValue(json::value::number::LongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_longlong);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::LongLong()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::LongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::LongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::Short
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_short
					assert(CaseFullImplementConstValue(json::value::number::Short()) == ReturnHelperValueCase::call_with_parameter_tag_number_short);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::Short()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::Short()) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::Short()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::UnsignedChar
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_unsignedchar
					assert(CaseFullImplementConstValue(json::value::number::UnsignedChar()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedchar);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::UnsignedChar()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::UnsignedChar()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::UnsignedChar()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::UnsignedInt
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_unsignedint
					assert(CaseFullImplementConstValue(json::value::number::UnsignedInt()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedint);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::UnsignedInt()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::UnsignedInt()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::UnsignedInt()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::UnsignedLong
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_unsignedlong
					assert(CaseFullImplementConstValue(json::value::number::UnsignedLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlong);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::UnsignedLong()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::UnsignedLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::UnsignedLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::UnsignedLongLong
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_unsignedlonglong
					assert(CaseFullImplementConstValue(json::value::number::UnsignedLongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlonglong);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::UnsignedLongLong()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::UnsignedLongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::UnsignedLongLong()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}

				//check argument const json::Value& with json::value::number::UnsignedShort
				{
					//check return value function CaseFullImplementConstValue is call_with_parameter_tag_number_unsignedShort
					assert(CaseFullImplementConstValue(json::value::number::UnsignedShort()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedshort);

					//check return value function CaseDefaultImplementConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementConstValue(json::value::number::UnsignedShort()) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementConstValue(json::value::number::UnsignedShort()) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber2ImplementConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementConstValue(json::value::number::UnsignedShort()) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}
			}

			//check json::helper::value::Case with parameter const BrainMuscles::test::simple::json::helper::Tag&
			{
				//declare pointer function json::value::Case with IMPLEMENT_TYPE = FullImplementHelperValueCase and const json::Value& for argument
				ReturnHelperValueCase(*CaseFullImplementTagConstValue)(const json::helper::Tag&, const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, FullImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = DefaultImplementHelperValueCase and {const json::helper::Tag& and const json::Value&} for arguments
				ReturnHelperValueCase(*CaseDefaultImplementTagConstValue)(const json::helper::Tag&, const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, DefaultImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = TypeNumber1ImplementHelperValueCase and {const json::helper::Tag& and const json::Value&} for arguments
				ReturnHelperValueCase(*CaseTypeNumber1ImplementTagConstValue)(const json::helper::Tag&, const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, TypeNumber1ImplementHelperValueCase>;

				//declare pointer function json::value::Case with IMPLEMENT_TYPE = TypeNumber2ImplementHelperValueCase and {const json::helper::Tag& and const json::Value&} for arguments
				ReturnHelperValueCase(*CaseTypeNumber2ImplementTagConstValue)(const json::helper::Tag&, const json::Value&)
					= json::helper::value::Case<ReturnHelperValueCase, TypeNumber2ImplementHelperValueCase>;

				//declare json::Value& for argument for function Case
				json::Value&& value_string1 = json::value::String();

				//declare json::Tag& from assignment with /json/helper/tag
				json::helper::Tag&& tag_array1 = json::helper::tag::Array();
				json::helper::Tag&& tag_false1 = json::helper::tag::False();
				json::helper::Tag&& tag_null1 = json::helper::tag::Null();
				json::helper::Tag&& tag_number1 = json::helper::tag::Number();
				json::helper::Tag&& tag_object1 = json::helper::tag::Object();
				json::helper::Tag&& tag_string1 = json::helper::tag::String();
				json::helper::Tag&& tag_true1 = json::helper::tag::True();

				//declare json::Tag& from assignment with /json/helper/tag/number
				json::helper::Tag&& tag_number_char1 = json::helper::tag::number::Char();
				json::helper::Tag&& tag_number_double1 = json::helper::tag::number::Double();
				json::helper::Tag&& tag_number_float1 = json::helper::tag::number::Float();
				json::helper::Tag&& tag_number_int1 = json::helper::tag::number::Int();
				json::helper::Tag&& tag_number_long1 = json::helper::tag::number::Long();
				json::helper::Tag&& tag_number_longdouble1 = json::helper::tag::number::LongDouble();
				json::helper::Tag&& tag_number_longlong1 = json::helper::tag::number::LongLong();
				json::helper::Tag&& tag_number_short1 = json::helper::tag::number::Short();
				json::helper::Tag&& tag_number_unsignedchar1 = json::helper::tag::number::UnsignedChar();
				json::helper::Tag&& tag_number_unsignedint1 = json::helper::tag::number::UnsignedInt();
				json::helper::Tag&& tag_number_unsignedlong1 = json::helper::tag::number::UnsignedLong();
				json::helper::Tag&& tag_number_unsignedlonglong1 = json::helper::tag::number::UnsignedLongLong();
				json::helper::Tag&& tag_number_unsignedshort1 = json::helper::tag::number::UnsignedShort();

				//check CaseFullImplementTagConstValue with parameters json::Tag and json::Value&
				{
					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_array
					assert(CaseFullImplementTagConstValue(tag_array1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_array);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_false
					assert(CaseFullImplementTagConstValue(tag_false1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_false);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_null
					assert(CaseFullImplementTagConstValue(tag_null1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_null);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number
					assert(CaseFullImplementTagConstValue(tag_number1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_object
					assert(CaseFullImplementTagConstValue(tag_object1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_object);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_string
					assert(CaseFullImplementTagConstValue(tag_string1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_string);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_true
					assert(CaseFullImplementTagConstValue(tag_true1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_true);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_char
					assert(CaseFullImplementTagConstValue(tag_number_char1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_char);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_double
					assert(CaseFullImplementTagConstValue(tag_number_double1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_double);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_float
					assert(CaseFullImplementTagConstValue(tag_number_float1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_float);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_int
					assert(CaseFullImplementTagConstValue(tag_number_int1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_int);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_long
					assert(CaseFullImplementTagConstValue(tag_number_long1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_long);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_longdouble
					assert(CaseFullImplementTagConstValue(tag_number_longdouble1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_longdouble);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_longlong
					assert(CaseFullImplementTagConstValue(tag_number_longlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_longlong);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_short
					assert(CaseFullImplementTagConstValue(tag_number_short1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_short);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_unsignedchar
					assert(CaseFullImplementTagConstValue(tag_number_unsignedchar1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedchar);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_unsignedint
					assert(CaseFullImplementTagConstValue(tag_number_unsignedint1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedint);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_unsignedlong
					assert(CaseFullImplementTagConstValue(tag_number_unsignedlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlong);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_unsignedlonglong
					assert(CaseFullImplementTagConstValue(tag_number_unsignedlonglong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedlonglong);

					//check return value function CaseFullImplementTagConstValue is call_with_parameter_tag_number_unsignedshort
					assert(CaseFullImplementTagConstValue(tag_number_unsignedshort1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsignedshort);
				}

				//check CaseDefaultImplementTagConstValue with parameters json::Tag and json::Value&
				{
					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_array1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_false1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_null1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_object1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_string1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_true1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_char1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_double1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_float1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_int1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_long1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_longdouble1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_longlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_short1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_unsignedchar1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_unsignedint1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_unsignedlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_unsignedlonglong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseDefaultImplementTagConstValue is call_with_parameter_tag
					assert(CaseDefaultImplementTagConstValue(tag_number_unsignedshort1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);
				}

				//check CaseTypeNumber1ImplementTagConstValue with parameters json::Tag and json::Value&
				{
					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_array1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_false1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_null1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_object1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_string1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber1ImplementTagConstValue(tag_true1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_char1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_double1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_float1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_int1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_long1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_floatingpoint
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_longdouble1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_floatingpoint);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_longlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_signed
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_short1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_signed);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_unsignedchar1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_unsignedint1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_unsignedlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_unsignedlonglong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);

					//check return value function CaseTypeNumber1ImplementTagConstValue is call_with_parameter_tag_number_unsigned
					assert(CaseTypeNumber1ImplementTagConstValue(tag_number_unsignedshort1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_unsigned);
				}

				//check CaseTypeNumber2ImplementTagConstValue with parameters json::Tag and json::Value&
				{
					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_array1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_false1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_null1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_object1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_string1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag
					assert(CaseTypeNumber2ImplementTagConstValue(tag_true1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_char1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_double1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_float1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_int1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_long1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_longdouble1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_longlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_short1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_unsignedchar1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_unsignedint1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_unsignedlong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_unsignedlonglong1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);

					//check return value function CaseTypeNumber2ImplementTagConstValue is call_with_parameter_tag_number_integer
					assert(CaseTypeNumber2ImplementTagConstValue(tag_number_unsignedshort1, value_string1) == ReturnHelperValueCase::call_with_parameter_tag_number_integer);
				}
			}
		}

		constexpr int base = sizeof(json::Value);
		constexpr int x = sizeof(json::value::False);

	}

	int&& rint = 3;

	json::helper::Tag&& rtag = json::helper::tag::Array();

	return 1;
}
