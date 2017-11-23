#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test/simple/json/exception/BadCast.h"

#include "experiment/test/simple/json/exception/BadCast.h"

void experiment::test::simple::json::exception::BadCast::Test()
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

	//	Check variable static member 'Message' from 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::BadCast<int, float>'
	//	is not empty
	SourceAssert(
		strcmp(JsonException::BadCast<int, float>().Message.c_str(), "") != 0,
		"variable static member 'Message' from "
		"class BrainMuscles::test::simple::json"
		"::exception::BadCast<int, float> is empty");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::BadCast<int, float>'
	//	with default initialization
	JsonException::BadCast<int, float> exception_badcast;

	//	Check return variable of
	//		function member 'what() from 
	//			variable 'exception_badcast'
	//	is not empty'
	SourceAssert(strcmp(exception_badcast.what(), "") != 0,
		"return variable of function member 'what()' from "
		"variable 'exception_badcast' is empty");

	//	Check compare variable between 
	//		return variable of 
	//			function member 'what()' from
	//				variable 'exception_badcast'
	//	and 
	//		variable static  member 'Message' of 
	//			class 'BrainMuscles::test::simple::json
	//				::exception::BadCast<int, float>'
	//	is same
	SourceAssert(strcmp(exception_badcast.what(), JsonException
		::BadCast<int, float>().Message.c_str()) == 0,
		"compare variable between return variable function member 'what()' "
		"from variable 'exception_badcast' and variable static member "
		"'Message' of class BrainMuscles::test::simple::json::exception"
		"::BadCast<int, float> is not same");

	//	Check trigger exception with 
	//		class 'BrainMuscles::test::simple::json
	//			::exception::BadCast<int, float>'
	try
	{
		//	Throw variable 'exception_badcast'
		throw(exception_badcast);
	}
	//	Catch variable with const std::exception&
	catch (const std::exception& e)
	{
		//	Check compare variable between 
		//		return variable of
		//			function member 'what()' from variable 'e'
		//	and 
		//		variable static member 'Message' from 
		//		class 'BrainMuscles::test::simple::json
		//			::exception::BadCast<int, float>' 
		//	is same
		SourceAssert(strcmp(e.what(), JsonException
			::BadCast<int, float>().Message.c_str()) == 0,
			"compare variable between return variable of function member "
			"'what()' from variable 'e' and variable static member "
			"'Message' from class BrainMuscles::test::simple::json::exception"
			"::BadCast<int, float> is not same");
	}
}

void experiment::test::simple::json::exception::BadCast::StaticTest()
{
	Test();
}