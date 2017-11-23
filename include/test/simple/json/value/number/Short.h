#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/value/Number.h"

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
					namespace number
					{
						class Short :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							short m_value;
						public:
							inline Short();
							inline Short(const short& value);
							inline Short(const Short& copy);
							inline Short(Short&& move);
						public:
							inline Short& operator= (const short& value);
							inline operator short&();
							inline operator const short&() const;
						};

						inline Short::Short() :
							m_value(0)
						{}

						inline Short::Short(const short& value) :
							m_value(value)
						{}

						inline Short::Short(const Short& copy) :
							m_value(copy.m_value)
						{}

						inline Short::Short(Short&& move) :
							m_value(move.m_value)
						{}

						inline Short& Short::operator= (const short& value)
						{
							m_value = value;
							return *this;
						}

						inline Short::operator short&()
						{
							return m_value;
						}

						inline Short::operator const short&() const
						{
							return m_value;
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_