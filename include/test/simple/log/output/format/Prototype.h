#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_PROTOTYPE_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_PROTOTYPE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

#include "test\simple\log\output\format\Constant.h"
#include "test\simple\log\output\format\Specifier.h"
#include "test\simple\log\output\format\Length.h"

#include "test\simple\log\output\format\Value.h"

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
						class Prototype
						{
						public:
							typedef BrainMuscles::test::simple::log
								::output::format::Constant						ConstantType;
							typedef BrainMuscles::test::simple::log
								::output::format::Specifier						SpecifierType;
							typedef BrainMuscles::test::simple::log
								::output::format::Length						LengthType;
							typedef BrainMuscles::test::simple::log
								::output::format::Value							ValueType;
						public:
							typedef typename ConstantType::FormatStringType		FormatStringType;
							typedef typename ConstantType::SizeType				SizeType;
						private:
							enum SpecifierCase : int;
						private:
							FormatStringType m_formatString;
							ValueType m_value;
						public:
							Prototype();
							Prototype(ValueType value);
							Prototype(const Prototype& prototype);
							Prototype(Prototype* ptr_prototype);
						private:
							template<typename TYPE>
							static constexpr bool IsPointerCharType();
							template<typename TYPE>
							static constexpr bool IsCharacterType();
						private:
							template<typename TYPE>
							SpecifierCase SwitchCaseSpecifier();
							template<typename TYPE>
							bool IsCanCharacterEnable();
							template<typename TYPE>
							bool IsCanStringEnable();
							template<typename TYPE>
							bool IsCanPointerEnable();
							template<typename TYPE>
							bool IsCanIntegerEnable();
							template<typename TYPE>
							bool IsCanFloatEnable();
						private:
							void InCaseCharacterEnable(SizeType& index);
							void InCaseStringEnable(SizeType& index);
							void InCasePointerEnable(SizeType& index);
							void InCaseIntegerDecimalEnable(SizeType& index);
							void InCaseIntegerOctalEnable(SizeType& index);
							void InCaseIntegerHexadecimalEnable(SizeType& index);
							void InCaseFloatDecimalEnable(SizeType& index);
							void InCaseFloatExponentDecimalEnable(SizeType& index);
							void InCaseFloatAndFloatExponentDecimalEnable(SizeType& index);
							void InCaseFloatHexadecimalEnable(SizeType& index);
						private:
							void BeginCharacterToFormat(SizeType& index);
							template<typename ARG>
							void FlagsToFormat(SizeType& index);
							template<typename ARG>
							void WidthToFormat(SizeType& index);
							template<typename ARG>
							void PrecisionToFormat(SizeType& index);
							template<typename ARG>
							void LengthToFormat(SizeType& index);
							template<typename ARG>
							void SpecifierToFormat(SizeType& index);
							template<typename ARG>
							void CopyToFormat();
						public:
							template<typename ARG>
							const char * GetFormat();
						public:
							ValueType& GetValue();
						};

						enum Prototype::SpecifierCase : int
						{
							Disable,
							CharacterEnable,
							StringEnable,
							PointerEnable,
							IntegerDecimalEnable,
							IntegerOctalEnable,
							IntegerHexadecimalEnable,
							FloatDecimalEnable,
							FloatExponentDecimalEnable,
							FloatAndFloatExponentDecimalEnable,
							FloatHexadecimalEnable
						};

						Prototype::Prototype() :
							m_formatString {0}
						{
							m_value.Default();
						}

						Prototype::Prototype(ValueType value) :
							m_value(value),
							m_formatString{0}
						{}

						Prototype::Prototype(const Prototype& prototype) :
							m_value(prototype.m_value),
							m_formatString{ 0 }
						{}

						Prototype::Prototype(Prototype* ptr_prototype) :
							m_value(ptr_prototype->m_value),
							m_formatString{ 0 }
						{}

						template<typename TYPE>
						constexpr bool Prototype::IsPointerCharType()
						{
							return std::is_pointer<TYPE>::value ? std::is_same<char, std::remove_const<std::remove_pointer<TYPE>::type>::type>::value : false;
						}

						template<typename TYPE>
						constexpr bool Prototype::IsCharacterType()
						{
							return std::is_same<char, std::remove_const<TYPE>::type>::value ||
								std::is_same<unsigned char, std::remove_const<TYPE>::type>::value ||
								std::is_same<short, std::remove_const<TYPE>::type>::value ||
								std::is_same<unsigned short, std::remove_const<TYPE>::type>::value ||
								std::is_same<int, std::remove_const<TYPE>::type>::value ||
								std::is_same<unsigned int, std::remove_const<TYPE>::type>::value;
						}

						template<typename TYPE>
						typename Prototype::SpecifierCase Prototype::SwitchCaseSpecifier()
						{
							if (IsCanCharacterEnable<TYPE>())
							{
								return SpecifierCase::CharacterEnable;
							}
							else if (IsCanStringEnable<TYPE>())
							{
								return SpecifierCase::StringEnable;
							}
							else if (IsCanPointerEnable<TYPE>())
							{
								return SpecifierCase::PointerEnable;
							}
							else if (IsCanIntegerEnable<TYPE>())
							{
								if (m_value.IsDecimalEnable())
								{
									return SpecifierCase::IntegerDecimalEnable;
								}
								else if (m_value.IsOctalEnable())
								{
									return SpecifierCase::IntegerOctalEnable;
								}
								else if (m_value.IsHexadecimalEnable())
								{
									return SpecifierCase::IntegerHexadecimalEnable;
								}
							}
							else if (IsCanFloatEnable<TYPE>())
							{
								if (m_value.IsDecimalEnable())
								{
									if (m_value.IsFloatEnable())
									{
										return SpecifierCase::FloatDecimalEnable;
									}
									else if (m_value.IsFloatExponentEnable())
									{
										return SpecifierCase::FloatExponentDecimalEnable;
									}
									else if (m_value.IsFloatAndFloatExponentEnable())
									{
										return SpecifierCase::FloatAndFloatExponentDecimalEnable;
									}
								}
								else if (m_value.IsHexadecimalEnable())
								{
									return SpecifierCase::FloatHexadecimalEnable;
								}
							}
							return SpecifierCase::Disable;
						}

						template<typename TYPE>
						bool Prototype::IsCanCharacterEnable()
						{
							return IsCharacterType<TYPE>() && m_value.IsCharacterEnable();
						}

						template<typename TYPE>
						bool Prototype::IsCanStringEnable()
						{
							return IsPointerCharType<TYPE>();
						}

						template<typename TYPE>
						bool Prototype::IsCanPointerEnable()
						{
							return std::is_pointer<TYPE>::value;
						}

						template<typename TYPE>
						bool Prototype::IsCanIntegerEnable()
						{
							return std::is_integral<TYPE>::value;
						}

						template<typename TYPE>
						bool Prototype::IsCanFloatEnable()
						{
							return std::is_floating_point<TYPE>::value;
						}

						void Prototype::InCaseCharacterEnable(SizeType& index)
						{
							SpecifierType::Character().CopyToFormat(m_formatString, index);
						}

						void Prototype::InCaseStringEnable(SizeType& index)
						{
							SpecifierType::String().CopyToFormat(m_formatString, index);
						}

						void Prototype::InCasePointerEnable(SizeType& index)
						{
							SpecifierType::Pointer().CopyToFormat(m_formatString, index);
						}

						void Prototype::InCaseIntegerDecimalEnable(SizeType& index)
						{
							if (m_value.isSignedEnable())
							{
								SpecifierType::SignedDecimal().CopyToFormat(m_formatString, index);
							}
							else
							{
								SpecifierType::UnsignedDecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::InCaseIntegerOctalEnable(SizeType& index)
						{
							SpecifierType::UnsignedOctal().CopyToFormat(m_formatString, index);
						}

						void Prototype::InCaseIntegerHexadecimalEnable(SizeType& index)
						{
							if (m_value.IsUpperEnable())
							{
								Specifier::UpperUnsignedHexadecimal().CopyToFormat(m_formatString, index);
							}
							else if (m_value.IsLowerEnable())
							{
								Specifier::LowerUnsignedHexadecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::InCaseFloatDecimalEnable(SizeType& index)
						{
							if (m_value.IsUpperEnable())
							{
								SpecifierType::UpperFloatDecimal().CopyToFormat(m_formatString, index);
							}
							else if (m_value.IsLowerEnable())
							{
								SpecifierType::LowerFloatDecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::InCaseFloatExponentDecimalEnable(SizeType& index)
						{
							if (m_value.IsUpperEnable())
							{
								SpecifierType::UpperFloatExponentDecimal().CopyToFormat(m_formatString, index);
							}
							else if (m_value.IsLowerEnable())
							{
								SpecifierType::LowerFloatExponentDecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::InCaseFloatAndFloatExponentDecimalEnable(SizeType& index)
						{
							if (m_value.IsUpperEnable())
							{
								SpecifierType::UpperFloatDecimalOrFloatExponentDecimal().CopyToFormat(m_formatString, index);
							}
							else if (m_value.IsLowerEnable())
							{
								SpecifierType::LowerFloatDecimalOrFloatExponentDecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::InCaseFloatHexadecimalEnable(SizeType& index)
						{
							if (m_value.IsUpperEnable())
							{
								SpecifierType::UpperFloatExponentHexadecimal().CopyToFormat(m_formatString, index);
							}
							else if (m_value.IsLowerEnable())
							{
								SpecifierType::LowerFloatExponentHexadecimal().CopyToFormat(m_formatString, index);
							}
						}

						void Prototype::BeginCharacterToFormat(SizeType& index)
						{
							m_formatString[index++] = ConstantType::BeginCharacter;
							m_formatString[index] = 0;
						}

						template<typename ARG>
						void Prototype::FlagsToFormat(SizeType& index)
						{
							if (m_value.IsSetFlag() && !IsCanCharacterEnable<ARG>())
							{
								m_value.GetFlag().CopyToFormat(m_formatString, index);
							}
						}

						template<typename ARG>
						void Prototype::WidthToFormat(SizeType& index)
						{
							if (m_value.IsSetWidth() && !IsCanCharacterEnable<ARG>())
							{
								m_value.GetWidth().CopyToFormat(m_formatString, index);
							}
						}

						template<typename ARG>
						void Prototype::PrecisionToFormat(SizeType& index)
						{
							if (m_value.IsSetPrecision() && !IsCanCharacterEnable<ARG>())
							{
								m_value.GetPrecision().CopyToFormat(m_formatString, index);
							}
						}

						template<typename ARG>
						void Prototype::LengthToFormat(SizeType& index)
						{
							if (!IsCanCharacterEnable<ARG>())
							{
								Length::Instance<ARG>().CopyToFormat(m_formatString, index);
							}
						}

						template<typename ARG>
						void Prototype::SpecifierToFormat(SizeType& index)
						{
							switch (SwitchCaseSpecifier<ARG>())
							{
							case SpecifierCase::CharacterEnable:
								InCaseCharacterEnable(index);
								break;
							case SpecifierCase::StringEnable:
								InCaseStringEnable(index);
								break;
							case SpecifierCase::PointerEnable:
								InCasePointerEnable(index);
								break;
							case SpecifierCase::IntegerDecimalEnable:
								InCaseIntegerDecimalEnable(index);
								break;
							case SpecifierCase::IntegerOctalEnable:
								InCaseIntegerOctalEnable(index);
								break;
							case SpecifierCase::IntegerHexadecimalEnable:
								InCaseIntegerHexadecimalEnable(index);
								break;
							case SpecifierCase::FloatDecimalEnable:
								InCaseFloatDecimalEnable(index);
								break;
							case SpecifierCase::FloatExponentDecimalEnable:
								InCaseFloatExponentDecimalEnable(index);
								break;
							case SpecifierCase::FloatAndFloatExponentDecimalEnable:
								InCaseFloatAndFloatExponentDecimalEnable(index);
								break;
							case SpecifierCase::FloatHexadecimalEnable:
								InCaseFloatHexadecimalEnable(index);
								break;
							case SpecifierCase::Disable:
								m_formatString[0] = 0;
								break;
							}
						}

						template<typename ARG>
						void Prototype::CopyToFormat()
						{
							SizeType index = 0;
							BeginCharacterToFormat(index);
							FlagsToFormat<ARG>(index);
							WidthToFormat<ARG>(index);
							PrecisionToFormat<ARG>(index);
							LengthToFormat<ARG>(index);
							SpecifierToFormat<ARG>(index);
						}

						template<typename ARG>
						const char * Prototype::GetFormat()
						{
							CopyToFormat<ARG>();
							return m_formatString;
						}

						typename Prototype::ValueType& 
							Prototype::GetValue()
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_PROTOTYPE_H_