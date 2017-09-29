#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\False.h"

#include "experiment\test\simple\json\value\False.h"

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
					void False::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//declare variable of class BrainMuscles::test::simple::json::value::False
						// with default initialization
						BMTestSimple::json::value::False value_false1;

						//check value between variable of 'value_false1' and false is same
						SourceAssert(value_false1 == false, "variable of 'value_false1' and false is not same");

						//check string compare (strcmp) between variable of 'value_false1'
						// and variable of BrainMuscles::test::simple::Constant::FalseCString is same
						SourceAssert(std::strcmp(value_false1, BMTestSimple::json::Constant::FalseCString) == 0,
							"variable of 'value_false1' and variable of BrainMuscles::test::simple::Constant::FalseCString is not same");
					}
				}
			}
		}
	}
}