#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_

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
						class UnsignedLongLong :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							unsigned long long m_value;
						public:
							UnsignedLongLong();
							UnsignedLongLong(const unsigned long long& value);
							UnsignedLongLong(const UnsignedLongLong& copy);
							UnsignedLongLong(UnsignedLongLong&& move);
						public:
							UnsignedLongLong& operator= (const unsigned long long& value);
							operator unsigned long long&();
							operator const unsigned long long&() const;
						};

						UnsignedLongLong::UnsignedLongLong() :
							m_value(0)
						{}

						UnsignedLongLong::UnsignedLongLong(const unsigned long long& value) :
							m_value(value)
						{}

						UnsignedLongLong::UnsignedLongLong(const UnsignedLongLong& copy) :
							m_value(copy.m_value)
						{}

						UnsignedLongLong::UnsignedLongLong(UnsignedLongLong&& move) :
							m_value(move.m_value)
						{}

						UnsignedLongLong& UnsignedLongLong::operator= (const unsigned long long& value)
						{
							m_value = value;
							return *this;
						}

						UnsignedLongLong::operator unsigned long long&()
						{
							return m_value;
						}

						UnsignedLongLong::operator const unsigned long long&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_