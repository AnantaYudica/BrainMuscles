#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_VALUE_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Flags.h"
#include "test\simple\log\output\format\Width.h"
#include "test\simple\log\output\format\Precision.h"

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
						class Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Flags FlagsType;
							typedef BrainMuscles::test::simple::log::output::format::Width WidthType;
							typedef BrainMuscles::test::simple::log::output::format::Precision PrecisionType;
						private:
							typedef unsigned short SettingType;
							static constexpr SettingType SignedBitIndex = 1;
							static constexpr SettingType CharacterBitIndex = 1 << 1;
							static constexpr SettingType FloatBitIndex = 1 << 2;
							static constexpr SettingType FloatExponentBitIndex = 1 << 3;
							static constexpr SettingType DecimalBitIndex = 1 << 4;
							static constexpr SettingType OctalBitIndex = 1 << 5;
							static constexpr SettingType HexadecimalBitIndex = 1 << 6;
							static constexpr SettingType UpperOrLowerBitIndex = 1 << 7;
							static constexpr SettingType SetSignedBitIndex = 1 << 8;
							static constexpr SettingType SetCharacterBitIndex = 1 << 9;
							static constexpr SettingType SetFloatOrFloatExponentBitIndex = 1 << 10;
							static constexpr SettingType SetDecimalOrOctalOrHexadecimalBitIndex = 1 << 11;
							static constexpr SettingType SetUpperOrLowerBitIndex = 1 << 12;
							static constexpr SettingType SetFlagBitIndex = 1 << 13;
							static constexpr SettingType SetWidthBitIndex = 1 << 14;
							static constexpr SettingType SetPrecisionBitIndex = 1 << 15;
						private:
							FlagsType m_flag;
							SettingType m_setting;
							WidthType m_width;
							PrecisionType m_precision;
						public:
							Value();
							Value(const Value& value);
							Value(Value* ptr_value);
						public:
							void Default();
						private:
							void SetFlag();
							void SetWidth();
							void SetPrecision();
						public:
							bool IsSetFlag() const;
							bool IsSetWidth() const;
							bool IsSetPrecision() const;
							void SetFlag(const FlagsType& flag);
							void SetWidth(const WidthType& width);
							void SetPrecision(const PrecisionType& precision);
							FlagsType& GetFlag();
							WidthType& GetWidth();
							PrecisionType& GetPrecision();
						private:
							void SetSigned();
						public:
							bool IsSetSigned() const;
							void SignedEnable();
							void SignedDisable();
							bool isSignedEnable() const;

						private:
							void SetCharacter();
						public:
							bool IsSetCharacter() const;
							void CharacterEnable();
							void CharacterDisable();
							bool IsCharacterEnable() const;

						private:
							void SetFloatOrFloatExponent();
						public:
							bool IsSetFloatOrFloatExponent() const;
							void FloatEnable();
							void FloatExponentEnable();
							void FloatAndFloatExponentEnable();
						private:
							void FloatDisable();
							void FloatExponentDisable();
						public:
							bool IsFloatEnable() const;
							bool IsFloatExponentEnable() const;
							bool IsFloatAndFloatExponentEnable() const;

						private:
							void SetDecimalOrOctalOrHexadecimal();
						public:
							bool IsSetDecimalOrOctalOrHexadecimal() const;
							void DecimalEnable();
							void OctalEnable();
							void HexadecimalEnable();
						private:
							void DecimalDisable();
							void OctalDisable();
							void HexadecimalDisable();
						public:
							bool IsDecimalEnable() const;
							bool IsOctalEnable() const;
							bool IsHexadecimalEnable() const;

						private:
							void SetUpperOrLower();
						public:
							bool IsSetUpperOrLower() const;
							void UpperEnable();
							void LowerEnable();
							bool IsUpperEnable() const;
							bool IsLowerEnable() const;
						};

						Value::Value() :
							m_flag(),
							m_setting(0),
							m_width(),
							m_precision()
						{}

						Value::Value(const Value& value) :
							m_flag(value.m_flag),
							m_setting(value.m_setting),
							m_width(value.m_width),
							m_precision(value.m_precision)
						{}

						Value::Value(Value* ptr_value) :
							m_flag(ptr_value->m_flag),
							m_setting(ptr_value->m_setting),
							m_width(ptr_value->m_width),
							m_precision(ptr_value->m_precision)
						{}

						void Value::Default()
						{
							m_flag = FlagsType();
							m_width = WidthType();
							m_precision = PrecisionType();
							m_setting = 0;
							SignedEnable();
							CharacterDisable();
							FloatEnable();
							DecimalEnable();
							LowerEnable();
						}

						void Value::SetFlag()
						{
							m_setting |= SetFlagBitIndex;
						}

						void Value::SetWidth()
						{
							m_setting |= SetWidthBitIndex;
						}

						void Value::SetPrecision()
						{
							m_setting |= SetPrecisionBitIndex;
						}

						bool Value::IsSetFlag() const
						{
							return (m_setting & SetFlagBitIndex);
						}

						bool Value::IsSetWidth() const
						{
							return (m_setting & SetWidthBitIndex);
						}

						bool Value::IsSetPrecision() const
						{
							return (m_setting & SetPrecisionBitIndex);
						}

						void Value::SetFlag(const FlagsType& flag)
						{
							SetFlag();
							m_flag = flag;
						}

						void Value::SetWidth(const WidthType& width)
						{
							SetWidth();
							m_width = width;
						}

						void Value::SetPrecision(const PrecisionType& precision)
						{
							SetPrecision();
							m_precision = precision;
						}

						typename Value::FlagsType& Value::GetFlag()
						{
							return m_flag;
						}

						typename Value::WidthType& Value::GetWidth()
						{
							return m_width;
						}

						typename Value::PrecisionType& Value::GetPrecision()
						{
							return m_precision;
						}

						void Value::SetSigned()
						{
							m_setting |= SetSignedBitIndex;
						}

						bool Value::IsSetSigned() const
						{
							return (m_setting & SetSignedBitIndex);
						}

						void Value::SignedEnable()
						{
							SetSigned();
							m_setting |= SignedBitIndex;
						}

						void Value::SignedDisable()
						{
							SetSigned();
							if (isSignedEnable())
							{
								m_setting ^= SignedBitIndex;
							}
						}

						bool Value::isSignedEnable() const
						{
							return (m_setting & SignedBitIndex);
						}

						void Value::SetCharacter()
						{
							m_setting |= SetCharacterBitIndex;
						}

						bool Value::IsSetCharacter() const
						{
							return (m_setting & SetCharacterBitIndex);
						}

						void Value::CharacterEnable()
						{
							SetCharacter();
							m_setting |= CharacterBitIndex;
						}

						void Value::CharacterDisable()
						{
							SetCharacter();
							if (IsCharacterEnable())
							{
								m_setting ^= CharacterBitIndex;
							}
						}

						bool Value::IsCharacterEnable() const
						{
							return (m_setting & CharacterBitIndex);
						}

						void Value::SetFloatOrFloatExponent()
						{
							m_setting |= SetFloatOrFloatExponentBitIndex;
						}

						bool Value::IsSetFloatOrFloatExponent() const
						{
							return (m_setting & SetFloatOrFloatExponentBitIndex);
						}

						void Value::FloatEnable()
						{
							SetFloatOrFloatExponent();
							m_setting |= FloatBitIndex;
							FloatExponentDisable();
						}

						void Value::FloatExponentEnable()
						{
							SetFloatOrFloatExponent();
							m_setting |= FloatExponentBitIndex;
							FloatDisable();
						}

						void Value::FloatAndFloatExponentEnable()
						{
							SetFloatOrFloatExponent();
							m_setting |= (FloatBitIndex | FloatExponentBitIndex);
						}

						void Value::FloatDisable()
						{
							if (IsFloatEnable())
							{
								m_setting ^= FloatBitIndex;
							}
						}

						void Value::FloatExponentDisable()
						{
							if (IsFloatExponentEnable())
							{
								m_setting ^= FloatExponentBitIndex;
							}
						}

						bool Value::IsFloatEnable() const
						{
							return (m_setting & FloatBitIndex);
						}

						bool Value::IsFloatExponentEnable() const
						{
							return (m_setting & FloatExponentBitIndex);
						}

						bool Value::IsFloatAndFloatExponentEnable() const
						{
							return (m_setting & (FloatBitIndex | FloatExponentBitIndex));
						}

						void Value::SetDecimalOrOctalOrHexadecimal()
						{
							m_setting |= SetDecimalOrOctalOrHexadecimalBitIndex;
						}

						bool Value::IsSetDecimalOrOctalOrHexadecimal() const
						{
							return (m_setting & SetDecimalOrOctalOrHexadecimalBitIndex);
						}

						void Value::DecimalEnable()
						{
							SetDecimalOrOctalOrHexadecimal();
							m_setting |= DecimalBitIndex;
							OctalDisable();
							HexadecimalDisable();
						}

						void Value::OctalEnable()
						{
							SetDecimalOrOctalOrHexadecimal();
							m_setting |= OctalBitIndex;
							DecimalDisable();
							HexadecimalDisable();
						}

						void Value::HexadecimalEnable()
						{
							SetDecimalOrOctalOrHexadecimal();
							m_setting |= HexadecimalBitIndex;
							DecimalDisable();
							OctalDisable();
						}

						void Value::DecimalDisable()
						{
							if (IsDecimalEnable())
							{
								m_setting ^= DecimalBitIndex;
							}
						}

						void Value::OctalDisable()
						{
							if (IsOctalEnable())
							{
								m_setting ^= OctalBitIndex;
							}
						}

						void Value::HexadecimalDisable()
						{
							if (IsHexadecimalEnable())
							{
								m_setting ^= HexadecimalBitIndex;
							}
						}

						bool Value::IsDecimalEnable() const
						{
							return (m_setting & DecimalBitIndex);
						}

						bool Value::IsOctalEnable() const
						{
							return (m_setting & OctalBitIndex);
						}

						bool Value::IsHexadecimalEnable() const
						{
							return (m_setting & HexadecimalBitIndex);
						}

						void Value::SetUpperOrLower()
						{
							m_setting |= SetUpperOrLowerBitIndex;
						}

						bool Value::IsSetUpperOrLower() const
						{
							return (m_setting & SetUpperOrLowerBitIndex);
						}

						void Value::UpperEnable()
						{
							SetUpperOrLower();
							m_setting |= UpperOrLowerBitIndex;
						}

						void Value::LowerEnable()
						{
							SetUpperOrLower();
							if (IsUpperEnable())
							{
								m_setting ^= UpperOrLowerBitIndex;
							}
						}

						bool Value::IsUpperEnable() const
						{
							return (m_setting & UpperOrLowerBitIndex);
						}

						bool Value::IsLowerEnable() const
						{
							return !(IsUpperEnable());
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_VALUE_H_