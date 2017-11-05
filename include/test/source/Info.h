#ifndef TEST_SOURCE_INFO_H_
#define TEST_SOURCE_INFO_H_

#ifdef _USING_TEST_SOURCE_

#include "test\source\info\Flags.h"

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
	typedef BrainMuscles::test::source::info::FlagsType FlagsType;
private:
	FlagsType m_flag;
public:
	inline Info();
public:
	inline void Enable(FlagsType flags);
	inline void Disable(FlagsType flags);
	inline void DisableAll();
	inline bool IsEnable(FlagsType flags) const;
};

inline BrainMuscles::test::source::Info::Info() :
	m_flag(0)
{
}

inline void BrainMuscles::test::source::Info::Enable(FlagsType flags)
{
	m_flag |= flags;
}

inline void BrainMuscles::test::source::Info::Disable(FlagsType flags)
{
	flags &= m_flag;
	m_flag ^= flags;
}

inline void BrainMuscles::test::source::Info::DisableAll()
{
	Disable(~static_cast<FlagsType>(0));
}

inline bool BrainMuscles::test::source::Info::IsEnable(FlagsType flags) const
{
	return m_flag & flags;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_H_