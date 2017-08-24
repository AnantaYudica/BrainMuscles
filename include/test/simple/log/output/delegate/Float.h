#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLOAT_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLOAT_H_

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
						template<typename OUTPUT_TYPE>
						class Float :
							public BrainMuscles::test::simple::log::output::call::Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Value		BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								FormatValueType*>												FunctionMemberFormatValueType;

							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								OUTPUT_TYPE>													CallHandleType;
						public:
							template<typename ARG>
							using FunctionMemberHandlePrintType = BrainMuscles::test::simple::functional::Function<void,
								HandleType*, const char*, ARG>;
						public:
							Float();
						public:
							CallHandleType operator()(const float& value) const;
							CallHandleType operator()(const double& value) const;
							CallHandleType operator()(const long double& value) const;
						};

						template<typename OUTPUT_TYPE>
						Float<OUTPUT_TYPE>::Float() :
							BaseType(ValueTagType::local_value, &FormatValueType::FloatEnable)
						{}

						template<typename OUTPUT_TYPE>
						typename Float<OUTPUT_TYPE>::CallHandleType
							Float<OUTPUT_TYPE>::operator()(const float& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<float>, FunctionMemberFormatValueType, float)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<float>>(&HandleType::Print<float>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Float<OUTPUT_TYPE>::CallHandleType
							Float<OUTPUT_TYPE>::operator()(const double& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<double>, FunctionMemberFormatValueType, double)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<double>>(&HandleType::Print<double>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Float<OUTPUT_TYPE>::CallHandleType
							Float<OUTPUT_TYPE>::operator()(const long double& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<long double>, FunctionMemberFormatValueType, long double)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<long double>>(&HandleType::Print<long double>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::FloatEnable), value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_FLOAT_H_