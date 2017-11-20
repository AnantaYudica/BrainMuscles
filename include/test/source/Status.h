#ifndef TEST_SOURCE_STATUS_H_
#define TEST_SOURCE_STATUS_H_

#ifdef _USING_TEST_SOURCE_

#include "test/source/status/Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Status;
		}
	}
}

class BrainMuscles::test::source::Status
{
public:
	typedef BrainMuscles::test::source::status::Flags Flags;
private:
	Flags m_flag;
public:
	inline Status();
	inline Status(Flags flag);
public:
	inline bool IsPass() const;
	inline bool IsError() const;
	inline bool IsNotTest() const;
	inline bool IsNotCompleted() const;
public:
	inline bool SetPass();
	inline bool SetError();
	inline bool SetNotTest();
	inline bool SetNotCompleted();
	inline bool Set(Flags flag);
public:
	inline operator BrainMuscles::test::source::status::Flags() const;
	inline Status& operator=(const Status& status);
	inline Status& operator=(const Flags& flag);
};

inline BrainMuscles::test::source::Status::Status() :
	m_flag(Flags::not_test)
{}

inline BrainMuscles::test::source::Status::Status(Flags flag) :
	m_flag(flag)
{}

inline bool BrainMuscles::test::source::Status::IsPass() const
{
	return m_flag == Flags::pass;
}

inline bool BrainMuscles::test::source::Status::IsError() const
{
	return m_flag == Flags::error;
}

inline bool BrainMuscles::test::source::Status::IsNotTest() const
{
	return m_flag == Flags::not_test;
}

inline bool BrainMuscles::test::source::Status::IsNotCompleted() const
{
	return m_flag == Flags::not_completed;
}

inline bool BrainMuscles::test::source::Status::SetPass()
{
	if (IsNotTest() || IsNotCompleted())
	{
		m_flag = Flags::pass;
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::Status::SetError()
{
	if (IsNotTest() || IsNotCompleted() || IsPass())
	{
		m_flag = Flags::error;
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::Status::SetNotTest()
{
	return false;
}

inline bool BrainMuscles::test::source::Status::SetNotCompleted()
{
	if (IsNotTest())
	{
		m_flag = Flags::not_completed;
		return true;
	}
	return false;
}

inline bool BrainMuscles::test::source::Status::Set(Flags flag)
{
	return flag == Flags::error ? SetError()
		: flag == Flags::not_completed ? SetNotCompleted()
		: flag == Flags::not_test ? SetNotTest()
		: flag == Flags::pass ? SetPass() : false;
}

inline BrainMuscles::test::source::Status::operator 
BrainMuscles::test::source::status::Flags() const
{
	return m_flag;
}

inline BrainMuscles::test::source::Status& 
BrainMuscles::test::source::Status::operator=(const Status& status)
{
	Set(status);
	return *this;
}

inline BrainMuscles::test::source::Status& 
BrainMuscles::test::source::Status::operator=(const Flags& flag)
{
	Set(flag);
	return *this;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_STATUS_H_