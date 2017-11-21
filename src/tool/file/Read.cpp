#include "Read.h"

#include <cstring>

#include "Environment.h"

tool::file::Read::Read() :
	m_pathname("")
{}

tool::file::Read::Read(std::string pathname) :
	m_pathname(pathname)
{}

tool::file::Read::~Read()
{
	Close();
}

bool tool::file::Read::Open()
{
	if (!IsOpen())
	{
		if (m_pathname.empty())
		{
			__Error("Open failed: pathname not define");
			return false;
		}
		m_filestream.open(m_pathname.c_str());
		if (m_filestream)
		{
			if (_Environment.Flag().IsDebug())
			{
				__Info("Open file: %s", m_pathname.c_str());
			}
			return true;
		}
		__ErrorNumber("Open failed:", errno);
		return false;
	}
	return true;
}

void tool::file::Read::Close()
{
	if (IsOpen())
	{
		m_filestream.close();
	}
}

bool tool::file::Read::Open(std::string pathname)
{
	if (m_pathname.empty())
	{
		m_pathname = pathname;
	}
	else
	{
		__Error("Open failed: pathname is already defined");
	}
	return Open();
}

void tool::file::Read::SeekPosition(PosType pos)
{
	if (Open())
	{
		m_filestream.seekg(pos);
	}
}

void tool::file::Read::SeekPosition(OffType off, SeekDirType dir)
{
	if (Open())
	{
		m_filestream.seekg(off, dir);
	}
}

typename tool::file::Read::PosType 
tool::file::Read::TellPosition()
{
	if (Open())
	{
		return m_filestream.tellg();
	}
	return 0;
}

int tool::file::Read::GetCharacter()
{
	if (Open() && !IsEOF())
	{
		return m_filestream.get();
	}
	return 0;
}

std::string
tool::file::Read::GetLine(SizeType buffer_size)
{
	std::string string_result = "";
	if (Open() && !IsEOF())
	{
		char* buff = new char[buffer_size];
		m_filestream.getline(buff, buffer_size);
		buff[buffer_size - 1] = 0;
		string_result = buff;
		delete[] buff;
	}
	return string_result;
}

std::string 
tool::file::Read::GetLine(char end_character, SizeType buffer_size)
{
	std::string string_result = "";
	if (Open() && !IsEOF())
	{
		char* buff = new char[buffer_size];
		m_filestream.getline(buff, buffer_size, end_character);
		buff[buffer_size - 1] = 0;
		string_result = buff;
		delete[] buff;
	}
	return string_result;
}

std::string 
tool::file::Read::GetLine(std::string end_string, SizeType buffer_size)
{
	std::string string_result = "";
	if (Open() && !IsEOF())
	{
		if (end_string.empty())
		{
			return GetLine(buffer_size);
		}
		char character;
		char* buff = new char[buffer_size];
		SizeType index = 0;
		SizeType index_comparison = 0;
		while (!IsEOF())
		{
			character = GetCharacter();
			if (character == end_string[index_comparison])
			{
				if (++index_comparison == end_string.size())
				{
					break;
				}
			}
			else
			{
				for (SizeType i = 0; i < index_comparison; ++i)
				{
					buff[index++] = end_string[i];
				}
				index_comparison = 0;
				buff[index++] = character;
			}
		}
		string_result = buff;
		delete[] buff;
	}
	return string_result;
}

std::string 
tool::file::Read::GetLine(FunctionCondition end_condition,
	SizeType buffer_size)
{
	std::string string_result = "";
	if (Open() && !IsEOF())
	{
		char character;
		char* buff = new char[buffer_size];
		SizeType index = 0;
		while (!IsEOF())
		{
			character = GetCharacter();
			if (end_condition(character))
			{
				break;
			}
			else
			{
				buff[index++] = character;
			}
		}
		string_result = buff;
		delete[] buff;
	}
	return string_result;
}

bool tool::file::Read::Find(char end_character)
{
	if (Open() && !IsEOF())
	{
		while (!IsEOF())
		{
			if (GetCharacter() == end_character)
			{
				return true;
			}
		}
	}
	return false;
}

bool tool::file::Read::Find(std::string end_string)
{
	if (Open() && !IsEOF())
	{
		SizeType index_comparison = 0;
		while (!IsEOF())
		{
			if (GetCharacter() == end_string[index_comparison])
			{
				if (++index_comparison == end_string.size())
				{
					return true;
				}
			}
			else
			{
				index_comparison = 0;
			}
		}
	}
	return false;
}

bool tool::file::Read::Find(FunctionCondition end_condition)
{
	if (Open() && !IsEOF())
	{
		while (!IsEOF())
		{
			if (end_condition(GetCharacter()))
			{
				return true;
			}
		}
	}
	return false;
}

bool tool::file::Read::IsOpen()
{
	return m_filestream.is_open();
}

bool tool::file::Read::IsEOF()
{
	return m_filestream.eof();
}

const std::string tool::file::Read::Pathname()
{
	return m_pathname;
}