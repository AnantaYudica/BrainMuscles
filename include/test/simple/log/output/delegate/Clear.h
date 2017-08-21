#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CLEAR_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CLEAR_H_

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
						class Clear :
							public BrainMuscles::test::simple::log::output::call::Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Value		BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
						public:
							Clear();
						};

						Clear::Clear() :
							BaseType(ValueTagType::local_and_global_value, std::bind(&FormatValueType::Default, std::placeholders::_1))
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CLEAR_H_