#include "test/Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___DEFINITION__

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
							struct Short : 
								public BrainMuscles::test::simple::json::helper::tag::number::Signed
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::number::Signed								BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								inline Short();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__
#include "test/simple/json/helper/Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___IMPLEMENTATION__

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
							inline Short::Short() :
								BaseType(EnumType::value_number_short)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SHORT_H___DEFINITION__

#endif 