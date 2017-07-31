#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_FLAGS_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_FLAGS_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <algorithm>

#include "test\simple\log\output\format\Constant.h"

#include "test\simple\log\output\format\Helper.h"

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
					namespace format
					{
						class Flags
						{
						private:
							typedef BrainMuscles::test::simple::log::output
								::format::Constant							ConstantType;
						public:
							typedef typename ConstantType::SizeType			SizeType;
							typedef typename ConstantType::FormatStringType	FormatStringType;
							typedef typename ConstantType::FlagArrayType	FlagArrayType;
						private:
							FlagArrayType m_flag;
						private:
							template<typename... ARGS>
							Flags(const ARGS&... args);
						public:
							Flags();
							Flags(const Flags& flags);
							Flags(Flags* ptr_flags);
						public:
							SizeType GetSize() const;
							const char* GetValue() const; 
						public:
							void CopyToFormat(FormatStringType& format, SizeType& index);
						public:
							static Flags Negative();
							static Flags Positive();
							static Flags Space();
							static Flags Hash();
							static Flags Zero();
						};

						Flags::Flags()
						{}

						template<typename... ARGS>
						Flags::Flags(const ARGS&... args) :
							m_flag{ args... }
						{}

						Flags::Flags(const Flags& flags)
						{
							std::copy(std::begin(flags.m_flag), std::end(flags.m_flag), m_flag);
						}

						Flags::Flags(Flags* ptr_flags)
						{
							std::copy(std::begin(ptr_flags->m_flag), std::end(ptr_flags->m_flag), m_flag);
						}

						typename Flags::SizeType Flags::GetSize() const
						{
							return ConstantType::SizeMaxFlag;
						}

						const char* Flags::GetValue() const
						{
							return m_flag;
						}

						void Flags::CopyToFormat(FormatStringType& format, SizeType& index)
						{
							BrainMuscles::test::simple::log::output::format::helper::
								CopyToFormat<SizeType, FlagArrayType, FormatStringType>(m_flag, GetSize(), format, index);
						}

						Flags Flags::Negative()
						{
							return Flags('-');
						}

						Flags Flags::Positive()
						{
							return Flags('+');
						}

						Flags Flags::Space()
						{
							return Flags(' ');
						}

						Flags Flags::Hash()
						{
							return Flags('#');
						}

						Flags Flags::Zero()
						{
							return Flags('0');
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_FLAGS_H_
