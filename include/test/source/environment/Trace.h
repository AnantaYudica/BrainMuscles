#ifndef TEST_SOURCE_ENVIRONMENT_TRACE_H_
#define TEST_SOURCE_ENVIRONMENT_TRACE_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace environment
			{
				class Trace;
			}
		}
	}
}

class BrainMuscles::test::source::environment::Trace
{
private:
	std::size_t m_counter;
	std::string m_default;
	std::stack<std::string> m_stack;
protected:
	inline Trace(std::string default = "");
protected:
	inline void Push(std::string value);
public:
	inline void Pop();
	inline std::string Top(std::string default = "");
	inline std::stack<std::string> Get();
};

inline BrainMuscles::test::source
	::environment::Trace::Trace(std::string default) :
	m_counter(0),
	m_default(default)
{
}

inline void 
BrainMuscles::test::source::environment::Trace::Push(std::string value)
{
	if (!value.empty())
	{
		m_stack.push(value);
	}
	else
	{
		++m_counter;
	}
}

inline void BrainMuscles::test::source::environment::Trace::Pop()
{
	if (m_counter == 0)
	{
		if (!m_stack.empty())
		{
			m_stack.pop();
		}
	}
	else
	{
		--m_counter;
	}
}

inline std::string
BrainMuscles::test::source::environment::Trace::Top(std::string default)
{
	if (!m_stack.empty())
	{
		return m_stack.top();
	}
	return default.empty() ? m_default : default;
}

inline std::stack<std::string>
BrainMuscles::test::source::environment::Trace::Get()
{
	return m_stack;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_TRACE_H_