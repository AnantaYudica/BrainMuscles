#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_

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
						class Long :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							long m_value;
						public:
							inline Long();
							inline Long(const long& value);
							inline Long(const Long& copy);
							inline Long(Long&& move);
						public:
							inline Long& operator= (const long& value);
							inline operator long&();
							inline operator const long&() const;
						};

						inline Long::Long() :
							m_value(0)
						{}

						inline Long::Long(const long& value) :
							m_value(value)
						{}

						inline Long::Long(const Long& copy) :
							m_value(copy.m_value)
						{}

						inline Long::Long(Long&& move) :
							m_value(move.m_value)
						{}

						inline Long& Long::operator= (const long& value)
						{
							m_value = value;
							return *this;
						}

						inline Long::operator long&()
						{
							return m_value;
						}

						inline Long::operator const long&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_