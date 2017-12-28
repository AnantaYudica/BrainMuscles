#include <cstring>
#include <algorithm>
#include <stdexcept>

#include "character/flags/Blocks.h"

void tool::character::flags::Blocks::DeletePointer(ByteType* pointer)
{
	delete[] pointer;
}

template<typename RETURN_TYPE, typename BLOCKS_TYPE>
RETURN_TYPE& tool::character::flags::Blocks::AccessElement(BLOCKS_TYPE* pointer,
	const SizeType& index)
{
	if (index >= pointer->Size())
	{
		throw std::out_of_range("invalid index");
	}
	return *(pointer->get() + index);
}

tool::character::flags::Blocks::Blocks(const SizeType& size) :
	SharedPointerType(new ByteType[size]{}, &DeletePointer),
	m_size(size)
{}

tool::character::flags::Blocks::Blocks(const Blocks& copy) :
	SharedPointerType(new ByteType[copy.Size()]{}, &DeletePointer),
	m_size(copy.Size())
{
	this->operator=(copy);
}

tool::character::flags::Blocks::~Blocks()
{}

tool::character::flags::Blocks& 
tool::character::flags::Blocks::operator=(const Blocks& copy)
{
	const auto size = std::min(copy.Size(), this->Size());
	memcpy_s(this->get(), size, copy.get(), size);
	return *this;
}

tool::character::flags::Blocks::operator bool() const
{
	for (SizeType i = 0; i < this->Size(); ++i)
	{
		if ((*this)[i] != 0)
		{
			return true;
		}
	}
	return false;
}

tool::character::flags::Blocks& 
tool::character::flags::Blocks::operator&=(const Blocks& other)
{
	const auto size = std::min(other.Size(), this->Size());
	for (SizeType i = 0; i < size; ++i)
	{
		(*this)[i] &= other[i];
	}
	return *this;
}

tool::character::flags::Blocks& 
tool::character::flags::Blocks::operator|=(const Blocks& other)
{
	const auto size = std::min(other.Size(), this->Size());
	for (SizeType i = 0; i < size; ++i)
	{
		(*this)[i] |= other[i];
	}
	return *this;
}

tool::character::flags::Blocks& 
tool::character::flags::Blocks::operator^=(const Blocks& other)
{
	const auto size = std::min(other.Size(), this->Size());
	for (SizeType i = 0; i < size; ++i)
	{
		(*this)[i] ^= other[i];
	}
	return *this;
}

tool::character::flags::Blocks 
tool::character::flags::Blocks::operator&(const Blocks& other) const
{
	Blocks blocks(*this);
	blocks &= other;
	return blocks;
}

tool::character::flags::Blocks 
tool::character::flags::Blocks::operator|(const Blocks& other) const
{
	Blocks blocks(*this);
	blocks |= other;
	return blocks;
}

tool::character::flags::Blocks 
tool::character::flags::Blocks::operator^(const Blocks& other) const
{
	Blocks blocks(*this);
	blocks ^= other;
	return blocks;
}

bool tool::character::flags::Blocks::operator==(const Blocks& other) const
{
	if (this->Size() != other.Size())
	{
		return false;
	}
	for (SizeType i = 0; i < this->Size(); ++i)
	{
		if ((*this)[i] != other[i])
		{
			return false;
		}
	}
	return true;
}

bool tool::character::flags::Blocks::operator!=(const Blocks& other) const
{
	return !operator==(other);
}

typename tool::character::flags::Blocks::ByteType& 
tool::character::flags::Blocks::operator[](const SizeType& index)
{
	return AccessElement<ByteType, Blocks>(this, index);
}

const typename tool::character::flags::Blocks::ByteType& 
tool::character::flags::Blocks::operator[](const SizeType& index) const
{
	return AccessElement<const ByteType, const Blocks>(this, index);
}

const typename tool::character::flags::Blocks::SizeType& 
tool::character::flags::Blocks::Size() const
{
	return m_size;
}
