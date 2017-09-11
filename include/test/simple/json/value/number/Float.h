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
							Float();
							Float(const float& value);
							Float(const Float& copy);
							Float(Float&& move);
						public:
							Float& operator= (const float& value);
							operator float&();
							operator const float&() const;
						};

						Float::Float() :
							m_value(0)
						{}

						Float::Float(const float& value) :
							m_value(value)
						{}

						Float::Float(const Float& copy) :
							m_value(copy.m_value)
						{}

						Float::Float(Float&& move) :
							m_value(move.m_value)
						{}

						Float& Float::operator= (const float& value)
						{
							m_value = value;
							return *this;
						}

						Float::operator float&()
						{
							return m_value;
						}

						Float::operator const float&() const
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