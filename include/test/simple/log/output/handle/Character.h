#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_CHARACTER_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_CHARACTER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

#include "test\simple\log\output\Arguments.h"
#include "test\simple\log\output\Set.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace simple
		{
			namespace log
			{
				namespace output
				{
					namespace handle
					{
						class Character :
							public BrainMuscles::test::simple::log::output::Set<
								BrainMuscles::test::simple::log::output::format::Value, void, void>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::Set<
								BrainMuscles::test::simple::log::output::format
								::Value, void, void>									BaseType;
							typedef BrainMuscles::test::simple::log::output::set::Type	SetTypeType;
							typedef BrainMuscles::test::simple::log::output::format
								::Value													ValueType;
							typedef BrainMuscles::test::simple::log::output::Arguments<
								Character, int>											ArgumentsType;
						public:
							Character();
							ArgumentsType operator()(const int& character);
						};

						Character::Character() :
							BaseType(SetTypeType::local_value, &ValueType::CharacterEnable)
						{}

						typename Character::ArgumentsType Character::operator()(const int& character)
						{
							return ArgumentsType(character);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_CHARACTER_H_