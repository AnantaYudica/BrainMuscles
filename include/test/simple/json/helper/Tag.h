#ifndef TEST_SIMPLE_JSON_HELPER_TAG_H_
#define TEST_SIMPLE_JSON_HELPER_TAG_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

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
					enum Tag : char
					{
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

					bool IsTagNumber(const Tag& tag)
					{
						return (tag >= Tag::value_number_char && tag <= value_number_unsignedshort) || tag == value_number;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_H_