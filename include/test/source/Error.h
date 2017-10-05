#ifndef TEST_SOURCE_ERROR_H_
#define TEST_SOURCE_ERROR_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			struct Error
			{
				const std::string Cause;
				const std::string Information;
				const std::stack<std::string> Trace;
				inline Error(const std::string& cause, const std::string& information, const std::stack<std::string>& trace);
			};

			inline Error::Error(const std::string& cause, const std::string& information, const std::stack<std::string>& trace) :
				Cause(cause),
				Information(information),
				Trace(trace)
			{}
		}
	}
}

namespace std
{
	inline std::string to_string(const BrainMuscles::test::source::Error& error)
	{
		std::string out = error.Cause;
		if (error.Trace.size() == 0)
		{
			out += ", ";
			out += error.Information;
		}
		return out;
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ERROR_H_