#ifndef TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDSHORT_H_
#define TEST_SIMPLE_JSON_VALUE_NUMBER_UNSIGNEDSHORT_H_

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
						class UnsignedShort :
							public BrainMuscles::test::simple::json::value::Number
						{
						public:
							typedef BrainMuscles::test::simple::json::value::Number	NumberType;
							typedef typename NumberType::ConstantType				ConstantType;
							typedef typename NumberType::ValueType					ValueType;
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							unsigned short m_value;
						public:
							UnsignedShort();
							UnsignedShort(const unsigned short& value);
							UnsignedShort(const UnsignedShort& copy);
							UnsignedShort(UnsignedShort&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							UnsignedShort& operator= (const unsigned short& value);
							operator unsigned short&();
							operator const unsigned short&() const;
						};

						UnsignedShort::UnsignedShort() :
							m_value(0)
						{}

						UnsignedShort::UnsignedShort(const unsigned short& value) :
							m_value(value)
						{}

						UnsignedShort::UnsignedShort(const UnsignedShort& copy) :
							m_value(copy.m_value)
						{}

						UnsignedShort::UnsignedShort(UnsignedShort&& move) :
							m_value(move.m_value)
						{}

						typename UnsignedShort::SharedPointerType UnsignedShort::MakeShared() const
						{
							return SharedPointerType(new UnsignedShort(*this));
						}

						UnsignedShort& UnsignedShort::operator= (const unsigned short& value)
						{
							m_value = value;
							return *this;
						}

						UnsignedShort::operator unsigned short&()
						{
							return m_value;
						}

						UnsignedShort::operator const unsigned short&() const
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