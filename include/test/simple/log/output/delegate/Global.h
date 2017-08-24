#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_GLOBAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_GLOBAL_H_

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
						class Global :
							public BrainMuscles::test::simple::log::output::call::Handle<
								BrainMuscles::test::simple::log::output::delegate::Global<OUTPUT_TYPE>, OUTPUT_TYPE>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::Global<
								OUTPUT_TYPE>													GlobalType;
							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								GlobalType, OUTPUT_TYPE>										BaseType;
						public:
							Global();
						};

						template<typename OUTPUT_TYPE>
						Global<OUTPUT_TYPE>::Global() :
							BaseType(&HandleType::SetGlobalValue)
						{}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_GLOBAL_H_