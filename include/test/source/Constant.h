#ifndef TEST_SOURCE_CONSTANT_H_
#define TEST_SOURCE_CONSTANT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>

#include "test\source\interface\Flags.h"

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
			private:
				static constexpr const char* CstringIn = "in";
				static constexpr const char* CstringWhenCalled = "when called";
				static constexpr const char* CstringFrom = "from";
				static constexpr const char* CstringFailed = "failed";
			private:
				static constexpr const char* CstringFunctionUnknown = "function unknown";
				static constexpr const char* CstringFunctionStaticTest = "static function member 'StaticTest()'";
				static constexpr const char* CstringFunctionPreTest = "static function member 'PreTest()'";
				static constexpr const char* CstringFunctionTest = "static function member 'Test()'";
				static constexpr const char* CstringFunctionPostTest = "static function member 'PostTest()'";
				static constexpr const char* CstringFunctionRequirement = "static function member 'Requirement(const char* file, const std::size_t& line)'";
				static constexpr const char* CstringFunctionCall = "static function member 'Call(const char* file, const std::size_t& line)'";
			private:
				static constexpr const char* CstringTitleAssertion = "Assertion";
				static constexpr const char* CstringTitleRequirement = "Requirement";
				static constexpr const char* CstringTitleCall = "Call";
			public:
				static constexpr const char* CstringMessageBaseOfSource = "%s is not base class with class BrainMuscles::test::Source";
				static constexpr const char* CstringMessageSourceHasTest = "%s is not has static function member 'Test'";
				static constexpr const char* CstringMessageSourceHasError = "%s has error";
				static constexpr const char* CstringMessageSourceIsNotCompleted = "test in %s is not completed";
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
				static inline std::string StringInterface(const char * interface);
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
				if (file == nullptr)
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
::source::Constant::StringInterface(const char * cstring_interface)
{
	std::string string_result = "";
	if (cstring_interface == CstringFunctionStaticTest
		|| cstring_interface == CstringFunctionPreTest 
		|| cstring_interface == CstringFunctionTest 
		|| cstring_interface == CstringFunctionPostTest)
	{
		string_result += CstringIn;
	}
	if (!string_result.empty())
	{
		string_result += " ";
		string_result += cstring_interface;
		string_result += " ";
		string_result += CstringFrom;
		string_result += " ";
		string_result += typeid(IMPLEMENT_TYPE).name();
	}
	return string_result;
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringInterfacePostTest()
{
	return  StringInterface<IMPLEMENT_TYPE>(CstringFunctionPostTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterfacePreTest()
{
	return StringInterface<IMPLEMENT_TYPE>(CstringFunctionPreTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string
BrainMuscles::test::source::Constant::StringInterfaceStaticTest()
{
	return StringInterface<IMPLEMENT_TYPE>(CstringFunctionStaticTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterfaceTest()
{
	return StringInterface<IMPLEMENT_TYPE>(CstringFunctionTest);
}

template<typename IMPLEMENT_TYPE>
inline std::string 
BrainMuscles::test::source::Constant::StringInterface(InterfaceFlagsType flag)
{
	return flag == InterfaceFlagsType::post_test ?
		StringInterfacePostTest() : flag == InterfaceFlagsType::pre_test ?
		StringInterfacePreTest() : flag == InterfaceFlagsType::static_test ?
		StringInterfaceStaticTest() : flag == InterfaceFlagsType::test ?
		StringInterfaceTest() : CstringFunctionUnknown;
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_CONSTANT_H_