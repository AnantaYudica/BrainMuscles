#ifndef TEST_H_
#define TEST_H_

#ifndef Debug

//#define USING_TEST

namespace BrainMuscles
{
	class Test;
}

#ifdef USING_TEST

#include <cstdio>
#define TEST_GLUE(A, B) "" A "" B"\n"

namespace BrainMuscles
{
	class Test
	{
	public:
		enum OutMode
		{
			SELECT_ALL,
			SELECT,
			DESELECT
		};
	private:
		static Test ms_instance;
		static const char * ms_list[];
		FILE * m_outFile;
		Test();
	public:
		~Test();
		static const Test & GetInstance();

		static void OutFile(const char * file);

		template<typename ... ARGS>
		static void Debug(const char * file, const size_t& line, const char * const msg, ARGS ... args);
	};

	Test
	Test::ms_instance = BrainMuscles::Test();

#ifdef LIST_FILE_TO_TEST
	const char * Test::ms_list[] = LIST_FILE_TO_TEST;
#else
	const char * Test::ms_list[] = { };
#endif

	Test::Test() :
		m_outFile(stdout)
	{
	
	}

	Test::~Test()
	{
	
	}

	const Test &
	Test::GetInstance()
	{
		return ms_instance;
	}

	template<typename ... ARGS>
	void
	Test::Debug(const char * file, const size_t& line, const char * const msg, ARGS ... args)
	{
		if (GetInstance().m_outFile)
		{
			fprintf(GetInstance().m_outFile, msg, file, line, args...);
		}
	}
}




#define Debug(MSG, ...) BrainMuscles::Test::Debug(__FILE__, __LINE__, TEST_GLUE("%s(%d) : ", MSG), __VA_ARGS__)
#else 
#define Debug(...)
#endif

#endif // !Debug


#endif // !TEST_H_