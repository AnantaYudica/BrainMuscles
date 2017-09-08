#ifndef TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_
#define TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\helper\value\Tag.h"

#include "test\simple\json\Memory.h"

#include "test\simple\json\pointer\Value.h"
#include "test\simple\json\pointer\value\Array.h"
#include "test\simple\json\pointer\value\False.h"
#include "test\simple\json\pointer\value\Null.h"
#include "test\simple\json\pointer\value\Number.h"
#include "test\simple\json\pointer\value\Object.h"
#include "test\simple\json\pointer\value\String.h"
#include "test\simple\json\pointer\value\True.h"

#include "test\simple\json\pointer\value\number\Char.h"
#include "test\simple\json\pointer\value\number\Double.h"
#include "test\simple\json\pointer\value\number\Float.h"
#include "test\simple\json\pointer\value\number\Int.h"
#include "test\simple\json\pointer\value\number\Long.h"
#include "test\simple\json\pointer\value\number\LongDouble.h"
#include "test\simple\json\pointer\value\number\LongLong.h"
#include "test\simple\json\pointer\value\number\Short.h"
#include "test\simple\json\pointer\value\number\UnsignedChar.h"
#include "test\simple\json\pointer\value\number\UnsignedInt.h"
#include "test\simple\json\pointer\value\number\UnsignedLong.h"
#include "test\simple\json\pointer\value\number\UnsignedLongLong.h"
#include "test\simple\json\pointer\value\number\UnsignedShort.h"

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
							typedef BrainMuscles::test::simple::json::helper::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::json::pointer::Value		PointerValueType;
						private:
							typedef BrainMuscles::test::simple::json::Memory				MemoryType;
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
							static ValueTagType ToTag(const PointerValueType& value);
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

						typename Value::ValueTagType Value::ToTag(const PointerValueType& value)
						{
							return BrainMuscles::test::simple::json::helper::value::ToTag<Value, PointerValueType>(value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_POINTER_VALUE_H_