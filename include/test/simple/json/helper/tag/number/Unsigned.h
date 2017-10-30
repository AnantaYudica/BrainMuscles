#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

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
							struct Unsigned :
								public BrainMuscles::test::simple::json::helper::tag::number::Integer
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::number::Integer								BaseType;
								typedef typename BaseType::EnumType						EnumType;
							protected:
								inline Unsigned(const EnumType& value);
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___IMPLEMENTATION__

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
							inline Unsigned::Unsigned(const EnumType& value) :
								BaseType(value)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

#endif