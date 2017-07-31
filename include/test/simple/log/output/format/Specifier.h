#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_SPECIFIER_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_SPECIFIER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <algorithm>

#include "test\simple\log\output\format\Constant.h"

#include "test\simple\log\output\format\Helper.h"

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
					namespace format
					{
						class Specifier
						{
						private:
							typedef BrainMuscles::test::simple::log::output::
								format::Constant								ConstantType;
						public:
							typedef typename ConstantType::SizeType				SizeType;
							typedef typename ConstantType::SpecifierArrayType	SpecifierArrayType;
							typedef typename ConstantType::FormatStringType		FormatStringType;
						private:
							SpecifierArrayType m_specifier;
						private:
							template<typename... ARGS>
							Specifier(const ARGS&... args);
						public:
							Specifier();
							Specifier(const Specifier& specifier);
							Specifier(Specifier* ptr_specifier);
						public:
							const char* GetValue() const;
							const SizeType GetSize() const;
						public:
							void CopyToFormat(FormatStringType& format, SizeType& index);
						public:
							static Specifier Character();
							static Specifier String();
							static Specifier Pointer();
							static Specifier SignedDecimal();
							static Specifier UnsignedDecimal();
							static Specifier UnsignedOctal();
							static Specifier LowerUnsignedHexadecimal();
							static Specifier UpperUnsignedHexadecimal();
							static Specifier LowerFloatDecimal();
							static Specifier UpperFloatDecimal();
							static Specifier LowerFloatExponentDecimal();
							static Specifier UpperFloatExponentDecimal();
							static Specifier LowerFloatDecimalOrFloatExponentDecimal();
							static Specifier UpperFloatDecimalOrFloatExponentDecimal();
							static Specifier LowerFloatExponentHexadecimal();
							static Specifier UpperFloatExponentHexadecimal();
						};

						template<typename... ARGS>
						Specifier::Specifier(const ARGS&... args) :
							m_specifier{ args... }
						{}

						Specifier::Specifier()
						{}

						Specifier::Specifier(const Specifier& specifier)
						{
							std::copy(std::begin(specifier.m_specifier), std::end(specifier.m_specifier), m_specifier);
						}

						Specifier::Specifier(Specifier* ptr_specifier)
						{
							std::copy(std::begin(ptr_specifier->m_specifier), std::end(ptr_specifier->m_specifier), m_specifier);
						}

						const char* Specifier::GetValue() const
						{
							return m_specifier;
						}

						const typename Specifier::SizeType Specifier::GetSize() const
						{
							return 1;
						}

						void Specifier::CopyToFormat(FormatStringType& format, SizeType& index)
						{
							BrainMuscles::test::simple::log::output::format::helper::
								CopyToFormat<SizeType, SpecifierArrayType, FormatStringType>(m_specifier, GetSize(), format, index);
						}

						Specifier Specifier::Character() 
						{
							return Specifier('c');
						}

						Specifier Specifier::String()
						{
							return Specifier('s');
						}

						Specifier Specifier::Pointer()
						{
							return Specifier('p');
						}

						Specifier Specifier::SignedDecimal()
						{
							return Specifier('i');
						}

						Specifier Specifier::UnsignedDecimal()
						{
							return Specifier('u');
						}

						Specifier Specifier::UnsignedOctal()
						{
							return Specifier('o');
						}

						Specifier Specifier::LowerUnsignedHexadecimal()
						{
							return Specifier('x');
						}

						Specifier Specifier::UpperUnsignedHexadecimal()
						{
							return Specifier('X');
						}

						Specifier Specifier::LowerFloatDecimal()
						{
							return Specifier('f');
						}

						Specifier Specifier::UpperFloatDecimal()
						{
							return Specifier('F');
						}

						Specifier Specifier::LowerFloatExponentDecimal()
						{
							return Specifier('e');
						}

						Specifier Specifier::UpperFloatExponentDecimal()
						{
							return Specifier('E');
						}

						Specifier Specifier::LowerFloatDecimalOrFloatExponentDecimal()
						{
							return Specifier('g');
						}

						Specifier Specifier::UpperFloatDecimalOrFloatExponentDecimal()
						{
							return Specifier('G');
						}

						Specifier Specifier::LowerFloatExponentHexadecimal()
						{
							return Specifier('a');
						}

						Specifier Specifier::UpperFloatExponentHexadecimal()
						{
							return Specifier('A');
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_SPECIFIER_H_
