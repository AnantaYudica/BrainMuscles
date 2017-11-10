#ifndef TEST_SOURCE_ERROR_MESSAGE_H_
#define TEST_SOURCE_ERROR_MESSAGE_H_
#define _USING_TEST_SOURCE_
#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace error
			{
				struct Message;
			}
		}
	}
}

struct BrainMuscles::test::source::error::Message
{
	const std::string Cause;
	const std::string Information;
	const std::stack<std::string> Trace;
	inline Message(const std::string& cause, const std::string& information,
		const std::stack<std::string>& trace);
};

inline BrainMuscles::test::source
	::error::Message::Message(const std::string& cause, 
		const std::string& information, const std::stack<std::string>& trace) :
	Cause(cause),
	Information(information),
	Trace(trace)
{}

namespace std
{
	inline std::string 
		to_string(const BrainMuscles::test::source::error::Message&
			error_message)
	{
		std::string out = error_message.Cause;
		if (error_message.Trace.size() == 0)
		{
			out += ", ";
			out += error_message.Information;
		}
		return out;
	}
}


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ERROR_MESSAGE_H_