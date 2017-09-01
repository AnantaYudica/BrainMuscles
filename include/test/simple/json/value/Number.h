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
						typedef typename ValueType::SharedPointerType					SharedPointerType;
					protected:
						Number() = default;
					public:
						Number(const Number& copy) = default;
						Number(Number&& move) = default;
						virtual ~Number() = default;
					public:
						virtual SharedPointerType MakeShared() const = 0;
					};
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_H_