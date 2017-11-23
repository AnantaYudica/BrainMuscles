#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FORMAT_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FORMAT_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/log/output/call/Handle.h"

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
						class Format
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate
								::Format<OUTPUT_TYPE>											FormatType;
							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								FormatType, OUTPUT_TYPE>										CallHandleType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								HandleType*>													FunctionMemberHandlePrintType;
						public:
							template<typename... ARGS>
							CallHandleType operator()(const char* format, ARGS... args) const;
						};

						template<typename OUTPUT_TYPE>
						template<typename... ARGS>
						typename Format<OUTPUT_TYPE>::CallHandleType
							Format<OUTPUT_TYPE>::operator()(const char* format, ARGS... args) const
						{
							FunctionMemberHandlePrintType function_print = std::bind(&HandleType::Print<ARGS...>, std::placeholders::_1, format, args...);
							return std::bind(static_cast<void (HandleType::*)(FunctionMemberHandlePrintType)>(&HandleType::PrintDelegate),
								std::placeholders::_1, function_print);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FORMAT_H_