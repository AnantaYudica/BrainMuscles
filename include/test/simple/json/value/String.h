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
						typedef typename ValueType::SharedPointerType					SharedPointerType;
						typedef typename ConstantType::StringType						StringType;
					public:
						String();
						String(const StringType& string);
						String(const String& copy);
						String(String&& move);
						~String();
					public:
						SharedPointerType MakeShared() const;
					public:
						operator const char*() const;
					};

					String::String() :
						StringType()
					{}

					String::String(const StringType& string) :
						StringType(string)
					{}

					String::String(const String& copy) :
						StringType(copy)
					{}

					String::String(String&& move) :
						StringType(move)
					{}

					String::~String()
					{}

					typename String::SharedPointerType String::MakeShared() const
					{
						return SharedPointerType(new String(*this));
					}

					String::operator const char*() const
					{
						return ConstantType::StringToConstCString(*this);
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_JSON_VALUE_STRING_H_