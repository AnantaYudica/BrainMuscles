#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_LONGLONG_H_

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
							LongLong();
							LongLong(const long long& value);
							LongLong(const LongLong& copy);
							LongLong(LongLong&& move);
						public:
							LongLong& operator= (const long long& value);
							operator long long&();
							operator const long long&() const;
						};

						LongLong::LongLong() :
							m_value(0)
						{}

						LongLong::LongLong(const long long& value) :
							m_value(value)
						{}

						LongLong::LongLong(const LongLong& copy) :
							m_value(copy.m_value)
						{}

						LongLong::LongLong(LongLong&& move) :
							m_value(move.m_value)
						{}

						LongLong& LongLong::operator= (const long long& value)
						{
							m_value = value;
							return *this;
						}

						LongLong::operator long long&()
						{
							return m_value;
						}

						LongLong::operator const long long&() const
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