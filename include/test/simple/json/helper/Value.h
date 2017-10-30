#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Value.h"
#include "test\simple\json\value\Array.h"
#include "test\simple\json\value\False.h"
#include "test\simple\json\value\Null.h"
#include "test\simple\json\value\Number.h"
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
					class Value final
					{
					public:
						typedef BrainMuscles::test::simple::json::Value					ValueType;
					private:
						Value() = delete;
					public:
						static inline bool IsArray(const ValueType& value);
						static inline bool IsFalse(const ValueType& value);
						static inline bool IsNull(const ValueType& value);
						static inline bool IsNumber(const ValueType& value);
						static inline bool IsObject(const ValueType& value);
						static inline bool IsString(const ValueType& value);
						static inline bool IsTrue(const ValueType& value);
					public:
						static inline bool IsNumberChar(const ValueType& value);
						static inline bool IsNumberDouble(const ValueType& value);
						static inline bool IsNumberFloat(const ValueType& value);
						static inline bool IsNumberInt(const ValueType& value);
						static inline bool IsNumberLong(const ValueType& value);
						static inline bool IsNumberLongDouble(const ValueType& value);
						static inline bool IsNumberLongLong(const ValueType& value);
						static inline bool IsNumberShort(const ValueType& value);
						static inline bool IsNumberUnsignedChar(const ValueType& value);
						static inline bool IsNumberUnsignedInt(const ValueType& value);
						static inline bool IsNumberUnsignedLong(const ValueType& value);
						static inline bool IsNumberUnsignedLongLong(const ValueType& value);
						static inline bool IsNumberUnsignedShort(const ValueType& value);
					};

					inline bool Value::IsArray(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Array*>(&value) != 0;
					}

					inline bool Value::IsFalse(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::False*>(&value) != 0;
					}

					inline bool Value::IsNull(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Null*>(&value) != 0;
					}

					inline bool Value::IsNumber(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Number*>(&value) != 0;
					}

					inline bool Value::IsObject(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Object*>(&value) != 0;
					}

					inline bool Value::IsString(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::String*>(&value) != 0;
					}

					inline bool Value::IsTrue(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::True*>(&value) != 0;
					}

					inline bool Value::IsNumberChar(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Char*>(&value) != 0;
					}

					inline bool Value::IsNumberDouble(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Double*>(&value) != 0;
					}

					inline bool Value::IsNumberFloat(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Float*>(&value) != 0;
					}

					inline bool Value::IsNumberInt(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Int*>(&value) != 0;
					}

					inline bool Value::IsNumberLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Long*>(&value) != 0;
					}

					inline bool Value::IsNumberLongDouble(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::LongDouble*>(&value) != 0;
					}

					inline bool Value::IsNumberLongLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::LongLong*>(&value) != 0;
					}

					inline bool Value::IsNumberShort(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Short*>(&value) != 0;
					}

					inline bool Value::IsNumberUnsignedChar(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedChar*>(&value) != 0;
					}

					inline bool Value::IsNumberUnsignedInt(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedInt*>(&value) != 0;
					}

					inline bool Value::IsNumberUnsignedLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedLong*>(&value) != 0;
					}

					inline bool Value::IsNumberUnsignedLongLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedLongLong*>(&value) != 0;
					}

					inline bool Value::IsNumberUnsignedShort(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedShort*>(&value) != 0;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_H_