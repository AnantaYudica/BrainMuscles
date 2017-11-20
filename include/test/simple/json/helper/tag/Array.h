#include "test/Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___DEFINITION__

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
						struct Array : 
							public BrainMuscles::test::simple::json::helper::Tag
						{
						public:
							typedef BrainMuscles::test::simple::json::helper::Tag	BaseType;
							typedef typename BaseType::EnumType						EnumType;
						public:
							inline Array();
						};
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___IMPLEMENTATION___
#define TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___IMPLEMENTATION___

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
						inline Array::Array() :
							BaseType(EnumType::value_array)
						{}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___IMPLEMENTATION___

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_ARRAY_H___DEFINITION__

#endif