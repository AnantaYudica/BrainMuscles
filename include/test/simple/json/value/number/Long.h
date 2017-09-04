#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_

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
						class Long :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							long m_value;
						public:
							Long();
							Long(const long& value);
							Long(const Long& copy);
							Long(Long&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							Long& operator= (const long& value);
							operator long&();
							operator const long&() const;
						};

						Long::Long() :
							m_value(0)
						{}

						Long::Long(const long& value) :
							m_value(value)
						{}

						Long::Long(const Long& copy) :
							m_value(copy.m_value)
						{}

						Long::Long(Long&& move) :
							m_value(move.m_value)
						{}

						typename Long::SharedPointerType Long::MakeShared() const
						{
							return SharedPointerType(new Long(*this));
						}

						Long& Long::operator= (const long& value)
						{
							m_value = value;
							return *this;
						}

						Long::operator long&()
						{
							return m_value;
						}

						Long::operator const long&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_LONG_H_