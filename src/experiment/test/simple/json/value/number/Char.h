#ifndef EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_

#include "test\Source.h"

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
					namespace number
					{
						struct Char;
					}
				}
			}
		}
	}
}

struct experiment::test::simple::json::value::number::Char final :
	public BrainMuscles::test::Source<Char>
{
	friend class BrainMuscles::test::Source<Char>;
private:
	Char() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_