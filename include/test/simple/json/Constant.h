#ifndef TEST_SIMPLE_JSON_CONSTANT_H_
#define TEST_SIMPLE_JSON_CONSTANT_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <string>
#include <memory>
#include <vector>
#include <map>

#include "test\simple\json\Value.h"
#include "test\simple\json\pointer\Value.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				struct Constant final
				{
					Constant() = delete;
				public:
					typedef BrainMuscles::test::simple::json::Value			ValueType;
					typedef BrainMuscles::test::simple::json
						::pointer::Value									PointerValueType;
					typedef std::vector<PointerValueType>					ContainerArrayType;
					typedef std::map<std::string, PointerValueType>			ContainerObjectType;
				};
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_CONSTANT_H_