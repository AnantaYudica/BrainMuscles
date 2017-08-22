#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_END_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_END_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\call\Handle.h"

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
						class End :
							public BrainMuscles::test::simple::log::output::call::Handle<>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Handle<>		BaseType;
							typedef BrainMuscles::test::simple::log::output::Handle				HandleType;
						public:
							End();
						};

						End::End() :
							BaseType(&HandleType::EndPrintOutput)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_END_H_