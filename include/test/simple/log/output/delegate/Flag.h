#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLAG_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLAG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\format\Flags.h"

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
						class Flag
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::Flag		FlagType;
							typedef BrainMuscles::test::simple::log::output::call::Value<
								FlagType>														CallValueType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Flags		FormatFlagsType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
							typedef void (FormatValueType::*FunctionMemberValueSetFlagType)(const FormatFlagsType& flag);
						public:
							const CallValueType Negative;
							const CallValueType Positive;
							const CallValueType Space;
							const CallValueType Hash;
							const CallValueType Zero;
						public:
							Flag();
						};

						Flag::Flag() :
							Negative(ValueTagType::local_value, std::bind(static_cast<FunctionMemberValueSetFlagType>(&FormatValueType::SetFlag), std::placeholders::_1, FormatFlagsType::Negative())),
							Positive(ValueTagType::local_value, std::bind(static_cast<FunctionMemberValueSetFlagType>(&FormatValueType::SetFlag), std::placeholders::_1, FormatFlagsType::Positive())),
							Space(ValueTagType::local_value, std::bind(static_cast<FunctionMemberValueSetFlagType>(&FormatValueType::SetFlag), std::placeholders::_1, FormatFlagsType::Space())),
							Hash(ValueTagType::local_value, std::bind(static_cast<FunctionMemberValueSetFlagType>(&FormatValueType::SetFlag), std::placeholders::_1, FormatFlagsType::Hash())),
							Zero(ValueTagType::local_value, std::bind(static_cast<FunctionMemberValueSetFlagType>(&FormatValueType::SetFlag), std::placeholders::_1, FormatFlagsType::Zero()))
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLAG_H_