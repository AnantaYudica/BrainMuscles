#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <algorithm>
#include <type_traits>

#include "test/simple/log/output/format/Constant.h"

#include "test/simple/log/output/format/Helper.h"

#include "test/simple/log/output/format/length/Type.h"

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
						class Length
						{
						private:
							typedef BrainMuscles::test::simple::log::output
								::format::Constant							ConstantType;
						public:
							typedef typename ConstantType::SizeType			SizeType;
							typedef typename ConstantType::LengthArrayType	LengthArrayType;
							typedef typename ConstantType::FormatStringType	FormatStringType;
						private:
							SizeType m_size;
							LengthArrayType m_length;
						private:
							template<typename... ARGS>
							Length(const ARGS&... args);
						public:
							Length();
							Length(const Length& length);
							Length(Length* ptr_length);
						public:
							SizeType GetSize() const;
							const char* GetValue() const;
						public:
							void CopyToFormat(FormatStringType& format, SizeType& index);
						public:
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsDefault, Length>::type Instance();
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsChar, Length>::type Instance();
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsShort, Length>::type Instance();
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsLong, Length>::type Instance();
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsLongLong, Length>::type Instance();
							template<typename TYPE>
							static typename std::enable_if<BrainMuscles::test::simple::log::output::
								format::length::Type<TYPE>::IsLongDouble, Length>::type Instance();
						};

						template<typename... ARGS>
						Length::Length(const ARGS&... args) :
							m_size(sizeof...(args)),
							m_length{args...}
						{}

						Length::Length() :
							m_size(0),
							m_length{0}
						{}

						Length::Length(const Length& length) :
							m_size(length.m_size)
						{
							std::copy(std::begin(length.m_length), std::begin(length.m_length) + m_size, m_length);
						}

						Length::Length(Length* ptr_length) :
							m_size(ptr_length->m_size)
						{
							std::copy(std::begin(ptr_length->m_length), std::begin(ptr_length->m_length) + m_size, m_length);
						}

						typename Length::SizeType Length::GetSize() const
						{
							return m_size;
						}

						const char* Length::GetValue() const
						{
							return m_length;
						}

						void Length::CopyToFormat(FormatStringType& format, SizeType& index)
						{
							BrainMuscles::test::simple::log::output::format::helper::
								CopyToFormat<SizeType, LengthArrayType, FormatStringType>(m_length, GetSize(), format, index);
						}

						template<typename TYPE>
						typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsDefault, Length>::type
							Length::Instance()
						{
							return Length();
						}

						template<typename TYPE>
						typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsChar, Length>::type
							Length::Instance()
						{
							return Length('h', 'h');
						}

						template<typename TYPE>
						static typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsShort, Length>::type 
							Length::Instance()
						{
							return Length('h');
						}

						template<typename TYPE>
						static typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsLong, Length>::type 
							Length::Instance()
						{
							return Length('l');
						}

						template<typename TYPE>
						static typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsLongLong, Length>::type 
							Length::Instance()
						{
							return Length('l', 'l');
						}

						template<typename TYPE>
						static typename std::enable_if<BrainMuscles::test::simple::log::output::
							format::length::Type<TYPE>::IsLongDouble, Length>::type 
							Length::Instance()
						{
							return Length('L');
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_LENGTH_H_
