#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_PRECISION_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_PRECISION_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\format\Precision.h"

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
						class Precision
						{
						public:
							typedef BrainMuscles::test::simple::log::output
								::format::Precision										PrecisionType;
							typedef typename PrecisionType::PrecisionInputType			PrecisionInputType;
							typedef BrainMuscles::test::simple::log::output
								::format::Value											ValueType;
							typedef BrainMuscles::test::simple::log::output::Set<
								ValueType, void, const PrecisionType&>					SetType;
							typedef BrainMuscles::test::simple::log::output::set::Type	SetTypeType;
						public:
							SetType operator()(const PrecisionInputType& value) const;
						};

						typename Precision::SetType 
							Precision::operator()(const PrecisionInputType& value) const
						{
							PrecisionType percision;
							percision.SetValue(value);
							return SetType(SetTypeType::local_value, &ValueType::SetPrecision, percision);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUT_CALL_HANDLE_PRECISION_H_