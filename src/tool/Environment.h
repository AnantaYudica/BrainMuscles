#ifndef TOOL_ENVIRONMENT_H_
#define TOOL_ENVIRONMENT_H_

#include <cstdio>
#include "environment\Flag.h"

namespace tool
{
	class Environment;
}

class tool::Environment final
{
public:
	typedef tool::environment::Flag		FlagType;
private:
	int m_result;
	FlagType m_flag;
	static Environment ms_instance;
private:
	Environment();
public:
	static Environment& GetInstance();
public:
	FlagType& Flag();
	template<typename... ARGS>
	inline void Error(const char* format, ARGS... args);
	template<typename... ARGS>
	inline void Info(const char* format, ARGS... args);
	int Result();
};

template<typename... ARGS>
inline void tool::Environment::Error(const char* format, ARGS... args)
{
	std::printf(format, args...);
	m_result = 1;
	std::printf("\n");
}

template<typename... ARGS>
inline void tool::Environment::Info(const char* format, ARGS... args)
{
	if (m_flag.IsDebug())
	{
		std::printf(format, args...);
	}
	std::printf("\n");
}

#endif //!TOOL_ENVIRONMENT_H_