#ifndef TEST_SIMPLE_OUTPUT_JSON_TYPE_ARRAY_H_
#define TEST_SIMPLE_OUTPUT_JSON_TYPE_ARRAY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <vector>
#include <memory>

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
						class Array :
							public BrainMuscles::test::simple::output::json::Type
						{
						public:
							typedef BrainMuscles::test::simple::output::json::Type		JsonType;
						private:
							typedef std::shared_ptr<JsonType>							PtrJsonType;
						private:
							std::vector<PtrJsonType> m_value;
						public:
							Array(const char* key);
							Array(const Array& copy);
							Array(Array&& move);
						public:
							~Array();
						public:
							void PrintValue(std::FILE* output_file);
							template<typename JSON_TYPE>
							typename std::enable_if<std::is_base_of<JsonType, JSON_TYPE>::value>::type 
								Add(const JSON_TYPE& json_type);
						};

						Array::Array(const char* key) :
							JsonType(key)
						{}

						Array::Array(const Array& copy) :
							JsonType(copy),
							m_value(copy.m_value)
						{}

						Array::Array(Array&& move) :
							JsonType(move),
							m_value(move.m_value)
						{}

						Array::~Array()
						{}

						void Array::PrintValue(std::FILE* output_file)
						{
							fprintf(output_file, "[");
							for (std::size_t i = 0; i < m_value.size(); ++i)
							{
								if (i != 0)
								{
									fprintf(output_file, ", ");
								}
								m_value[i]->PrintValue(output_file);
							}
							fprintf(output_file, "]");
						}

						template<typename JSON_TYPE>
						typename std::enable_if<std::is_base_of<typename Array::JsonType, JSON_TYPE>::value>::type 
							Array::Add(const JSON_TYPE& json_type)
						{
							m_value.push_back(PtrJsonType(new JSON_TYPE(json_type)));
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_OUTPUT_JSON_TYPE_ARRAY_H_