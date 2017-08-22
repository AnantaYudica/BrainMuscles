#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_EXPONENT_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_EXPONENT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

#include "test\simple\log\output\call\value\Tag.h"
#include "test\simple\log\output\call\Value.h"
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
						class Exponent :
							public BrainMuscles::test::simple::log::output::call::Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Value		BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								FormatValueType*>												FunctionMemberFormatValueType;

							typedef BrainMuscles::test::simple::log::output::Handle				HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<>		CallHandleType;
						public:
							template<typename ARG>
							using FunctionMemberHandlePrintType = BrainMuscles::test::simple::functional::Function<void,
								HandleType*, const char*, ARG>;
						public:
							Exponent();
						public:
							CallHandleType operator()(const float& value) const;
							CallHandleType operator()(const double& value) const;
							CallHandleType operator()(const long double& value) const;
						};

						Exponent::Exponent() :
							BaseType(ValueTagType::local_value, &FormatValueType::FloatExponentEnable)
						{}

						typename Exponent::CallHandleType
							Exponent::operator()(const float& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<float>, FunctionMemberFormatValueType, float)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<float>>(&HandleType::Print<float>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatExponentEnable), value);
						}

						typename Exponent::CallHandleType
							Exponent::operator()(const double& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<double>, FunctionMemberFormatValueType, double)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<double>>(&HandleType::Print<double>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatExponentEnable), value);
						}

						typename Exponent::CallHandleType
							Exponent::operator()(const long double& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<long double>, FunctionMemberFormatValueType, long double)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<long double>>(&HandleType::Print<long double>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatExponentEnable), value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_EXPONENT_H_