#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include "test/simple/json/helper/Tag.h"
#include "test/simple/json/helper/Value.h"

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
					namespace value
					{
						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename INPUT_TYPE, typename... ARGS>
						RETURN_TYPE CaseImpl(INPUT_TYPE value, ARGS... args)
						{
							return BrainMuscles::test::simple::json::helper::Tag::Case<RETURN_TYPE, IMPLEMENT_TYPE, INPUT_TYPE, ARGS...>(
								BrainMuscles::test::simple::json::helper::Tag::Identification<BrainMuscles::test::simple::json::helper::Value, INPUT_TYPE>(value), value, args...);
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						RETURN_TYPE Case(BrainMuscles::test::simple::json::Value& value, ARGS... args)
						{
							return CaseImpl<RETURN_TYPE, IMPLEMENT_TYPE, BrainMuscles::test::simple::json::Value&, ARGS...>(value, args...);
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						RETURN_TYPE Case(const BrainMuscles::test::simple::json::Value& value, ARGS... args)
						{
							return CaseImpl<RETURN_TYPE, IMPLEMENT_TYPE, const BrainMuscles::test::simple::json::Value&, ARGS...>(value, args...);
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						RETURN_TYPE Case(const BrainMuscles::test::simple::json::helper::Tag& tag, BrainMuscles::test::simple::json::Value& value, ARGS... args)
						{
							return BrainMuscles::test::simple::json::helper::Tag::Case<RETURN_TYPE, IMPLEMENT_TYPE, BrainMuscles::test::simple::json::Value&, ARGS...>(tag, value, args...);
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						RETURN_TYPE Case(const BrainMuscles::test::simple::json::helper::Tag& tag, const BrainMuscles::test::simple::json::Value& value, ARGS... args)
						{
							return BrainMuscles::test::simple::json::helper::Tag::Case<RETURN_TYPE, IMPLEMENT_TYPE, const BrainMuscles::test::simple::json::Value&, ARGS...>(tag, value, args...);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_