#ifndef TOOL_CHARACTER_DEFINITION_UTF16_H_
#define TOOL_CHARACTER_DEFINITION_UTF16_H_

#include <cstdint>

namespace tool
{
	namespace character
	{
		namespace definition
		{
			struct Utf16;
		}
	}
}

struct tool::character::definition::Utf16 final
{
	Utf16() = delete;
	typedef std::uint8_t SizeBinaryDigitType;
	typedef std::uint8_t SizeByteType;
	typedef std::uint32_t ValueType;
	typedef std::uint32_t RawValueType;
	static constexpr const char* Name = "utf-16";
	static constexpr SizeByteType SizeRead = 2;
	static constexpr SizeBinaryDigitType MaximumValueBinaryDigit = 20;
	static constexpr SizeBinaryDigitType MinimumValueBinaryDigit = 16;
	static constexpr ValueType MaximumValue = 1048575;
	static constexpr ValueType MinimumValue = 0;
};

#endif //!TOOL_CHARACTER_DEFINITION_UTF16_H_