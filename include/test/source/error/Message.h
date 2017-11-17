#ifndef TEST_SOURCE_ERROR_MESSAGE_H_
#define TEST_SOURCE_ERROR_MESSAGE_H_

#ifdef _USING_TEST_SOURCE_

#define _USING_TEST_SOURCE_ERROR_MESSAGE_DEFAULT_BUFFER_ALLOCATION_ 1024

#ifndef _USING_TEST_SOURCE_ERROR_MESSAGE_BUFFER_ALLOCATION_

#define _USING_TEST_SOURCE_ERROR_MESSAGE_BUFFER_ALLOCATION_ \
	_USING_TEST_SOURCE_ERROR_MESSAGE_DEFAULT_BUFFER_ALLOCATION_

#endif //!_USING_TEST_SOURCE_ERROR_MESSAGE_BUFFER_ALLOCATION_

#include <string>
#include <stack>

#include "test\source\Constant.h"
#include "test\source\function\Flags.h"
#include "test\source\error\Numbers.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace error
			{
				class Message;
			}
		}
	}
}

class BrainMuscles::test::source::error::Message
{
private:
	typedef BrainMuscles::test::source::Constant ConstantType;
public:
	typedef BrainMuscles::test::source::function::Flags FunctionFlagsType;
	typedef BrainMuscles::test::source::error::Numbers ErrorNumbersType;
private:
	static constexpr std::size_t BufferAllocation = (std::is_unsigned<
		decltype(_USING_TEST_SOURCE_ERROR_MESSAGE_BUFFER_ALLOCATION_)>::value ?
			(std::size_t)_USING_TEST_SOURCE_ERROR_MESSAGE_BUFFER_ALLOCATION_
			: _USING_TEST_SOURCE_ERROR_MESSAGE_DEFAULT_BUFFER_ALLOCATION_);
public:
	const std::string Cause;
	const std::string Information;
	const std::stack<std::string> Trace;
public:
	inline Message(const std::string& cause, const std::string& information,
		const std::stack<std::string>& trace);
	inline Message(const Message& copy);
public:
	template<typename ENVIRONMENT_TYPE>
	static inline Message Instance(const char* file, const std::size_t& line,
		FunctionFlagsType flag, std::string message);
	template<typename ENVIRONMENT_TYPE, typename... ARGS>
	static inline Message Instance(const char* file, const std::size_t& line,
		FunctionFlagsType flag, const char* format, ARGS... args);
	template<typename ENVIRONMENT_TYPE, typename... ARGS>
	static inline Message Instance(const char* file, const std::size_t& line,
		ErrorNumbersType error_number, ARGS... args);
};

inline BrainMuscles::test::source
	::error::Message::Message(const std::string& cause, 
		const std::string& information, const std::stack<std::string>& trace) :
	Cause(cause),
	Information(information),
	Trace(trace)
{}

inline BrainMuscles::test::source
::error::Message::Message(const Message& copy) :
	Cause(copy.Cause),
	Information(copy.Information),
	Trace(copy.Trace)
{}

template<typename ENVIRONMENT_TYPE>
inline BrainMuscles::test::source::error::Message 
BrainMuscles::test::source::error::Message::Instance(const char* file,
	const std::size_t& line, FunctionFlagsType flag, std::string message)
{
	return Instance<ENVIRONMENT_TYPE, const char*>(file, line, flag, 
		"%s", message.c_str());
}

template<typename ENVIRONMENT_TYPE, typename... ARGS>
inline BrainMuscles::test::source::error::Message 
BrainMuscles::test::source::error::Message::Instance(const char* file,
	const std::size_t& line, FunctionFlagsType flag, const char* format,
	ARGS... args)
{
	char buffer[BufferAllocation];
#if ((defined(_WIN32) || defined(_WIN64)) && !defined(_CRT_SECURE_NO_WARNINGS))
	sprintf_s(buffer, format, args...);
#else
	std::sprintf(buffer, format, args...);
#endif
	std::string string_cause = ConstantType::StringErrorTitle(flag);
	string_cause += buffer;
	std::string string_information = "";
	ConstantType::AppendFileLine(string_information, file, line);
	return Message(string_cause, string_information, 
		ENVIRONMENT_TYPE::TraceFunction().Get());
}

template<typename ENVIRONMENT_TYPE, typename... ARGS>
inline typename BrainMuscles::test::source::error::Message
BrainMuscles::test::source::error::Message::Instance(const char* file,
	const std::size_t& line, ErrorNumbersType error_number, ARGS... args)
{
	return  Instance<ENVIRONMENT_TYPE, ARGS...>(file, line,
		ConstantType::FormatCause(error_number), args...)
}

namespace std
{
	inline std::string 
		to_string(const BrainMuscles::test::source::error::Message&
			error_message)
	{
		return BrainMuscles::test::source
			::Constant::StringErrorMessage(error_message.Cause,
				error_message.Information, error_message.Trace);
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ERROR_MESSAGE_H_