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
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							unsigned char m_value;
						public:
							UnsignedChar();
							UnsignedChar(const unsigned char& value);
							UnsignedChar(const UnsignedChar& copy);
							UnsignedChar(UnsignedChar&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							UnsignedChar& operator= (const unsigned char& value);
							operator unsigned char&();
							operator const unsigned char&() const;
						};

						UnsignedChar::UnsignedChar() :
							m_value(0)
						{}

						UnsignedChar::UnsignedChar(const unsigned char& value) :
							m_value(value)
						{}

						UnsignedChar::UnsignedChar(const UnsignedChar& copy) :
							m_value(copy.m_value)
						{}

						UnsignedChar::UnsignedChar(UnsignedChar&& move) :
							m_value(move.m_value)
						{}

						typename UnsignedChar::SharedPointerType UnsignedChar::MakeShared() const
						{
							return SharedPointerType(new UnsignedChar(*this));
						}

						UnsignedChar& UnsignedChar::operator= (const unsigned char& value)
						{
							m_value = value;
							return *this;
						}

						UnsignedChar::operator unsigned char&()
						{
							return m_value;
						}

						UnsignedChar::operator const unsigned char&() const
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