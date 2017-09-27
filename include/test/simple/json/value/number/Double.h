#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_

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
						class Double :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							double m_value;
						public:
							inline Double();
							inline Double(const double& value);
							inline Double(const Double& copy);
							inline Double(Double&& move);
						public:
							inline Double& operator= (const double& value);
							inline operator double&();
							inline operator const double&() const;
						};

						inline Double::Double() :
							m_value(0)
						{}

						inline Double::Double(const double& value) :
							m_value(value)
						{}

						inline Double::Double(const Double& copy) :
							m_value(copy.m_value)
						{}

						inline Double::Double(Double&& move) :
							m_value(move.m_value)
						{}

						inline Double& Double::operator= (const double& value)
						{
							m_value = value;
							return *this;
						}

						inline Double::operator double&()
						{
							return m_value;
						}

						inline Double::operator const double&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_DOUBLE_H_