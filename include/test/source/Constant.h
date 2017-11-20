#ifndef TEST_SOURCE_CONSTANT_H_
#define TEST_SOURCE_CONSTANT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>
#include <stack>

#include "test/source/interface/Flags.h"
#include "test/source/function/Flags.h"
#include "test/source/error/Numbers.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			class Constant final
			{
				Constant() = delete;
			public:
				typedef BrainMuscles::test::source::interface::Flags InterfaceFlagsType;
				typedef BrainMuscles::test::source::function::Flags FunctionFlagsType;
				typedef BrainMuscles::test::source::error::Numbers ErrorNumbersType;
			private:
				static constexpr const char* CstringIn = "in";
				static constexpr const char* CstringWhenCalled = "when called";
				static constexpr const char* CstringFrom = "from";
				static constexpr const char* CstringFailed = "failed";
				static constexpr const char* CstringColon = ":";
				static constexpr const char* CstringComma = ",";
				static constexpr const char* CstringSingleSpace = " ";
				static constexpr const char* CstringNewline = "\n";
			private:
				static constexpr const char* CstringFunctionUnknown = "function unknown";
				static constexpr const char* CstringFunctionStaticTest = "static function member 'StaticTest()'";
				static constexpr const char* CstringFunctionPreTest = "static function member 'PreTest()'";
				static constexpr const char* CstringFunctionTest = "static function member 'Test()'";
				static constexpr const char* CstringFunctionPostTest = "static function member 'PostTest()'";
				static constexpr const char* CstringFunctionRequirement = "static function member 'Requirement(const char* file, const std::size_t& line)'";
				static constexpr const char* CstringFunctionCall = "static function member 'Call(const char* file, const std::size_t& line)'";
				static constexpr const char* CstringFunctionInfo = "static function member 'Info()'";
				static constexpr const char* CstringFunctionError = "static function member 'Error()'";
				static constexpr const char* CstringFunctionAssert = "static function member 'Assert()'";
			private:
				static constexpr const char* CstringTitleAssertion = "Assertion";
				static constexpr const char* CstringTitleRequirement = "Requirement";
				static constexpr const char* CstringTitleCall = "Call";
			private:
				static constexpr const char* CstringFormatCauseEmpty = "";
				static constexpr const char* CstringFormatCauseBaseOfSource = "%s is not base class with class BrainMuscles::test::Source";
				static constexpr const char* CstringFormatCauseSourceHasNotImplTest = "%s is not has static function member 'Test'";
				static constexpr const char* CstringFormatCauseSourceHasError = "%s has error";
				static constexpr const char* CstringFormatCauseSourceIsNotCompleted = "test in %s is not completed";
			private:
				template<typename SOURCE_TYPE>
				static inline std::string Caller(const char* function_str);
				static inline std::string Failed(const char* title_str);
			public:
				template<typename SOURCE_TYPE>
				static inline std::string CallerStaticTest();
				template<typename SOURCE_TYPE>
				static inline std::string CallerPreTest();
				template<typename SOURCE_TYPE>
				static inline std::string CallerTest();
				template<typename SOURCE_TYPE>
				static inline std::string CallerPostTest();
				template<typename SOURCE_TYPE>
				static inline std::string CallerRequirement(std::string caller_function);
				template<typename SOURCE_TYPE>
				static inline std::string CallerCall(std::string caller_function);
			public:
				static inline std::string AssertionFailed();
				static inline std::string RequirementFailed();
				static inline std::string CallFailed();
			public:
				static inline std::string& AppendFileLine(std::string& out, const char * file, const std::size_t& line);
			private:
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunction(const char * cstring_name);
			public:
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionUnknown();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionPostTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionPreTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionStaticTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionCall();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionRequirement();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionInfo();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionError();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunctionAssert();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringFunction(FunctionFlagsType flag);
			public:
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringInterfacePostTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringInterfacePreTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringInterfaceStaticTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringInterfaceTest();
				template<typename IMPLEMENT_TYPE>
				static inline std::string StringInterface(InterfaceFlagsType flag);
			public:
				static inline FunctionFlagsType Cast(InterfaceFlagsType flag);
			public:
				static inline bool IsInterfaceFlags(FunctionFlagsType flag);
			public:
				static inline std::string StringErrorTitle(FunctionFlagsType flag);
			public:
				static inline std::string StringErrorMessage(std::string cause,
					std::string information, std::stack<std::string> trace);
			public:
				static const char * FormatCause(ErrorNumbersType error_number);
			};

			template<typename SOURCE_TYPE>
			inline std::string Constant::Caller(const char* function_str)
			{
				std::string caller_function = "";
				if (function_str == CstringFunctionRequirement || function_str == CstringFunctionCall)
				{
					caller_function += CstringWhenCalled;
				}
				else if (function_str == CstringFunctionStaticTest || function_str == CstringFunctionPreTest || function_str == CstringFunctionTest || function_str == CstringFunctionPostTest)
				{
					caller_function += CstringIn;
				}
				if (!caller_function.empty())
				{
					caller_function += " ";
					caller_function += function_str;
					caller_function += " ";
					caller_function += CstringFrom;
					caller_function += " ";
					caller_function += typeid(SOURCE_TYPE).name();
				}
				return caller_function;
			}

			inline std::string Constant::Failed(const char* title_str)
			{
				std::string title_failed = title_str;
				title_failed += " ";
				title_failed += CstringFailed;
				return title_failed;
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerStaticTest()
			{
				return Caller<SOURCE_TYPE>(CstringFunctionStaticTest);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerPreTest()
			{
				return Caller<SOURCE_TYPE>(CstringFunctionPreTest);
			}
			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerTest()
			{
				return Caller<SOURCE_TYPE>(CstringFunctionTest);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerPostTest()
			{
				return Caller<SOURCE_TYPE>(CstringFunctionPostTest);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerRequirement(std::string caller_function)
			{
				if (caller_function.empty())
				{
					return Caller<SOURCE_TYPE>(CstringFunctionRequirement);
				}
				return caller_function;
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerCall(std::string caller_function)
			{
				if (caller_function.empty())
				{
					return Caller<SOURCE_TYPE>(CstringFunctionCall);
				}
				return caller_function;
			}

			inline std::string Constant::AssertionFailed()
			{
				return Failed(CstringTitleAssertion);
			}

			inline std::string Constant::RequirementFailed()
			{
				return Failed(CstringTitleRequirement);
			}

			inline std::string Constant::CallFailed()
			{
				return Failed(CstringTitleCall);
			}

			inline std::string& Constant::AppendFileLine(std::string& out, const char * file, const std::size_t& line)
			{
				if (file != nullptr)
				{
					if (!out.empty())
					{
						out += ",";
					}
					out += " file ";
					out += file;
					out += ", line ";
					out += std::to_string(line);
				}
				return out;
			}
		}
	}
}


template<typename IMPLEMENT_TYPE>
inline std::string BrainMuscles::test
::source::Constant::StringFunction(const char * cstring_name)
{
	std::string string_result = "";
	if (cstring_name == CstringFunctionRequirement
		|| cstring_name == CstringFunctionCall
		|| cstring_name == CstringFunctionInfo
		|| cstring_name == CstringFunctionError
		|| cstring_name == CstringFunctionAssert)
	{
		string_result += CstringWhenCalled;
	}
	if (cstring_name == CstringFunctionStaticTest
		|| cstring_name == CstringFunctionPreTest
		|| cstring_name == CstringFunctionTest
		|| cstring_name == CstringFunctionPostTest)
	{
		string_result += CstringIn;
	}
	if (!string_result.empty())
	{
		string_result += " ";
		string_result += cstring_name;
		string_result += " ";
		string_result += CstringFrom;
		string_result += " ";
		string_result += typeid(IMPLEMENT_TYPE).name();
	}
	if (cstring_name == CstringFunctionUnknown)
	{
		return CstringFunctionUnknown;
	}
	return string_result;
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringFunctionUnknown()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionUnknown);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringFunctionPostTest()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionPostTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringFunctionPreTest()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionPreTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionStaticTest()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionStaticTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionTest()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionCall()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionCall);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionRequirement()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionRequirement);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionInfo()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionInfo);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionError()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionError);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunctionAssert()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionAssert);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringFunction(FunctionFlagsType flag)
{
	switch (flag)
	{
	case FunctionFlagsType::pre_test :
		return StringFunctionPreTest<IMPLEMENT_TYPE>();
	case FunctionFlagsType::test :
		return StringFunctionTest<IMPLEMENT_TYPE>();
	case FunctionFlagsType::post_test :
		return StringFunctionPostTest<IMPLEMENT_TYPE>();
	case FunctionFlagsType::static_test :
		return StringFunctionStaticTest<IMPLEMENT_TYPE>();
	case FunctionFlagsType::call :
		return StringFunctionCall<IMPLEMENT_TYPE>();
	case FunctionFlagsType::requirement :
		return StringFunctionRequirement<IMPLEMENT_TYPE>();
	case FunctionFlagsType::info :
		return StringFunctionInfo<IMPLEMENT_TYPE>();
	case FunctionFlagsType::error :
		return StringFunctionError<IMPLEMENT_TYPE>();
	case FunctionFlagsType::assert :
		return StringFunctionAssert<IMPLEMENT_TYPE>();
	default:
		return StringFunctionUnknown<IMPLEMENT_TYPE>(); ;
	}
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringInterfacePostTest()
{
	return  StringFunction<IMPLEMENT_TYPE>(CstringFunctionPostTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterfacePreTest()
{
	return StringFunction<IMPLEMENT_TYPE>(CstringFunctionPreTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringInterfaceStaticTest()
{
	return StringFunction<IMPLEMENT_TYPE>(CstringFunctionStaticTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterfaceTest()
{
	return StringFunction<IMPLEMENT_TYPE>(CstringFunctionTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterface(InterfaceFlagsType flag)
{
	switch (flag)
	{
	case InterfaceFlagsType::post_test :
		return StringInterfacePostTest<IMPLEMENT_TYPE>();
	case InterfaceFlagsType::pre_test :
		return StringInterfacePreTest<IMPLEMENT_TYPE>();
	case InterfaceFlagsType::static_test :
		return StringInterfaceStaticTest<IMPLEMENT_TYPE>();
	case InterfaceFlagsType::test :
		return StringInterfaceTest<IMPLEMENT_TYPE>();
	default:
		return StringFunctionUnknown<IMPLEMENT_TYPE>();
	}
}

inline typename BrainMuscles::test::source::Constant::FunctionFlagsType
BrainMuscles::test::source::Constant::Cast(InterfaceFlagsType flag)
{
	switch (flag)
	{
	case InterfaceFlagsType::post_test:
		return FunctionFlagsType::post_test;
	case InterfaceFlagsType::pre_test:
		return FunctionFlagsType::pre_test;
	case InterfaceFlagsType::static_test:
		return FunctionFlagsType::static_test;
	case InterfaceFlagsType::test:
		return FunctionFlagsType::test;
	default:
		return FunctionFlagsType::unknown;
	}
}

inline bool 
BrainMuscles::test::source::Constant::IsInterfaceFlags(FunctionFlagsType flag)
{
	return flag == FunctionFlagsType::post_test
		|| flag == FunctionFlagsType::pre_test
		|| flag == FunctionFlagsType::static_test
		|| flag == FunctionFlagsType::test;
}

inline std::string 
BrainMuscles::test::source::Constant::StringErrorTitle(FunctionFlagsType flag)
{
	std::string string_result = "";
	switch (flag)
	{
	case FunctionFlagsType::assert :
		string_result += CstringTitleAssertion;
		break;
	case FunctionFlagsType::requirement :
		string_result += CstringTitleRequirement;
		break;
	case FunctionFlagsType::call :
		string_result += CstringTitleCall;
		break;
	}
	if (!string_result.empty())
	{
		string_result += CstringSingleSpace;
		string_result += CstringFailed;
		string_result += CstringSingleSpace;
		string_result += CstringColon;
		string_result += CstringSingleSpace;
	}
	return string_result;
}

inline std::string 
BrainMuscles::test::source::Constant::StringErrorMessage(std::string cause,
	std::string information, std::stack<std::string> trace)
{
	std::string string_result = cause;
	if (trace.size() == 0)
	{
		string_result += CstringComma;
		string_result += CstringSingleSpace;
		string_result += information;
	}
	else
	{
		while (trace.size() != 0)
		{
			string_result += CstringNewline;
			string_result += trace.top();
			trace.pop();
		}
	}
	return string_result;
}


inline const char * BrainMuscles::test::source
::Constant::FormatCause(ErrorNumbersType error_number)
{
	switch (error_number)
	{
	case ErrorNumbersType::has_error :
		return CstringFormatCauseSourceHasError;
	case ErrorNumbersType::has_not_completed :
		return CstringFormatCauseSourceIsNotCompleted;
	case ErrorNumbersType::has_not_impl_test :
		return CstringFormatCauseSourceHasNotImplTest;
	case ErrorNumbersType::not_base_of_source :
		return CstringFormatCauseBaseOfSource;
	default:
		return CstringFormatCauseEmpty;
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_CONSTANT_H_