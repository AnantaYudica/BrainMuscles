#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOWER_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOWER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

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
						class Lower : 
							public BrainMuscles::test::simple::log::output::Set<
								BrainMuscles::test::simple::log::output::format::Value, void, void>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Value	ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, void>										BaseType;
							typedef BrainMuscles::test::simple::log::output::set::Type		SetTypeType;
						public:
							Lower();
						};

						Lower::Lower() :
							BaseType(SetTypeType::local_value, &ValueType::LowerEnable)
						{}
					}
				}
			}
		}
	}
}


#endif 

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOWER_H_