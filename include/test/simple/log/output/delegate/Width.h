#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_WIDTH_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_WIDTH_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\format\Width.h"

#include "test\simple\log\output\call\value\Tag.h"
#include "test\simple\log\output\call\Value.h"

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
						class Width
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Width		WidthType;
							typedef typename WidthType::WidthInputType							WidthInputType;
							typedef BrainMuscles::test::simple::log::output::call::Value		CallValueType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
						public:
							CallValueType operator()(const WidthInputType& value) const;
						};

						typename Width::CallValueType
							Width::operator()(const WidthInputType& value) const
						{
							WidthType width;
							width.SetValue(value);
							return CallValueType(ValueTagType::local_value, std::bind(static_cast<void(FormatValueType::*)(const WidthType&)>
								(&FormatValueType::SetWidth), std::placeholders::_1, width));
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_WIDTH_H_