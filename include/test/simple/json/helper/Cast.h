#ifndef TEST_SIMPLE_JSON_HELPER_CAST_H_
#define TEST_SIMPLE_JSON_HELPER_CAST_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Value.h"
#include "test\simple\json\value\Array.h"
#include "test\simple\json\value\False.h"
#include "test\simple\json\value\Object.h"
#include "test\simple\json\value\String.h"
#include "test\simple\json\value\True.h"

#include "test\simple\json\value\number\Char.h"
#include "test\simple\json\value\number\Double.h"
#include "test\simple\json\value\number\Float.h"
#include "test\simple\json\value\number\Int.h"
#include "test\simple\json\value\number\Long.h"
#include "test\simple\json\value\number\LongDouble.h"
#include "test\simple\json\value\number\LongLong.h"
#include "test\simple\json\value\number\Short.h"
#include "test\simple\json\value\number\UnsignedChar.h"
#include "test\simple\json\value\number\UnsignedInt.h"
#include "test\simple\json\value\number\UnsignedLong.h"
#include "test\simple\json\value\number\UnsignedLongLong.h"
#include "test\simple\json\value\number\UnsignedShort.h"

#include "test\simple\json\exception\BadCast.h"

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
					class Cast final
					{
					public:
						typedef BrainMuscles::test::simple::json::Value				ValueType;
						typedef BrainMuscles::test::simple::json::value::Array		ValueArrayType;
						typedef BrainMuscles::test::simple::json::value::False		ValueFalseType;
						typedef BrainMuscles::test::simple::json::value::Object		ValueObjectType;
						typedef BrainMuscles::test::simple::json::value::String		ValueStringType;
						typedef BrainMuscles::test::simple::json::value::True		ValueTrueType;
					public:
						typedef BrainMuscles::test::simple::json::value
							::number::Char											ValueNumberCharType;
						typedef BrainMuscles::test::simple::json::value
							::number::Double										ValueNumberDoubleType;
						typedef BrainMuscles::test::simple::json::value
							::number::Float											ValueNumberFloatType;
						typedef BrainMuscles::test::simple::json::value
							::number::Int											ValueNumberIntType;
						typedef BrainMuscles::test::simple::json::value
							::number::Long											ValueNumberLongType;
						typedef BrainMuscles::test::simple::json::value
							::number::LongDouble									ValueNumberLongDoubleType;
						typedef BrainMuscles::test::simple::json::value
							::number::LongLong										ValueNumberLongLongType;
						typedef BrainMuscles::test::simple::json::value
							::number::Short											ValueNumberShortType;
						typedef BrainMuscles::test::simple::json::value
							::number::UnsignedChar									ValueNumberUnsignedCharType;
						typedef BrainMuscles::test::simple::json::value
							::number::UnsignedInt									ValueNumberUnsignedIntType;
						typedef BrainMuscles::test::simple::json::value
							::number::UnsignedLong									ValueNumberUnsignedLongType;
						typedef BrainMuscles::test::simple::json::value
							::number::UnsignedLongLong								ValueNumberUnsignedLongLongType;
						typedef BrainMuscles::test::simple::json::value
							::number::UnsignedShort									ValueNumberUnsignedShortType;
					private:
						template<typename FROM_TYPE, typename TO_TYPE>
						using BadCastType = BrainMuscles::test::simple::json::exception::BadCast<FROM_TYPE, TO_TYPE>;
					private:
						Cast() = delete;
					private:
						template<typename FROM_TYPE, typename TO_TYPE>
						static TO_TYPE& FromTo(FROM_TYPE& value);
					public:
						template<typename TO_TYPE>
						static TO_TYPE& To(ValueType& value);
						template<typename TO_TYPE>
						static const TO_TYPE& To(const ValueType& value);
					public:
						static bool ToBool(const ValueType& value);
					public:
						static ValueArrayType& ToArray(ValueType& value);
						static const ValueArrayType& ToArray(const ValueType& value);
						static ValueObjectType& ToObject(ValueType& value);
						static const ValueObjectType& ToObject(const ValueType& value);
						static ValueStringType& ToString(ValueType& value);
						static const ValueStringType& ToString(const ValueType& value);
					public:
						static ValueNumberCharType& ToNumberChar(ValueType& value);
						static const ValueNumberCharType& ToNumberChar(const ValueType& value);
						static ValueNumberDoubleType& ToNumberDouble(ValueType& value);
						static const ValueNumberDoubleType& ToNumberDouble(const ValueType& value);
						static ValueNumberFloatType& ToNumberFloat(ValueType& value);
						static const ValueNumberFloatType& ToNumberFloat(const ValueType& value);
						static ValueNumberIntType& ToNumberInt(ValueType& value);
						static const ValueNumberIntType& ToNumberInt(const ValueType& value);
						static ValueNumberLongType& ToNumberLong(ValueType& value);
						static const ValueNumberLongType& ToNumberLong(const ValueType& value);
						static ValueNumberLongDoubleType& ToNumberLongDouble(ValueType& value);
						static const ValueNumberLongDoubleType& ToNumberLongDouble(const ValueType& value);
						static ValueNumberLongLongType& ToNumberLongLong(ValueType& value);
						static const ValueNumberLongLongType& ToNumberLongLong(const ValueType& value);
						static ValueNumberShortType& ToNumberShort(ValueType& value);
						static const ValueNumberShortType& ToNumberShort(const ValueType& value);
						static ValueNumberUnsignedCharType& ToNumberUnsignedChar(ValueType& value);
						static const ValueNumberUnsignedCharType& ToNumberUnsignedChar(const ValueType& value);
						static ValueNumberUnsignedIntType& ToNumberUnsignedInt(ValueType& value);
						static const ValueNumberUnsignedIntType& ToNumberUnsignedInt(const ValueType& value);
						static ValueNumberUnsignedLongType& ToNumberUnsignedLong(ValueType& value);
						static const ValueNumberUnsignedLongType& ToNumberUnsignedLong(const ValueType& value);
						static ValueNumberUnsignedLongLongType& ToNumberUnsignedLongLong(ValueType& value);
						static const ValueNumberUnsignedLongLongType& ToNumberUnsignedLongLong(const ValueType& value);
						static ValueNumberUnsignedShortType& ToNumberUnsignedShort(ValueType& value);
						static const ValueNumberUnsignedShortType& ToNumberUnsignedShort(const ValueType& value);
					};
					
					template<typename FROM_TYPE, typename TO_TYPE>
					TO_TYPE& Cast::FromTo(FROM_TYPE& value)
					{
						auto pointer = dynamic_cast<TO_TYPE*>(&value);
						if (pointer)
						{
							return *pointer;
						}
						throw(BadCastType<FROM_TYPE&, TO_TYPE&>());
					}

					template<typename TO_TYPE>
					TO_TYPE& Cast::To(ValueType& value)
					{
						return FromTo<ValueType, TO_TYPE>(value);
					};

					template<typename TO_TYPE>
					const TO_TYPE& Cast::To(const ValueType& value)
					{
						return FromTo<const ValueType, const TO_TYPE>(value);
					};

					bool Cast::ToBool(const ValueType& value)
					{
						auto false_Type = dynamic_cast<const ValueFalseType*>(&value);
						auto true_Type = dynamic_cast<const ValueTrueType*>(&value);
						if (false_Type)
						{
							return false;
						}
						else if (true_Type)
						{
							return true;
						}
						throw(BadCastType<const ValueType&, bool>());
					}

					typename Cast::ValueArrayType& Cast::ToArray(ValueType& value)
					{
						return To<ValueArrayType>(value);
					}

					const typename Cast::ValueArrayType& Cast::ToArray(const ValueType& value)
					{
						return To<ValueArrayType>(value);
					}

					typename Cast::ValueObjectType& Cast::ToObject(ValueType& value)
					{
						return To<ValueObjectType>(value);
					}

					const typename Cast::ValueObjectType& Cast::ToObject(const ValueType& value)
					{
						return To<ValueObjectType>(value);
					}

					typename Cast::ValueStringType& Cast::ToString(ValueType& value)
					{
						return To<ValueStringType>(value);
					}

					const typename Cast::ValueStringType& Cast::ToString(const ValueType& value)
					{
						return To<ValueStringType>(value);
					}

					typename Cast::ValueNumberCharType& Cast::ToNumberChar(ValueType& value)
					{
						return To<ValueNumberCharType>(value);
					}

					const typename Cast::ValueNumberCharType& Cast::ToNumberChar(const ValueType& value)
					{
						return To<ValueNumberCharType>(value);
					}

					typename Cast::ValueNumberDoubleType& Cast::ToNumberDouble(ValueType& value)
					{
						return To<ValueNumberDoubleType>(value);
					}

					const typename Cast::ValueNumberDoubleType& Cast::ToNumberDouble(const ValueType& value)
					{
						return To<ValueNumberDoubleType>(value);
					}

					typename Cast::ValueNumberFloatType& Cast::ToNumberFloat(ValueType& value)
					{
						return To<ValueNumberFloatType>(value);
					}

					const typename Cast::ValueNumberFloatType& Cast::ToNumberFloat(const ValueType& value)
					{
						return To<const ValueNumberFloatType>(value);
					}

					typename Cast::ValueNumberIntType& Cast::ToNumberInt(ValueType& value)
					{
						return To<ValueNumberIntType>(value);
					}

					const typename Cast::ValueNumberIntType& Cast::ToNumberInt(const ValueType& value)
					{
						return To<ValueNumberIntType>(value);
					}

					typename Cast::ValueNumberLongType& Cast::ToNumberLong(ValueType& value)
					{
						return To<ValueNumberLongType>(value);
					}

					const typename Cast::ValueNumberLongType& Cast::ToNumberLong(const ValueType& value)
					{
						return To<ValueNumberLongType>(value);
					}

					typename Cast::ValueNumberLongDoubleType& Cast::ToNumberLongDouble(ValueType& value)
					{
						return To<ValueNumberLongDoubleType>(value);
					}

					const typename Cast::ValueNumberLongDoubleType& Cast::ToNumberLongDouble(const ValueType& value)
					{
						return To<ValueNumberLongDoubleType>(value);
					}

					typename Cast::ValueNumberLongLongType& Cast::ToNumberLongLong(ValueType& value)
					{
						return To<ValueNumberLongLongType>(value);
					}

					const typename Cast::ValueNumberLongLongType& Cast::ToNumberLongLong(const ValueType& value)
					{
						return To<ValueNumberLongLongType>(value);
					}

					typename Cast::ValueNumberShortType& Cast::ToNumberShort(ValueType& value)
					{
						return To<ValueNumberShortType>(value);
					}

					const typename Cast::ValueNumberShortType& Cast::ToNumberShort(const ValueType& value)
					{
						return To<ValueNumberShortType>(value);
					}

					typename Cast::ValueNumberUnsignedCharType& Cast::ToNumberUnsignedChar(ValueType& value)
					{
						return To<ValueNumberUnsignedCharType>(value);
					}

					const typename Cast::ValueNumberUnsignedCharType& Cast::ToNumberUnsignedChar(const ValueType& value)
					{
						return To<const ValueNumberUnsignedCharType>(value);
					}

					typename Cast::ValueNumberUnsignedIntType& Cast::ToNumberUnsignedInt(ValueType& value)
					{
						return To<ValueNumberUnsignedIntType>(value);
					}

					const typename Cast::ValueNumberUnsignedIntType& Cast::ToNumberUnsignedInt(const ValueType& value)
					{
						return To<ValueNumberUnsignedIntType>(value);
					}

					typename Cast::ValueNumberUnsignedLongType& Cast::ToNumberUnsignedLong(ValueType& value)
					{
						return To<ValueNumberUnsignedLongType>(value);
					}

					const typename Cast::ValueNumberUnsignedLongType& Cast::ToNumberUnsignedLong(const ValueType& value)
					{
						return To<ValueNumberUnsignedLongType>(value);
					}

					typename Cast::ValueNumberUnsignedLongLongType& Cast::ToNumberUnsignedLongLong(ValueType& value)
					{
						return To<ValueNumberUnsignedLongLongType>(value);
					}

					const typename Cast::ValueNumberUnsignedLongLongType& Cast::ToNumberUnsignedLongLong(const ValueType& value)
					{
						return To<ValueNumberUnsignedLongLongType>(value);
					}

					typename Cast::ValueNumberUnsignedShortType& Cast::ToNumberUnsignedShort(ValueType& value)
					{
						return To<ValueNumberUnsignedShortType>(value);
					}

					const typename Cast::ValueNumberUnsignedShortType& Cast::ToNumberUnsignedShort(const ValueType& value)
					{
						return To<ValueNumberUnsignedShortType>(value);
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_CAST_H_