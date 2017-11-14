#ifndef TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_
#define TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Constant.h"
#include "test\source\environment\Trace.h"
#include "test\source\environment\trace\Interface.h"
#include "test\source\interface\Flags.h"
#include "test\source\function\Flags.h"

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
private:
	typedef BrainMuscles::test::source::Constant ConstantType;
public:
	typedef BrainMuscles::test::source::environment::trace::Interface
		TraceInterfaceType;
	typedef BrainMuscles::test::source::interface::Flags InterfaceFlagsType;
	typedef BrainMuscles::test::source::function::Flags FunctionFlagsType;
private:
	TraceInterfaceType * m_traceInterface;
public:
	inline Function(TraceInterfaceType * trace_interface);
public:
	template<typename IMPLEMENT_TYPE>
	inline void Push(const char * file, std::size_t line,
		FunctionFlagsType flag);
	template<typename IMPLEMENT_TYPE>
	inline void Push(const char * file, std::size_t line,
		InterfaceFlagsType flag);
};

inline BrainMuscles::test::source::environment
::trace::Function::Function(TraceInterfaceType * trace_interface) :
	m_traceInterface(trace_interface)
{}

template<typename IMPLEMENT_TYPE>
inline void BrainMuscles::test::source::environment::trace
::Function::Push(const char * file, std::size_t line, FunctionFlagsType flag)
{
	std::string string_result = "";
	if (!ConstantType::IsInterfaceFlags(flag)
		&& m_traceInterface && m_traceInterface->Size() > 0)
	{
		string_result += m_traceInterface->Top();
	}
	else
	{
		string_result += ConstantType::StringFunction<IMPLEMENT_TYPE>(flag);
	}
	if (!string_result.empty())
	{
		ConstantType::AppendFileLine(string_result, file, line);
	}
	BrainMuscles::test::source::environment::Trace::Push(string_result);
}

template<typename IMPLEMENT_TYPE>
inline void BrainMuscles::test::source::environment::trace
::Function::Push(const char * file, std::size_t line, InterfaceFlagsType flag)
{
	return Push<IMPLEMENT_TYPE>(file, line, ConstantType::Cast(flag));
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_TRACE_FUNCTION_H_