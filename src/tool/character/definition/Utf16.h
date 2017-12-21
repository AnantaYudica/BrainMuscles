#ifndef TOOL_CHARACTER_DEFINITION_UTF16_H_
#define TOOL_CHARACTER_DEFINITION_UTF16_H_

#include <cstddef>
#include <cstdint>

namespace tool
{
	namespace character
	{
		namespace definition
		{
			class Utf16;
		}
	}
}

class tool::character::definition::Utf16 final
{
public:
	Utf16() = delete;
	typedef std::uint8_t SizeBinaryDigitType;
	typedef std::uint8_t SizeByteType;
	typedef std::uint8_t ByteType;
	typedef std::uint16_t DoubleByteType;
	static constexpr SizeByteType SizeRawValue = 2;
	typedef std::uint32_t ValueType;
	typedef DoubleByteType(RawValueType)[SizeRawValue];
	static constexpr const char* Name = "utf-16";
	static constexpr SizeByteType SizeRead = 2;
	static constexpr SizeBinaryDigitType MaximumValueBinaryDigit = 20;
	static constexpr SizeBinaryDigitType MinimumValueBinaryDigit = 16;
	static constexpr ValueType MaximumValue = 1114111;
	static constexpr ValueType MinimumValue = 0;
	typedef std::size_t SizeType;
private:
	static constexpr DoubleByteType FlagLowSurrogate = 0xDC00;
	static constexpr DoubleByteType MaskFlagLowSurrogate = 0xFC00;
	static constexpr DoubleByteType FlagHighSurrogate = 0xD800;
	static constexpr DoubleByteType MaskFlagHighSurrogate = 0xFC00;
	static constexpr ValueType MaskDoubleByteValue = 0x0000FFFF;
	static constexpr ValueType MaskQuadrupleByteValue = 0x0001FFFF;
	static constexpr DoubleByteType MaskLowSurrogateValue = 0x03FF;
	static constexpr DoubleByteType MaskHighSurrogateValue = 0x07FF;
private:
	static inline bool ValidationValue(const ValueType& value);
	static inline bool ValidationSize(const SizeByteType& size);
	static inline bool IsLowSurrogate(const DoubleByteType& double_byte);
	static inline bool IsHighSurrogate(const DoubleByteType& double_byte);
	static inline bool CanDoubleByte(const ValueType& value);
	static inline bool CanQuadrupleByte(const ValueType& value);
	static inline SizeByteType SizeByte(const ValueType& value);
	static inline DoubleByteType GetRawValueAt(const SizeByteType& index,
		const SizeByteType& size, const ValueType& value);
	static inline ValueType 
		GetLowSurrogateValue(const DoubleByteType& double_byte);
	static inline ValueType
		GetHighSurrogateValue(const DoubleByteType& double_byte);
public:
	static inline SizeType Encode(const ValueType& input,
		RawValueType& output);
	static inline SizeType Decode(const RawValueType& input,
		ValueType& output);
};

inline bool 
tool::character::definition::Utf16::ValidationValue(const ValueType& value)
{
	return value >= MinimumValue && value <= MaximumValue;
}

inline bool 
tool::character::definition::Utf16::ValidationSize(const SizeByteType& size)
{
	return size > 0 && size <= SizeRawValue;
}

inline bool tool::character::definition
	::Utf16::IsLowSurrogate(const DoubleByteType& double_byte)
{
	return (double_byte & MaskFlagLowSurrogate) == FlagLowSurrogate;
}


inline bool tool::character::definition
	::Utf16::IsHighSurrogate(const DoubleByteType& double_byte)
{
	return (double_byte & MaskFlagHighSurrogate) == FlagHighSurrogate;
}

inline bool
tool::character::definition::Utf16::CanDoubleByte(const ValueType& value)
{
	return !(value & ~MaskDoubleByteValue);
}

inline bool 
tool::character::definition::Utf16::CanQuadrupleByte(const ValueType& value)
{
	return !(value & ~MaskQuadrupleByteValue);
}

inline typename tool::character::definition::Utf16::SizeByteType 
tool::character::definition::Utf16::SizeByte(const ValueType& value)
{
	if (CanQuadrupleByte(value))
	{
		return 2;
	}
	return 1;
}

inline typename tool::character::definition::Utf16::DoubleByteType 
tool::character::definition::Utf16::GetRawValueAt(const SizeByteType& index,
	const SizeByteType& size, const ValueType& value)
{
	DoubleByteType rawvalue_at = 0;
	if (size == 1)
	{
		rawvalue_at = value & MaskDoubleByteValue;
	}
	else if (size == 2)
	{
		if (index == 0)
		{
			rawvalue_at = (value >> 10)  & MaskHighSurrogateValue;
			rawvalue_at |= FlagHighSurrogate;
			rawvalue_at -= (1 << 6);
		}
		else if (index == 1)
		{
			rawvalue_at = value & MaskLowSurrogateValue;
			rawvalue_at |= FlagLowSurrogate;
		}
	}
	return rawvalue_at;
}

inline typename tool::character::definition::Utf16::ValueType
tool::character::definition
	::Utf16::GetLowSurrogateValue(const DoubleByteType& double_byte)
{
	return double_byte & ~MaskFlagLowSurrogate;
}

inline typename tool::character::definition::Utf16::ValueType
tool::character::definition
	::Utf16::GetHighSurrogateValue(const DoubleByteType& double_byte)
{
	ValueType value = 0;
	value = double_byte & ~MaskFlagHighSurrogate;
	value += (1 << 6);
	value <<= 10;
	return value;
}

inline typename tool::character::definition::Utf16::SizeType
tool::character::definition::Utf16::Encode(const ValueType& input,
	RawValueType& output)
{
	ValueType *pointer_output = (ValueType*)&output;
	*pointer_output = 0;
	if (ValidationValue(input))
	{
		const SizeByteType size = SizeByte(input);
		if (ValidationSize(size))
		{
			for (SizeByteType i = 0; i < size; ++i)
			{
				output[i] = GetRawValueAt(i, size, input);
			}
			return size;
		}
	}
	return 0;
}

inline typename tool::character::definition::Utf16::SizeType 
tool::character::definition::Utf16::Decode(const RawValueType& input,
	ValueType& output)
{
	output = 0;
	for (SizeByteType i = 0; i < SizeRawValue; ++i)
	{
		const bool high_surrogate = IsHighSurrogate(input[i]);
		const bool low_surrogate = IsLowSurrogate(input[i]);
		if (i == 0 && high_surrogate)
		{
			output |= GetHighSurrogateValue(input[i]);
		}
		else if (i == 1 && low_surrogate)
		{
			output |= GetLowSurrogateValue(input[i]);
			return 4;
		}
		else if (i == 0 && !high_surrogate && !IsLowSurrogate)
		{
			output |= input[i];
			return 2;
		}
		else
		{
			output = 0;
			break;
		}
	}
	return 0;
}

#endif //!TOOL_CHARACTER_DEFINITION_UTF16_H_