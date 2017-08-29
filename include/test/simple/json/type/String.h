#ifndef TEST_SIMPLE_OUTPUT_JSON_TYPE_STRING_H_
#define TEST_SIMPLE_OUTPUT_JSON_TYPE_STRING_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <string>

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
						class String :
							public BrainMuscles::test::simple::output::json::Type
						{
						public:
							typedef BrainMuscles::test::simple::output::json::Type		JsonType;
						private:
							std::string m_value;
						public:
							String(const char* key);
							String(const String& copy);
							String(String&& move);
							~String();
						public:
							void PrintValue(std::FILE* output_file);
							String& operator= (const char* value);
						};

						String::String(const char* key) :
							JsonType(key)
						{
						}

						String::String(const String& copy) :
							JsonType(copy),
							m_value(copy.m_value)
						{}

						String::String(String&& move) :
							JsonType(move),
							m_value(move.m_value)
						{}

						String::~String()
						{}

						void String::PrintValue(std::FILE* output_file)
						{
							fprintf(output_file, "\"%s\"", m_value.c_str());
						}

						String& String::operator= (const char* value)
						{
							m_value = value;
							return *this;
						}
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_OUTPUT_JSON_TYPE_STRING_H_