#include "test/Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___DEFINITION__

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
						struct False : 
							public BrainMuscles::test::simple::json::helper::Tag
						{
						public:
							typedef BrainMuscles::test::simple::json::helper::Tag	BaseType;
							typedef typename BaseType::EnumType						EnumType;
						public:
							inline False();
						};
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__
#include "test/simple/json/helper/Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___IMPLEMENTATION__

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
						inline False::False() :
							BaseType(EnumType::value_false)
						{}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_FALSE_H___DEFINITION__

#endif 