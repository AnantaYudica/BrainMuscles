#ifndef TEST_SIMPLE_JSON_VALUE_TRUE_H_
#define TEST_SIMPLE_JSON_VALUE_TRUE_H_

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
					class True :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
					public:
						True() = default;
						True(const True& copy) = default;
						True(True&& move) = default;
					public:
						~True() = default;
					public:
						operator const bool const();
						operator const char* const();
					};

					True::operator const bool const()
					{
						return true;
					}

					True::operator const char* const()
					{
						return ConstantType::TrueCString;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_TRUE_H_