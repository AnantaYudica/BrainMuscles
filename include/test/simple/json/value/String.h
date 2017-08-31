#ifndef TEST_SIMPLE_JSON_VALUE_STRING_H_
#define TEST_SIMPLE_JSON_VALUE_STRING_H_

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
					class String :
						public BrainMuscles::test::simple::json::Constant::ValueType,
						public BrainMuscles::test::simple::json::Constant::StringType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
						typedef typename ConstantType::StringType						StringType;
					public:
						String();
						String(const char* value);
						String(const String& copy);
						String(String&& move);
						~String();
					};

					String::String() :
						StringType()
					{}

					String::String(const char* value) :
						StringType(value)
					{
					}

					String::String(const String& copy) :
						StringType(copy)
					{}

					String::String(String&& move) :
						StringType(move)
					{}

					String::~String()
					{}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_JSON_VALUE_STRING_H_