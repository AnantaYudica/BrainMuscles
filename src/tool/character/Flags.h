#ifndef TOOL_CHARACTER_FLAGS_H_
#define TOOL_CHARACTER_FLAGS_H_

namespace tool
{
	namespace character
	{
		template<typename CHARACTER_DEFINITION_TYPE>
		class Flags;
	}
}

#ifndef TOOL_CHARACTER_FLAGS_VALUE_H_
#include "character/flags/Value.h"

#endif //!TOOL_CHARACTER_FLAGS_VALUE_H_

#include <memory>
#include "Definition.h"
#include "character/flags/Blocks.h"

template<typename CHARACTER_DEFINITION_TYPE>
class tool::character::Flags
{
public:
	typedef tool::Definition DefinitionType;
	typedef typename DefinitionType::ByteType ByteType;
	typedef CHARACTER_DEFINITION_TYPE CharacterDefinitionType;
	typedef tool::character::flags::Value<CharacterDefinitionType>
		ValueFlagsType;
	typedef typename CharacterDefinitionType::ValueType ValuesIntegerType;
	typedef tool::character::flags::Blocks BlocksType;
private:
	static bool ValidValue(const ValuesIntegerType& value);
	static void Initialization(BlocksType& blocks, 
		const ValuesIntegerType& value);
	template<typename... VALUES_TYPE>
	static void Initialization(BlocksType& blocks,
		const ValuesIntegerType& value, const VALUES_TYPE&... values);
private:
	BlocksType m_blocks;
public:
	Flags();
	explicit Flags(const ValuesIntegerType& value);
	template<typename... VALUES_TYPE>
	explicit Flags(const ValuesIntegerType& value, 
		const VALUES_TYPE&... values);
	Flags(const Flags& copy);
	~Flags();
public:
	Flags& operator=(const Flags& flags);
public:
	operator bool() const;
	Flags& operator|=(const Flags& flags);
	Flags& operator&=(const Flags& flags);
	Flags& operator^=(const Flags& flags);
	Flags operator|(const Flags& flags) const;
	Flags operator&(const Flags& flags) const;
	Flags operator^(const Flags& flags) const;
	bool operator==(const Flags& flags) const;
	bool operator!=(const Flags& flags) const;
	ValueFlagsType operator[](const ValuesIntegerType& value);
};

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::ValidValue(const ValuesIntegerType& value)
{
	return value >= CharacterDefinitionType::MinimumValue
		&& value <= CharacterDefinitionType::MaximumValue;
}

template<typename CHARACTER_DEFINITION_TYPE>
void tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::Initialization(BlocksType& blocks, 
		const ValuesIntegerType& value)
{
	if (ValidValue(value))
	{
		blocks[BlocksType::Index(value)]
			|= ((ByteType)1 << BlocksType::Offset(value));
	}
}

template<typename CHARACTER_DEFINITION_TYPE>
template<typename... VALUES_TYPE>
void tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::Initialization(BlocksType& blocks,
		const ValuesIntegerType& value, const VALUES_TYPE&... values)
{
	Initialization(blocks, value);
	Initialization(blocks, values...);
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>::Flags() :
	m_blocks(CharacterDefinitionType::MaximumValue)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::Flags(const ValuesIntegerType& value) :
	m_blocks(CharacterDefinitionType::MaximumValue)
{
	Initialization(m_blocks, value);
}

template<typename CHARACTER_DEFINITION_TYPE>
template<typename... VALUES_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::Flags(const ValuesIntegerType& value, const VALUES_TYPE&... values) :
	m_blocks(CharacterDefinitionType::MaximumValue)
{
	Initialization(m_blocks, value, values...);
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>::Flags(const Flags& copy) :
	m_blocks(copy.m_blocks)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>::~Flags()
{}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>&
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator=(const Flags& flags)
{
	m_blocks = flags.m_blocks;
	return *this;
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>::operator bool() const
{
	return static_cast<bool>(m_blocks);
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>&
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator|=(const Flags& flags)
{
	m_blocks |= flags.m_blocks;
	return *this;
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>&
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator&=(const Flags& flags)
{
	m_blocks &= flags.m_blocks;
	return *this;
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>&
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator^=(const Flags& flags)
{
	m_blocks &= flags.m_blocks;
	return *this;
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator|(const Flags& flags) const
{
	Flags copy(*this);
	copy |= flags;
	return copy;
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator&(const Flags& flags) const
{
	Flags copy(*this);
	copy &= flags;
	return copy;
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator^(const Flags& flags) const
{
	Flags copy(*this);
	copy ^= flags;
	return copy;
}

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator==(const Flags& flags) const
{
	return m_value == flags.m_blocks;
}

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator!=(const Flags& flags) const
{
	return m_value != flags.m_blocks;
}


template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Flags<CHARACTER_DEFINITION_TYPE>::ValueFlagsType
tool::character::Flags<CHARACTER_DEFINITION_TYPE>
	::operator[](const ValuesIntegerType& value)
{
	if (!ValidValue(value))
	{
		throw std::out_of_range("invalid value");
	}
	return ValueFlagsType(m_blocks, value);
}


#endif //!TOOL_CHARACTER_FLAGS_H_
