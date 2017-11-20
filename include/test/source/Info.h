#ifndef TEST_SOURCE_INFO_H_
#define TEST_SOURCE_INFO_H_

#ifdef _USING_TEST_SOURCE_

#include "test/source/info/Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Info;
		}
	}
}

class BrainMuscles::test::source::Info
{
public:
	typedef BrainMuscles::test::source::info::Flags FlagsType;
	typedef BrainMuscles::test::source::info::FlagsIntegerType
		FlagsIntegerType;
private:
	FlagsIntegerType m_flag;
public:
	inline Info();
public:
	inline void Enable(FlagsIntegerType flag);
	inline void Disable(FlagsIntegerType flag);
	inline void DisableAll();
	inline int IsEnable(FlagsIntegerType flag) const;
};

inline BrainMuscles::test::source::Info::Info() :
	m_flag(0)
{
}

inline void BrainMuscles::test::source::Info::Enable(FlagsIntegerType flag)
{
	m_flag |= flag;
}

inline void BrainMuscles::test::source::Info::Disable(FlagsIntegerType flag)
{
	flag &= m_flag;
	m_flag ^= flag;
}

inline void BrainMuscles::test::source::Info::DisableAll()
{
	Disable(~static_cast<FlagsType>(0));
}

inline int 
BrainMuscles::test::source::Info::IsEnable(FlagsIntegerType flag) const
{
	FlagsIntegerType and_flag = m_flag & flag;
	return and_flag == 0 ? 0
		: and_flag == flag ? 1 : -1;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_H_