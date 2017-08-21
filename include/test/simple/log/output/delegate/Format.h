#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_FORMAT_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_FORMAT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

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
						class Format
						{
						public:
							template<typename... ARGS>
							using ArgumentsType = BrainMuscles::test::simple::log::output::Arguments<Format, const char*, ARGS...>;
						public:
							template<typename... ARGS>
							ArgumentsType<ARGS...> operator()(const char* format, ARGS... args) const;
						};

						template<typename... ARGS>
						typename Format::ArgumentsType<ARGS...>
						Format::operator()(const char* format, ARGS... args) const
						{
							return ArgumentsType<ARGS...>(format, args...);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_FORMAT_H_