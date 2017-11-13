#ifndef TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_
#define TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Constant.h"
#include "test\source\environment\Trace.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace environment
			{
				namespace trace
				{
					class Function;
				}
			}
		}
	}
}

class BrainMuscles::test::source::environment::trace::Function :
	public BrainMuscles::test::source::environment::Trace
{
public:
	inline Function();
public:
	inline std::string Push(const char * file, std::size_t line,
		std::string function);
};

inline BrainMuscles::test::source::environment
::trace::Function::Function() :
	BrainMuscles::test::source::environment::Trace("")
{}

inline std::string
BrainMuscles::test::source::environment::trace
::Function::Push(const char * file, std::size_t line, std::string function)
{
	std::string str = "";
	if (!function.empty())
	{
		str += function;
		BrainMuscles::test::source::Constant::AppendFileLine(str, file, line);
	}
	BrainMuscles::test::source::environment::Trace::Push(str);
}


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_