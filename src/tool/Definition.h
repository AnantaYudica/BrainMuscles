#ifndef TOOL_DEFINITION_H_
#define TOOL_DEFINITION_H_

#include <cstddef>
#include <cstdint>

namespace tool
{
	class Definition;
}

class tool::Definition final
{
public:
	Definition() = delete;
	typedef std::uint8_t SizeBinaryDigitType;
	typedef std::uint8_t SizeByteType;
	typedef std::uint8_t ByteType;
	typedef std::uint16_t DoubleByteType;
	typedef std::size_t SizeType;
	static constexpr SizeBinaryDigitType SizeByteBinaryDigit = 8;
};

#endif //!TOOL_DEFINITION_H_
