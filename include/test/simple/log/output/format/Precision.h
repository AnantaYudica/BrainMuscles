#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_PRECISION_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_PRECISION_H_

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
						class Precision
						{
						private:
							typedef BrainMuscles::test::simple::log::output::
								format::Constant								ConstantType;
						public:
							typedef typename ConstantType::SizeType				SizeType;
							typedef typename ConstantType::PrecisionInputType	PrecisionInputType;
							typedef typename ConstantType::PrecisionArrayType	PrecisionArrayType;
							typedef typename ConstantType::FormatStringType		FormatStringType;
						private:
							SizeType m_size;
							PrecisionArrayType m_precision;
						public:
							Precision();
							Precision(const Precision& precision);
							Precision(Precision* ptr_precision);
						public:
							void SetValue(const PrecisionInputType& value);
							SizeType GetSize() const;
							const char* GetValue() const;
						public:
							void CopyToFormat(FormatStringType& format, SizeType& index);
						};

						Precision::Precision() :
							m_size(0)
						{}

						Precision::Precision(const Precision& precision) :
							m_size(precision.m_size)
						{
							std::copy(std::begin(precision.m_precision), std::begin(precision.m_precision) + m_size, m_precision);
						}

						Precision::Precision(Precision* ptr_precision) :
							m_size(ptr_precision->m_size)
						{
							std::copy(std::begin(ptr_precision->m_precision), std::begin(ptr_precision->m_precision) + m_size, m_precision);
						}

						void Precision::SetValue(const PrecisionInputType& value)
						{
							m_size = BrainMuscles::test::simple::log::output::format::helper::
								CastUnsignedIntegerToArrayOfChar<SizeType, PrecisionInputType, PrecisionArrayType>(value, m_precision);
						}

						typename Precision::SizeType Precision::GetSize() const
						{
							return m_size;
						}

						const char* Precision::GetValue() const
						{
							return m_precision;
						}

						void Precision::CopyToFormat(FormatStringType& format, SizeType& index)
						{
							BrainMuscles::test::simple::log::output::format::helper::
								CopyToFormat<SizeType, PrecisionArrayType, FormatStringType>(m_precision, GetSize(), format, index);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_PRECISION_H_