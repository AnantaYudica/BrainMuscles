#ifndef TEST_SIMPLE_JSON_VALUE_FALSE_H_
#define TEST_SIMPLE_JSON_VALUE_FALSE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\Constant.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace value
				{
					class False :
						public BrainMuscles::test::simple::json::Constant::ValueType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
					public:
						False();
						False(const False& copy);
						False(False&& move);
					public:
						~False();
					public:
						operator const bool const();
						operator const char* const();
					};

					False::False()
					{}

					False::False(const False& copy) 
					{}

					False::False(False&& move)
					{}
					
					False::~False()
					{}

					False::operator const bool const()
					{
						return false;
					}

					False::operator const char* const()
					{
						return ConstantType::FalseCString;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_FALSE_H_