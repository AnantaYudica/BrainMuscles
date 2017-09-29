#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include <cstring>

#include "test\simple\json\value\Null.h"

#include "experiment\test\simple\json\value\Null.h"

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
					void Null::Test()
					{
						//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
						namespace BMTestSimple = BrainMuscles::test::simple;

						//declare variable of BrainMuscles::test::simple::json::value::Null
						// with default initalization
						BMTestSimple::json::value::Null value_null1;

						//check string compare (strcmp) between variable of 'value_null1'
						// and variable of BrainMuscles::test::simple::Constant::NullCString is same
						SourceAssert(strcmp(value_null1, BMTestSimple::json::Constant::NullCString) == 0,
							"variable of 'value_null1' and variable of BrainMuscles::test::simple::Constant::NullCString is not same");
					}
				}
			}
		}
	}
}