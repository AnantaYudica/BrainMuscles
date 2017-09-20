#ifndef TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_
#define TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\json\exception\UndefinedType.h"

#include "test\simple\json\helper\Tag.h"
#include "test\simple\json\helper\Value.h"

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
						RETURN_TYPE CaseImpl(const BrainMuscles::test::simple::json::helper::Tag& tag, INPUT_TYPE input, ARGS... args)
						{
							if (tag == BrainMuscles::test::simple::json::helper::tag::Array())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Array(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::False())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::False(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::Null())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Null(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::Number())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Number(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::Object())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::Object(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::String())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::String(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::True())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::True(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Char())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Char(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Double())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Double(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Float())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Float(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Int())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Int(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Long())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Long(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::LongDouble())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::LongDouble(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::LongLong())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::LongLong(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::Short())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::Short(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::UnsignedChar())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedChar(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::UnsignedInt())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedInt(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::UnsignedLong())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedLong(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::UnsignedLongLong())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedLongLong(), input, args...);
							}
							else if (tag == BrainMuscles::test::simple::json::helper::tag::number::UnsignedShort())
							{
								return IMPLEMENT_TYPE::Case(BrainMuscles::test::simple::json::helper::tag::number::UnsignedShort(), input, args...);
							}
							throw(BrainMuscles::test::simple::json::exception::UndefinedType<const BrainMuscles::test::simple::json::helper::Tag&, BrainMuscles::test::simple::json::helper::Tag>(tag));
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename INPUT_TYPE, typename... ARGS>
						RETURN_TYPE CaseImpl(INPUT_TYPE value, ARGS... args)
						{
							return CaseImpl<RETURN_TYPE, IMPLEMENT_TYPE, INPUT_TYPE>(
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
							return CaseImpl<RETURN_TYPE, IMPLEMENT_TYPE, BrainMuscles::test::simple::json::Value&, ARGS...>(tag, value, args...);
						}

						template<typename RETURN_TYPE, typename IMPLEMENT_TYPE, typename... ARGS>
						RETURN_TYPE Case(const BrainMuscles::test::simple::json::helper::Tag& tag, const BrainMuscles::test::simple::json::Value& value, ARGS... args)
						{
							return CaseImpl<RETURN_TYPE, IMPLEMENT_TYPE, const BrainMuscles::test::simple::json::Value&, ARGS...>(tag, value, args...);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_JSON_HELPER_VALUE_CASE_H_