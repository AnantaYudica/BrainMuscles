#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_SHORT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\value\Number.h"

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
							Short();
							Short(const short& value);
							Short(const Short& copy);
							Short(Short&& move);
						public:
							Short& operator= (const short& value);
							operator short&();
							operator const short&() const;
						};

						Short::Short() :
							m_value(0)
						{}

						Short::Short(const short& value) :
							m_value(value)
						{}

						Short::Short(const Short& copy) :
							m_value(copy.m_value)
						{}

						Short::Short(Short&& move) :
							m_value(move.m_value)
						{}

						Short& Short::operator= (const short& value)
						{
							m_value = value;
							return *this;
						}

						Short::operator short&()
						{
							return m_value;
						}

						Short::operator const short&() const
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