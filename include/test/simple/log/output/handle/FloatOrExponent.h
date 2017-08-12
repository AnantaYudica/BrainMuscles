#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOATOREXPONENT_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOATOREXPONENT_H_

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
						class FloatOrExponent :
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
								FloatOrExponent, TYPE>;
						public:
							FloatOrExponent();
						public:
							ArgumentsType<float> operator()(const float& value) const;
							ArgumentsType<double> operator()(const double& value) const;
							ArgumentsType<long double> operator()(const long double& value) const;
						};

						FloatOrExponent::FloatOrExponent() :
							BaseType(SetTypeType::local_value, &ValueType::FloatAndFloatExponentEnable)
						{}

						typename FloatOrExponent::ArgumentsType<float> 
							FloatOrExponent::operator()(const float& value) const
						{
							return ArgumentsType<float>(value);
						}

						typename FloatOrExponent::ArgumentsType<double> 
							FloatOrExponent::operator()(const double& value) const
						{
							return ArgumentsType<double>(value);
						}

						typename FloatOrExponent::ArgumentsType<long double> 
							FloatOrExponent::operator()(const long double& value) const
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

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_FLOATOREXPONENT_H_