#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOWER_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOWER_H_

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
						class Lower : 
							public BrainMuscles::test::simple::log::output::call::Value<
								BrainMuscles::test::simple::log::output::delegate::Lower>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::Lower	LowerType;
							typedef BrainMuscles::test::simple::log::output::call::Value<
								LowerType>														BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
						public:
							Lower();
						};

						Lower::Lower() :
							BaseType(ValueTagType::local_value, &FormatValueType::LowerEnable)
						{}
					}
				}
			}
		}
	}
}


#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOWER_H_