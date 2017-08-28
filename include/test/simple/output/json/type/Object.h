#ifndef TEST_SIMPLE_OUTPUT_JSON_TYPE_OBJECT_H_
#define TEST_SIMPLE_OUTPUT_JSON_TYPE_OBJECT_H_

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
						class Object :
							public BrainMuscles::test::simple::output::json::Type
						{
						public:
							typedef BrainMuscles::test::simple::output::json::Type		JsonType;
						private:
							typedef std::shared_ptr<JsonType>							PtrJsonType;
						private:
							std::vector<PtrJsonType> m_value;
						public:
							Object(const char* key);
							Object(const Object& copy);
							Object(Object&& move);
						public:
							~Object();
						public:
							void PrintValue(std::FILE* output_file);
							template<typename JSON_TYPE>
							typename std::enable_if<std::is_base_of<JsonType, JSON_TYPE>::value>::type 
								Add(const JSON_TYPE& json_type);
						};

						Object::Object(const char* key) :
							JsonType(key)
						{}

						Object::Object(const Object& copy) :
							JsonType(copy),
							m_value(copy.m_value)
						{}

						Object::Object(Object&& move) :
							JsonType(move),
							m_value(move.m_value)
						{}

						Object::~Object()
						{}

						void Object::PrintValue(std::FILE* output_file)
						{
							fprintf(output_file, "{");
							for (std::size_t i = 0; i < m_value.size(); ++i)
							{
								if (i != 0)
								{
									fprintf(output_file, ", ");
								}
								m_value[i]->Print(output_file);
							}
							fprintf(output_file, "}");
						}

						template<typename JSON_TYPE>
						typename std::enable_if<std::is_base_of<typename Object::JsonType, JSON_TYPE>::value>::type
							Object::Add(const JSON_TYPE& json_type)
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

#endif //!TEST_SIMPLE_OUTPUT_JSON_TYPE_OBJECT_H_