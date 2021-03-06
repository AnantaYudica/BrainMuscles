#include "test/Configure.h"

#if defined(_USING_TEST_)

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#include "test/simple/json/exception/UndefinedType.h"

#include "test/simple/json/helper/Enum.h"

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
					struct Tag
					{
					public:
						typedef BrainMuscles::test::simple::json::helper::Enum EnumType;
					public:
						const EnumType Value;
					public:
						inline Tag(const EnumType& value);
						inline Tag(const Tag& copy);
					public:
						inline bool operator==(const Tag& tag) const;
						inline bool operator==(const EnumType& value) const;
						inline operator const BrainMuscles::test::simple::json::helper::Enum&() const;
					public:
						static inline constexpr bool IsValue(const EnumType& value);
						static inline constexpr bool IsValueNumber(const EnumType& value);
						static inline constexpr bool IsFloatingPoint(const EnumType& value);
						static inline constexpr bool IsInteger(const EnumType& value);
						static inline constexpr bool IsSigned(const EnumType& value);
						static inline constexpr bool IsUnsigned(const EnumType& value);
						template<typename HELPER_VALUE_TYPE, typename INPUT_VALUE_TYPE>
						static Tag Identification(const INPUT_VALUE_TYPE& input_value);
						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						static RETURN_TYPE Case(const Tag& tag, ARGS... args);
					};
				}
			}
		}
	}
}

#include "test/simple/json/helper/tag/Array.h"
#include "test/simple/json/helper/tag/False.h"
#include "test/simple/json/helper/tag/Null.h"
#include "test/simple/json/helper/tag/Number.h"
#include "test/simple/json/helper/tag/Object.h"
#include "test/simple/json/helper/tag/String.h"
#include "test/simple/json/helper/tag/True.h"

#include "test/simple/json/helper/tag/number/FloatingPoint.h"
#include "test/simple/json/helper/tag/number/Integer.h"
#include "test/simple/json/helper/tag/number/Signed.h"
#include "test/simple/json/helper/tag/number/Unsigned.h"

