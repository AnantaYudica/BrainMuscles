#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLAG_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLAG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Flags.h"

#include "test\simple\log\output\Arguments.h"

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
						class Flag
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Flags	FlagsType;
							typedef BrainMuscles::test::simple::log::output::format::Value	ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, const FlagsType&>							SetType;
							typedef BrainMuscles::test::simple::log::output::set::Type		SetTypeType;
						public:
							const SetType Negative;
							const SetType Positive;
							const SetType Space;
							const SetType Hash;
							const SetType Zero;
						public:
							Flag();
						};

						Flag::Flag() :
							Negative(SetTypeType::local_value, &ValueType::SetFlag, FlagsType::Negative()),
							Positive(SetTypeType::local_value, &ValueType::SetFlag, FlagsType::Positive()),
							Space(SetTypeType::local_value, &ValueType::SetFlag, FlagsType::Space()),
							Hash(SetTypeType::local_value, &ValueType::SetFlag, FlagsType::Hash()),
							Zero(SetTypeType::local_value, &ValueType::SetFlag, FlagsType::Zero())
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLAG_H_