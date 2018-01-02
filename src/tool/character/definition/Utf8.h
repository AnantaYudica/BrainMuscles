#ifndef TOOL_CHARACTER_DEFINITION_UTF8_H_
#define TOOL_CHARACTER_DEFINITION_UTF8_H_

#include <cstddef>
#include <cstdint>
#include "Definition.h"

namespace tool
{
	namespace character
	{
		namespace definition
		{
			class Utf8;
		}
	}
}

class tool::character::definition::Utf8 final
{
	Utf8() = delete;
public:
	typedef tool::Definition DefinitionType;
	typedef typename DefinitionType::SizeBinaryDigitType SizeBinaryDigitType;
	typedef typename DefinitionType::SizeByteType SizeByteType;
	typedef typename DefinitionType::ByteType ByteType;
	typedef typename DefinitionType::SizeType SizeType;
	static constexpr SizeByteType SizeRawValue = 4;
	typedef std::uint32_t ValueType;
	typedef ByteType(RawValueType)[SizeRawValue];
	static constexpr const char* Name = "utf-8";
	static constexpr SizeByteType SizeRead = 1;
	static constexpr SizeBinaryDigitType MaximumValueBinaryDigit = 21;
	static constexpr SizeBinaryDigitType MinimumValueBinaryDigit = 7;
	static constexpr ValueType MaximumValue = 2097151;
	static constexpr ValueType MinimumValue = 0;
private:
	static constexpr SizeBinaryDigitType SizeNextValueBinaryDigit = 6;
	static constexpr ByteType FlagSingleByte = 0x00;
	static constexpr ByteType MaskFlagSingleByte = 0x80;
	static constexpr ByteType FlagDoubleByte = 0xC0;
	static constexpr ByteType MaskFlagDoubleByte = 0xE0;
	static constexpr ByteType FlagTripleByte = 0xE0;
	static constexpr ByteType MaskFlagTripleByte = 0xF0;
	static constexpr ByteType FlagQuadrupleByte = 0xF0;
	static constexpr ByteType MaskFlagQuadrupleByte = 0xF8;
	static constexpr ByteType FlagNextByte = 0x80;
	static constexpr ByteType MaskFlagNextByte = 0xC0;
	static constexpr ValueType MaskSingleByteValue = 0x0000007F;
	static constexpr ValueType MaskDoubleByteValue = 0x000007FF;
	static constexpr ValueType MaskTripleByteValue = 0x0000FFFF;
	static constexpr ValueType MaskQuadrupleByteValue = 0x001FFFFF;
private:
	static inline bool ValidationValue(const ValueType& value);
	static inline bool ValidationSize(const SizeByteType& size);
	static inline bool IsSingleByte(const ByteType& byte);
	static inline bool IsDoubleByte(const ByteType& byte);
	static inline bool IsTripleByte(const ByteType& byte);
	static inline bool IsQuadrupleByte(const ByteType& byte);
	static inline bool IsNextByte(const ByteType& byte);
	static inline bool IsFirstByte(const ByteType& byte, const SizeByteType& size);
	static inline bool CanSingleByte(const ValueType& value);
	static inline bool CanDoubleByte(const ValueType& value);
	static inline bool CanTripleByte(const ValueType& value);
	static inline bool CanQuadrupleByte(const ValueType& value);
	static inline SizeByteType SizeByte(const ValueType& value);
	static inline SizeByteType SizeByte(const ByteType& byte);
	static inline ByteType GetRawValueAt(const SizeByteType& index,
		const SizeByteType& size, const ValueType& value);
	static inline ValueType GetFirstValue(const SizeByteType& index,
		const SizeByteType& size, const ByteType& byte);
	static inline ValueType GetNextValue(const SizeByteType& index,
		const SizeByteType& size, const ByteType& byte);
public:
	static inline SizeType Encode(const ValueType& input,
		RawValueType& output);
	static inline SizeType Decode(const RawValueType& input,
		ValueType& output);
};

inline bool 
tool::character::definition::Utf8::ValidationValue(const ValueType& value)
{
	return value <= MaximumValue && value >= MinimumValue;
}

inline bool 
tool::character::definition::Utf8::ValidationSize(const SizeByteType& size)
{
	return size > 0 && size <= SizeRawValue;
}

inline bool
tool::character::definition::Utf8::IsSingleByte(const ByteType& byte)
{
	return (byte & MaskFlagSingleByte) == FlagSingleByte;
}

inline bool 
tool::character::definition::Utf8::IsDoubleByte(const ByteType& byte)
{
	return (byte & MaskFlagDoubleByte) == FlagDoubleByte;
}

inline bool 
tool::character::definition::Utf8::IsTripleByte(const ByteType& byte)
{
	return (byte & MaskFlagTripleByte) == FlagTripleByte;
}

inline bool 
tool::character::definition::Utf8::IsQuadrupleByte(const ByteType& byte)
{
	return (byte & MaskFlagQuadrupleByte) == FlagQuadrupleByte;
}

