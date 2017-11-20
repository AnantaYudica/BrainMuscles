#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_

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
						class UnsignedInt :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							unsigned int m_value;
						public:
							inline UnsignedInt();
							inline UnsignedInt(const unsigned int& value);
							inline UnsignedInt(const UnsignedInt& copy);
							inline UnsignedInt(UnsignedInt&& move);
						public:
							inline UnsignedInt& operator= (const unsigned int& value);
							inline operator unsigned int&();
							inline operator const unsigned int&() const;
						};

						inline UnsignedInt::UnsignedInt() :
							m_value(0)
						{}

						inline UnsignedInt::UnsignedInt(const unsigned int& value) :
							m_value(value)
						{}

						inline UnsignedInt::UnsignedInt(const UnsignedInt& copy) :
							m_value(copy.m_value)
						{}

						inline UnsignedInt::UnsignedInt(UnsignedInt&& move) :
							m_value(move.m_value)
						{}

						inline UnsignedInt& UnsignedInt::operator= (const unsigned int& value)
						{
							m_value = value;
							return *this;
						}

						inline UnsignedInt::operator unsigned int&()
						{
							return m_value;
						}

						inline UnsignedInt::operator const unsigned int&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_