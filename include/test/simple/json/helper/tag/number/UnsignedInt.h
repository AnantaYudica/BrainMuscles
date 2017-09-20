#include "test\Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___DEFINITION__

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
							struct UnsignedInt : 
								public BrainMuscles::test::simple::json::helper::tag::number::Unsigned
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::number::Unsigned								BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								UnsignedInt();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__
#include "test\simple\json\helper\Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNED_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___IMPLEMENTATION__

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
							UnsignedInt::UnsignedInt() :
								BaseType(EnumType::value_number_unsignedint)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_UNSIGNEDINT_H___DEFINITION__

#endif