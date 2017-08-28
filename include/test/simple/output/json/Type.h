#ifndef TEST_SIMPLE_OUTPUT_JSON_TYPE_H_
#define TEST_SIMPLE_OUTPUT_JSON_TYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <cstdio>

namespace BrainMuscles
{
	namespace test
	{
		namespace output
		{
			namespace json
			{
				class Type
				{
				private:
					const char * m_key;
				protected:
					Type(const char * key);
				public:
					Type(const Type& copy);
					Type(Type&& move);
					virtual ~Type();
				public:
					void PrintKey(std::FILE* output_file);
					virtual void PrintValue(std::FILE* output_file) = 0;
					void Print(std::FILE* output_file);
				};

				Type::Type(const char * key) :
					m_key(key)
				{}

				Type::Type(const Type& copy) :
					m_key(copy.m_key)
				{}

				Type::Type(Type&& move) :
					m_key(move.m_key)
				{}

				Type::~Type()
				{}

				void Type::PrintKey(std::FILE* output_file)
				{
					fprintf(output_file, "\"%s\" : ", m_key);
				}

				void Type::Print(std::FILE* output_file)
				{
					PrintKey(output_file);
					PrintValue(output_file);
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_OUTPUT_JSON_TYPE_H_