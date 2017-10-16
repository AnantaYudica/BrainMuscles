#include "Environment.h"

tool::Environment tool::Environment::ms_instance;

tool::Environment::Environment() :
	m_result(0)
{}

tool::Environment& tool::Environment::GetInstance()
{
	return ms_instance;
}

typename tool::Environment::FlagType&
tool::Environment::Flag()
{
	return m_flag;
}

int tool::Environment::Result()
{
	return m_result;
}