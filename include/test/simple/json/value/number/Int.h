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
							typedef typename NumberType::SharedPointerType			SharedPointerType;
						private:
							int m_value;
						public:
							Int();
							Int(const int& value);
							Int(const Int& copy);
							Int(Int&& move);
						public:
							SharedPointerType MakeShared() const;
						public:
							Int& operator= (const int& value);
							operator int&();
							operator const int&() const;
						};

						Int::Int() :
							m_value(0)
						{}

						Int::Int(const int& value) :
							m_value(value)
						{}

						Int::Int(const Int& copy) :
							m_value(copy.m_value)
						{}

						Int::Int(Int&& move) :
							m_value(move.m_value)
						{}

						typename Int::SharedPointerType Int::MakeShared() const
						{
							return SharedPointerType(new Int(*this));
						}

						Int& Int::operator= (const int& value)
						{
							m_value = value;
							return *this;
						}

						Int::operator int&()
						{
							return m_value;
						}

						Int::operator const int&() const
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