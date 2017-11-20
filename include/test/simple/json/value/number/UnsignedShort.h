#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDSHORT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDSHORT_H_

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
						class UnsignedShort :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
						private:
							unsigned short m_value;
						public:
							inline UnsignedShort();
							inline UnsignedShort(const unsigned short& value);
							inline UnsignedShort(const UnsignedShort& copy);
							inline UnsignedShort(UnsignedShort&& move);
						public:
							inline UnsignedShort& operator= (const unsigned short& value);
							inline operator unsigned short&();
							inline operator const unsigned short&() const;
						};

						inline UnsignedShort::UnsignedShort() :
							m_value(0)
						{}

						inline UnsignedShort::UnsignedShort(const unsigned short& value) :
							m_value(value)
						{}

						inline UnsignedShort::UnsignedShort(const UnsignedShort& copy) :
							m_value(copy.m_value)
						{}

						inline UnsignedShort::UnsignedShort(UnsignedShort&& move) :
							m_value(move.m_value)
						{}

						inline UnsignedShort& UnsignedShort::operator= (const unsigned short& value)
						{
							m_value = value;
							return *this;
						}

						inline UnsignedShort::operator unsigned short&()
						{
							return m_value;
						}

						inline UnsignedShort::operator const unsigned short&() const
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

#endif //!TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDSHORT_H_