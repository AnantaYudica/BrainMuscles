#ifndef TEST_SIMPLE_JSON_VALUE_FALSE_H_
#define TEST_SIMPLE_JSON_VALUE_FALSE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Constant.h"

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
					class False :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
					public:
						False() = default;
						False(const False& copy) = default;
						False(False&& move) = default;
					public:
						~False() = default;
					public:
						inline operator const bool() const;
						inline operator const char*() const;
					};

					inline False::operator const bool() const
					{
						return false;
					}

					inline False::operator const char*() const
					{
						return ConstantType::FalseCString;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_FALSE_H_