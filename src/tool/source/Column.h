#ifndef TOOL_SOURCE_COLUMN_H_
#define TOOL_SOURCE_COLUMN_H_

#include <cstdio>
#include <cctype>
#include <cstddef>
#include <string>

#include "file\Read.h"

namespace tool
{
	namespace source
	{
		class Column;
	}
}

class tool::source::Column
{
private:
	typedef unsigned char		FlagType;
	typedef tool::file::Read	ReadType;
public:
	typedef std::size_t SizeType;
	typedef std::size_t LineType;
private:
	static constexpr FlagType BitDebug = 1;
	static constexpr FlagType BitLineFeed = 2;
	static constexpr FlagType BitCarriageReturn = 4;
private:
	FlagType m_flag;
	SizeType m_maximum;
	LineType m_line;
	ReadType m_read;
public:
	Column(std::string pathname);
private:
	void ResetNewline();
	bool SetLineFeed(const int& character);
	bool SetCarriageReturn(const int& character);
	bool IsLineFeed();
	bool IsCarriageReturn();
	static bool IsLineFeed(const int& character);
	static bool IsCarriageReturn(const int& character);
	bool IsNewLine(const int& character);
	bool IsSkip(const int& character);
	void Newline(const SizeType& column, std::string string);
	bool IsDebug();
public:
	void DebugEnable();
	void Maximum(SizeType value);
	int Check();
};

#endif //!TOOL_SOURCE_COLUMN_H_