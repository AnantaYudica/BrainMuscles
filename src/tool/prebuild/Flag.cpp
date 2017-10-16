#include "Flag.h"

tool::prebuild::Flag::Flag() :
	m_value(0)
{}

void tool::prebuild::Flag::EnableFile()
{
	if (IsListFileEnable())
	{
		m_value ^= BitListFile;
	}
}

void tool::prebuild::Flag::EnableListFile()
{
	m_value |= BitListFile;
}

bool tool::prebuild::Flag::IsFileEnable()
{
	return !(IsListFileEnable());
}

bool tool::prebuild::Flag::IsListFileEnable()
{
	return m_value & BitListFile;
}

void tool::prebuild::Flag::EnableSourceColumn()
{
	m_value |= BitSourceColumn;
}

void tool::prebuild::Flag::DisableSourceColumn()
{
	if (IsSourceColumn())
	{
		m_value ^= BitSourceColumn;
	}
}

bool tool::prebuild::Flag::IsSourceColumn()
{
	return m_value & BitSourceColumn;
}