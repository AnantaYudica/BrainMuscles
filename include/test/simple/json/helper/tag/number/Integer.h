#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__

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
							struct Integer :
								public BrainMuscles::test::simple::json::helper::tag::Number
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::Number										BaseType;
								typedef typename BaseType::EnumType						EnumType;
							protected:
								Integer(const EnumType& value);
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___IMPLEMENTATION__

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
							Integer::Integer(const EnumType& value) :
								BaseType(value)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_INTEGER_H___IMPLEMENTATION__

#endif

#endif