#ifndef TEST_SOURCE_TASK_STAGE_H_
#define TEST_SOURCE_TASK_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\result\Flags.h"

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
	typedef BrainMuscles::test::source::result::Flags ResultFlagsType;
private:
	ResultFlagsType m_result;
public:
	inline Stage();
public:
	inline bool Update(ResultFlagsType result);
	inline operator BrainMuscles::test::source::result::Flags() const;
};

inline BrainMuscles::test::source::task::Stage::Stage() :
	m_result(ResultFlagsType::not_test)
{}

inline bool BrainMuscles::test::source::task::Stage::Update(ResultFlagsType result)
{
	switch(result)
	{
	case ResultFlagsType::not_test:
		break;
	case ResultFlagsType::not_completed:
		switch(m_result)
		{
		case ResultFlagsType::not_test:
			break;
		default:
			return false;
		}
		break;
	case ResultFlagsType::error:
		switch (m_result)
		{
		case ResultFlagsType::not_test:
		case ResultFlagsType::not_completed:
			break;
		default:
			return false;
		}
	case ResultFlagsType::pass:
		switch (m_result)
		{
		case ResultFlagsType::not_completed:
			break;
		default:
			return false;
		}
	}
	m_result = result;
	return true;
}

inline BrainMuscles::test::source::task::Stage::operator 
	BrainMuscles::test::source::result::Flags() const
{
	return m_result;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_STAGE_H_