#ifndef TOOL_CHARACTER_FLAGS_VALUE_H___PROTOTYPE__
#define TOOL_CHARACTER_FLAGS_VALUE_H___PROTOTYPE__

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

#endif //!TOOL_CHARACTER_FLAGS_VALUE_H___PROTOTYPE__

#ifndef TOOL_CHARACTER_FLAGS_H___PROTOTYPE__
#include "character/Flags.h"
#endif //!TOOL_CHARACTER_FLAGS_H___PROTOTYPE__

#ifndef TOOL_CHARACTER_FLAGS_VALUE_H___DEFINITION__
#define TOOL_CHARACTER_FLAGS_VALUE_H___DEFINITION__

#include "Definition.h"

template<typename CHARACTER_DEFINITION_TYPE>
class tool::character::flags::Value
{
	friend class tool::character::Flags<CHARACTER_DEFINITION_TYPE>;
public:
	typedef typename tool::Definition::ByteType ByteType;
	typedef typename tool::Definition::SizeBinaryDigitType SizeBinaryDigitType;
	typedef typename CHARACTER_DEFINITION_TYPE::ValueType ValueIntegerType;
private:
	ByteType& m_subset;
	const SizeBinaryDigitType m_offset;
	const ValueIntegerType m_value;
private:
	Value(ByteType& subset, const SizeBinaryDigitType& offset,
		const ValueIntegerType& value);
public:
	Value(const Value&) = delete;
	Value(Value&&) = delete;
public:
	operator typename CHARACTER_DEFINITION_TYPE::ValueType() const;
	bool operator*() const;
	Value& operator=(const bool& set);
};

#endif //!TOOL_CHARACTER_FLAGS_VALUE_H___DEFINITION__

#ifndef TOOL_CHARACTER_FLAGS_VALUE_H___IMPLEMENTATION__
#define TOOL_CHARACTER_FLAGS_VALUE_H___IMPLEMENTATION__

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags
	::Value<CHARACTER_DEFINITION_TYPE>::Value(ByteType& subset,
		const SizeBinaryDigitType& offset, const ValueIntegerType& value) :
	m_subset(subset),
	m_offset(offset),
	m_value(value)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags::Value<CHARACTER_DEFINITION_TYPE>::operator
typename CHARACTER_DEFINITION_TYPE::ValueType() const
{
	return m_value;
}

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::flags
	::Value<CHARACTER_DEFINITION_TYPE>::operator*() const
{
	return m_subset & (1 << m_offset);
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::flags::Value<CHARACTER_DEFINITION_TYPE>&
tool::character::flags
	::Value<CHARACTER_DEFINITION_TYPE>::operator=(const bool& set)
{
	if (set)
	{
		m_subset |= (1 << m_offset);
	}
	else
	{
		if (operator*())
		{
			m_subset ^= (1 << m_offset);
		}
	}
	return *this;
}

#endif //!TOOL_CHARACTER_FLAGS_VALUE_H___IMPLEMENTATION__
