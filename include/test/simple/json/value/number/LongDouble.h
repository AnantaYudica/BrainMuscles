#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_

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
						class LongDouble :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							long double m_value;
						public:
							LongDouble();
							LongDouble(const long double& value);
							LongDouble(const LongDouble& copy);
							LongDouble(LongDouble&& move);
						public:
							LongDouble& operator= (const long double& value);
							operator long double&();
							operator const long double&() const;
						};

						LongDouble::LongDouble() :
							m_value(0)
						{}

						LongDouble::LongDouble(const long double& value) :
							m_value(value)
						{}

						LongDouble::LongDouble(const LongDouble& copy) :
							m_value(copy.m_value)
						{}

						LongDouble::LongDouble(LongDouble&& move) :
							m_value(move.m_value)
						{}

						LongDouble& LongDouble::operator= (const long double& value)
						{
							m_value = value;
							return *this;
						}

						LongDouble::operator long double&()
						{
							return m_value;
						}

						LongDouble::operator const long double&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_LONGDOUBLE_H_