#ifndef TEST_SOURCE_TASK_DEFAULT_STAGE_H_
#define TEST_SOURCE_TASK_DEFAULT_STAGE_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\Environment.h"
#include "test\source\Result.h"
#include "test\source\task\Stage.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace task
			{
				namespace default
				{
					class Stage;
				}
			}
		}
	}
}

class BrainMuscles::test::source::task::default::Stage :
	public BrainMuscles::test::source::task::Stage
{
private:
	typedef unsigned char ValueType;
private:
	typedef BrainMuscles::test::source::Result ResultType;
private:
	static constexpr ValueType BitNotTest = 1;
	static constexpr ValueType BitPreTest = 2;
	static constexpr ValueType BitTest = 4;
	static constexpr ValueType BitPostTest = 8;
	static constexpr ValueType BitEnd = 16;
private:
	ValueType m_value;
public:
	inline Stage();
private:
	inline bool IsHasNotTest();
	inline bool IsHasPreTest();
	inline bool IsHasTest();
	inline bool IsHasPostTest();
	inline bool IsHasEnd();
private:
	inline void SetNotTest();
	inline void SetPreTest();
	inline void SetTest();
	inline void SetPostTest();
	inline void SetEnd();
public:
	inline bool IsBegin() const;
	inline bool IsNotTest() const;
	inline bool IsPreTest() const;
	inline bool IsTest() const;
	inline bool IsPostTest() const;
	inline bool IsEnd() const;
public:
	inline bool CanBeginStage();
	inline bool CanPreTestStage();
	inline bool CanTestStage();
	inline bool CanPostTestStage();
	inline bool CanEndStage();
};

inline BrainMuscles::test::source::task::default::Stage::Stage() :
	m_value(0)
{}

inline bool BrainMuscles::test::source::task::default::Stage::IsHasNotTest()
{
	return m_value & BitNotTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsHasPreTest()
{
	return m_value & BitPreTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsHasTest()
{
	return m_value & BitTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsHasPostTest()
{
	return m_value & BitPostTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsHasEnd()
{
	return m_value & BitEnd;
}

inline void BrainMuscles::test::source::task::default::Stage::SetNotTest()
{
	m_value |= BitNotTest;
}

inline void BrainMuscles::test::source::task::default::Stage::SetPreTest()
{
	m_value |= BitPreTest;
}

inline void BrainMuscles::test::source::task::default::Stage::SetTest()
{
	m_value |= BitTest;
}

inline void BrainMuscles::test::source::task::default::Stage::SetPostTest()
{
	m_value |= BitPostTest;
}

inline void BrainMuscles::test::source::task::default::Stage::SetEnd()
{
	m_value |= BitEnd;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsBegin() const
{
	return m_value == 0;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsNotTest() const
{
	return m_value == BitNotTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsPreTest() const
{
	return m_value >= BitPreTest && m_value < BitTest;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsTest() const
{
	return m_value >= BitTest && m_value < BitPostTest;
}

inline bool 
BrainMuscles::test::source::task::default::Stage::IsPostTest() const
{
	return m_value >= BitPostTest && m_value < BitEnd;
}

inline bool BrainMuscles::test::source::task::default::Stage::IsEnd() const
{
	return m_value >= BitEnd;
}

inline bool BrainMuscles::test::source::task::default::Stage::CanBeginStage()
{
	if (*this == ResultType::not_test && IsBegin())
	{
		SetNotTest();
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::task::default::Stage::CanPreTestStage()
{
	if (*this == ResultType::not_completed && IsNotTest())
	{
		SetPreTest();
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::task::default::Stage::CanTestStage()
{
	if (*this == ResultType::not_completed 
		&& (IsNotTest() || IsPreTest()))
	{
		SetTest();
		return true;
	}	
	return false;
}

inline bool 
BrainMuscles::test::source::task::default::Stage::CanPostTestStage()
{
	if (*this == ResultType::pass && IsTest())
	{
		SetPostTest();
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::task::default::Stage::CanEndStage()
{
	if (!IsEnd())
	{
		SetPostTest();
		return true;
	}
	return false;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_DEFAULT_STAGE_H_