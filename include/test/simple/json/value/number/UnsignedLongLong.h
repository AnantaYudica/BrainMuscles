#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDLONGLONG_H_

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
							inline UnsignedLongLong();
							inline UnsignedLongLong(const unsigned long long& value);
							inline UnsignedLongLong(const UnsignedLongLong& copy);
							inline UnsignedLongLong(UnsignedLongLong&& move);
						public:
							inline UnsignedLongLong& operator= (const unsigned long long& value);
							inline operator unsigned long long&();
							inline operator const unsigned long long&() const;
						};

						inline UnsignedLongLong::UnsignedLongLong() :
							m_value(0)
						{}

						inline UnsignedLongLong::UnsignedLongLong(const unsigned long long& value) :
							m_value(value)
						{}

						inline UnsignedLongLong::UnsignedLongLong(const UnsignedLongLong& copy) :
							m_value(copy.m_value)
						{}

						inline UnsignedLongLong::UnsignedLongLong(UnsignedLongLong&& move) :
							m_value(move.m_value)
						{}

						inline UnsignedLongLong& UnsignedLongLong::operator= (const unsigned long long& value)
						{
							m_value = value;
							return *this;
						}

						inline UnsignedLongLong::operator unsigned long long&()
						{
							return m_value;
						}

						inline UnsignedLongLong::operator const unsigned long long&() const
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