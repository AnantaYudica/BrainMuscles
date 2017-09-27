#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_

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
						class UnsignedChar :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							unsigned char m_value;
						public:
							inline UnsignedChar();
							inline UnsignedChar(const unsigned char& value);
							inline UnsignedChar(const UnsignedChar& copy);
							inline UnsignedChar(UnsignedChar&& move);
						public:
							inline UnsignedChar& operator= (const unsigned char& value);
							inline operator unsigned char&();
							inline operator const unsigned char&() const;
						};

						inline UnsignedChar::UnsignedChar() :
							m_value(0)
						{}

						inline UnsignedChar::UnsignedChar(const unsigned char& value) :
							m_value(value)
						{}

						inline UnsignedChar::UnsignedChar(const UnsignedChar& copy) :
							m_value(copy.m_value)
						{}

						inline UnsignedChar::UnsignedChar(UnsignedChar&& move) :
							m_value(move.m_value)
						{}

						inline UnsignedChar& UnsignedChar::operator= (const unsigned char& value)
						{
							m_value = value;
							return *this;
						}

						inline UnsignedChar::operator unsigned char&()
						{
							return m_value;
						}

						inline UnsignedChar::operator const unsigned char&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDCHAR_H_