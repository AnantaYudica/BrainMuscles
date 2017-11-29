#ifndef TOOL_CHARACTER_DEFINITION_ASCII_H_
#define TOOL_CHARACTER_DEFINITION_ASCII_H_

namespace tool
{
	namespace character
	{
		namespace definition
		{
			struct Ascii;
		}
	}
}

struct tool::character::definition::Ascii final
{
	Ascii() = delete;
	typedef unsigned char BinaryDigitType;
	typedef unsigned char ValueType;
	typedef unsigned char RawValueType;
	static constexpr const char* Name = "ascii";
	static constexpr ValueType MaximumValue = 127;
	static constexpr ValueType MinimumValue = 0;
	static constexpr BinaryDigitType MaximumBinaryDigit = 7;
	static constexpr BinaryDigitType MinimumBinaryDigit = 7;
};

#endif //!TOOL_CHARACTER_DEFINITION_ASCII_H_