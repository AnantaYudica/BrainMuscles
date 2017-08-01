#ifndef TEST_SIMPLE_LOG_OUTPUT_SIGNAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_SIGNAL_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					class Signal
					{
					private:
						typedef unsigned char FlagType;
						static constexpr FlagType OutputSignalBitIndex = 1;
						static constexpr FlagType PrintSignalBitIndex = 1 << 1;
						static constexpr FlagType NewlineSignalBitIndex = 1 << 2;
					private:
						FlagType m_flag;
					public:
						Signal();
						~Signal();
					public:
						void Default();
					public:
						void OutputStartSignal();
						void OutputEndSignal();
						bool IsOutputStart();
						bool IsOutputEnd();
					public:
						void PrintStartSignal();
						void PrintEndSignal();
						bool IsPrintStart();
						bool IsPrintEnd();
					public:
						void NewlineSignal();
						void CurrentlineSignal();
						bool IsNewline();
					};

					Signal::Signal() :
						m_flag(0)
					{}

					Signal::~Signal()
					{}

					void Signal::Default()
					{
						OutputEndSignal();
						PrintEndSignal();
					}

					void Signal::OutputStartSignal()
					{
						m_flag |= OutputSignalBitIndex;
					}

					void Signal::OutputEndSignal()
					{
						if (IsOutputStart())
						{
							m_flag ^= OutputSignalBitIndex;
						}
					}

					bool Signal::IsOutputStart()
					{
						return (m_flag & OutputSignalBitIndex);
					}

					bool Signal::IsOutputEnd()
					{
						return !IsOutputStart();
					}

					void Signal::PrintStartSignal()
					{
						m_flag |= PrintSignalBitIndex;
					}

					void Signal::PrintEndSignal()
					{
						if (IsPrintStart())
						{
							m_flag ^= PrintSignalBitIndex;
						}
					}

					bool Signal::IsPrintStart()
					{
						return (m_flag & PrintSignalBitIndex);
					}

					bool Signal::IsPrintEnd()
					{
						return !(IsPrintStart());
					}

					void Signal::NewlineSignal()
					{
						m_flag |= NewlineSignalBitIndex;
					}

					void Signal::CurrentlineSignal()
					{
						if (IsNewline())
						{
							m_flag ^= NewlineSignalBitIndex;
						}
					}

					bool Signal::IsNewline()
					{
						return (m_flag & NewlineSignalBitIndex);
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_SIGNAL_H_