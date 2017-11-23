#ifndef TEST_SIMPLE_JSON_VALUE_NULL_H_
#define TEST_SIMPLE_JSON_VALUE_NULL_H_

#include "test/Configure.h"

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
					class Null :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
					public:
						Null() = default;
						Null(const Null& copy) = default;
						Null(Null&& move) = default;
					public:
						~Null() = default;
					public:
						inline operator const char*() const;
					};

					inline Null::operator const char*() const
					{
						return ConstantType::NullCString;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_NULL_H_