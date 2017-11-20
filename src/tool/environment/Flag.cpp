#include "environment/Flag.h"
#include "Environment.h"

tool::environment::Flag::Flag() :
	m_value(0)
{}

void tool::environment::Flag::EnableDebug()
{
	m_value |= BitDebug;
	__Info("Debug Enable");
}

void tool::environment::Flag::DisableDebug()
{
	if (IsDebug())
	{
		m_value ^= BitDebug;
	}
}

bool tool::environment::Flag::IsDebug()
{
	return m_value & BitDebug;
}