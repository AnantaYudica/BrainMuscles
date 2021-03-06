#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_PRECISION_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_PRECISION_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/log/output/format/Value.h"
#include "test/simple/log/output/format/Precision.h"

#include "test/simple/log/output/call/value/Tag.h"
#include "test/simple/log/output/call/Value.h"

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
					namespace delegate
					{
						class Precision
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate
								::Precision														PrecisionType;
							typedef BrainMuscles::test::simple::log::output::format::Precision	FormatPrecisionType;
							typedef typename FormatPrecisionType::PrecisionInputType			FormatPrecisionInputType;
							typedef BrainMuscles::test::simple::log::output::call::Value<
								PrecisionType>													CallValueType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
						public:
							CallValueType operator()(const FormatPrecisionInputType& value) const;
						};

						typename Precision::CallValueType
							Precision::operator()(const FormatPrecisionInputType& value) const
						{
							FormatPrecisionType percision;
							percision.SetValue(value);
							return CallValueType(ValueTagType::local_value, std::bind(static_cast<void(FormatValueType::*)(const FormatPrecisionType&)>
								(&FormatValueType::SetPrecision), std::placeholders::_1, percision));
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_PRECISION_H_