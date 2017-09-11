#ifndef TEST_SIMPLE_JSON_VALUE_OBJECT_H_
#define TEST_SIMPLE_JSON_VALUE_OBJECT_H_

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
					class Object :
						public BrainMuscles::test::simple::json::Constant::ValueType,
						public BrainMuscles::test::simple::json::Constant::ContainerObjectType
					{
					public:
						typedef BrainMuscles::test::simple::json::Constant				ConstantType;
						typedef typename ConstantType::ValueType						ValueType;
						typedef typename ConstantType::ContainerObjectType				ContainerType;
					public:
						Object();
						Object(const Object& copy);
						Object(Object&& move);
					public:
						~Object();
					};

					Object::Object()
					{}

					Object::Object(const Object& copy) :
						ContainerType(copy)
					{}

					Object::Object(Object&& move) :
						ContainerType(move)
					{}

					Object::~Object()
					{}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_VALUE_OBJECT_H_