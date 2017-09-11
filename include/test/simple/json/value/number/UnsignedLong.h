#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_

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
						class UnsignedLong :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							unsigned long m_value;
						public:
							UnsignedLong();
							UnsignedLong(const unsigned long& value);
							UnsignedLong(const UnsignedLong& copy);
							UnsignedLong(UnsignedLong&& move);
						public:
							UnsignedLong& operator= (const unsigned long& value);
							operator unsigned long&();
							operator const unsigned long&() const;
						};

						UnsignedLong::UnsignedLong() :
							m_value(0)
						{}

						UnsignedLong::UnsignedLong(const unsigned long& value) :
							m_value(value)
						{}

						UnsignedLong::UnsignedLong(const UnsignedLong& copy) :
							m_value(copy.m_value)
						{}

						UnsignedLong::UnsignedLong(UnsignedLong&& move) :
							m_value(move.m_value)
						{}

						UnsignedLong& UnsignedLong::operator= (const unsigned long& value)
						{
							m_value = value;
							return *this;
						}

						UnsignedLong::operator unsigned long&()
						{
							return m_value;
						}

						UnsignedLong::operator const unsigned long&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_