#include "PreBuild.h"
#include "Environment.h"
#include "environment/Arguments.h"
#include "source/Column.h"
#include "file/Read.h"

const std::string 
tool::PreBuild::DefaultMaximumSourceColumn = "80";

const std::string 
tool::PreBuild::DefaultListBuffer = "1024";

const std::string
tool::PreBuild::DefaultListBufferDebug = "false";

tool::PreBuild tool::PreBuild::ms_instance;

tool::PreBuild::PreBuild()
{
}

tool::PreBuild& tool::PreBuild::GetInstance()
{
	return ms_instance;
}

std::string tool::PreBuild::EnableSourceColumn(std::string value)
{
	m_flag.EnableSourceColumn();
	return value;
}

std::string tool::PreBuild::EnableSourceColumnDebug(std::string value)
{
	std::string true_string = "true";
	if (value.size() != true_string.size())
	{
		return "";
	}
	for (std::size_t i = 0, j = 0; i < value.size(); ++i, ++j)
	{
		if (std::tolower(value[i]) != true_string[j])
		{
			return "";
		}
	}
	return true_string;
}

std::string tool::PreBuild::DefaultDefinitionArgumentsKey(std::string value)
{
	return value;
}

void tool::PreBuild::Initialization()
{
	_Arguments.Caller("-debug", std::bind(&tool::environment::Flag::EnableDebug, 
			&_Environment.Flag()));
	_Arguments.Caller("d", std::bind(&tool::environment::Flag::EnableDebug, 
			&_Environment.Flag()));
	_Arguments.Caller("-list", std::bind(&tool::prebuild::Flag::EnableListFile, 
		&m_flag));
	_Arguments.Definition("-list-buffer", std::bind(
		&tool::PreBuild::DefaultDefinitionArgumentsKey, 
		this, std::placeholders::_1), DefaultListBuffer);
	_Arguments.Definition("-source-column", std::bind(
		&tool::PreBuild::EnableSourceColumn, this, std::placeholders::_1),
		DefaultMaximumSourceColumn);
	_Arguments.Definition("-source-column-debug", std::bind(
		&tool::PreBuild::EnableSourceColumnDebug, this, std::placeholders::_1),
		"false");
}

std::string tool::PreBuild::ManualInput()
{
	char pathname[256];
	std::printf("File: ");
#if ((defined(_WIN32) || defined(_WIN64)) && !defined(_CRT_SECURE_NO_WARNINGS))
	scanf_s("%s", pathname, 256);
#else
	std::scanf("%s", filename);
#endif
	return pathname;
}

void tool::PreBuild::SourceColumn(std::string pathname)
{
	if (m_flag.IsSourceColumn())
	{
		tool::source::Column column(pathname);
		if (_Arguments["-source-column-debug"] == "true")
		{
			column.EnableDebug();
		}
		column.Maximum(std::atoi(_Arguments["-source-column"].c_str()));
		column.Check();
	}
}

void tool::PreBuild::RunFile(std::string pathname)
{
	SourceColumn(pathname);
}

void tool::PreBuild::RunListFile()
{
	tool::file::Read read(m_pathname);
	size_t buffer = std::atoi(_Arguments["-list-buffer"].c_str());
	if (read.Open())
	{
		while (!read.IsEOF())
		{
			std::string pathname = read.GetLine(buffer);
			if (!pathname.empty())
			{
				RunFile(pathname);
			}
		}
	}
}

void tool::PreBuild::Run(int argc, char *argv[])
{
	Initialization();
	auto arguments = &tool::environment::Arguments::GetInstance();
	arguments->Initialization(argc, argv);
	if (arguments->Size() == 0)
	{
		m_pathname = ManualInput();
	}
	else
	{
		m_pathname = (*arguments)[0];
	}
	if (m_flag.IsFileEnable())
	{
		RunFile(m_pathname);
	}
	else if (m_flag.IsListFileEnable())
	{
		RunListFile();
	}
}

int tool::PreBuild::Result()
{
	return _Environment.Result();
}