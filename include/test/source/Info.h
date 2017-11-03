#ifndef TEST_SOURCE_INFO_H_
#define TEST_SOURCE_INFO_H_

#ifdef _USING_TEST_SOURCE_

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
private:
	typedef char FlagType;
public:
	enum Flag : FlagType
	{
		assert_arguments = 1,
		assert_message = 2
	};
private:
	FlagType m_flag;
public:
	inline Info();
private:
	static inline FlagType AllFlag();
public:
	inline void Enable(FlagType flag);
	inline void Disable(FlagType flag);
	inline void DisableAll();
	inline bool IsEnable(Flag flag);
};

inline BrainMuscles::test::source::Info::Info() :
	m_flag(0)
{
	
}

inline typename BrainMuscles::test::source::Info::FlagType
BrainMuscles::test::source::Info::AllFlag()
{
	return assert_arguments || assert_message;
}

inline void BrainMuscles::test::source::Info::Enable(FlagType flag)
{
	flag &= AllFlag();
	m_flag |= flag;
}

inline void BrainMuscles::test::source::Info::Disable(FlagType flag)
{
	flag &= m_flag;
	m_flag ^= flag;
}

inline void BrainMuscles::test::source::Info::DisableAll()
{
	Disable(AllFlag());
}

inline bool BrainMuscles::test::source::Info::IsEnable(Flag flag)
{
	return m_flag & flag;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_H_