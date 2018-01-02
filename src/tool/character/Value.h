#ifndef TOOL_CHARACTER_VALUE_H_
#define TOOL_CHARACTER_VALUE_H_

namespace tool
{
	namespace character
	{
		template<typename CHARACTER_DEFINITION_TYPE>
		class Value;
	}
}

template<typename CHARACTER_DEFINITION_TYPE>
class tool::character::Value
{
public:
	typedef CHARACTER_DEFINITION_TYPE CharacterDefinitionType;
	typedef typename CharacterDefinitionType::ValueType ValueType;
	typedef typename CharacterDefinitionType::RawValueType RawValueType;
	typedef typename CharacterDefinitionType::SizeType SizeType;
private:
	ValueType m_value;
public:
	Value();
	Value(const ValueType& value);
	Value(const Value& copy);
	~Value();
public:
	Value& operator=(const Value& copy);
public:
	operator typename CHARACTER_DEFINITION_TYPE::ValueType&();
public:
	bool IsGood() const;
	SizeType Encode(RawValueType& output);
	SizeType Decode(const RawValueType& input);
};

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<CHARACTER_DEFINITION_TYPE>::Value() :
	m_value(0)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<
	CHARACTER_DEFINITION_TYPE>::Value(const ValueType& value) :
	m_value(value)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<CHARACTER_DEFINITION_TYPE>::Value(const Value& copy) :
	m_value(copy.m_value)
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<CHARACTER_DEFINITION_TYPE>::~Value()
{}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<CHARACTER_DEFINITION_TYPE>& 
tool::character::Value<CHARACTER_DEFINITION_TYPE>::operator=(const Value& copy)
{
	this->m_value = copy.m_value;
	return *this;
}

template<typename CHARACTER_DEFINITION_TYPE>
tool::character::Value<CHARACTER_DEFINITION_TYPE>::operator 
typename CHARACTER_DEFINITION_TYPE::ValueType&()
{
	return m_value;
}

template<typename CHARACTER_DEFINITION_TYPE>
bool tool::character::Value<CHARACTER_DEFINITION_TYPE>::IsGood() const
{
	return CharacterDefinitionType::ValidationValue(m_value);
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Value<CHARACTER_DEFINITION_TYPE>::SizeType 
tool::character::Value<CHARACTER_DEFINITION_TYPE>::Encode(RawValueType& output)
{
	return CharacterDefinitionType::Encode(m_value, output);
}

template<typename CHARACTER_DEFINITION_TYPE>
typename tool::character::Value<CHARACTER_DEFINITION_TYPE>::SizeType 
tool::character::Value<
	CHARACTER_DEFINITION_TYPE>::Decode(const RawValueType& input)
{
	return CharacterDefinitionType::Decode(input, m_value);
}

#endif //!TOOL_CHARACTER_VALUE_H_
