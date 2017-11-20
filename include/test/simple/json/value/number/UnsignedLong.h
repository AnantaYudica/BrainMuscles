#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONG_H_

#include "test/Configure.h"

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
							inline UnsignedLong();
							inline UnsignedLong(const unsigned long& value);
							inline UnsignedLong(const UnsignedLong& copy);
							inline UnsignedLong(UnsignedLong&& move);
						public:
							inline UnsignedLong& operator= (const unsigned long& value);
							inline operator unsigned long&();
							inline operator const unsigned long&() const;
						};

						inline UnsignedLong::UnsignedLong() :
							m_value(0)
						{}

						inline UnsignedLong::UnsignedLong(const unsigned long& value) :
							m_value(value)
						{}

						inline UnsignedLong::UnsignedLong(const UnsignedLong& copy) :
							m_value(copy.m_value)
						{}

						inline UnsignedLong::UnsignedLong(UnsignedLong&& move) :
							m_value(move.m_value)
						{}

						inline UnsignedLong& UnsignedLong::operator= (const unsigned long& value)
						{
							m_value = value;
							return *this;
						}

						inline UnsignedLong::operator unsigned long&()
						{
							return m_value;
						}

						inline UnsignedLong::operator const unsigned long&() const
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