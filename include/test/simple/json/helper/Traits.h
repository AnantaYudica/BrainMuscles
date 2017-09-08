#ifndef TEST_SIMPLE_JSON_HELPER_TRAITS_H_
#define TEST_SIMPLE_JSON_HELPER_TRAITS_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\helper\Tag.h"

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
					class Traits final
					{
					public:
						typedef BrainMuscles::test::simple::json::helper::Tag		ValueTagType;
						typedef BrainMuscles::test::simple::json::Value				ValueType;
					private:
						Traits() = delete;
					public:
						static bool IsArray(const ValueType& value);
						static bool IsFalse(const ValueType& value);
						static bool IsNull(const ValueType& value);
						static bool IsNumber(const ValueType& value);
						static bool IsObject(const ValueType& value);
						static bool IsString(const ValueType& value);
						static bool IsTrue(const ValueType& value);
					public:
						static bool IsNumberChar(const ValueType& value);
						static bool IsNumberDouble(const ValueType& value);
						static bool IsNumberFloat(const ValueType& value);
						static bool IsNumberInt(const ValueType& value);
						static bool IsNumberLong(const ValueType& value);
						static bool IsNumberLongDouble(const ValueType& value);
						static bool IsNumberLongLong(const ValueType& value);
						static bool IsNumberShort(const ValueType& value);
						static bool IsNumberUnsignedChar(const ValueType& value);
						static bool IsNumberUnsignedInt(const ValueType& value);
						static bool IsNumberUnsignedLong(const ValueType& value);
						static bool IsNumberUnsignedLongLong(const ValueType& value);
						static bool IsNumberUnsignedShort(const ValueType& value);
					public:
						static ValueTagType ToTag(const ValueType& value);
					};

					bool Traits::IsArray(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Array*>(&value) != 0;
					}

					bool Traits::IsFalse(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::False*>(&value) != 0;
					}

					bool Traits::IsNull(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Null*>(&value) != 0;
					}

					bool Traits::IsNumber(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Number*>(&value) != 0;
					}

					bool Traits::IsObject(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::Object*>(&value) != 0;
					}

					bool Traits::IsString(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::String*>(&value) != 0;
					}

					bool Traits::IsTrue(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::True*>(&value) != 0;
					}

					bool Traits::IsNumberChar(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Char*>(&value) != 0;
					}

					bool Traits::IsNumberDouble(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Double*>(&value) != 0;
					}

					bool Traits::IsNumberFloat(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Float*>(&value) != 0;
					}

					bool Traits::IsNumberInt(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Int*>(&value) != 0;
					}

					bool Traits::IsNumberLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Long*>(&value) != 0;
					}

					bool Traits::IsNumberLongDouble(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::LongDouble*>(&value) != 0;
					}

					bool Traits::IsNumberLongLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::LongLong*>(&value) != 0;
					}

					bool Traits::IsNumberShort(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::Short*>(&value) != 0;
					}

					bool Traits::IsNumberUnsignedChar(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedChar*>(&value) != 0;
					}

					bool Traits::IsNumberUnsignedInt(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedInt*>(&value) != 0;
					}

					bool Traits::IsNumberUnsignedLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedLong*>(&value) != 0;
					}

					bool Traits::IsNumberUnsignedLongLong(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedLongLong*>(&value) != 0;
					}

					bool Traits::IsNumberUnsignedShort(const ValueType& value)
					{
						return dynamic_cast<const BrainMuscles::test::simple::json::value::number::UnsignedShort*>(&value) != 0;
					}

					typename Traits::ValueTagType Traits::ToTag(const ValueType& value)
					{
						return BrainMuscles::test::simple::json::helper::ValueToTag<Traits, ValueType>(value);
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_TRAITS_H_