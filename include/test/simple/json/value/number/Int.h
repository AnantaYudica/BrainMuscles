#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_

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
						class Int :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							int m_value;
						public:
							inline Int();
							inline Int(const int& value);
							inline Int(const Int& copy);
							inline Int(Int&& move);
						public:
							inline Int& operator= (const int& value);
							inline operator int&();
							inline operator const int&() const;
						};

						inline Int::Int() :
							m_value(0)
						{}

						inline Int::Int(const int& value) :
							m_value(value)
						{}

						inline Int::Int(const Int& copy) :
							m_value(copy.m_value)
						{}

						inline Int::Int(Int&& move) :
							m_value(move.m_value)
						{}

						inline Int& Int::operator= (const int& value)
						{
							m_value = value;
							return *this;
						}

						inline Int::operator int&()
						{
							return m_value;
						}

						inline Int::operator const int&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_INT_H_