#ifndef TOOL_FILE_READ_H_
#define TOOL_FILE_READ_H_

#include <cstdio>
#include <fstream>
#include <string>
#include <functional>

namespace tool
{
	namespace file
	{
		class Read;
	}
}

class tool::file::Read
{
private:
	typedef std::ifstream	StreamType;
	typedef std::size_t		LineType;
	typedef std::size_t		ColumnType;
public:
	typedef std::size_t						SizeType;
	typedef typename StreamType::off_type	OffType;
	typedef typename StreamType::pos_type	PosType;
	typedef std::ios_base::seekdir			SeekDirType;
	typedef std::function<bool(int)>		FunctionCondition;
private:
	LineType m_line;
	ColumnType m_column;
	std::string m_pathname;
	StreamType m_filestream;
public:
	Read();
	Read(std::string pathname);
public:
	~Read();
private:
	bool Open();
	void Close();
public:
	bool Open(std::string pathname);
public:
	void SeekPosition(PosType off);
	void SeekPosition(OffType off, SeekDirType dir);
	PosType TellPosition();
public:
	int GetCharacter();
	std::string GetString(SizeType buffer_size);
	std::string GetString(char end_character, SizeType buffer_size);
	std::string GetString(std::string end_string, SizeType buffer_size);
	std::string GetString(FunctionCondition end_condition,
		SizeType buffer_size);
public:
	bool Find(char character);
	bool Find(std::string string);
	bool Find(FunctionCondition condition);
public:
	bool IsOpen();
	bool IsEnd();
};


#endif //!TOOL_FILE_READ_H_