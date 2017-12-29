#ifndef TOOL_CHARACTER_FLAGS_VALUE_H_
#define TOOL_CHARACTER_FLAGS_VALUE_H_

namespace tool
{
	namespace character
	{
		namespace flags
		{
			template<typename CHARACTER_DEFINITION_TYPE>
			class Value;
		}
	}
}

#ifndef TOOL_CHARACTER_FLAGS_H_
#include "character/Flags.h"

#endif //!TOOL_CHARACTER_FLAGS_H_

#include <memory>
#include "Definition.h"
#include "character/flags/Blocks.h"

template<typename CHARACTER_DEFINITION_TYPE>
class tool::character::flags::Value
{
	friend class tool::character::Flags<CHARACTER_DEFINITION_TYPE>;
public:
	typedef tool::Definition DefinitionType;
	typedef typename DefinitionType::ByteType ByteType;
	typedef typename DefinitionType::SizeByteType SizeByteType;
	typedef CHARACTER_DEFINITION_TYPE CharacterDefinitionType;
	typedef typename CharacterDefinitionType::ValueType ValueIntegerType;
	typedef tool::character::flags::Blocks BlocksType;
	typedef typename BlocksType::WeakPointerType BlockPointerType;
private:
	static constexpr bool IsFlagSet(ByteType& block, 
		const SizeByteType& offset);
	static void PointerExpired(const BlockPointerType& blocks_pointer);
private:
	BlockPointerType m_blocksPointer;
	const ValueIntegerType m_value;
private:
	Value(BlockPointerType blocks_pointer, const ValueIntegerType& value);
	Value(const Value& copy);
public:
	~Value();
private:
	Value& operator=(const Value&) = delete;
private:
public:
	operator typename CHARACTER_DEFINITION_TYPE::ValueType() const;
	bool operator*() const;
	void operator=(const bool& set);
};

template<typename CHARACTER_DEFINITION_TYPE>
constexpr bool tool::character::flags::Value<
	CHARACTER_DEFINITION_TYPE>::IsFlagSet(ByteType& block,
		const SizeByteType& offset)
{
	return block & ((ByteType)(1 << offset));
}

template<typename CHARACTER_DEFINITION_TYPE>
void tool::character::flags::Value<CHARACTER_DEFINITION_TYPE>
	::PointerExpired(const BlockPointerType& blocks_pointer)
{
	if (blocks_pointer.expired())
	{
		throw std::bad_weak_ptr();
	}
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags::Value<
	CHARACTER_DEFINITION_TYPE>::Value(BlockPointerType blocks_pointer,
		const ValueIntegerType& value) :
	m_blocksPointer(blocks_pointer),
	m_value(value)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags
	::Value<CHARACTER_DEFINITION_TYPE>::Value(const Value& copy) :
	m_blocksPointer(copy.m_blocksPointer),
	m_value(copy.m_value)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags::Value<CHARACTER_DEFINITION_TYPE>::~Value()
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags::Value<CHARACTER_DEFINITION_TYPE>::operator
typename CHARACTER_DEFINITION_TYPE::ValueType() const
{
	return m_value;
}

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::flags::Value<
	CHARACTER_DEFINITION_TYPE>::operator*() const
{
	PointerExpired(m_blocksPointer);
	auto pointer = m_blocksPointer.lock();
	return IsFlagSet(*(pointer.get() + BlocksType::Index(m_value)),
		BlocksType::Offset(m_value));
}

template<typename CHARACTER_DEFINITION_TYPE>
void tool::character::flags
	::Value<CHARACTER_DEFINITION_TYPE>::operator=(const bool& set)
{
	PointerExpired(m_blocksPointer);
	auto pointer = m_blocksPointer.lock();
	auto block_pointer = pointer.get() + BlocksType::Index(m_value);
	if (set)
	{
		*block_pointer |= (1 << (ByteType)BlocksType::Offset(m_value));
	}
	else
	{
		if (IsFlagSet(*block_pointer, BlocksType::Offset(m_value)))
		{
			*block_pointer ^= (1 << (ByteType)BlocksType::Offset(m_value));
		}
	}
}


#endif //!TOOL_CHARACTER_FLAGS_VALUE_H_
