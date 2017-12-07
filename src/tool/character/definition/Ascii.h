#ifndef TOOL_CHARACTER_DEFINITION_ASCII_H_
#define TOOL_CHARACTER_DEFINITION_ASCII_H_

#include <cstddef>

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
public:
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
private:
	static inline bool ValidationValue(const ValueType& value);
	static inline bool ValidationPointer(const void* pointer,
		const std::size_t& pointer_type_size, const std::size_t& pointer_size,
		const std::size_t& pointer_offset);
public:
	static inline std::size_t Encode(const ValueType& input, 
		RawValueType& output);
	static inline std::size_t Encode(const void* input,
		const std::size_t& input_type_size, const std::size_t& input_size,
		const std::size_t& input_offset, void* output,
		const std::size_t& output_type_size, const std::size_t& output_size,
		const std::size_t& output_offset);
	static inline std::size_t Encode(const ValueType& input, void* output,
		const std::size_t& output_type_size, const std::size_t& output_size,
		const std::size_t& output_offset);
	static inline std::size_t Encode(const void* input, 
		const std::size_t& input_type_size, const std::size_t& input_size,
		const std::size_t& input_offset, RawValueType& output);
	static inline std::size_t Decode(const RawValueType& input, 
		ValueType& output);
	static inline std::size_t Decode(const void* input,
		const std::size_t& input_type_size, const std::size_t& input_size,
		const std::size_t& input_offset, void* output,
		const std::size_t& output_type_size, const std::size_t& output_size,
		const std::size_t& output_offset);
	static inline std::size_t Decode(const RawValueType& input, void* output,
		const std::size_t& output_type_size, const std::size_t& output_size,
		const std::size_t& output_offset);
	static inline std::size_t Decode(const void* input,
		const std::size_t& input_type_size, const std::size_t& input_size,
		const std::size_t& input_offset, ValueType& output);
};

inline bool 
tool::character::definition::Ascii::ValidationValue(const ValueType& value)
{
	return value <= MaximumValue && value >= MinimumValue;
}

inline bool 
tool::character::definition::Ascii::ValidationPointer(const void* pointer,
	const std::size_t& pointer_type_size, const std::size_t& pointer_size,
	const std::size_t& pointer_offset)
{
	return pointer != NULL && pointer_type_size != 0 && pointer_size != 0
		&& pointer_offset < pointer_type_size;
}

inline std::size_t
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
tool::character::definition::Ascii::Encode(const void* input,
	const std::size_t& input_type_size, const std::size_t& input_size,
	const std::size_t& input_offset, void* output, 
	const std::size_t& output_type_size,
	const std::size_t& output_size, const std::size_t& output_offset)
{
	if (ValidationPointer(input, input_type_size, input_size, input_offset)
		&& ValidationPointer(output, output_type_size, output_size,
			output_offset))
	{
		ValueType value;
		RawValueType raw_value;
		memcpy_s(&value, SizeRead, (const char*)input + input_offset, SizeRead);
		if (Encode(value, raw_value))
		{
			memcpy_s((char*)output + output_offset, SizeRead, &raw_value,
				SizeRead);
			return output_type_size;
		}
	}
	return 0;
}

inline std::size_t 
tool::character::definition::Ascii::Encode(const ValueType& input, void* output,
	const std::size_t& output_type_size, const std::size_t& output_size,
	const std::size_t& output_offset)
{
	return Encode(&input, sizeof(ValueType), 1, 0, output,
		output_type_size, output_size, output_offset);
}

inline std::size_t
tool::character::definition::Ascii::Encode(const void* input,
	const std::size_t& input_type_size, const std::size_t& input_size,
	const std::size_t& input_offset, RawValueType& output)
{
	return Encode(input, input_type_size, input_size, input_offset, &output,
		sizeof(RawValueType), 1, 0);
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

inline std::size_t 
tool::character::definition::Ascii::Decode(const void* input,
	const std::size_t& input_type_size, const std::size_t& input_size,
	const std::size_t& input_offset, void* output,
	const std::size_t& output_type_size, const std::size_t& output_size,
	const std::size_t& output_offset)
{
	if (ValidationPointer(input, input_type_size, input_size, input_offset)
		&& ValidationPointer(output, output_type_size, output_size,
			output_offset))
	{
		ValueType value;
		RawValueType raw_value;
		memcpy_s(&raw_value, SizeRead, (const char*)input + input_offset,
			SizeRead);
		if (Encode(raw_value, value))
		{
			memcpy_s((char*)output + output_offset, SizeRead,
				&value, SizeRead);
			return output_type_size;
		}
	}
	return 0;
}

inline std::size_t
tool::character::definition::Ascii::Decode(const RawValueType& input, 
	void* output, const std::size_t& output_type_size, 
	const std::size_t& output_size, const std::size_t& output_offset)
{
	return Decode(&input, sizeof(ValueType), 1, 0, output,
		output_type_size, output_size, output_offset);
}

inline std::size_t 
tool::character::definition::Ascii::Decode(const void* input,
	const std::size_t& input_type_size, const std::size_t& input_size,
	const std::size_t& input_offset, ValueType& output)
{
	return Encode(input, input_type_size, input_size, input_offset, &output,
		sizeof(ValueType), 1, 0);
}



#endif //!TOOL_CHARACTER_DEFINITION_ASCII_H_