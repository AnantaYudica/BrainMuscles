#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\helper\value\Tag.h"

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
					namespace value
					{
						template<typename BrainMuscles::test::simple::json::helper::value::Tag VALUE_TAG>
						struct Declare;

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_array> final
						{
							typedef BrainMuscles::test::simple::json::value::Array Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_false> final
						{
							typedef BrainMuscles::test::simple::json::value::False Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_null> final
						{
							typedef BrainMuscles::test::simple::json::value::Null Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number> final
						{
							typedef BrainMuscles::test::simple::json::value::Number Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_object> final
						{
							typedef BrainMuscles::test::simple::json::value::Object Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_string> final
						{
							typedef BrainMuscles::test::simple::json::value::String Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_true> final
						{
							typedef BrainMuscles::test::simple::json::value::True Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_char> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Char Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_double> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Double Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_float> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Float Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_int> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Int Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_long> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Long Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_longdouble> final
						{
							typedef BrainMuscles::test::simple::json::value::number::LongDouble Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_longlong> final
						{
							typedef BrainMuscles::test::simple::json::value::number::LongLong Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_short> final
						{
							typedef BrainMuscles::test::simple::json::value::number::Short Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_unsignedchar> final
						{
							typedef BrainMuscles::test::simple::json::value::number::UnsignedChar Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_unsignedint> final
						{
							typedef BrainMuscles::test::simple::json::value::number::UnsignedInt Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_unsignedlong> final
						{
							typedef BrainMuscles::test::simple::json::value::number::UnsignedLong Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_unsignedlonglong> final
						{
							typedef BrainMuscles::test::simple::json::value::number::UnsignedLongLong Type;
							Declare() = delete;
						};

						template<>
						struct Declare<BrainMuscles::test::simple::json::helper::value::Tag::value_number_unsignedshort> final
						{
							typedef BrainMuscles::test::simple::json::value::number::UnsignedShort Type;
							Declare() = delete;
						};
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_DECLARE_H_