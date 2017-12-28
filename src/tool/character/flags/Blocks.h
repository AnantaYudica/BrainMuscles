#ifndef TOOL_CHARACTER_FLAGS_BLOCKS_H_
#define TOOL_CHARACTER_FLAGS_BLOCKS_H_

#include <memory>
#include <type_traits>
#include "Definition.h"

namespace tool
{
	namespace character
	{
		namespace flags
		{
			class Blocks;
		}
	}
}

class tool::character::flags::Blocks :
	public std::shared_ptr<typename tool::Definition::ByteType>
{
public:
	typedef tool::Definition DefinitionType;
	typedef typename DefinitionType::ByteType ByteType;
	typedef typename DefinitionType::SizeType SizeType;
	typedef typename DefinitionType::SizeByteType SizeByteType;
	typedef std::shared_ptr<ByteType> SharedPointerType;
	typedef std::weak_ptr<ByteType> WeakPointerType;
public:
	template<typename VALUE_TYPE>
	static inline constexpr typename std::enable_if<
		std::is_integral<VALUE_TYPE>::value, SizeType>::type 
		Length(VALUE_TYPE maximum_value);
	template<typename VALUE_TYPE>
	static inline constexpr typename std::enable_if<
		std::is_integral<VALUE_TYPE>::value, SizeType>::type 
		Index(VALUE_TYPE value);
	template<typename VALUE_TYPE>
	static inline constexpr typename std::enable_if<
		std::is_integral<VALUE_TYPE>::value, SizeByteType>::type
		Offset(VALUE_TYPE value);
private:
	static void DeletePointer(ByteType* pointer);
	template<typename RETURN_TYPE, typename BLOCKS_TYPE>
	static RETURN_TYPE& 
		AccessElement(BLOCKS_TYPE* pointer, const SizeType& index);
private:
	SizeType m_size;
public:
	Blocks(const SizeType& size);
	Blocks(const Blocks& copy);
	~Blocks();
public:
	Blocks& operator=(const Blocks& copy);
public:
	operator bool() const;
	Blocks& operator&=(const Blocks& other);
	Blocks& operator|=(const Blocks& other);
	Blocks& operator^=(const Blocks& other);
	Blocks operator&(const Blocks& other) const;
	Blocks operator|(const Blocks& other) const;
	Blocks operator^(const Blocks& other) const;
	bool operator==(const Blocks& other) const;
	bool operator!=(const Blocks& other) const;
	ByteType& operator[](const SizeType& index);
	const ByteType& operator[](const SizeType& index) const;
public:
	const SizeType& Size() const;
};

template<typename VALUE_TYPE>
constexpr inline typename std::enable_if<std::is_integral<VALUE_TYPE>::value,
	tool::character::flags::Blocks::SizeType>::type
tool::character::flags::Blocks::Length(VALUE_TYPE maximum_value)
{
	return ((maximum_value + 1)/ DefinitionType::SizeByteBinaryDigit)
		+ ((maximum_value + 1) % DefinitionType::SizeByteBinaryDigit == 0 ? 0 : 1);
}

template<typename VALUE_TYPE>
constexpr inline typename std::enable_if<std::is_integral<VALUE_TYPE>::value, 
	tool::character::flags::Blocks::SizeType>::type
tool::character::flags::Blocks::Index(VALUE_TYPE value)
{
	return value / DefinitionType::SizeByteBinaryDigit;
}

template<typename VALUE_TYPE>
constexpr inline typename std::enable_if<std::is_integral<VALUE_TYPE>::value, 
	tool::character::flags::Blocks::SizeByteType>::type
tool::character::flags::Blocks::Offset(VALUE_TYPE value)
{
	return value % tool::Definition::SizeByteBinaryDigit;
}

#endif //!TOOL_CHARACTER_FLAGS_BLOCKS_H_
