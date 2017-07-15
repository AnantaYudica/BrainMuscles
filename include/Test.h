#ifndef TEST_H_
#define TEST_H_

#include "type\constant\String.h"

#ifndef Debug

#define USING_TEST

namespace BrainMuscles
{
	class Test;
}

#ifdef USING_TEST

#include <cstdio>
#include "test\test\Info.h"
#include "test\test\Message.h"
#include "type\Singleton.h"

namespace BrainMuscles
{

	class Test :
		public type::Singleton<Test, Test, Test&>
	{
		friend class type::Singleton<Test, Test, Test&>;
	public:
		enum OutMode
		{
			SELECT_ALL,
			SELECT
		};
		typedef Test& (*FunctionOutputType)(Test& tout, const test::test::info::Base & information, const test::test::message::Base & message);
	private:
		static constexpr char RelativePath[] = "\\include\\test\\test.h";
		static constexpr char FilePath[] = __FILE__;
		static const char * ms_listFile[];
		static const size_t SizeListFile();


		FILE * m_outFile;
		OutMode m_outmode;
		FunctionOutputType m_functioOutput;
		Test();
	public:
		static constexpr size_t BeginRelative = type::constant::String::FindCStringWithCompare(__FILE__, RelativePath, type::constant::String::CompareWithLowerCase);
		~Test();
		static Test & FunctionOutputDefault(Test & tout, const test::test::info::Base & information, const test::test::message::Base & message);

		static void OutFile(const char * file);

		static void SetMode(OutMode mode);

		static void SetOut(FunctionOutputType functionOut);

		static constexpr bool IsDirectorySymbol(const char ch);

		template<typename... ARGS>
		static void Debug(const test::test::info::Base & information, const char * const message, ARGS... args);

		
		Test& operator<< (const char * cstr);
		Test& operator<< (const test::test::message::Base & value);
		Test& operator<< (const int& value);
		Test& operator<< (const unsigned int& value);
		Test& operator<< (const long& value);
		Test& operator<< (const unsigned long& value);
	};


#ifdef LIST_FILE_TO_TEST
	const char * Test::ms_listFile[] = LIST_FILE_TO_TEST;
#else
	const char * Test::ms_listFile[] = {0};
#endif

	const size_t 
	Test::SizeListFile()
	{
		return sizeof(ms_listFile) / sizeof(const char *);
	}
	
	Test::Test() :
		m_outFile(stdout),
		m_outmode(SELECT_ALL),
		m_functioOutput(FunctionOutputDefault)
	{
	
	}

	Test::~Test()
	{
		if (m_outFile != stdout)
		{
			fclose(m_outFile);
		}
	}


	Test & 
	Test::FunctionOutputDefault(Test & tout, const test::test::info::Base & information, const test::test::message::Base & message)
	{
		tout << information.RelativePath() << information.Filename();
		tout << "(" << information.Line() << ") : ";
		tout << message << "\n";
		return tout;
	}

	void 
	Test::OutFile(const char * file)
	{
		if (GetInstance().m_outFile != stdout)
		{
			fclose(GetInstance().m_outFile);
		}
#if ((defined(_WIN32) || defined(_WIN64)) && !defined(_CRT_SECURE_NO_WARNINGS))
		fopen_s(&GetInstance().m_outFile, file, "w"); 
#else
		GetInstance().m_outFile = fopen(file, "w");
#endif
	}

	void 
	Test::SetMode(OutMode mode)
	{
		if (mode != GetInstance().m_outmode)
		{
			GetInstance().m_outmode = mode;
		}
	}

	void 
	Test::SetOut(FunctionOutputType functionOut)
	{
		GetInstance().m_functioOutput = functionOut;
	}

	constexpr bool 
	Test::IsDirectorySymbol(const char ch)
	{
		return ch == '\\' || ch == '/';
	}

	template<typename... ARGS>
	void
	Test::Debug(const test::test::info::Base & information, const char * const message, ARGS... args)
	{
		typedef BrainMuscles::test::test::Message<ARGS...> MessageType;
		if (GetInstance().m_outFile)
		{
			MessageType messageValue = MessageType(message, args...);
			GetInstance().m_functioOutput(GetInstance(), information, messageValue);
		}
	}

	Test&
	Test::operator<< (const char * cstr)
	{
		fprintf(GetInstance().m_outFile, "%s", cstr);
		return *this;
	}

	Test&
	Test::operator<< (const test::test::message::Base & value)
	{
		value.Call_fprintf(GetInstance().m_outFile);
		return *this;
	}
	
	Test&
		Test::operator<< (const int& value)
	{
		fprintf(GetInstance().m_outFile, "%d", value);
		return *this;
	}

	Test& 
	Test::operator<< (const long& value)
	{
		fprintf(GetInstance().m_outFile, "%ld", value);
		return *this;
	}

	Test&
		Test::operator<< (const unsigned int& value)
	{
		fprintf(GetInstance().m_outFile, "%u", value);
		return *this;
	}

	Test& 
	Test::operator<< (const unsigned long& value)
	{
		fprintf(GetInstance().m_outFile, "%lu", value);
		return *this;
	}
}

#define Debug(MSG, ...) \
{\
	typedef BrainMuscles::test::test::Info<BrainMuscles::type::constant::String::CSize(__FILE__), BrainMuscles::Test::BeginRelative, BrainMuscles::type::constant::String::ReverseFindChar(__FILE__, '\\') + 1, BrainMuscles::type::constant::String::ReverseFindChar(__FILE__, '.')> InfoType;\
	BrainMuscles::Test::Debug(InfoType(__FILE__, __LINE__), MSG, ##__VA_ARGS__);\
}

//

#else 
#define Debug(...)
#endif

#endif // !Debug


#endif // !TEST_H_