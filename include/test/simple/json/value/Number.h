#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Constant.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					class Number :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					protected:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
					protected:
						Number();
					public:
						Number(const Number& copy);
						Number(Number&& move);
						virtual ~Number();
					};

					Number::Number()
					{}

					Number::Number(const Number& copy) :
						ValueType(copy)
					{}

					Number::Number(Number&& move) :
						ValueType(move)
					{}

					Number::~Number()
					{}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_H_