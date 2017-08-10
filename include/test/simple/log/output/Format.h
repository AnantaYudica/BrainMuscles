#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <cstdio>

#include "test\simple\log\output\format\Constant.h"

#include "test\simple\log\output\format\Prototype.h"

#include "test\simple\log\output\format\Debug.h"

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
					class Format
					{
					private:
						typedef BrainMuscles::test::simple::log::output
							::format::Constant							ConstantType;
						typedef typename ConstantType::SizeType			SizeType;
					protected:
						typedef typename ConstantType::FormatStringType	FormatStringType;
					protected:
						typedef BrainMuscles::test::simple::log
							::output::format::Value						ValueType;
					public:
						typedef BrainMuscles::test::simple::log::output
							::format::Prototype							PrototypeType;
						typedef BrainMuscles::test::simple::log::output
							::format::Specifier							SpecifierType;
						typedef BrainMuscles::test::simple::log::output
							::format::Length							LengthType;
					private:
						std::FILE* m_fileOutput;
					protected:
						Format(std::FILE* file_output);
					public:
						~Format();
					protected:
						template<typename... ARGS>
						void PrintBeginNewLine(const char* format, ARGS... args);
						void PrintNewline();
						template<typename... ARGS>
						void Print(const char* format, ARGS... args);
						template<typename ARG>
						void Output(PrototypeType prototype, ARG arg);
					};

					Format::Format(std::FILE* file_output) :
						m_fileOutput(file_output)
					{}

					Format::~Format()
					{}

					template<typename... ARGS>
					void Format::PrintBeginNewLine(const char* format, ARGS... args)
					{
						fprintf(m_fileOutput, format, args...);
					}

					void Format::PrintNewline()
					{
#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_)
						BrainMuscles::test::simple::log::output::format::Debug::PrintNewline(m_fileOutput);
#else
						fprintf(m_fileOutput, "\n");
#endif
					}

					template<typename... ARGS>
					void Format::Print(const char* format, ARGS... args)
					{
#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_)
						BrainMuscles::test::simple::log::output::format::Debug::PrintFormat(m_fileOutput, format, args...);
#else
						fprintf(m_fileOutput, format, args...);
#endif
					}

					template<typename ARG>
					void Format::Output(PrototypeType prototype, ARG arg)
					{
#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_)
						BrainMuscles::test::simple::log::output::format::Debug::PrintFormat(m_fileOutput, prototype.GetFormat<ARG>(), arg);
#else
						fprintf(m_fileOutput, prototype.GetFormat<ARG>(), arg);
#endif
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_FORMAT_H_
