#ifndef TOOL_ENVIRONMENT_ARGUMENTS_H_
#define TOOL_ENVIRONMENT_ARGUMENTS_H_

#include <cstdio>
#include <cstddef>
#include <string>
#include <vector>
#include <map>
#include <functional>

namespace tool
{
	namespace environment
	{
		class Arguments;
	}
}

class tool::environment::Arguments final
{
public:
	typedef std::size_t							SizeType;
	typedef std::size_t							LineType;
	typedef std::function<void(std::string)>	FunctionDefinition;
	typedef std::function<void()>				FunctionCaller;
private:
	static Arguments ms_instance;
private:
	const char* m_programName;
	std::map<std::string, FunctionCaller> m_callersKey;
	std::map<std::string, FunctionDefinition> m_definitionsKey;
	std::map<std::string, std::string> m_argumentsKey;
	std::vector<std::string> m_arguments;
private:
	Arguments();
private:
	bool IsKeyAliasArgument(const char* argument);
	bool IsKeyNameArgument(const char* argument);
	std::pair<std::string, std::string> KeyValueArgument(const char* argument);
public:
	static Arguments& GetInstance();
public:
	void Initialization(int argc, char *argv[]);
	void Definition(std::string key, FunctionDefinition function_definition);
	void Caller(std::string key, FunctionCaller function_caller);
	SizeType Size();
	const char* ProgramName() const;
public:
	std::string operator[](SizeType index);
	std::string operator[](std::string key);
};

#define _Arguments tool::environment::Arguments::GetInstance()

#endif //!TOOL_ENVIRONMENT_ARGUMENTS_H_