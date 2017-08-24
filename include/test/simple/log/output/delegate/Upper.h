#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_UPPER_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_UPPER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

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
						class Upper :
							public BrainMuscles::test::simple::log::output::call::Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Value		BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
						public:
							Upper();
						};

						Upper::Upper() :
							BaseType(ValueTagType::local_value, &FormatValueType::UpperEnable)
						{}
					}
				}
			}
		}
	}
}

#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_UPPER_H_