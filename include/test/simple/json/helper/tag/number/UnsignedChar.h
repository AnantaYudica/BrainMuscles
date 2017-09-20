#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___DEFINITION__

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
							struct UnsignedChar : 
								public BrainMuscles::test::simple::json::helper::tag::Number
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::Number										BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								UnsignedChar();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___IMPLEMENTATION__

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
							UnsignedChar::UnsignedChar() :
								BaseType(EnumType::value_number_unsignedchar)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDCHAR_H___DEFINITION__

#endif