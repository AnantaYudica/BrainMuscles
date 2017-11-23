#ifndef TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_
#define TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/Memory.h"

#include "test/simple/json/pointer/Value.h"
#include "test/simple/json/pointer/value/Array.h"
#include "test/simple/json/pointer/value/False.h"
#include "test/simple/json/pointer/value/Null.h"
#include "test/simple/json/pointer/value/Number.h"
#include "test/simple/json/pointer/value/Object.h"
#include "test/simple/json/pointer/value/String.h"
#include "test/simple/json/pointer/value/True.h"

#include "test/simple/json/pointer/value/number/Char.h"
#include "test/simple/json/pointer/value/number/Double.h"
#include "test/simple/json/pointer/value/number/Float.h"
#include "test/simple/json/pointer/value/number/Int.h"
#include "test/simple/json/pointer/value/number/Long.h"
#include "test/simple/json/pointer/value/number/LongDouble.h"
#include "test/simple/json/pointer/value/number/LongLong.h"
#include "test/simple/json/pointer/value/number/Short.h"
#include "test/simple/json/pointer/value/number/UnsignedChar.h"
#include "test/simple/json/pointer/value/number/UnsignedInt.h"
#include "test/simple/json/pointer/value/number/UnsignedLong.h"
#include "test/simple/json/pointer/value/number/UnsignedLongLong.h"
#include "test/simple/json/pointer/value/number/UnsignedShort.h"

