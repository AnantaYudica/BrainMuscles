#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOAT_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOAT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

#include "test\simple\log\output\Arguments.h"
#include "test\simple\log\output\Set.h"

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
						class Float :
							public BrainMuscles::test::simple::log::output::Set<
								BrainMuscles::test::simple::log::output::format::Value, void, void>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::format::Value	ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, void>										BaseType;
							typedef BrainMuscles::test::simple::log::output::set::Type		SetTypeType;
						public:
							template<typename TYPE>
							using ArgumentsType = BrainMuscles::test::simple::log::output::Arguments<
								Float, TYPE>;
						public:
							Float();
						public:
							ArgumentsType<float> operator()(const float& value) const;
							ArgumentsType<double> operator()(const double& value) const;
							ArgumentsType<long double> operator()(const long double& value) const;
						};

						Float::Float() :
							BaseType(SetTypeType::local_value, &ValueType::FloatEnable)
						{}

						typename Float::ArgumentsType<float> 
							Float::operator()(const float& value) const
						{
							return ArgumentsType<float>(value);
						}

						typename Float::ArgumentsType<double> 
							Float::operator()(const double& value) const
						{
							return ArgumentsType<double>(value);
						}

						typename Float::ArgumentsType<long double> 
							Float::operator()(const long double& value) const
						{
							return ArgumentsType<long double>(value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOAT_H_