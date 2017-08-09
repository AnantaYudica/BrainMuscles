#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_HEXADECIMAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_HEXADECIMAL_H_

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
						class Hexadecimal :
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
								Hexadecimal, TYPE>;
						public:
							Hexadecimal();
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

						Hexadecimal::Hexadecimal() :
							BaseType(SetTypeType::local_value, &ValueType::HexadecimalEnable)
						{}

						typename Hexadecimal::ArgumentsType<unsigned char> 
							Hexadecimal::operator()(const unsigned char& value) const
						{
							return ArgumentsType<unsigned char>(value);
						}

						typename Hexadecimal::ArgumentsType<char> 
							Hexadecimal::operator()(const char& value) const
						{
							return ArgumentsType<char>(value);
						}

						typename Hexadecimal::ArgumentsType<unsigned short> 
							Hexadecimal::operator()(const unsigned short& value) const
						{
							return ArgumentsType<unsigned short>(value);
						}

						typename Hexadecimal::ArgumentsType<short> 
							Hexadecimal::operator()(const short& value) const
						{
							return ArgumentsType<short>(value);
						}

						typename Hexadecimal::ArgumentsType<unsigned int> 
							Hexadecimal::operator()(const unsigned int& value) const
						{
							return ArgumentsType<unsigned int>(value);
						}

						typename Hexadecimal::ArgumentsType<int> 
							Hexadecimal::operator()(const int& value) const
						{
							return ArgumentsType<int>(value);
						}

						typename Hexadecimal::ArgumentsType<unsigned long> 
							Hexadecimal::operator()(const unsigned long& value) const
						{
							return ArgumentsType<unsigned long>(value);
						}

						typename Hexadecimal::ArgumentsType<long> 
							Hexadecimal::operator()(const long& value) const
						{
							return ArgumentsType<long>(value);
						}

						typename Hexadecimal::ArgumentsType<unsigned long long> 
							Hexadecimal::operator()(const unsigned long long& value) const
						{
							return ArgumentsType<unsigned long long>(value);
						}

						typename Hexadecimal::ArgumentsType<long long> 
							Hexadecimal::operator()(const long long& value) const
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_HEXADECIMAL_H_