#include "test/simple/json/helper/value/Declare.h"
#include "test/simple/json/helper/pointer/value/Declare.h"

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
					namespace pointer
					{
						class Value final
						{
						public:
							typedef BrainMuscles::test::simple::json::pointer::Value		PointerValueType;
						private:
							typedef BrainMuscles::test::simple::json::Memory				MemoryType;
						public:
							typedef BrainMuscles::test::simple::json::pointer::value
								::Array														PointerValueArrayType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::False														PointerValueFalseType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::Null														PointerValueNullType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::Number													PointerValueNumberType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::Object													PointerValueObjectType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::String													PointerValueStringType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::True														PointerValueTrueType;
						public:
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Char												PointerValueNumberCharType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Double											PointerValueNumberDoubleType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Float												PointerValueNumberFloatType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Int												PointerValueNumberIntType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Long												PointerValueNumberLongType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::LongDouble										PointerValueNumberLongDoubleType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::LongLong											PointerValueNumberLongLongType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::Short												PointerValueNumberShortType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::UnsignedChar										PointerValueNumberUnsignedCharType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::UnsignedInt										PointerValueNumberUnsignedIntType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::UnsignedLong										PointerValueNumberUnsignedLongType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::UnsignedLongLong									PointerValueNumberUnsignedLongLongType;
							typedef BrainMuscles::test::simple::json::pointer::value
								::number::UnsignedShort										PointerValueNumberUnsignedShortType;
						private:
							Value() = delete;
						public:
							static bool IsArray(const PointerValueType& value);
							static bool IsFalse(const PointerValueType& value);
							static bool IsNull(const PointerValueType& value);
							static bool IsNumber(const PointerValueType& value);
							static bool IsObject(const PointerValueType& value);
							static bool IsString(const PointerValueType& value);
							static bool IsTrue(const PointerValueType& value);
						public:
							static bool IsNumberChar(const PointerValueType& value);
							static bool IsNumberDouble(const PointerValueType& value);
							static bool IsNumberFloat(const PointerValueType& value);
							static bool IsNumberInt(const PointerValueType& value);
							static bool IsNumberLong(const PointerValueType& value);
							static bool IsNumberLongDouble(const PointerValueType& value);
							static bool IsNumberLongLong(const PointerValueType& value);
							static bool IsNumberShort(const PointerValueType& value);
							static bool IsNumberUnsignedChar(const PointerValueType& value);
							static bool IsNumberUnsignedInt(const PointerValueType& value);
							static bool IsNumberUnsignedLong(const PointerValueType& value);
							static bool IsNumberUnsignedLongLong(const PointerValueType& value);
							static bool IsNumberUnsignedShort(const PointerValueType& value);
						public:
							template<typename... ARGS>
							static PointerValueArrayType Array(ARGS... args);
							template<typename... ARGS>
							static PointerValueFalseType False(ARGS... args);
							template<typename... ARGS>
							static PointerValueNullType Null(ARGS... args);
							template<typename VALUE_NUMBER_TAG_TYPE, typename... ARGS>
							static PointerValueNumberType Number(const VALUE_NUMBER_TAG_TYPE& value_number_tag, ARGS... args);
							template<typename... ARGS>
							static PointerValueObjectType Object(ARGS... args);
							template<typename... ARGS>
							static PointerValueStringType String(ARGS... args);
							template<typename... ARGS>
							static PointerValueTrueType True(ARGS... args);
						public:
							template<typename... ARGS>
							static PointerValueNumberCharType NumberChar(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberDoubleType NumberDouble(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberFloatType NumberFloat(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberIntType NumberInt(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberLongType NumberLong(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberLongDoubleType NumberLongDouble(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberLongLongType NumberLongLong(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberShortType NumberShort(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberUnsignedCharType NumberUnsignedChar(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberUnsignedIntType NumberUnsignedInt(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberUnsignedLongType NumberUnsignedLong(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberUnsignedLongLongType NumberUnsignedLongLong(ARGS... args);
							template<typename... ARGS>
							static PointerValueNumberUnsignedShortType NumberUnsignedShort(ARGS... args);
						};

						bool Value::IsArray(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::Array>(value) != 0;
						}

						bool Value::IsFalse(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::False>(value) != 0;
						}

						bool Value::IsNull(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::Null>(value) != 0;
						}

						bool Value::IsNumber(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::Number>(value) != 0;
						}

						bool Value::IsObject(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::Object>(value) != 0;
						}

						bool Value::IsString(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::String>(value) != 0;
						}

						bool Value::IsTrue(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::True>(value) != 0;
						}

						bool Value::IsNumberChar(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Char>(value) != 0;
						}

						bool Value::IsNumberDouble(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Double>(value) != 0;
						}

						bool Value::IsNumberFloat(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Float>(value) != 0;
						}

						bool Value::IsNumberInt(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Int>(value) != 0;
						}

						bool Value::IsNumberLong(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Long>(value) != 0;
						}

						bool Value::IsNumberLongDouble(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::LongDouble>(value) != 0;
						}

						bool Value::IsNumberLongLong(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::LongLong>(value) != 0;
						}

						bool Value::IsNumberShort(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::Short>(value) != 0;
						}

						bool Value::IsNumberUnsignedChar(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::UnsignedChar>(value) != 0;
						}

						bool Value::IsNumberUnsignedInt(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::UnsignedInt>(value) != 0;
						}

						bool Value::IsNumberUnsignedLong(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::UnsignedLong>(value) != 0;
						}

						bool Value::IsNumberUnsignedLongLong(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::UnsignedLongLong>(value) != 0;
						}

						bool Value::IsNumberUnsignedShort(const PointerValueType& value)
						{
							return MemoryType::DynamicPointerCast<PointerValueType, BrainMuscles::test::simple::json::pointer::value::number::UnsignedShort>(value) != 0;
						}

						template<typename... ARGS>
						typename Value::PointerValueArrayType Value::Array(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::Array(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueFalseType Value::False(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::False(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNullType Value::Null(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::Null(args...);
						}

						template<typename VALUE_NUMBER_TAG_TYPE, typename... ARGS>
						typename Value::PointerValueNumberType Value::Number(const VALUE_NUMBER_TAG_TYPE& value_number_tag, ARGS... args)
						{
							//static_assert(BrainMuscles::test::simple::json::helper::value::IsTagNumber(VALUE_NUMBER_TAG), "VALUE_NUMBER_TAG is not Tag Number");
							return BrainMuscles::test::simple::json::helper::value::Declare(value_number_tag, args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueObjectType Value::Object(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::Object(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueStringType Value::String(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::String(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueTrueType Value::True(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::True(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberCharType Value::NumberChar(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Char(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberDoubleType Value::NumberDouble(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Double(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberFloatType Value::NumberFloat(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Float(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberIntType Value::NumberInt(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Int(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberLongType Value::NumberLong(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Long(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberLongDoubleType Value::NumberLongDouble(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::LongDouble(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberLongLongType Value::NumberLongLong(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::LongLong(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberShortType Value::NumberShort(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::Short(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberUnsignedCharType Value::NumberUnsignedChar(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::UnsignedChar(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberUnsignedIntType Value::NumberUnsignedInt(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::UnsignedInt(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberUnsignedLongType Value::NumberUnsignedLong(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::UnsignedLong(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberUnsignedLongLongType Value::NumberUnsignedLongLong(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::UnsignedLongLong(args...);
						}

						template<typename... ARGS>
						typename Value::PointerValueNumberUnsignedShortType Value::NumberUnsignedShort(ARGS... args)
						{
							return BrainMuscles::test::simple::json::value::number::UnsignedShort(args...);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_