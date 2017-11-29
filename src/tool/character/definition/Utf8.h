#ifndef TOOL_CHARACTER_DEFINITION_UTF8_H_
#define TOOL_CHARACTER_DEFINITION_UTF8_H_

#include <cstdint>

namespace tool
{
	namespace character
	{
		namespace definition
		{
			struct Utf8;
		}
	}
}

struct tool::character::definition::Utf8 final
{
	Utf8() = delete;
	typedef std::uint8_t SizeBinaryDigitType;
	typedef std::uint8_t SizeByteType;
	typedef std::uint32_t ValueType;
	typedef std::uint32_t RawValueType;
	static constexpr const char* Name = "utf-8";
	static constexpr SizeByteType LengthRead = 1;
	static constexpr SizeBinaryDigitType MaximumBinaryDigit = 21;
	static constexpr SizeBinaryDigitType MinimumBinaryDigit = 7;
	static constexpr ValueType MaximumValue = 2097151;
	static constexpr ValueType MinimumValue = 0;
};

#endif //!TOOL_CHARACTER_DEFINITION_UTF8_H_