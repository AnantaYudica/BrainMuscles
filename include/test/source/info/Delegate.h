#ifndef TEST_SOURCE_INFO_DELEGATE_H_
#define TEST_SOURCE_INFO_DELEGATE_H_

#ifdef _USING_TEST_SOURCE_

#define _USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_SIZE_ 1024

#ifndef _USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_SIZE_

#define _USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_SIZE_ \
	_USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_SIZE_

#endif //!_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_SIZE_

#include <cstdio>
#include <type_traits>

#include "test\source\Info.h"
#include "test\source\info\Flags.h"

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
	typedef BrainMuscles::test::source::info::FlagsType	FlagsIntegerType;
public:
	static constexpr std::size_t BufferSize = (std::is_unsigned<
		decltype(_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_SIZE_)>::value ?
			(std::size_t)_USING_TEST_SOURCE_INFO_DELEGATE_BUFFER_SIZE_
			: _USING_TEST_SOURCE_INFO_DELEGATE_DEFAULT_BUFFER_SIZE_);
private:
	FlagsIntegerType m_flag;
	char * m_buffer;
	const std::size_t m_bufferSize;
	const char * m_file;
	const std::size_t m_line;
	InfoType * const m_info;
public:
	Delegate(InfoType * const info, const char * file, const std::size_t& line,
		FlagsIntegerType flags, std::size_t buffer_size = BufferSize);
	~Delegate();
public:
	template<typename... ARGS>
	DelegateType& Out(FlagsType flag, const char* format, ARGS... args);
	template<typename... ARGS>
	DelegateType& Out(const char* format, ARGS... args);
	void End();
};

template<typename ENVIRONMENT_TYPE>
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>
	::Delegate(InfoType * const info, const char * file, const std::size_t& line,
		FlagsIntegerType flags, std::size_t buffer_size) :
	m_flag(flag),
	m_buffer(nullptr),
	m_bufferSize(buffer_size),
	m_file(file),
	m_line(line),
	m_info(info)
{
	if (m_info->IsEnable(flag))
	{
		m_buffer = new char[m_bufferSize + 1];
		m_buffer[0] = m_buffer[m_bufferSize] = NULL;
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
template<typename... ARGS>
typename BrainMuscles::test::source::info
	::Delegate<ENVIRONMENT_TYPE>::DelegateType&
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>
	::Out(FlagsType flag, const char* format, ARGS... args)
{
	if (m_buffer)
	{
		if (m_info->IsEnable(m_flag & flag))
		{
			return Out(format, args...);
		}
	}
	return *this;
}

template<typename ENVIRONMENT_TYPE>
template<typename... ARGS>
typename BrainMuscles::test::source::info
	::Delegate<ENVIRONMENT_TYPE>::DelegateType&
BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>
	::Out(const char* format, ARGS... args)
{
	if (m_buffer)
	{
		std::snprintf(m_buffer, m_bufferSize, format, args...);
	}
	return *this;
}

template<typename ENVIRONMENT_TYPE>
void BrainMuscles::test::source::info::Delegate<ENVIRONMENT_TYPE>::End()
{
	if (m_buffer)
	{
		if (m_buffer[0] != NULL)
		{
			ENVIRONMENT_TYPE::Info(m_file, m_line, "%s", m_buffer);
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_INFO_DELEGATE_H_