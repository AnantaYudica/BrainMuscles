#ifndef TEST_SOURCE_TASK_STAGE_H_
#define TEST_SOURCE_TASK_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Result.h"

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
	typedef BrainMuscles::test::source::Result ResultType;
private:
	ResultType m_result;
public:
	inline Stage();
public:
	inline bool Update(ResultType result);
	inline operator BrainMuscles::test::source::Result() const;
};

inline BrainMuscles::test::source::task::Stage::Stage() :
	m_result(ResultType::not_test)
{}

inline bool BrainMuscles::test::source::task::Stage::Update(ResultType result)
{
	switch(result)
	{
	case ResultType::not_test:
		break;
	case ResultType::not_completed:
		switch(m_result)
		{
		case ResultType::not_test:
			break;
		default:
			return false;
		}
		break;
	case ResultType::error:
		switch (m_result)
		{
		case ResultType::not_test:
		case ResultType::not_completed:
			break;
		default:
			return false;
		}
	case ResultType::pass:
		switch (m_result)
		{
		case ResultType::not_completed:
			break;
		default:
			return false;
		}
	}
	m_result = result;
	return true;
}

inline BrainMuscles::test::source::task::Stage::operator 
	BrainMuscles::test::source::Result() const
{
	return m_result;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_STAGE_H_