inline bool 
tool::character::definition::Utf8::IsNextByte(const ByteType& byte)
{
	return (byte & MaskFlagNextByte) == FlagNextByte;
}

inline bool 
tool::character::definition::Utf8::IsFirstByte(const ByteType& byte,
	const SizeByteType& size)
{
	return (size == 1 && IsSingleByte(byte))
		|| (size == 2 && IsDoubleByte(byte))
		|| (size == 3 && IsTripleByte(byte))
		|| (size == 4 && IsQuadrupleByte(byte));
}

inline bool
tool::character::definition::Utf8::CanSingleByte(const ValueType& value)
{
	return !(value & ~MaskSingleByteValue);
}

inline bool
tool::character::definition::Utf8::CanDoubleByte(const ValueType& value)
{
	return !(value & ~MaskDoubleByteValue);
}

inline bool
tool::character::definition::Utf8::CanTripleByte(const ValueType& value)
{
	return !(value & ~MaskTripleByteValue);
}

inline bool 
tool::character::definition::Utf8::CanQuadrupleByte(const ValueType& value)
{
	return !(value & ~MaskQuadrupleByteValue);
}

inline typename tool::character::definition::Utf8::SizeByteType
tool::character::definition::Utf8::SizeByte(const ValueType& value)
{
	if (CanQuadrupleByte(value))
	{
		return 4;
	}
	else if (CanTripleByte(value))
	{
		return 3;
	}
	else if (CanDoubleByte(value))
	{
		return 2;
	}
	else if (CanSingleByte(value))
	{
		return 1;
	}
	return 0;
}

inline typename tool::character::definition::Utf8::SizeByteType 
tool::character::definition::Utf8::SizeByte(const ByteType& byte)
{
	if (IsSingleByte(byte))
	{
		return 1;
	}
	else if (IsDoubleByte(byte))
	{
		return 2;
	}
	else if (IsTripleByte(byte))
	{
		return 3;
	}
	else if (IsQuadrupleByte(byte))
	{
		return 4;
	}
	return 0;
}

inline typename tool::character::definition::Utf8::ByteType 
tool::character::definition::Utf8::GetRawValueAt(const SizeByteType& index,
	const SizeByteType& size, const ValueType& value)
{
	ByteType rawvalue_at = 0;
	ByteType value_shift = 0;
	value_shift = value >> ((size - (index + 1)) * SizeNextValueBinaryDigit);
	if (index == 0)
	{
		if (size == 1)
		{
			value_shift &= ~MaskFlagSingleByte;
		}
		else if (size == 2)
		{
			rawvalue_at = FlagDoubleByte;
			value_shift &= ~MaskFlagDoubleByte;
		}
		else if (size == 3)
		{
			rawvalue_at = FlagTripleByte;
			value_shift &= ~MaskFlagTripleByte;
		}
		else if (size == 4)
		{
			rawvalue_at = FlagQuadrupleByte;
			value_shift &= ~MaskFlagQuadrupleByte;
		}
	}
	else
	{
		rawvalue_at = FlagNextByte;
		value_shift &= ~MaskFlagNextByte;
	}
	rawvalue_at |= value_shift;
	return rawvalue_at;
}

inline typename tool::character::definition::Utf8::ValueType
tool::character::definition::Utf8::GetFirstValue(const SizeByteType& index,
	const SizeByteType& size, const ByteType& byte)
{
	ValueType value = 0;
	if (IsSingleByte(byte))
	{
		value = byte;
	}
	else if (IsDoubleByte(byte))
	{
		value = byte & ~FlagDoubleByte;
	}
	else if (IsTripleByte(byte))
	{
		value = byte & ~FlagTripleByte;
	}
	else if (IsQuadrupleByte(byte))
	{
		value = byte & ~FlagQuadrupleByte;
	}
	else
	{
		return value;
	}
	value <<= (index * SizeNextValueBinaryDigit);
	return value;
}

inline typename tool::character::definition::Utf8::ValueType 
tool::character::definition::Utf8::GetNextValue(const SizeByteType& index,
	const SizeByteType& size, const ByteType& byte)
{
	ValueType value = byte & ~FlagNextByte;
	value <<= (index * SizeNextValueBinaryDigit);
	return value;
}

inline typename tool::character::definition::Utf8::SizeType
tool::character::definition::Utf8::Encode(const ValueType& input, 
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

inline typename tool::character::definition::Utf8::SizeType
tool::character::definition::Utf8::Decode(const RawValueType& input,
	ValueType& output)
{
	output = 0;
	SizeByteType size = SizeByte(input[0]);
	if (ValidationSize(size) 
		&& IsFirstByte(input[0], size))
	{
		for (SizeByteType i = 0; i < size; ++i)
		{
			if (i == 0)
			{
				output |= GetFirstValue(i, size, input[i]);
			}
			else if (i != 0 && IsNextByte(input[i]))
			{
				output |= GetNextValue(i, size, input[i]);
			}
			else
			{
				output = 0;
				return 0;
			}
		}
	}
	return size;
}

#endif //!TOOL_CHARACTER_DEFINITION_UTF8_H_