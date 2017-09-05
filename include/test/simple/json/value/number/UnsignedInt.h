#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDINT_H_

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
						class UnsignedInt :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							unsigned int m_value;
						public:
							UnsignedInt();
							UnsignedInt(const unsigned int& value);
							UnsignedInt(const UnsignedInt& copy);
							UnsignedInt(UnsignedInt&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							UnsignedInt& operator= (const unsigned int& value);
							operator unsigned int&();
							operator const unsigned int&() const;
						};

						UnsignedInt::UnsignedInt() :
							m_value(0)
						{}

						UnsignedInt::UnsignedInt(const unsigned int& value) :
							m_value(value)
						{}

						UnsignedInt::UnsignedInt(const UnsignedInt& copy) :
							m_value(copy.m_value)
						{}

						UnsignedInt::UnsignedInt(UnsignedInt&& move) :
							m_value(move.m_value)
						{}

						typename UnsignedInt::SharedPointerType UnsignedInt::MakeShared() const
						{
							return SharedPointerType(new UnsignedInt(*this));
						}

						UnsignedInt& UnsignedInt::operator= (const unsigned int& value)
						{
							m_value = value;
							return *this;
						}

						UnsignedInt::operator unsigned int&()
						{
							return m_value;
						}

						UnsignedInt::operator const unsigned int&() const
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