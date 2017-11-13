#ifndef TEST_SOURCE_ENVIRONMENT_TRACE_INTERFACE_H_
#define TEST_SOURCE_ENVIRONMENT_TRACE_INTERFACE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Constant.h"
#include "test\source\environment\Trace.h"
#include "test\source\interface\Flags.h"

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
					class Interface;
				}
			}
		}
	}
}

class BrainMuscles::test::source::environment::trace::Interface :
	public BrainMuscles::test::source::environment::Trace
{
public:
	typedef BrainMuscles::test::source::interface::Flags FlagsType;
public:
	inline Interface();
public:
	template<typename IMPLEMENT_TYPE>
	inline void Push(FlagsType flag);
};

inline BrainMuscles::test::source::environment
::trace::Interface::Interface()
{}

template<typename IMPLEMENT_TYPE>
inline void
BrainMuscles::test::source::environment::trace
::Interface::Push(FlagsType flag)
{
	std::string string_result 
		= BrainMuscles::test::source::Constant::StringInterface(flag);
	BrainMuscles::test::source::environment::Trace::Push(string_result);
}


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_ENVIRONMENT_TRACE_INTERFACE_H_