#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_DECIMAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_DECIMAL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

#include "test\simple\log\output\Arguments.h"
#include "test\simple\log\output\Set.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					namespace handle
					{
						class Decimal :
							public BrainMuscles::test::simple::log::output::Set<
								BrainMuscles::test::simple::log::output::format::Value, void, void>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Value	ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, void>										BaseType;
							typedef BrainMuscles::test::simple::log::output::set::Type		SetTypeType;
						public:
							template<typename TYPE>
							using ArgumentsType = BrainMuscles::test::simple::log::output::Arguments<
								Decimal, TYPE>;
						public:
							Decimal();
						public:
							ArgumentsType<unsigned char> operator()(const unsigned char& value) const;
							ArgumentsType<char> operator()(const char& value)  const;
							ArgumentsType<unsigned short> operator()(const unsigned short& value)  const;
							ArgumentsType<short> operator()(const short& value)  const;
							ArgumentsType<unsigned int> operator()(const unsigned int& value)  const;
							ArgumentsType<int> operator()(const int& value)  const;
							ArgumentsType<unsigned long> operator()(const unsigned long& value) const;
							ArgumentsType<long> operator()(const long& value) const;
							ArgumentsType<unsigned long long> operator()(const unsigned long long& value) const;
							ArgumentsType<long long> operator()(const long long& value) const;
						};

						Decimal::Decimal() :
							BaseType(SetTypeType::local_value, &ValueType::DecimalEnable)
						{}

						typename Decimal::ArgumentsType<unsigned char> 
							Decimal::operator()(const unsigned char& value) const
						{
							return ArgumentsType<unsigned char>(value);
						}

						typename Decimal::ArgumentsType<char> 
							Decimal::operator()(const char& value) const
						{
							return ArgumentsType<char>(value);
						}

						typename Decimal::ArgumentsType<unsigned short> 
							Decimal::operator()(const unsigned short& value) const
						{
							return ArgumentsType<unsigned short>(value);
						}

						typename Decimal::ArgumentsType<short> 
							Decimal::operator()(const short& value) const
						{
							return ArgumentsType<short>(value);
						}

						typename Decimal::ArgumentsType<unsigned int> 
							Decimal::operator()(const unsigned int& value) const
						{
							return ArgumentsType<unsigned int>(value);
						}

						typename Decimal::ArgumentsType<int> 
							Decimal::operator()(const int& value) const
						{
							return ArgumentsType<int>(value);
						}

						typename Decimal::ArgumentsType<unsigned long> 
							Decimal::operator()(const unsigned long& value) const
						{
							return ArgumentsType<unsigned long>(value);
						}

						typename Decimal::ArgumentsType<long> 
							Decimal::operator()(const long& value) const
						{
							return ArgumentsType<long>(value);
						}

						typename Decimal::ArgumentsType<unsigned long long> 
							Decimal::operator()(const unsigned long long& value) const
						{
							return ArgumentsType<unsigned long long>(value);
						}

						typename Decimal::ArgumentsType<long long> 
							Decimal::operator()(const long long& value) const
						{
							return ArgumentsType<long long>(value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_DECIMAL_H_