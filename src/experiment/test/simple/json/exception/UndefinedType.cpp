#define _USING_TEST_SOURCE_

#include <cstring>
#include <string>

#include "test\simple\json\exception\UndefinedType.h"

#include "experiment\test\simple\json\exception\UndefinedType.h"

namespace std
{
	std::string to_string(const experiment::test::simple::json::exception::UndefinedType::Int& obj)
	{
		return std::to_string(obj.Value);
	}
}

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace exception
				{
					void UndefinedType::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//Check static variable 'Message' is not empty in class BrainMuscles::test::simple::json::exception::UndefinedType<int>
						SourceAssert(std::strcmp(BMTestSimple::json::exception::UndefinedType<int>::Message.c_str(), "") != 0, 
							"static variable 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is empty");

						//declare BrainMuscles::test::simple::json::exception:::UndefinedType<int> with default initialization
						BMTestSimple::json::exception::UndefinedType<int> exception_undefinedtype1;

						//check function member 'what() from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is not empty'
						SourceAssert(strcmp(exception_undefinedtype1.what(), "") != 0,
							"function member 'what()' from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is empty");

						//check return value between function member 'what()' and static variable member 'Message' 
						// from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is same
						SourceAssert(strcmp(exception_undefinedtype1.what(), BMTestSimple::json::exception::UndefinedType<int>::Message.c_str()) == 0,
							"function member 'what()' and static variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is not same");

						//check trigger exception with class BrainMuscles::test::simple::json::exception::UndefinedType<int>
						try
						{
							//throw class BrainMuscles::test::simple::json::exception::UndefinedType<int>
							throw(exception_undefinedtype1);
						}
						//catch object with const std::exception&
						catch (const std::exception& e)
						{
							//check return value between function member 'what()' from class std::exception 
							// and static variable member 'Message' from BrainMuscles::test::simple::json::exception::UndefinedType<int> is same
							SourceAssert(strcmp(e.what(), BMTestSimple::json::exception::UndefinedType<int>::Message.c_str()) == 0,
								"function member 'what()' from class std::exception and static variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int> is not same");
						}

						//declare BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> with direct initialization
						BMTestSimple::json::exception::UndefinedType<int, int> exception_undefinedtype2(2);

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is type of int 
						SourceAssert(typeid(decltype(exception_undefinedtype2.Value)).hash_code() == typeid(int).hash_code(),
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is not type of int");
						
						//check value of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is same with value of direct initialization
						SourceAssert(exception_undefinedtype2.Value == 2, 
							"value of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is not same with value of direct initialization");

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype2.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, int> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int> is same
						SourceAssert(std::strcmp(exception_undefinedtype2.what(), exception_undefinedtype2.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, int> is not same");

						//declare BrainMuscles::test::simple::json::exception::UndefinedType<int, const int> with direct initialization
						BMTestSimple::json::exception::UndefinedType<int, const int> exception_undefinedtype3(4);

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is type of int 
						SourceAssert(typeid(decltype(exception_undefinedtype3.Value)).hash_code() == typeid(int).hash_code(), 
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is not type of int");

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is const type
						SourceAssert(std::is_const<decltype(exception_undefinedtype3.Value)>::value,
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is not const type");

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype3.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, const int> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const int> is same
						SourceAssert(std::strcmp(exception_undefinedtype3.what(), exception_undefinedtype3.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, const int> is not same");

						//declare BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> with direct initialization
						BMTestSimple::json::exception::UndefinedType<int, volatile int> exception_undefinedtype4(8);

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is type of int 
						SourceAssert(typeid(decltype(exception_undefinedtype4.Value)).hash_code() == typeid(int).hash_code(),
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is not type of int");

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is volatile type
						SourceAssert(std::is_volatile<decltype(exception_undefinedtype4.Value)>::value,
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is not volatile type");

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype4.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, volatile int> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, volatile int> is same
						SourceAssert(std::strcmp(exception_undefinedtype4.what(), exception_undefinedtype4.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, volatile int> is not same");

						//declare BrainMuscles::test::simple::json::exception::UndefinedType<int, const volatile int> with direct initialization
						BMTestSimple::json::exception::UndefinedType<int, const volatile int> exception_undefinedtype5(16);

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is type of int 
						SourceAssert(typeid(decltype(exception_undefinedtype5.Value)).hash_code() == typeid(int).hash_code(),
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is not type of int");

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is const type
						SourceAssert(std::is_const<decltype(exception_undefinedtype5.Value)>::value,
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is not const volatile type");

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is volatile type
						SourceAssert(std::is_volatile<decltype(exception_undefinedtype5.Value)>::value,
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is not const volatile type");

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype5.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, const volatile int> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, const volatile int> is same
						SourceAssert(std::strcmp(exception_undefinedtype5.what(), exception_undefinedtype5.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, const volatile int> is not same");

						//declare int with copy initialization
						int int1 = 32;

						//declare BrainMuscles::test::simple::json::exception::UndefinedType<int, int&> with direct initialization
						BMTestSimple::json::exception::UndefinedType<int, int&> exception_undefinedtype6(int1);

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is type of int 
						SourceAssert(typeid(decltype(exception_undefinedtype6.Value)).hash_code() == typeid(int).hash_code(),
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is not type of int");

						//check type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is reference type
						SourceAssert(std::is_reference<decltype(exception_undefinedtype6.Value)>::value,
							"type of variable member 'Value' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is not reference type");

						//check address between variable member 'Value' and variable when direct initialization from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is same
						SourceAssert(&exception_undefinedtype6.Value == &int1,
							"address between variable member 'Value' and variable when direct initialization from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is not same");

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype6.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, int&> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<int, int&> is same
						SourceAssert(std::strcmp(exception_undefinedtype6.what(), exception_undefinedtype6.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<int, int&> is not same");

						//declare experiment::test::simple::json::exception::UndefinedType::Int with default initialization
						experiment::test::simple::json::exception::UndefinedType::Int undefinedtype_int;

						//Assignment copy variable member 'Value' from class experiment::test::simple::json::exception::UndefinedType::Int
						undefinedtype_int.Value = 64;

						//declare BrainMuscles::test::simple::json::exception::UndefinedType<experiment::test::simple::json::exception::UndefinedType::Int, experiment::test::simple::json::exception::UndefinedType::Int&>
						// with direct initialization
						BrainMuscles::test::simple::json::exception::UndefinedType<
							experiment::test::simple::json::exception::UndefinedType::Int,
							experiment::test::simple::json::exception::UndefinedType::Int&> exception_undefinedtype7(undefinedtype_int);

						//check variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<experiment::test::simple::json::exception::UndefinedType::Int, 
						// experiment::test::simple::json::exception::UndefinedType::Int&> is not empty
						SourceAssert(std::strcmp(exception_undefinedtype7.Message.c_str(), "") != 0,
							"variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<experiment::test::simple::json::exception::UndefinedType::Int, experiment::test::simple::json::exception::UndefinedType::Int&> is empty");

						//check between function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception:::UndefinedType<experiment::test::simple::json::exception::UndefinedType::Int, 
						// experiment::test::simple::json::exception::UndefinedType::Int&> is same
						SourceAssert(std::strcmp(exception_undefinedtype7.what(), exception_undefinedtype7.Message.c_str()) == 0,
							"function member 'what()' and variable member 'Message' from class BrainMuscles::test::simple::json::exception::UndefinedType<experiment::test::simple::json::exception::UndefinedType::Int, experiment::test::simple::json::exception::UndefinedType::Int&> is not same");
					}

					void UndefinedType::StaticTest()
					{
						Test();
					}
				}
			}
		}
	}
}