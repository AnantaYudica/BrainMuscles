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
public:
	typedef std::size_t						SizeType;
	typedef typename StreamType::off_type	OffType;
	typedef typename StreamType::pos_type	PosType;
	typedef std::ios_base::seekdir			SeekDirType;
	typedef std::function<bool(int)>		FunctionCondition;
private:
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
	void SeekPosition(PosType pos);
	void SeekPosition(OffType off, SeekDirType dir);
	PosType TellPosition();
public:
	int GetCharacter();
	std::string GetLine(SizeType buffer_size);
	std::string GetLine(char end_character, SizeType buffer_size);
	std::string GetLine(std::string end_string, SizeType buffer_size);
	std::string GetLine(FunctionCondition end_condition,
		SizeType buffer_size);
public:
	bool Find(char end_character);
	bool Find(std::string end_string);
	bool Find(FunctionCondition end_condition);
public:
	bool IsOpen();
	bool IsEOF();
};

#endif //!TOOL_FILE_READ_H_