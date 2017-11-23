#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_

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
						class LongLong :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							long long m_value;
						public:
							inline LongLong();
							inline LongLong(const long long& value);
							inline LongLong(const LongLong& copy);
							inline LongLong(LongLong&& move);
						public:
							inline LongLong& operator= (const long long& value);
							inline operator long long&();
							inline operator const long long&() const;
						};

						inline LongLong::LongLong() :
							m_value(0)
						{}

						inline LongLong::LongLong(const long long& value) :
							m_value(value)
						{}

						inline LongLong::LongLong(const LongLong& copy) :
							m_value(copy.m_value)
						{}

						inline LongLong::LongLong(LongLong&& move) :
							m_value(move.m_value)
						{}

						inline LongLong& LongLong::operator= (const long long& value)
						{
							m_value = value;
							return *this;
						}

						inline LongLong::operator long long&()
						{
							return m_value;
						}

						inline LongLong::operator const long long&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_