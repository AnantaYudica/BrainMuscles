#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_WIDTH_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_WIDTH_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <algorithm>

#include "test/simple/log/output/format/Constant.h"

#include "test/simple/log/output/format/Helper.h"

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
						class Width
						{
						private:
							typedef BrainMuscles::test::simple::log::output
								::format::Constant							ConstantType;
						public:
							typedef typename ConstantType::SizeType			SizeType;
							typedef typename ConstantType::WidthInputType	WidthInputType;
							typedef typename ConstantType::WidthArrayType	WidthArrayType;
							typedef typename ConstantType::FormatStringType	FormatStringType;
						private:
							SizeType m_size;
							WidthArrayType m_width;
						public:
							Width();
							Width(const Width& width);
							Width(Width* ptr_width);
						public:
							void SetValue(const WidthInputType& value);
							SizeType GetSize() const;
							const char* GetValue() const;
						public:
							void CopyToFormat(FormatStringType& format, SizeType& index);
						};

						Width::Width() :
							m_size(0)
						{}

						Width::Width(const Width& width) :
							m_size(width.m_size)
						{
							std::copy(std::begin(width.m_width), std::begin(width.m_width) + m_size, m_width);
						}

						Width::Width(Width* ptr_width) :
							m_size(ptr_width->m_size)
						{
							std::copy(std::begin(ptr_width->m_width), std::begin(ptr_width->m_width) + m_size, m_width);
						}

						void Width::SetValue(const WidthInputType& value)
						{
							m_size = BrainMuscles::test::simple::log::output::format::helper::
								CastUnsignedIntegerToArrayOfChar<SizeType, WidthInputType, WidthArrayType>(value, m_width);
						}

						typename Width::SizeType Width::GetSize() const
						{
							return m_size;
						}

						const char* Width::GetValue() const
						{
							return m_width;
						}

						void Width::CopyToFormat(FormatStringType& format, SizeType& index)
						{
							BrainMuscles::test::simple::log::output::format::helper::
								CopyToFormat<SizeType, WidthArrayType, FormatStringType>(m_width, GetSize(), format, index);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_WIDTH_H_
