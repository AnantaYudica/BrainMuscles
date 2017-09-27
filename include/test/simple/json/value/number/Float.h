#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_

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
						class Float :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							float m_value;
						public:
							inline Float();
							inline Float(const float& value);
							inline Float(const Float& copy);
							inline Float(Float&& move);
						public:
							inline Float& operator= (const float& value);
							inline operator float&();
							inline operator const float&() const;
						};

						inline Float::Float() :
							m_value(0)
						{}

						inline Float::Float(const float& value) :
							m_value(value)
						{}

						inline Float::Float(const Float& copy) :
							m_value(copy.m_value)
						{}

						inline Float::Float(Float&& move) :
							m_value(move.m_value)
						{}

						inline Float& Float::operator= (const float& value)
						{
							m_value = value;
							return *this;
						}

						inline Float::operator float&()
						{
							return m_value;
						}

						inline Float::operator const float&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_FLOAT_H_