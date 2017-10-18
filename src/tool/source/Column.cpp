#include "Column.h"
#include "Environment.h"

#define MAXIMUM_STRING_COLUMN_BUFFER_SIZE 512

tool::source::Column::Column(std::string pathname) :
	m_flag(0),
	m_line(1),
	m_read(pathname)
{}

void tool::source::Column::ResetNewline()
{
	if (IsLineFeed())
	{
		m_flag ^= BitLineFeed;
	}
	if (IsCarriageReturn())
	{
		m_flag ^= BitCarriageReturn;
	}
}

bool tool::source::Column::SetLineFeed(const int& character)
{
	if (IsLineFeed(character))
	{
		m_flag |= BitLineFeed;
		return true	;
	}
	return false;
}

bool tool::source::Column::SetCarriageReturn(const int& character)
{
	if (IsCarriageReturn(character))
	{
		m_flag |= BitCarriageReturn;
		return true;
	}
	return false;
}

bool tool::source::Column::IsLineFeed()
{
	return m_flag & BitLineFeed;
}

bool tool::source::Column::IsCarriageReturn()
{
	return m_flag & BitCarriageReturn;
}

bool tool::source::Column::IsLineFeed(const int& character)
{
	return character == '\n';
}

bool tool::source::Column::IsCarriageReturn(const int& character)
{
	return character == '\r';
}

bool tool::source::Column::IsNewLine(const int& character)
{
	return SetLineFeed(character) || SetCarriageReturn(character);
}

bool tool::source::Column::IsSkip(const int& character)
{
	if (IsLineFeed() && IsCarriageReturn(character))
	{
		return true;
	}
	else if (IsCarriageReturn() && IsLineFeed(character))
	{
		return true;
	}
	return false;
}

void tool::source::Column::Newline(const SizeType& column, 
	std::string string)
{
	if (column > m_maximum)
	{
		__Error("Check Column Failed: columns greater than %zu (Column = %zu) "
			", file %s, line %zu, string \"%s\"", m_maximum, column, 
			m_read.Pathname().c_str(), m_line, string.c_str());
	}
	else
	{
		if (IsDebug())
		{
			__Info("line %zu, column %zu, string \"%s\"", 
				m_line, column, string.c_str());
		}
	}
	++m_line;
}

bool tool::source::Column::IsDebug()
{
	return m_flag & BitDebug;
}

void tool::source::Column::EnableDebug()
{
	m_flag |= BitDebug;
}

void tool::source::Column::Maximum(SizeType value)
{
	if (IsDebug())
	{
		__Info("Column Maximum = %zu", value);
	}
	m_maximum = value;
}

int tool::source::Column::Check()
{
	if (m_read.Open())
	{
		int character = 0;
		std::size_t column = 1;
		std::string string_line = "";
		while (!m_read.IsEOF())
		{
			character = m_read.GetCharacter();
			if (IsNewLine(character))
			{
				Newline(column, string_line);
				column = 1;
				string_line.clear();
			}
			else if (IsSkip(character))
			{
				continue;
			}
			else if (std::isspace(character))
			{
				if (character == ' ')
				{
					++column;
					string_line.push_back(character);
				}
				else if (character == '\t')
				{
					column += (4 - ((column - 1) % 4));
					string_line.push_back(character);
				}
			}
			else
			{
				++column;
				if (string_line.size() < 
					MAXIMUM_STRING_COLUMN_BUFFER_SIZE + 1)
				{
					string_line.push_back(character);
				}
				else if (string_line.size() == 
					MAXIMUM_STRING_COLUMN_BUFFER_SIZE + 1)
				{
					string_line += "...";
				}
			}
		}
		if (!string_line.empty())
		{
			Newline(column - 1, string_line);
		}
		return 0;
	}
	return 1;
}