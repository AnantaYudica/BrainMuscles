#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/helper/Tag.h"

#include "test/simple/json/value/Array.h"
#include "test/simple/json/value/False.h"
#include "test/simple/json/value/Null.h"
#include "test/simple/json/value/Number.h"
#include "test/simple/json/value/Object.h"
#include "test/simple/json/value/String.h"
#include "test/simple/json/value/True.h"

#include "test/simple/json/value/number/Char.h"
#include "test/simple/json/value/number/Double.h"
#include "test/simple/json/value/number/Float.h"
#include "test/simple/json/value/number/Int.h"
#include "test/simple/json/value/number/Long.h"
#include "test/simple/json/value/number/LongDouble.h"
#include "test/simple/json/value/number/LongLong.h"
#include "test/simple/json/value/number/Short.h"
#include "test/simple/json/value/number/UnsignedChar.h"
#include "test/simple/json/value/number/UnsignedInt.h"
#include "test/simple/json/value/number/UnsignedLong.h"
#include "test/simple/json/value/number/UnsignedLongLong.h"
#include "test/simple/json/value/number/UnsignedShort.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace helper
				{
					namespace value
					{
						BrainMuscles::test::simple::json::value::Array
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::Array&);
						BrainMuscles::test::simple::json::value::False
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::False&);
						BrainMuscles::test::simple::json::value::Null
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::Null&);
						BrainMuscles::test::simple::json::value::Number
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::Number&);
						BrainMuscles::test::simple::json::value::Object
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::Object&);
						BrainMuscles::test::simple::json::value::String
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::String&);
						BrainMuscles::test::simple::json::value::True
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::True&);

						BrainMuscles::test::simple::json::value::number::Char
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Char&);
						BrainMuscles::test::simple::json::value::number::Double
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Double&);
						BrainMuscles::test::simple::json::value::number::Float
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Float&);
						BrainMuscles::test::simple::json::value::number::Int
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Int&);
						BrainMuscles::test::simple::json::value::number::Long
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Long&);
						BrainMuscles::test::simple::json::value::number::LongDouble
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::LongDouble&);
						BrainMuscles::test::simple::json::value::number::LongLong
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::LongLong&);
						BrainMuscles::test::simple::json::value::number::Short
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::Short&);
						BrainMuscles::test::simple::json::value::number::UnsignedChar
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::UnsignedChar&);
						BrainMuscles::test::simple::json::value::number::UnsignedInt
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::UnsignedInt&);
						BrainMuscles::test::simple::json::value::number::UnsignedLong
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::UnsignedLong&);
						BrainMuscles::test::simple::json::value::number::UnsignedLongLong
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::UnsignedLongLong&);
						BrainMuscles::test::simple::json::value::number::UnsignedShort
							DeclareImpl(const BrainMuscles::test::simple::json::helper::tag::number::UnsignedShort&);

						template<typename TAG_TYPE, typename... ARGS>
						auto Declare(TAG_TYPE& tag, ARGS... args) ->decltype(DeclareImpl(tag))
						{
							return decltype(DeclareImpl(tag))(args...);
						};
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_