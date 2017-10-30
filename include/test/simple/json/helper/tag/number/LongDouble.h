#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_FLOATINGPOINT_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___DEFINITION__

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
					namespace tag
					{
						namespace number
						{
							struct LongDouble : 
								public BrainMuscles::test::simple::json::helper::tag::number::FloatingPoint
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::number::FloatingPoint						BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								inline LongDouble();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_FLOATINGPOINT_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_FLOATINGPOINT_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___IMPLEMENTATION__

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
					namespace tag
					{
						namespace number
						{
							inline LongDouble::LongDouble() :
								BaseType(EnumType::value_number_longdouble)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGDOUBLE_H___DEFINITION__

#endif 