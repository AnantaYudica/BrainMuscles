#ifndef TOOL_CHARACTER_DEFINITION_ASCII_H_
#define TOOL_CHARACTER_DEFINITION_ASCII_H_

#include <cstddef>
#include "Definition.h"

namespace tool
{
	namespace character
	{
		namespace definition
		{
			class Ascii;
		}
	}
}

class tool::character::definition::Ascii final
{
	Ascii() = delete;
public:
	typedef tool::Definition DefinitionType;
	typedef typename DefinitionType::SizeBinaryDigitType SizeBinaryDigitType;
	typedef typename DefinitionType::SizeByteType SizeByteType;
	typedef typename DefinitionType::SizeType SizeType;
	typedef char ValueType;
	typedef char RawValueType;
	static constexpr const char* Name = "ascii";
	static constexpr SizeByteType SizeRead = 1;
	static constexpr SizeBinaryDigitType MaximumBinaryDigit = 7;
	static constexpr SizeBinaryDigitType MinimumBinaryDigit = 7;
	static constexpr ValueType MaximumValue = 127;
	static constexpr ValueType MinimumValue = 0;
private:
	static inline bool ValidationValue(const ValueType& value);
public:
	static inline SizeType Encode(const ValueType& input,
		RawValueType& output);
	static inline SizeType Decode(const RawValueType& input,
		ValueType& output);
};

inline bool 
tool::character::definition::Ascii::ValidationValue(const ValueType& value)
{
	return value <= MaximumValue && value >= MinimumValue;
}

inline typename tool::character::definition::Ascii::SizeType
tool::character::definition::Ascii::Encode(const ValueType& input, 
	RawValueType& output)
{
	if (ValidationValue(input))
	{
		output = input;
		return 1;
	}
	return 0;
}

inline std::size_t
tool::character::definition::Ascii::Decode(const RawValueType& input,
	ValueType& output)
{
	if (ValidationValue(input))
	{
		output = input;
		return 1;
	}
	return 0;
}

#endif //!TOOL_CHARACTER_DEFINITION_ASCII_H_