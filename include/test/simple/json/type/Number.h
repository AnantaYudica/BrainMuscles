#ifndef TEST_SIMPLE_OUTPUT_JSON_TYPE_NUMBER_H_
#define TEST_SIMPLE_OUTPUT_JSON_TYPE_NUMBER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <vector>

#include "test\simple\output\json\Type.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace output
			{
				namespace json
				{
					namespace type
					{
						class Number :
							public BrainMuscles::test::simple::output::json::Type
						{
						protected:
							typedef BrainMuscles::test::simple::output::json::Type		JsonType;
						protected:
							Number(const char* key);
						public:
							Number(const Number& copy);
							Number(Number&& move);
							virtual ~Number();
						public:
							virtual void PrintValue(std::FILE* output_file) = 0;
						};

						Number::Number(const char* key) :
							JsonType(key)
						{}

						Number::Number(const Number& copy) :
							JsonType(copy)
						{}

						Number::Number(Number&& move) :
							JsonType(move)
						{}

						Number::~Number()
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_OUTPUT_JSON_TYPE_NUMBER_H_