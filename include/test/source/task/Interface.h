#ifndef TEST_SOURCE_TASK_INTERFACE_H_
#define TEST_SOURCE_TASK_INTERFACE_H_ 

#ifdef _USING_TEST_SOURCE_

#include "test\source\Result.h"
#include "test\source\task\Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace task
			{
				template<typename IMPLEMENT_TYPE>
				class Interface;
			}
		}
	}
}

template<typename IMPLEMENT_TYPE>
class BrainMuscles::test::source::task::Interface
{
public:
	typedef BrainMuscles::test::source::Result ResultType;
protected:
	Interface() = default;
public:
	static bool Runnable();
	static void Run() = default;
	static ResultType Status();
};

template<typename IMPLEMENT_TYPE>
bool BrainMuscles::test::source::task::Interface<IMPLEMENT_TYPE>::Runnable()
{
	return false;
}

template<typename IMPLEMENT_TYPE>
typename BrainMuscles::test::source::task::Interface<
	IMPLEMENT_TYPE>::ResultType 
	BrainMuscles::test::source::task::Interface<IMPLEMENT_TYPE>::Status()
{}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_INTERFACE_H_