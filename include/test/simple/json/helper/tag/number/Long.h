#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___DEFINITION__

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
							struct Long : 
								public BrainMuscles::test::simple::json::helper::tag::Number
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::Number										BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								Long();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___IMPLEMENTATION__

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
							Long::Long() :
								BaseType(EnumType::value_number_float)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONG_H___DEFINITION__

#endif 