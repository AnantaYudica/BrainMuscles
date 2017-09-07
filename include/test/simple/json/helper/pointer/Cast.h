#ifndef TEST_SIMPLE_JSON_HELPER_POINTER_CAST_H_
#define TEST_SIMPLE_JSON_HELPER_POINTER_CAST_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Memory.h"

#include "test\simple\json\pointer\Value.h"
#include "test\simple\json\pointer\value\Array.h"
#include "test\simple\json\pointer\value\False.h"
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
					namespace pointer
					{
						class Cast final
						{
						public:
							typedef BrainMuscles::test::simple::json::Value				ValueType;
							typedef BrainMuscles::test::simple::json::pointer::Value	PointerValueType;
						private:
							typedef BrainMuscles::test::simple::json::Memory			MemoryType;
						public:
							typedef BrainMuscles::test::simple::json::pointer
								::value::Array											PointerValueArrayType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::False											PointerValueFalseType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::Number											PointerValueNumberType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::Object											PointerValueObjectType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::String											PointerValueStringType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::True											PointerValueTrueType;
						public:
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Char									PointerValueNumberCharType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Double									PointerValueNumberDoubleType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Float									PointerValueNumberFloatType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Int									PointerValueNumberIntType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Long									PointerValueNumberLongType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::LongDouble								PointerValueNumberLongDoubleType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::LongLong								PointerValueNumberLongLongType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::Short									PointerValueNumberShortType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::UnsignedChar							PointerValueNumberUnsignedCharType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::UnsignedInt							PointerValueNumberUnsignedIntType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::UnsignedLong							PointerValueNumberUnsignedLongType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::UnsignedLongLong						PointerValueNumberUnsignedLongLongType;
							typedef BrainMuscles::test::simple::json::pointer
								::value::number::UnsignedShort							PointerValueNumberUnsignedShortType;
						private:
							template<typename FROM_TYPE, typename TO_TYPE>
							using BadCastType = BrainMuscles::test::simple::json::exception::BadCast<FROM_TYPE, TO_TYPE>;
						private:
							Cast() = delete;
						public:
							template<typename TO_POINTER_TYPE>
							static TO_POINTER_TYPE To(const PointerValueType& pointer_value);
						public:
							static bool ToBool(const PointerValueType& value);
						public:
							static PointerValueArrayType ToArray(const PointerValueType& pointer_value);
							static PointerValueFalseType ToFalse(const PointerValueType& pointer_value);
							static PointerValueNumberType ToNumber(const PointerValueType& pointer_value);
							static PointerValueObjectType ToObject(const PointerValueType& pointer_value);
							static PointerValueStringType ToString(const PointerValueType& pointer_value);
							static PointerValueTrueType ToTrue(const PointerValueType& pointer_value);
						public:
							static PointerValueNumberCharType ToNumberChar(const PointerValueType& pointer_value);
							static PointerValueNumberDoubleType ToNumberDouble(const PointerValueType& pointer_value);
							static PointerValueNumberFloatType ToNumberFloat(const PointerValueType& pointer_value);
							static PointerValueNumberIntType ToNumberInt(const PointerValueType& pointer_value);
							static PointerValueNumberLongType ToNumberLong(const PointerValueType& pointer_value);
							static PointerValueNumberLongDoubleType ToNumberLongDouble(const PointerValueType& pointer_value);
							static PointerValueNumberLongLongType ToNumberLongLong(const PointerValueType& pointer_value);
							static PointerValueNumberShortType ToNumberShort(const PointerValueType& pointer_value);
							static PointerValueNumberUnsignedCharType ToNumberUnsignedChar(const PointerValueType& pointer_value);
							static PointerValueNumberUnsignedIntType ToNumberUnsignedInt(const PointerValueType& pointer_value);
							static PointerValueNumberUnsignedLongType ToNumberUnsignedLong(const PointerValueType& pointer_value);
							static PointerValueNumberUnsignedLongLongType ToNumberUnsignedLongLong(const PointerValueType& pointer_value);
							static PointerValueNumberUnsignedShortType ToNumberUnsignedShort(const PointerValueType& pointer_value);
						};

						template<typename TO_POINTER_TYPE>
						TO_POINTER_TYPE Cast::To(const PointerValueType& pointer_value)
						{
							TO_POINTER_TYPE pointer = MemoryType::DynamicPointerCast<PointerValueType, TO_POINTER_TYPE>(pointer_value);
							if (pointer)
							{
								return pointer;
							}
							throw(BadCastType<const PointerValueType&, TO_POINTER_TYPE>());
						}

						bool Cast::ToBool(const PointerValueType& pointer_value)
						{
							auto pointer_value_false = MemoryType::DynamicPointerCast<PointerValueType, PointerValueFalseType>(pointer_value);
							auto pointer_value_true = MemoryType::DynamicPointerCast<PointerValueType, PointerValueTrueType>(pointer_value);
							if (pointer_value_false)
							{
								return false;
							}
							else if (pointer_value_true)
							{
								return true;
							}
							throw(BadCastType<const PointerValueType&, bool>());
						}

						typename Cast::PointerValueArrayType Cast::ToArray(const PointerValueType& pointer_value)
						{
							return To<PointerValueArrayType>(pointer_value);
						}

						typename Cast::PointerValueFalseType Cast::ToFalse(const PointerValueType& pointer_value)
						{
							return To<PointerValueFalseType>(pointer_value);
						}

						typename Cast::PointerValueNumberType Cast::ToNumber(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberType>(pointer_value);
						}

						typename Cast::PointerValueObjectType Cast::ToObject(const PointerValueType& pointer_value)
						{
							return To<PointerValueObjectType>(pointer_value);
						}

						typename Cast::PointerValueStringType Cast::ToString(const PointerValueType& pointer_value)
						{
							return To<PointerValueStringType>(pointer_value);
						}

						typename Cast::PointerValueTrueType Cast::ToTrue(const PointerValueType& pointer_value)
						{
							return To<PointerValueTrueType>(pointer_value);
						}

						typename Cast::PointerValueNumberCharType Cast::ToNumberChar(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberCharType>(pointer_value);
						}

						typename Cast::PointerValueNumberDoubleType Cast::ToNumberDouble(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberDoubleType>(pointer_value);
						}

						typename Cast::PointerValueNumberFloatType Cast::ToNumberFloat(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberFloatType>(pointer_value);
						}

						typename Cast::PointerValueNumberIntType Cast::ToNumberInt(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberIntType>(pointer_value);
						}

						typename Cast::PointerValueNumberLongType Cast::ToNumberLong(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberLongType>(pointer_value);
						}

						typename Cast::PointerValueNumberLongDoubleType Cast::ToNumberLongDouble(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberLongDoubleType>(pointer_value);
						}

						typename Cast::PointerValueNumberLongLongType Cast::ToNumberLongLong(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberLongLongType>(pointer_value);
						}

						typename Cast::PointerValueNumberShortType Cast::ToNumberShort(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberShortType>(pointer_value);
						}

						typename Cast::PointerValueNumberUnsignedCharType Cast::ToNumberUnsignedChar(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberUnsignedCharType>(pointer_value);
						}

						typename Cast::PointerValueNumberUnsignedIntType Cast::ToNumberUnsignedInt(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberUnsignedIntType>(pointer_value);
						}

						typename Cast::PointerValueNumberUnsignedLongType Cast::ToNumberUnsignedLong(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberUnsignedLongType>(pointer_value);
						}

						typename Cast::PointerValueNumberUnsignedLongLongType Cast::ToNumberUnsignedLongLong(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberUnsignedLongLongType>(pointer_value);
						}

						typename Cast::PointerValueNumberUnsignedShortType Cast::ToNumberUnsignedShort(const PointerValueType& pointer_value)
						{
							return To<PointerValueNumberUnsignedShortType>(pointer_value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_POINTER_CAST_H_