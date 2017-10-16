#ifndef TOOL_PREBUILD_H_
#define TOOL_PREBUILD_H_

#include <string>

#include "prebuild\Flag.h"

namespace tool
{
	class PreBuild;
}

class tool::PreBuild final
{
private:
	typedef tool::prebuild::Flag	FlagType;
private:
	static const std::string DefaultMaximumSourceColumn;
	static const std::string DefaultListBuffer;
	static const std::string DefaultListBufferDebug;
private:
	FlagType m_flag;
	std::string m_pathname;
	static PreBuild ms_instance;
private:
	PreBuild();
public:
	static PreBuild& GetInstance();
public:
	std::string EnableSourceColumn(std::string value);
	std::string EnableSourceColumnDebug(std::string value);
	std::string DefaultDefinitionArgumentsKey(std::string value);
private:
	void Initialization();
	std::string ManualInput();
private:
	void SourceColumn(std::string pathname);
private:
	void RunFile(std::string pathname);
	void RunListFile();
public:
	void Run(int argc, char *argv[]);
	int Result();
};

#endif //!TOOL_PREBUILD_H_