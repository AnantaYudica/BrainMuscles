#ifndef TEST_SIMPLE_JSON_VALUE_STRING_H_
#define TEST_SIMPLE_JSON_VALUE_STRING_H_

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
					class String :
						public BrainMuscles::test::simple::json::Constant::ValueType,
						public BrainMuscles::test::simple::json::Constant::StringType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
						typedef typename ConstantType::StringType						StringType;
					public:
						inline String();
						inline String(const StringType& string);
						inline String(StringType&& string);
						inline String(const String& copy);
						inline String(String&& move);
						inline ~String();
					public:
						inline operator const char*() const;
						inline String& operator=(const StringType& string);
					};

					inline String::String()
					{}

					inline String::String(const StringType& string) :
						StringType(string)
					{}

					inline String::String(StringType&& string) :
						StringType(string)
					{}

					inline String::String(const String& copy) :
						StringType(copy)
					{}

					inline String::String(String&& move) :
						StringType(move)
					{}

					inline String::~String()
					{}

					inline String::operator const char*() const
					{
						return ConstantType::StringToConstCString(*this);
					}

					inline String& String::operator=(const StringType& string)
					{
						StringType::operator=(string);
						return *this;
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_JSON_VALUE_STRING_H_