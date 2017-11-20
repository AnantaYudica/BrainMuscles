#ifndef TOOL_ENVIRONMENT_H_
#define TOOL_ENVIRONMENT_H_

#include <cstdio>
#include <cstring>
#include "environment/Flag.h"

#define ERROR_MESSAGE_BUFFER_SIZE 1024

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
	inline void ErrorNumber(int error_number);
	inline void ErrorNumber(const char* title, int error_number);
	template<typename... ARGS>
	inline void Error(const char* format, ARGS... args);
	template<typename... ARGS>
	inline void Info(const char* format, ARGS... args);
public:
	FlagType& Flag();
	int Result();
};

inline void tool::Environment::ErrorNumber(int error_number)
{
	if (error_number == 0)
	{
		return;
	}
	m_result = 1;
	char msg[ERROR_MESSAGE_BUFFER_SIZE];
#if ((defined(_WIN32) || defined(_WIN64)) && !defined(_CRT_SECURE_NO_WARNINGS))
	strerror_s(msg, errno);
	std::printf("%s\n", msg);
#elif (__GNUC__ \
	|| (defined(_WIN32) || defined(_WIN64)) \
		&& defined(_CRT_SECURE_NO_WARNINGS)))
	strncpy(msg, std::strerror(error_number), ERROR_MESSAGE_BUFFER_SIZE);
	msg[ERROR_MESSAGE_BUFFER_SIZE - 1] = NULL;
	std::printf("%s\n", msg);
#else
#error "Undefined Compiler"
#endif
}

inline void tool::Environment::ErrorNumber(const char* title, int error_number)
{
	if (error_number == 0)
	{
		return;
	}
	std::printf("%s: ", title);
	ErrorNumber(error_number);
}

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
		std::printf("\n");
	}
}

#define _Environment tool::Environment::GetInstance()

#define __Error(...) _Environment.Error(__VA_ARGS__)

#define __ErrorNumber(...) _Environment.ErrorNumber(__VA_ARGS__)

#define __Info(...) _Environment.Info(__VA_ARGS__)

#endif //!TOOL_ENVIRONMENT_H_