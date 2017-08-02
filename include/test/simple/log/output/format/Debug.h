#ifndef TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_H_
#define TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#if defined(_USING_TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_)

#include <cstdio>

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
					namespace format
					{
						class Debug final
						{
							Debug() = delete;
						public:
							template<int CH>
							struct CharString;
						private:
							template<int CH>
							static constexpr const char* CStr();
						public:
							static const char* TableCharacter[128];
						public:
							static void PrintType(std::FILE* out_file, void* block);
							static void PrintType(std::FILE* out_file, const char* cstr);
							static void PrintType(std::FILE* out_file, const char& c);
							static void PrintType(std::FILE* out_file, const unsigned char& uc);
							static void PrintType(std::FILE* out_file, const short& s);
							static void PrintType(std::FILE* out_file, const unsigned short& s);
							static void PrintType(std::FILE* out_file, const int& i);
							static void PrintType(std::FILE* out_file, const unsigned int& ui);
							static void PrintType(std::FILE* out_file, const long& l);
							static void PrintType(std::FILE* out_file, const unsigned long& ul);
							static void PrintType(std::FILE* out_file, const long long& ll);
							static void PrintType(std::FILE* out_file, const unsigned long long& ull);
							static void PrintType(std::FILE* out_file, const float& f);
							static void PrintType(std::FILE* out_file, const double& d);
							static void PrintType(std::FILE* out_file, const long double& ld);
							template<typename ARG, typename... ARGS>
							static void PrintArguments(std::FILE* out_file, ARG arg, ARGS... args);
							static void PrintArguments(std::FILE* out_file);
							template<typename... ARGS>
							static void PrintFormat(std::FILE* out_file, const char* format, ARGS... args);
							static void PrintNewline(std::FILE* out_file);
						};

						template<int CH>
						struct Debug::CharString
						{
							static constexpr const char Value[2] = { CH, 0 };
						};

						template<int CH>
						constexpr const char* Debug::CStr()
						{
							return CharString<CH>::Value;
						}

						const char* Debug::TableCharacter[128] =
						{
							"\\0"		, "\\x01"	, "\\x02"	, "\\x03"	, "\\x04"	, "\\x05"	, "\\x06"	, "\\a"		,
							"\\b"		, "\\t"		, "\\n"		, "\\v"		, "\\f"		, "\\r"		, "\\x0E"	, "\\x0F"	,
							"\\x10"		, "\\x11"	, "\\x12"	, "\\x13"	, "\\x14"	, "\\x15"	, "\\x16"	, "\\x17"	,
							"\\x18"		, "\\x19"	, "\\x1A"	, "\\x1B"	, "\\x1C"	, "\\x1D"	, "\\x1E"	, "\\x1F"	,
							CStr<32>()	, CStr<33>(), CStr<34>(), CStr<35>(), CStr<36>(), CStr<37>(), CStr<38>(), CStr<39>(),
							CStr<40>()	, CStr<41>(), CStr<42>(), CStr<43>(), CStr<44>(), CStr<45>(), CStr<46>(), CStr<47>(),
							CStr<48>()	, CStr<49>(), CStr<50>(), CStr<51>(), CStr<52>(), CStr<53>(), CStr<54>(), CStr<55>(),
							CStr<56>()	, CStr<57>(), CStr<58>(), CStr<59>(), CStr<60>(), CStr<61>(), CStr<62>(), CStr<63>(),
							CStr<64>()	, CStr<65>(), CStr<66>(), CStr<67>(), CStr<68>(), CStr<69>(), CStr<70>(), CStr<71>(),
							CStr<72>()	, CStr<73>(), CStr<74>(), CStr<75>(), CStr<76>(), CStr<77>(), CStr<78>(), CStr<79>(),
							CStr<80>()	, CStr<81>(), CStr<82>(), CStr<83>(), CStr<84>(), CStr<85>(), CStr<86>(), CStr<87>(),
							CStr<88>()	, CStr<89>(), CStr<90>(), CStr<91>(), CStr<92>(), CStr<93>(), CStr<94>(), CStr<95>(),
							CStr<96>()	, CStr<97>(), CStr<98>(), CStr<99>(), CStr<100>(), CStr<101>(), CStr<102>(), CStr<103>(),
							CStr<104>()	, CStr<105>(), CStr<106>(), CStr<107>(), CStr<108>(), CStr<109>(), CStr<110>(), CStr<111>(),
							CStr<112>()	, CStr<113>(), CStr<114>(), CStr<115>(), CStr<116>(), CStr<117>(), CStr<118>(), CStr<119>(),
							CStr<120>()	, CStr<121>(), CStr<122>(), CStr<123>(), CStr<124>(), CStr<125>(), CStr<126>(), "\\x7F"	,
						};

						void Debug::PrintType(std::FILE* out_file, void* block)
						{
							fprintf(out_file, "void*{");
							fprintf(out_file, "%#p", block);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const char* cstr)
						{
							fprintf(out_file, "cstring{\"");
							for (std::size_t i = 0; cstr[i] != 0; ++i)
							{
								fprintf(out_file, "%s", TableCharacter[cstr[i]]);
							}
							fprintf(out_file, "\"}");
						}

						void Debug::PrintType(std::FILE* out_file, const char& c)
						{
							fprintf(out_file, "char{");
							fprintf(out_file, "%hhi", c);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const unsigned char& uc)
						{
							fprintf(out_file, "unsigned char{");
							fprintf(out_file, "hh%u", uc);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const short& s)
						{
							fprintf(out_file, "short{");
							fprintf(out_file, "%hi", s);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const unsigned short& us)
						{
							fprintf(out_file, "unsigned short{");
							fprintf(out_file, "%hu", us);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const int& i)
						{
							fprintf(out_file, "int{");
							fprintf(out_file, "%i", i);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const unsigned int& ui)
						{
							fprintf(out_file, "unsigned int{");
							fprintf(out_file, "%u", ui);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const long& l)
						{
							fprintf(out_file, "long{");
							fprintf(out_file, "%li", l);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const unsigned long& ul)
						{
							fprintf(out_file, "unsigned long{");
							fprintf(out_file, "%lu", ul);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const long long& ll)
						{
							fprintf(out_file, "long long{");
							fprintf(out_file, "%lli", ll);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const unsigned long long& ull)
						{
							fprintf(out_file, "unsigned long long{");
							fprintf(out_file, "%llu", ull);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const float& f)
						{
							fprintf(out_file, "float{");
							fprintf(out_file, "%f", f);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const double& d)
						{
							fprintf(out_file, "double{");
							fprintf(out_file, "%f", d);
							fprintf(out_file, "}");
						}

						void Debug::PrintType(std::FILE* out_file, const long double& ld)
						{
							fprintf(out_file, "long double{");
							fprintf(out_file, "%Lf", ld);
							fprintf(out_file, "}");
						}

						template<typename ARG, typename... ARGS>
						void Debug::PrintArguments(std::FILE* out_file, ARG arg, ARGS... args)
						{
							fprintf(out_file, ", ");
							PrintType(out_file, arg);
							PrintArguments(out_file, args...);
						}

						void Debug::PrintArguments(std::FILE* out_file)
						{}

						template<typename... ARGS>
						void Debug::PrintFormat(std::FILE* out_file, const char* format, ARGS... args)
						{
							fprintf(out_file, "format{\"");
							for (std::size_t i = 0; format[i] != 0; ++i)
							{
								fprintf(out_file, "%s", TableCharacter[format[i]]);
							}
							fprintf(out_file, "\"");
							PrintArguments(out_file, args...);
							fprintf(out_file, "} ");
						}

						void Debug::PrintNewline(std::FILE* out_file)
						{
							fprintf(out_file, "\\n\n");
						}
					}
				}
			}
		}
	}
}

#endif

#endif

#endif //TEST_SIMPLE_LOG_OUTPUT_FORMAT_DEBUG_H_