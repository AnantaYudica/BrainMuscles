#ifndef TEST_SOURCE_CONSTANT_H_
#define TEST_SOURCE_CONSTANT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>

#include "test\source\Environment.h"

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
				typedef BrainMuscles::test::source::Environment	EnvironmentType;
			private:
				static constexpr const char* InStr = "in";
				static constexpr const char* WhenCalledStr = "when called";
				static constexpr const char* FromStr = "from";
				static constexpr const char* FailedStr = "failed";
			private:
				static constexpr const char* FunctionStaticTestStr = "static function member 'StaticTest()'";
				static constexpr const char* FunctionPreTestStr = "static function member 'PreTest()'";
				static constexpr const char* FunctionTestStr = "static function member 'Test()'";
				static constexpr const char* FunctionPostTestStr = "static function member 'PostTest()'";
				static constexpr const char* FunctionRequirementStr = "static function member 'Requirement(const char* file, const std::size_t& line)'";
				static constexpr const char* FunctionCallStr = "static function member 'Call(const char* file, const std::size_t& line)'";
			private:
				static constexpr const char* TitleAssertionStr = "Assertion";
				static constexpr const char* TitleRequirementStr = "Requirement";
				static constexpr const char* TitleCallStr = "Call";
			public:
				static constexpr const char* BaseOfSourceMsg = "%s is not base class with class BrainMuscles::test::Source";
				static constexpr const char* SourceHasTestMsg = "%s is not has static function member 'Test'";
				static constexpr const char* SourceIsErrorMsg = "%s has error";
				static constexpr const char* SourceIsNotCompletedMsg = "test in %s is not completed";
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
				static inline std::string CallerRequirement();
				template<typename SOURCE_TYPE>
				static inline std::string CallerCall();
			public:
				static inline std::string AssertionFailed();
				static inline std::string RequirementFailed();
				static inline std::string CallFailed();
			public:
				static inline std::string& AppendFileLine(std::string& out, const char * file, const std::size_t& line);
			};

			template<typename SOURCE_TYPE>
			inline std::string Constant::Caller(const char* function_str)
			{
				std::string caller_function = "";
				if (function_str == FunctionRequirementStr || function_str == FunctionCallStr)
				{
					caller_function += WhenCalledStr;
				}
				else if (function_str == FunctionStaticTestStr || function_str == FunctionPreTestStr || function_str == FunctionTestStr || function_str == FunctionPostTestStr)
				{
					caller_function += InStr;
				}
				if (!caller_function.empty())
				{
					caller_function += " ";
					caller_function += function_str;
					caller_function += " ";
					caller_function += FromStr;
					caller_function += " ";
					caller_function += typeid(SOURCE_TYPE).name();
				}
				return caller_function;
			}

			inline std::string Constant::Failed(const char* title_str)
			{
				std::string title_failed = title_str;
				title_failed += " ";
				title_failed += FailedStr;
				return title_failed;
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerStaticTest()
			{
				return Caller<SOURCE_TYPE>(FunctionStaticTestStr);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerPreTest()
			{
				return Caller<SOURCE_TYPE>(FunctionPreTestStr);
			}
			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerTest()
			{
				return Caller<SOURCE_TYPE>(FunctionTestStr);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerPostTest()
			{
				return Caller<SOURCE_TYPE>(FunctionPostTestStr);
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerRequirement()
			{
				if (EnvironmentType::CallerFunction().empty())
				{
					return Caller<SOURCE_TYPE>(FunctionRequirementStr);
				}
				return EnvironmentType::CallerFunction();
			}

			template<typename SOURCE_TYPE>
			inline std::string Constant::CallerCall()
			{
				if (EnvironmentType::CallerFunction().empty())
				{
					return Caller<SOURCE_TYPE>(FunctionCallStr);
				}
				return EnvironmentType::CallerFunction();
			}

			inline std::string Constant::AssertionFailed()
			{
				return Failed(TitleAssertionStr);
			}

			inline std::string Constant::RequirementFailed()
			{
				return Failed(TitleRequirementStr);
			}

			inline std::string Constant::CallFailed()
			{
				return Failed(TitleCallStr);
			}

			inline std::string& Constant::AppendFileLine(std::string& out, const char * file, const std::size_t& line)
			{
				if (file == nullptr)
				{
					if (!out.empty())
					{
						out += ",";
					}
					str += " file ";
					str += file;
					str += ", line ";
					str += std::to_string(line);
				}
				return out;
			}
		}
	}
}

#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_CONSTANT_H_