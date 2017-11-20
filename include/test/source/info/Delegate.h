#ifndef TEST_SOURCE_INFO_DELEGATE_H_
#define TEST_SOURCE_INFO_DELEGATE_H_

#ifdef _USING_TEST_SOURCE_

#define _USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_ALLOCATION_ 1024

#ifndef _USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_ALLOCATION_

#define _USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_ALLOCATION_ \
	_USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_ALLOCATION_

#endif //!_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_ALLOCATION_

#include <cstdio>
#include <type_traits>

#include "test/source/Info.h"
#include "test/source/info/Flags.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace info
			{
				template<typename ENVIRONMENT_TYPE>
				class Delegate;
			}
		}
	}
}

template<typename ENVIRONMENT_TYPE>
class BrainMuscles::test::source::info::Delegate
{
public:
	typedef Delegate<ENVIRONMENT_TYPE> DelegateType;
public:
	typedef BrainMuscles::test::source::Info InfoType;
	typedef BrainMuscles::test::source::info::Flags FlagsType;
	typedef BrainMuscles::test::source::info::FlagsIntegerType	
		FlagsIntegerType;
private:
	typedef bool(DelegateType::*FunctionMemberFlagType)
		(const FlagsIntegerType&);
public:
	static constexpr std::size_t BufferAllocation = (std::is_unsigned<
		decltype(_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_ALLOCATION_)>::value ?
			(std::size_t)_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_ALLOCATION_
			: _USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_ALLOCATION_);
private:
	FlagsIntegerType m_flag;
	char * m_buffer;
	std::size_t m_bufferSize;
	const std::size_t m_bufferAllocation;
	const char * m_file;
	const std::size_t m_line;
	InfoType * const m_info;
	FunctionMemberFlagType m_functionFlag;
public:
	Delegate(InfoType * const info, const char * file, const std::size_t& line,
		FlagsIntegerType flags, std::size_t buffer_allocation = BufferAllocation);
	~Delegate();
public:
	bool FlagAnd(const FlagsIntegerType& flag);
	bool FlagOr(const FlagsIntegerType& flag);
	DelegateType& FlagAnd();
	DelegateType& FlagOr();
public:
	template<typename... ARGS>
	DelegateType& OutIf(const bool& condition, const char* format,
		ARGS... args);
public:
	template<typename... ARGS>
	DelegateType& Out(const FlagsIntegerType& flag, const char* format,
		ARGS... args);
	template<typename... ARGS>
	DelegateType& Out(const char* format, ARGS... args);
	void End();
};

template<typename ENVIRONMENT_TYPE>
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>
	::Delegate(InfoType * const info, const char * file, 
		const std::size_t& line, FlagsIntegerType flag,
		std::size_t buffer_allocation) :
	m_flag(flag),
	m_buffer(nullptr),
	m_bufferSize(0),
	m_bufferAllocation(buffer_allocation),
	m_file(file),
	m_line(line),
	m_info(info),
	m_functionFlag(&DelegateType::FlagAnd)
{
	if (m_info->IsEnable(flag))
	{
		m_buffer = new char[m_bufferAllocation + 1];
		m_buffer[0] = m_buffer[m_bufferAllocation] = NULL;
	}
}

template<typename ENVIRONMENT_TYPE>
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>::~Delegate()
{
	if (m_buffer)
	{
		delete[] m_buffer;
	}
}

template<typename ENVIRONMENT_TYPE>
bool BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::FlagAnd(const FlagsIntegerType& flag)
{
	return m_info->IsEnable(flag) > 0;
}

template<typename ENVIRONMENT_TYPE>
bool BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::FlagOr(const FlagsIntegerType& flag)
{
	return m_info->IsEnable(flag) < 0
		|| m_info->IsEnable(flag) > 0;
}

template<typename ENVIRONMENT_TYPE>
typename BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::DelegateType& 
BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::FlagAnd()
{
	m_functionFlag = &DelegateType::FlagAnd;
	return *this;
}

template<typename ENVIRONMENT_TYPE>
typename BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::DelegateType&
	BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::FlagOr()
{
	m_functionFlag = &DelegateType::FlagOr;
	return *this;
}

template<typename ENVIRONMENT_TYPE>
template<typename... ARGS>
typename BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::DelegateType& 
BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::OutIf(const bool& condition,
		const char* format, ARGS... args)
{
	if (m_buffer && condition)
	{
		m_bufferSize += std::snprintf(m_buffer + m_bufferSize,
			m_bufferAllocation - m_bufferSize, format, args...);
	}
	return *this;
}

template<typename ENVIRONMENT_TYPE>
template<typename... ARGS>
typename BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::DelegateType& 
BrainMuscles::test::source::info::Delegate<
	ENVIRONMENT_TYPE>::Out(const FlagsIntegerType& flag, const char* format,
		ARGS... args)
{
	return OutIf((this->*m_functionFlag)(flag), format, args...);
}

template<typename ENVIRONMENT_TYPE>
template<typename... ARGS>
typename BrainMuscles::test::source::info
	::Delegate<ENVIRONMENT_TYPE>::DelegateType&
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>
	::Out(const char* format, ARGS... args)
{
	return OutIf(true, format, args...);
}

template<typename ENVIRONMENT_TYPE>
void BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>::End()
{
	if (m_buffer && m_buffer[0] != NULL)
	{
		ENVIRONMENT_TYPE::Info(m_file, m_line, "%s", m_buffer);
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_DELEGATE_H_