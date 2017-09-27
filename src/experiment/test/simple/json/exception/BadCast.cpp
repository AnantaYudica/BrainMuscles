#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\exception\BadCast.h"

#include "experiment\test\simple\json\exception\BadCast.h"

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
					void BadCast::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//check static variable member 'Message' from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is not empty
						SourceAssert(strcmp(BMTestSimple::json::exception::BadCast<int, float>::Message.c_str(), "") != 0,
							"static variable member 'Message' from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is empty");

						//declare variable of BrainMuscles::test::simple::json::exception::BadCast<int, float> with default initialization
						BMTestSimple::json::exception::BadCast<int, float> exception_badcast;

						//check function member 'what() from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is not empty'
						SourceAssert(strcmp(exception_badcast.what(), "") != 0, 
							"function member 'what()' from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is empty");

						//check return value between function member 'what()' and static variable member 'Message' 
						// from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is same
						SourceAssert(strcmp(exception_badcast.what(), BMTestSimple::json::exception::BadCast<int, float>::Message.c_str()) == 0,
							"function member 'what()' and static variable member 'Message' from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is not same");

						//check trigger exception with class BrainMuscles::test::simple::json::exception::BadCast<int, float>
						try
						{
							//throw class BrainMuscles::test::simple::json::exception::BadCast<int, float>
							throw(exception_badcast);
						}
						//catch object with const std::exception&
						catch (const std::exception& e)
						{
							//check return value between function member 'what()' from class std::exception 
							// and static variable member 'Message' from BrainMuscles::test::simple::json::exception::BadCast<int, float> is same
							SourceAssert(strcmp(e.what(), BMTestSimple::json::exception::BadCast<int, float>::Message.c_str()) == 0,
								"function member 'what()' from class std::exception and static variable member 'Message' from class BrainMuscles::test::simple::json::exception::BadCast<int, float> is not same");
						}
					}

					void BadCast::StaticTest()
					{
						Test();
					}
				}
			}
		}
	}
}