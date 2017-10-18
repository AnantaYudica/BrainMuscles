#define _USING_TEST_SOURCE_

#include <cstring>
#include <string>

#include "test\simple\json\exception\UndefinedType.h"

#include "experiment\test\simple\json\exception\UndefinedType.h"

//	Declare alias type 'UndefinedType' 
//	with prototype class
//		'experiment::test::simple::json::exception::UndefinedType'
typedef experiment::test::simple::json::exception::UndefinedType
UndefinedType;

//	Declare overloaded function 'std::to_string'
namespace std
{
	inline std::string
		to_string(const typename UndefinedType::Int& obj)
	{
		return std::to_string(obj.Value);
	}
}

void experiment::test::simple::json::exception::UndefinedType::Test()
{
	//	Declare namespace from 
	//		'BrainMuscles::test::simple'
	//	to 
	//		'BMTestSimple'
	namespace BMTestSimple = BrainMuscles::test::simple;

	//	Declare namespace from 
	//		'BrainMuscles::test::simple::json::exception'
	//	to 
	//		'JsonException'
	namespace JsonException = BMTestSimple::json::exception;

	//	Check variable static member 'Message' of
	//			class 'BrainMuscles::test::simple::json
	//				::exception::UndefinedType<int>'
	//	is not empty
	SourceAssert(std::strcmp(
		JsonException::UndefinedType<int>::Message.c_str(), "") != 0,
		"variable static member 'Message' from class BrainMuscles"
		"::test::simple::json::exception::UndefinedType<int> is empty");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::exception:::UndefinedType<int>' 
	//	with default initialization
	JsonException::UndefinedType<int> exception_undefinedtype1;

	//	Check return variable of
	//			function member 'what() from 
	//				variable 'exception_undefinedtype1'
	//	is not empty'
	SourceAssert(strcmp(exception_undefinedtype1.what(), "") != 0,
		"return variable of function member 'what()' from variable "
		"'exception_undefinedtype1' is empty");

	//	Check compare variable between 
	//		return variable of 
	//			function member 'what()' from
	//				variable 'exception_undefinedtype1'
	//	and 
	//		variable static member 'Message' from 
	//			class 'BrainMuscles::test::simple::json
	//				::exception::UndefinedType<int>'
	//	is same
	SourceAssert(strcmp(exception_undefinedtype1.what(), 
		JsonException::UndefinedType<int>::Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"from variable 'exception_undefinedtype1' and variable static member "
		"'Message' from class BrainMuscles::test::simple::json::exception"
		"::UndefinedType<int> is not same");

	//	Check trigger exception with 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::UndefinedType<int>'
	try
	{
		//	Throw variable 'exception_undefinedtype1'
		throw(exception_undefinedtype1);
	}
	//	Catch variable with const std::exception&
	catch (const std::exception& e)
	{
		//	Check compare variable between
		//		return function member 'what()' from variable 'e'
		//	and 
		//		variable static member 'Message' from 
		//			class 'BrainMuscles::test::simple::json
		//				::exception::UndefinedType<int>' 
		//	is same 
		SourceAssert(strcmp(e.what(), 
			JsonException::UndefinedType<int>::Message.c_str()) == 0,
			"compare variable return function member 'what()' from "
			"variable 'e' and variable static member 'Message' from "
			"class 'BrainMuscles::test::simple::json::exception"
			"::UndefinedType<int>' is not same");
	}

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::exception
	//			::UndefinedType<int, int>' 
	//	with direct initialization of 2 from int
	JsonException::UndefinedType<int, int> exception_undefinedtype2(2);

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype2'
	//	is type of int 
	SourceAssert(typeid(decltype(exception_undefinedtype2.Value)).hash_code()
		== typeid(int).hash_code(),
		"variable member 'Value' from variable 'exception_undefinedtype2' "
		"is not type of int");

	//	Check value of 
	//		variable member 'Value' from 
	//			variable 'exception_undefinedtype2' 
	//	is same 2 from int
	SourceAssert(exception_undefinedtype2.Value == 2,
		"value of variable member 'Value' from "
		"variable 'exception_undefinedtype2' is not same 2 from int");

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype2'
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype2.Message.c_str(), "") != 0,
		"variable member 'Message' from "
		"variable 'exception_undefinedtype2' is empty");

	//	Check compare variable between 
	//		return variable of 
	//			function member 'what()' from
	//				variable 'exception_undefinedtype2'
	//	and 
	//		variable member 'Message' from 
	//			variable 'exception_undefinedtype2' 
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype2.what(), 
		exception_undefinedtype2.Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"from variable 'exception_undefinedtype2' and variable member "
		"'Message' from variable 'exception_undefinedtype2' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::UndefinedType<int, const int>' 
	//	with direct initialization of 4 from int
	JsonException::UndefinedType<int, const int> exception_undefinedtype3(4);

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype3' 
	//	is type of int 
	SourceAssert(typeid(decltype(exception_undefinedtype3.Value)).hash_code()
		== typeid(int).hash_code(),
		"variable member 'Value' from variable 'exception_undefinedtype3' "
		"is not type of int");

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype3'
	//	is const type
	SourceAssert(
		std::is_const<decltype(exception_undefinedtype3.Value)>::value,
		"variable member 'Value' from variable 'exception_undefinedtype3' "
		"is not const type");

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype3'
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype3.Message.c_str(), "") != 0,
		"variable member 'Message' from variable 'exception_undefinedtype3' "
		"is empty");

	//	Check compare variable between 
	//		return variable of function member 'what()' from
	//			variable 'exception_undefinedtype3'
	//	and 
	//		variable member 'Message' from 
	//			variable 'exception_undefinedtype3' 
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype3.what(), 
		exception_undefinedtype3.Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"from variable 'exception_undefinedtype3' and variable member "
		"'Message' variable 'exception_undefinedtype3' from is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::exception
	//			::UndefinedType<int, volatile int>' 
	//	with direct initialization of 8 from int
	JsonException::UndefinedType<int, volatile int> 
		exception_undefinedtype4(8);

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype4' 
	//	is type of int 
	SourceAssert(typeid(decltype(exception_undefinedtype4.Value)).hash_code() 
		== typeid(int).hash_code(),
		"variable member 'Value' from variable 'exception_undefinedtype4' "
		"is not type of int");

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype4'
	//	is volatile type
	SourceAssert(
		std::is_volatile<decltype(exception_undefinedtype4.Value)>::value,
		"variable member 'Value' from variable 'exception_undefinedtype4' "
		"is not volatile type");

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype4'
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype4.Message.c_str(), "") != 0,
		"variable member 'Message' from variable 'exception_undefinedtype4' "
		"is empty");

	//	Check compare between 
	//		return variable of function member 'what()' from
	//			variable 'exception_undefinedtype4'
	//	and 
	//		variable member 'Message' from 
	//			variable 'exception_undefinedtype4' 
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype4.what(), 
		exception_undefinedtype4.Message.c_str()) == 0,
		"compare between return variable of function member 'what()' from "
		"variable 'exception_undefinedtype4' and variable member 'Message' "
		"from variable 'exception_undefinedtype4' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::exception
	//			::UndefinedType<int, const volatile int>' 
	//	with direct initialization of 16 from int
	JsonException::UndefinedType<int, const volatile int> 
		exception_undefinedtype5(16);

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype5'
	//	is type of int 
	SourceAssert(typeid(decltype(exception_undefinedtype5.Value)).hash_code() 
		== typeid(int).hash_code(),
		"variable member 'Value' from variable 'exception_undefinedtype5' "
		"is not type of int");

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype5' 
	//	is const type
	SourceAssert(
		std::is_const<decltype(exception_undefinedtype5.Value)>::value,
		"variable member 'Value' from variable 'exception_undefinedtype5' "
		"is not const type");

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype5' 
	//	is volatile type
	SourceAssert(
		std::is_volatile<decltype(exception_undefinedtype5.Value)>::value,
		"variable member 'Value' from variable 'exception_undefinedtype5' "
		"is not const volatile type");

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype5'
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype5.Message.c_str(), "") != 0,
		" variable member 'Message' from variable 'exception_undefinedtype5' "
		"is empty");

	//	Check compare variable between 
	//		return variable of function member 'what()' from
	//			variable 'exception_undefinedtype5' 
	//	and 
	//		variable member 'Message' from 
	//			variable 'exception_undefinedtype5' 
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype5.what(), 
		exception_undefinedtype5.Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"from variable 'exception_undefinedtype5' and is variable member "
		"'Message' from variable 'exception_undefinedtype5' is not same");

	//	Declare variable of int 
	//	with copy initialization
	int int1 = 32;

	//	declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::UndefinedType<int, int&>' 
	//	with direct initialization of variable 'int1'
	JsonException::UndefinedType<int, int&> exception_undefinedtype6(int1);

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype6' 
	//	is type of int 
	SourceAssert(typeid(decltype(exception_undefinedtype6.Value)).hash_code()
		== typeid(int).hash_code(),
		"variable member 'Value' from variable 'exception_undefinedtype6' "
		"is not type of int");

	//	Check variable member 'Value' from 
	//		variable 'exception_undefinedtype6' 
	//	is reference type
	SourceAssert(
		std::is_reference<decltype(exception_undefinedtype6.Value)>::value,
		"variable member 'Value' from variable 'exception_undefinedtype6' "
		"is not reference type");

	//	Check address between 
	//		variable member 'Value' from
	//			variable 'exception_undefinedtype6'
	//	and 
	//		variable 'int1' 
	//	is same
	SourceAssert(&exception_undefinedtype6.Value == &int1,
		"address between variable member 'Value' from variable "
		"'exception_undefinedtype6' and variable 'int1' is not same");

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype6' 
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype6.Message.c_str(), "") != 0,
		"variable member 'Message' from variable 'exception_undefinedtype6' "
		"is empty");

	//	Check compare variable between 
	//		return variable of function member 'what()' from 
	//			variable 'exception_undefinedtype6' 
	//	and variable member 'Message' from 
	//		variable 'exception_undefinedtype6' 
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype6.what(), 
		exception_undefinedtype6.Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"from variable 'exception_undefinedtype6' and variable member "
		"'Message' from variable 'exception_undefinedtype6' is not same");

	//	Declare variable of 
	//		class 'experiment::test::simple::json
	//			::exception::UndefinedType::Int' 
	//	with default initialization
	typename UndefinedType::Int undefinedtype_int;

	//	Assignment to variable member 'Value' from 
	//		variable 'undefinedtype_int'
	//	with 64 from int
	undefinedtype_int.Value = 64;

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::exception::UndefinedType<
	//			experiment::test::simple::json::exception::UndefinedType::Int, 
	//			experiment::test::simple::json::exception::UndefinedType::Int&>
	// with direct initialization of variable 'undefinedtype_int'
	JsonException::UndefinedType<typename UndefinedType::Int, 
		UndefinedType::UndefinedType::Int&> 
		exception_undefinedtype7(undefinedtype_int);

	//	Check variable member 'Message' from 
	//		variable 'exception_undefinedtype7' 
	//	is not empty
	SourceAssert(
		std::strcmp(exception_undefinedtype7.Message.c_str(), "") != 0,
		"variable member 'Message' variable 'exception_undefinedtype7' "
		"is empty");

	//	Check compare variable between 
	//		return variable of function member 'what()' from
	//			variable 'exception_undefinedtype7'
	//	and 
	//		variable member 'Message' from 
	//			variable 'exception_undefinedtype7'
	//	is same
	SourceAssert(std::strcmp(exception_undefinedtype7.what(), 
		exception_undefinedtype7.Message.c_str()) == 0,
		"compare variable between return variable of function member 'what()' "
		"variable 'exception_undefinedtype7' and variable member 'Message' "
		"from variable 'exception_undefinedtype7' is not same");
}

void experiment::test::simple::json::exception::UndefinedType::StaticTest()
{
	Test();
}