#include "test/simple/json/helper/tag/number/Char.h"
#include "test/simple/json/helper/tag/number/Double.h"
#include "test/simple/json/helper/tag/number/Float.h"
#include "test/simple/json/helper/tag/number/Int.h"
#include "test/simple/json/helper/tag/number/Long.h"
#include "test/simple/json/helper/tag/number/LongDouble.h"
#include "test/simple/json/helper/tag/number/LongLong.h"
#include "test/simple/json/helper/tag/number/Short.h"
#include "test/simple/json/helper/tag/number/UnsignedChar.h"
#include "test/simple/json/helper/tag/number/UnsignedInt.h"
#include "test/simple/json/helper/tag/number/UnsignedLong.h"
#include "test/simple/json/helper/tag/number/UnsignedLongLong.h"
#include "test/simple/json/helper/tag/number/UnsignedShort.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_H___IMPLEMENTATION__

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
					inline Tag::Tag(const EnumType& tag_enum) :
						Value(tag_enum)
					{}

					inline Tag::Tag(const Tag& copy) :
						Value(copy.Value)
					{}

					inline bool Tag::operator==(const Tag& tag) const
					{
						return Value == tag.Value;
					}

					inline bool Tag::operator==(const EnumType& value) const
					{
						return Value == value;
					}

					inline Tag::operator const BrainMuscles::test::simple::json::helper::Enum&() const
					{
						return Value;
					}

					inline constexpr bool Tag::IsValue(const EnumType& value)
					{
						return value == EnumType::value_array ||
							value == EnumType::value_false ||
							value == EnumType::value_null ||
							IsValueNumber(value) ||
							value == EnumType::value_object ||
							value == EnumType::value_string ||
							value == EnumType::value_true;
					}

					inline constexpr bool Tag::IsValueNumber(const EnumType& value)
					{
						return value == EnumType::value_number ||
							IsFloatingPoint(value) ||
							IsInteger(value);
					}

					inline constexpr bool Tag::IsFloatingPoint(const EnumType& value)
					{
						return value == EnumType::value_number_double ||
							value == EnumType::value_number_float ||
							value == EnumType::value_number_longdouble;
					}

					inline constexpr bool Tag::IsInteger(const EnumType& value)
					{
						return IsSigned(value) || IsUnsigned(value);
					}

					inline constexpr bool Tag::IsSigned(const EnumType& value)
					{
						return value == EnumType::value_number_char ||
							value == EnumType::value_number_int ||
							value == EnumType::value_number_long ||
							value == EnumType::value_number_longlong ||
							value == EnumType::value_number_short;
					}
					inline constexpr bool Tag::IsUnsigned(const EnumType& value)
					{
						return value == EnumType::value_number_unsignedchar ||
							value == EnumType::value_number_unsignedint ||
							value == EnumType::value_number_unsignedlong ||
							value == EnumType::value_number_unsignedlonglong ||
							value == EnumType::value_number_unsignedshort;
					}

					template<typename HELPER_VALUE_TYPE, typename INPUT_VALUE_TYPE>
					Tag Tag::Identification(const INPUT_VALUE_TYPE& input_value)
					{
						
						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsArray)>::value,
							"HELPER_VALUE_TYPE::IsArray is not function");
						if (HELPER_VALUE_TYPE::IsArray(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::Array();
						}
						
						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsFalse)>::value,
							"HELPER_VALUE_TYPE::IsFalse is not function");
						if (HELPER_VALUE_TYPE::IsFalse(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::False();
						}

						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNull)>::value,
							"HELPER_VALUE_TYPE::IsNull is not function");
						if (HELPER_VALUE_TYPE::IsNull(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::Null();
						}

						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumber)>::value,
							"HELPER_VALUE_TYPE::IsNumber is not function");
						if (HELPER_VALUE_TYPE::IsNumber(input_value))
						{
							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberChar)>::value,
								"HELPER_VALUE_TYPE::IsNumberChar is not function");
							if (HELPER_VALUE_TYPE::IsNumberChar(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Char();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberDouble)>::value,
								"HELPER_VALUE_TYPE::IsNumberDouble is not function");
							if (HELPER_VALUE_TYPE::IsNumberDouble(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Double();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberFloat)>::value,
								"HELPER_VALUE_TYPE::IsNumberFloat is not function");
							if (HELPER_VALUE_TYPE::IsNumberFloat(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Float();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberInt)>::value,
								"HELPER_VALUE_TYPE::IsNumberInt is not function");
							if (HELPER_VALUE_TYPE::IsNumberInt(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Int();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberLong)>::value,
								"HELPER_VALUE_TYPE::IsNumberLong is not function");
							if (HELPER_VALUE_TYPE::IsNumberLong(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Long();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberLongDouble)>::value,
								"HELPER_VALUE_TYPE::IsNumberLongDouble is not function");
							if (HELPER_VALUE_TYPE::IsNumberLongDouble(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::LongDouble();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberLongLong)>::value,
								"HELPER_VALUE_TYPE::IsNumberLongLong is not function");
							if (HELPER_VALUE_TYPE::IsNumberLongLong(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::LongLong();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberShort)>::value,
								"HELPER_VALUE_TYPE::IsNumberShort is not function");
							if (HELPER_VALUE_TYPE::IsNumberShort(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::Short();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberUnsignedChar)>::value,
								"HELPER_VALUE_TYPE::IsNumberUnsignedChar is not function");
							if (HELPER_VALUE_TYPE::IsNumberUnsignedChar(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::UnsignedChar();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberUnsignedInt)>::value,
								"HELPER_VALUE_TYPE::IsNumberUnsignedInt is not function");
							if (HELPER_VALUE_TYPE::IsNumberUnsignedInt(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::UnsignedInt();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberUnsignedLong)>::value,
								"HELPER_VALUE_TYPE::IsNumberUnsignedLong is not function");
							if (HELPER_VALUE_TYPE::IsNumberUnsignedLong(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::UnsignedLong();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberUnsignedLongLong)>::value,
								"HELPER_VALUE_TYPE::IsNumberUnsignedLongLong is not function");
							if (HELPER_VALUE_TYPE::IsNumberUnsignedLongLong(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::UnsignedLongLong();
							}

							static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsNumberUnsignedShort)>::value,
								"HELPER_VALUE_TYPE::IsNumberUnsignedShort is not function");
							if (HELPER_VALUE_TYPE::IsNumberUnsignedShort(input_value))
							{
								return BrainMuscles::test::simple::json::helper::tag::number::UnsignedShort();
							}

							return BrainMuscles::test::simple::json::helper::tag::Number();
						}
						
						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsObject)>::value,
							"HELPER_VALUE_TYPE::IsObject is not function");
						if (HELPER_VALUE_TYPE::IsObject(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::Object();
						}
						
						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsString)>::value,
							"HELPER_VALUE_TYPE::IsString is not function");
						if (HELPER_VALUE_TYPE::IsString(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::String();
						}
						
						static_assert(std::is_function<decltype(HELPER_VALUE_TYPE::IsTrue)>::value,
							"HELPER_VALUE_TYPE::IsTrue is not function");
						 if (HELPER_VALUE_TYPE::IsTrue(input_value))
						{
							return BrainMuscles::test::simple::json::helper::tag::True();
						}

						return EnumType::undefined;
					}

					template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
					RETURN_TYPE Tag::Case(const Tag& tag, ARGS... args)
					{
						if (tag == EnumType::value_array)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Array(), args...);
						}
						else if (tag == EnumType::value_false)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::False(), args...);
						}
						else if (tag == EnumType::value_null)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Null(), args...);
						}
						else if (tag == EnumType::value_number)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Number(), args...);
						}
						else if (tag == EnumType::value_object)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Object(), args...);
						}
						else if (tag == EnumType::value_string)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::String(), args...);
						}
						else if (tag == EnumType::value_true)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::True(), args...);
						}
						else if (tag == EnumType::value_number_char)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Char(), args...);
						}
						else if (tag == EnumType::value_number_double)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Double(), args...);
						}
						else if (tag == EnumType::value_number_float)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Float(), args...);
						}
						else if (tag == EnumType::value_number_int)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Int(), args...);
						}
						else if (tag == EnumType::value_number_long)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Long(), args...);
						}
						else if (tag == EnumType::value_number_longdouble)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::LongDouble(), args...);
						}
						else if (tag == EnumType::value_number_longlong)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::LongLong(), args...);
						}
						else if (tag == EnumType::value_number_short)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Short(), args...);
						}
						else if (tag == EnumType::value_number_unsignedchar)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedChar(), args...);
						}
						else if (tag == EnumType::value_number_unsignedint)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedInt(), args...);
						}
						else if (tag == EnumType::value_number_unsignedlong)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedLong(), args...);
						}
						else if (tag == EnumType::value_number_unsignedlonglong)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedLongLong(), args...);
						}
						else if (tag == EnumType::value_number_unsignedshort)
						{
							return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedShort(), args...);
						}
						throw(BrainMuscles::test::simple::json::exception::UndefinedType<const BrainMuscles::test::simple::json::helper::Tag&, BrainMuscles::test::simple::json::helper::Tag>(tag));
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_H___IMPLEMENTATION__

#endif