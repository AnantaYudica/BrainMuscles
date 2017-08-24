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
						template<typename OUTPUT_TYPE>
						class End :
							public BrainMuscles::test::simple::log::output::call::Handle<
								BrainMuscles::test::simple::log::output::delegate::End<OUTPUT_TYPE>, OUTPUT_TYPE>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::End<
								OUTPUT_TYPE>													EndType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								EndType, OUTPUT_TYPE>											BaseType;
							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
						public:
							End();
						};

						template<typename OUTPUT_TYPE>
						End<OUTPUT_TYPE>::End() :
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