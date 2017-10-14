#include "environment\Arguments.h"
#include "Environment.h"

tool::environment::Arguments 
tool::environment::Arguments::ms_instance;

tool::environment::Arguments::Arguments()
{}

bool tool::environment::Arguments::IsKeyAliasArgument(const char* argument)
{
	if (argument != nullptr)
	{
		return argument[0] == '-';
	}
	return false;
}

bool tool::environment::Arguments::IsKeyNameArgument(const char* argument)
{
	return IsKeyAliasArgument(argument) && argument[1] == '-';
}

std::pair<std::string, std::string>
tool::environment::Arguments::KeyValueArgument(const char* argument)
{
	std::size_t start = 1;
	std::string str = argument;
	auto end = str.find('=');
	if (end == std::string::npos)
	{
		return { str.substr(start, end - start), "" };
	}
	return { str.substr(start, end - start), str.substr(end + 1) };
}

tool::environment::Arguments& 
tool::environment::Arguments::GetInstance()
{
	return ms_instance;
}

void tool::environment::Arguments::Initialization(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i)
	{
		if (i == 0)
		{
			m_programName = argv[i];
		}
		else if (IsKeyAliasArgument(argv[i]))
		{
			auto key_value = KeyValueArgument(argv[i]);
			auto it_caller = m_callersKey.find(key_value.first);
			if (it_caller != m_callersKey.end() && key_value.second.empty())
			{
				tool::Environment::GetInstance().Info("-%s", 
					key_value.first.c_str());
				it_caller->second();
				continue;
			}
			tool::Environment::GetInstance().Info("-%s = %s", 
				key_value.first.c_str(), key_value.second.c_str());
			auto it_definition = m_definitionsKey.find(key_value.first);
			if (it_definition != m_definitionsKey.end())
			{
				it_definition->second(key_value.second);
				continue;
			}
			auto it_argument = m_argumentsKey.find(key_value.first);
			if (it_argument != m_argumentsKey.end())
			{
				it_argument->second = key_value.second;
				continue;
			}
		}
		else 
		{
			m_arguments.push_back(argv[i]);
		}
	}
}

void tool::environment::Arguments::Definition(std::string key,
	FunctionDefinition function_definition)
{
	m_definitionsKey[key] = function_definition;
}

void tool::environment::Arguments::Caller(std::string key,
	FunctionCaller function_caller)
{
	m_callersKey[key] = function_caller;
}

typename tool::environment::Arguments::SizeType
tool::environment::Arguments::Size()
{
	return m_arguments.size();
}

std::string tool::environment::Arguments::operator[](SizeType index)
{
	return m_arguments[index];
}

std::string tool::environment::Arguments::operator[](std::string key)
{
	return m_argumentsKey[key];
}

const char* tool::environment::Arguments::ProgramName() const
{
	return m_programName;
}