#ifndef TEST_SOURCE_TASK_STAGE_H_
#define TEST_SOURCE_TASK_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\status\Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace task
			{
				class Stage;
			}
		}
	}
}

class BrainMuscles::test::source::task::Stage
{
public:
	typedef BrainMuscles::test::source::status::Flags StatusFlagsType;
private:
	StatusFlagsType m_result;
public:
	inline Stage();
public:
	inline bool Update(StatusFlagsType result);
	inline operator BrainMuscles::test::source::status::Flags() const;
};

inline BrainMuscles::test::source::task::Stage::Stage() :
	m_result(StatusFlagsType::not_test)
{}

inline bool BrainMuscles::test::source::task::Stage::Update(StatusFlagsType result)
{
	switch(result)
	{
	case StatusFlagsType::not_test:
		break;
	case StatusFlagsType::not_completed:
		switch(m_result)
		{
		case StatusFlagsType::not_test:
			break;
		default:
			return false;
		}
		break;
	case StatusFlagsType::error:
		switch (m_result)
		{
		case StatusFlagsType::not_test:
		case StatusFlagsType::not_completed:
			break;
		default:
			return false;
		}
	case StatusFlagsType::pass:
		switch (m_result)
		{
		case StatusFlagsType::not_completed:
			break;
		default:
			return false;
		}
	}
	m_result = result;
	return true;
}

inline BrainMuscles::test::source::task::Stage::operator 
	BrainMuscles::test::source::status::Flags() const
{
	return m_result;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_STAGE_H_