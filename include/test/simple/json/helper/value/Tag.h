#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_TAG_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_TAG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <type_traits>

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
						enum Tag : char
						{
							undefined = 0,
							value_array = 1,
							value_false = 2,
							value_null = 3,
							value_number = 4,
							value_object = 5,
							value_string = 6,
							value_true = 7,
							value_number_char,
							value_number_double,
							value_number_float,
							value_number_int,
							value_number_long,
							value_number_longdouble,
							value_number_longlong,
							value_number_short,
							value_number_unsignedchar,
							value_number_unsignedint,
							value_number_unsignedlong,
							value_number_unsignedlonglong,
							value_number_unsignedshort
						};

						constexpr bool IsTagNumber(const Tag& tag)
						{
							return (tag >= Tag::value_number_char && tag <= value_number_unsignedshort) || tag == value_number;
						}

						template<typename HANDLE_TYPE, typename INPUT_VALUE_TYPE>
						Tag ToTag(const INPUT_VALUE_TYPE& value_input)
						{
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsArray)>::value,
								"HANDLE_TYPE::IsArray is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsFalse)>::value,
								"HANDLE_TYPE::IsFalse is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNull)>::value,
								"HANDLE_TYPE::IsNull is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumber)>::value,
								"HANDLE_TYPE::IsNumber is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsObject)>::value,
								"HANDLE_TYPE::IsObject is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsString)>::value,
								"HANDLE_TYPE::IsString is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsTrue)>::value,
								"HANDLE_TYPE::IsTrue is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberChar)>::value,
								"HANDLE_TYPE::IsNumberChar is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberDouble)>::value,
								"HANDLE_TYPE::IsNumberDouble is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberFloat)>::value,
								"HANDLE_TYPE::IsNumberFloat is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberInt)>::value,
								"HANDLE_TYPE::IsNumberInt is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberLong)>::value,
								"HANDLE_TYPE::IsNumberLong is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberLongDouble)>::value,
								"HANDLE_TYPE::IsNumberLongDouble is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberLongLong)>::value,
								"HANDLE_TYPE::IsNumberLongLong is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberShort)>::value,
								"HANDLE_TYPE::IsNumberShort is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberUnsignedChar)>::value,
								"HANDLE_TYPE::IsNumberUnsignedChar is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberUnsignedInt)>::value,
								"HANDLE_TYPE::IsNumberUnsignedInt is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberUnsignedLong)>::value,
								"HANDLE_TYPE::IsNumberUnsignedLong is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberUnsignedLongLong)>::value,
								"HANDLE_TYPE::IsNumberUnsignedLongLong is not function");
							static_assert(std::is_function<decltype(HANDLE_TYPE::IsNumberUnsignedShort)>::value,
								"HANDLE_TYPE::IsNumberUnsignedShort is not function");

							if (HANDLE_TYPE::IsArray(value_input))
							{
								return Tag::value_array;
							}
							else if (HANDLE_TYPE::IsFalse(value_input))
							{
								return Tag::value_false;
							}
							else if (HANDLE_TYPE::IsNull(value_input))
							{
								return Tag::value_null;
							}
							else if (HANDLE_TYPE::IsNumber(value_input))
							{
								if (HANDLE_TYPE::IsNumberChar(value_input))
								{
									return Tag::value_number_char;
								}
								else if (HANDLE_TYPE::IsNumberDouble(value_input))
								{
									return Tag::value_number_double;
								}
								else if (HANDLE_TYPE::IsNumberFloat(value_input))
								{
									return Tag::value_number_float;
								}
								else if (HANDLE_TYPE::IsNumberInt(value_input))
								{
									return Tag::value_number_int;
								}
								else if (HANDLE_TYPE::IsNumberLong(value_input))
								{
									return Tag::value_number_long;
								}
								else if (HANDLE_TYPE::IsNumberLongDouble(value_input))
								{
									return Tag::value_number_longdouble;
								}
								else if (HANDLE_TYPE::IsNumberLongLong(value_input))
								{
									return Tag::value_number_longlong;
								}
								else if (HANDLE_TYPE::IsNumberShort(value_input))
								{
									return Tag::value_number_short;
								}
								else if (HANDLE_TYPE::IsNumberUnsignedChar(value_input))
								{
									return Tag::value_number_unsignedchar;
								}
								else if (HANDLE_TYPE::IsNumberUnsignedInt(value_input))
								{
									return Tag::value_number_unsignedint;
								}
								else if (HANDLE_TYPE::IsNumberUnsignedLong(value_input))
								{
									return Tag::value_number_unsignedlong;
								}
								else if (HANDLE_TYPE::IsNumberUnsignedLongLong(value_input))
								{
									return Tag::value_number_unsignedlonglong;
								}
								else if (HANDLE_TYPE::IsNumberUnsignedShort(value_input))
								{
									return Tag::value_number_unsignedshort;
								}
								return Tag::value_number;
							}
							else if (HANDLE_TYPE::IsObject(value_input))
							{
								return Tag::value_object;
							}
							else if (HANDLE_TYPE::IsString(value_input))
							{
								return Tag::value_string;
							}
							else if (HANDLE_TYPE::IsTrue(value_input))
							{
								return Tag::value_true;
							}
							return Tag::undefined;
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_TAG_H_