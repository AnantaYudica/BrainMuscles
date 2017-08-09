#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_WIDTH_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_WIDTH_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\format\Width.h"

#include "test\simple\log\output\Arguments.h"
#include "test\simple\log\output\Set.h"

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
					namespace handle
					{
						class Width
						{
						public:
							typedef BrainMuscles::test::simple::log::output
								::format::Width											WidthType;
							typedef typename WidthType::WidthInputType					WidthInputType;
							typedef BrainMuscles::test::simple::log::output	
								::format::Value											ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, const WidthType&>						SetType;
							typedef BrainMuscles::test::simple::log::output::set::Type	SetTypeType;
						public:
							SetType operator()(const WidthInputType& value) const;
						};

						typename Width::SetType
							Width::operator()(const WidthInputType& value) const
						{
							WidthType width;
							width.SetValue(value);
							return SetType(SetTypeType::local_value, &ValueType::SetWidth, width);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_WIDTH_H_