#ifndef TOOL_CHARACTER_DEFINITION_ASCII_H_
#define TOOL_CHARACTER_DEFINITION_ASCII_H_

#include <cstddef>

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
	typedef unsigned char SizeBinaryDigitType;
	typedef unsigned char SizeByteType;
	typedef char ValueType;
	typedef char RawValueType;
	static constexpr const char* Name = "ascii";
	static constexpr SizeByteType SizeRead = 1;
	static constexpr SizeBinaryDigitType MaximumBinaryDigit = 7;
	static constexpr SizeBinaryDigitType MinimumBinaryDigit = 7;
	static constexpr ValueType MaximumValue = 127;
	static constexpr ValueType MinimumValue = 0;

	static inline unsigned int Encode(const ValueType& input, RawValueType& output);
	template<typename ITERATOR_TYPE>
	static inline unsigned int Encode(const ValueType& input,
		ITERATOR_TYPE begin_output, ITERATOR_TYPE end_output);
	template<typename TYPE, std::size_t N>
	static inline unsigned int Encode(const ValueType& input, TYPE(&output)[N],
		const std::size_t& index_output = 0);

	static inline unsigned int Decode(const RawValueType& input, ValueType& output);
	template<typename ITERATOR_TYPE>
	static inline unsigned int Decode(ITERATOR_TYPE begin_input,
		ITERATOR_TYPE end_input, ValueType& output);
	template<typename TYPE, std::size_t N>
	static inline unsigned int Decode(const TYPE(&input)[N], ValueType& output,
		const std::size_t& index_input = 0);
};

inline unsigned int 
tool::character::definition::Ascii::Encode(const ValueType& input, 
	RawValueType& output)
{
	if (input > MaximumValue || input < MinimumValue)
	{
		return 0;
	}
	output = input;
	return 1;
}

template<typename ITERATOR_TYPE>
inline unsigned int 
tool::character::definition::Ascii::Encode(const ValueType& input,
	ITERATOR_TYPE begin_output, ITERATOR_TYPE end_output)
{
	if (begin_output >= end_output)
	{
		return 0;
	}
	return Encode(input, *begin_output);
}

template<typename TYPE, std::size_t N>
inline unsigned int 
tool::character::definition::Ascii::Encode(const ValueType& input,
	TYPE(&output)[N], const std::size_t& index_output)
{
	return Encode(input, output + index_output, output + N);
}

inline unsigned int 
tool::character::definition::Ascii::Decode(const RawValueType& input,
	ValueType& output)
{
	if (input > MaximumValue || input < MinimumValue)
	{
		return 0;
	}
	output = input;
	return 1;
}

template<typename ITERATOR_TYPE>
inline unsigned int
tool::character::definition::Ascii::Decode(ITERATOR_TYPE begin_input,
	ITERATOR_TYPE end_input, ValueType& output)
{
	if (begin_input >= end_input)
	{
		return 0;
	}
	return Encode(*begin_input, output);
}

template<typename TYPE, std::size_t N>
inline unsigned int 
tool::character::definition::Ascii::Decode(const TYPE(&input)[N],
	ValueType& output, const std::size_t& index_input)
{
	return Decode(input + index_input, input + N, output);
}

#endif //!TOOL_CHARACTER_DEFINITION_ASCII_H_