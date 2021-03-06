#include "test/Configure.h"

#if defined(_USING_TEST_)

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___DEFINITION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___DEFINITION__

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
							struct LongLong : 
								public BrainMuscles::test::simple::json::helper::tag::number::Signed
							{
							public:
								typedef BrainMuscles::test::simple::json::helper
									::tag::number::Signed								BaseType;
								typedef typename BaseType::EnumType						EnumType;
							public:
								inline LongLong();
							};
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___DEFINITION__

#else //ELSE TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__
#include "test/simple/json/helper/Tag.h"

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_SIGNED_H___DEFINITION__

#ifdef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___DEFINITION__

#ifndef TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___IMPLEMENTATION__
#define TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___IMPLEMENTATION__

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
							inline LongLong::LongLong() :
								BaseType(EnumType::value_number_longlong)
							{}
						}
					}
				}
			}
		}
	}
}

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___IMPLEMENTATION__

#endif //!TEST_SIMPLE_JSON_HELPER_TAG_NUMBER_LONGLONG_H___DEFINITION__

#endif 