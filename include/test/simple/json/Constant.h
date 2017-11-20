#ifndef TEST_SIMPLE_JSON_CONSTANT_H_
#define TEST_SIMPLE_JSON_CONSTANT_H_

#include "test/Configure.h"

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
					typedef std::string										StringType;
					typedef std::vector<PointerValueType>					ContainerArrayType;
					typedef std::map<StringType, PointerValueType>			ContainerObjectType;
				public:
					static constexpr const char * const FalseCString = "false";
					static constexpr const char * const TrueCString = "true";
					static constexpr const char * const NullCString = "null";
				public:
					static inline const char * StringToConstCString(const StringType& string);
				};

				inline const char * Constant::StringToConstCString(const StringType& string)
				{
					return string.c_str();
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_CONSTANT_H_