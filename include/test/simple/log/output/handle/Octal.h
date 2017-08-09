#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_OCTAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_OCTAL_H_

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
						class Octal :
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
								Octal, TYPE>;
						public:
							Octal();
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

						Octal::Octal() :
							BaseType(SetTypeType::local_value, &ValueType::OctalEnable)
						{}

						typename Octal::ArgumentsType<unsigned char> 
							Octal::operator()(const unsigned char& value) const
						{
							return ArgumentsType<unsigned char>(value);
						}

						typename Octal::ArgumentsType<char> 
							Octal::operator()(const char& value) const
						{
							return ArgumentsType<char>(value);
						}

						typename Octal::ArgumentsType<unsigned short> 
							Octal::operator()(const unsigned short& value) const
						{
							return ArgumentsType<unsigned short>(value);
						}

						typename Octal::ArgumentsType<short> 
							Octal::operator()(const short& value) const
						{
							return ArgumentsType<short>(value);
						}

						typename Octal::ArgumentsType<unsigned int> 
							Octal::operator()(const unsigned int& value) const
						{
							return ArgumentsType<unsigned int>(value);
						}

						typename Octal::ArgumentsType<int> 
							Octal::operator()(const int& value) const
						{
							return ArgumentsType<int>(value);
						}

						typename Octal::ArgumentsType<unsigned long> 
							Octal::operator()(const unsigned long& value) const
						{
							return ArgumentsType<unsigned long>(value);
						}

						typename Octal::ArgumentsType<long> 
							Octal::operator()(const long& value) const
						{
							return ArgumentsType<long>(value);
						}

						typename Octal::ArgumentsType<unsigned long long> 
							Octal::operator()(const unsigned long long& value) const
						{
							return ArgumentsType<unsigned long long>(value);
						}

						typename Octal::ArgumentsType<long long> 
							Octal::operator()(const long long& value) const
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_OCTAL_H_