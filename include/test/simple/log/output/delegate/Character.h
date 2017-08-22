#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CHARACTER_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CHARACTER_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\format\Value.h"

#include "test\simple\log\output\call\value\Tag.h"
#include "test\simple\log\output\call\Value.h"
#include "test\simple\log\output\call\Handle.h"

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
					namespace delegate
					{
						class Character :
							public BrainMuscles::test::simple::log::output::call::Value
						{
						public:
							typedef BrainMuscles::test::simple::log::output::call::Value		BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								FormatValueType*>												FunctionMemberFormatValueType;
							
							typedef BrainMuscles::test::simple::log::output::Handle				HandleType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								HandleType*, const char*, int>									FunctionMemberHandlePrintType;

							typedef BrainMuscles::test::simple::log::output::call::Handle<>		CallHandleType;
						public:
							Character();
							CallHandleType operator()(const int& character) const;
						};

						Character::Character() :
							BaseType(ValueTagType::local_value, &FormatValueType::CharacterEnable)
						{}

						typename Character::CallHandleType Character::operator()(const int& character) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType, FunctionMemberFormatValueType, int)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType>(&HandleType::Print<char>) , 
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::CharacterEnable), character);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_CHARACTER_H_