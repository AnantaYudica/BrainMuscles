#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_

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
						class Char :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							char m_value;
						public:
							Char();
							Char(const char& value);
							Char(const Char& copy);
							Char(Char&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							Char& operator= (const char& value);
							operator char&();
							operator const char&() const;
						};

						Char::Char() :
							m_value(0)
						{}

						Char::Char(const char& value) :
							m_value(value)
						{}

						Char::Char(const Char& copy) :
							m_value(copy.m_value)
						{}

						Char::Char(Char&& move) :
							m_value(move.m_value)
						{}

						typename Char::SharedPointerType Char::MakeShared() const
						{
							return SharedPointerType(new Char(*this));
						}

						Char& Char::operator= (const char& value)
						{
							m_value = value;
							return *this;
						}

						Char::operator char&()
						{
							return m_value;
						}

						Char::operator const char&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_CHAR_H_