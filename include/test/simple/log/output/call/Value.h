#ifndef TEST_SIMPLE_LOG_OUTPUT_CALL_VALUE_H_
#define TEST_SIMPLE_LOG_OUTPUT_CALL_VALUE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\log\output\Call.h"
#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\call\value\Tag.h"

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
					namespace call
					{
						template<typename CALLER_TYPE>
						class Value :
							public BrainMuscles::test::simple::log::output::Call<
								CALLER_TYPE, BrainMuscles::test::simple::functional::Function<
									void, BrainMuscles::test::simple::log::output::format::Value*>>
						{
						public:
							typedef BrainMuscles::test::simple::log::output
								::format::Value										FormatValueType;
							typedef BrainMuscles::test::simple::functional
								::Function<void, FormatValueType*>					FunctionType;
							typedef BrainMuscles::test::simple::log::output::Call<
								CALLER_TYPE, FunctionType>							BaseType;
							typedef BrainMuscles::test::simple::log::output
								::call::value::Tag									TagType;
						private:
							TagType m_tag;
						public:
							Value(const TagType& tag, std::function<void(FormatValueType*)> function);
							Value(const TagType& tag, const FunctionType& function);
						public:
							bool IsSetGlobalValue() const;
							bool IsSetLocalValue() const;
						};

						template<typename CALLER_TYPE>
						Value<CALLER_TYPE>::Value(const TagType& tag, const FunctionType& function) :
							BaseType(function),
							m_tag(tag)
						{}

						template<typename CALLER_TYPE>
						Value<CALLER_TYPE>::Value(const TagType& tag, std::function<void(FormatValueType*)> function) :
							BaseType(function),
							m_tag(tag)
						{}

						template<typename CALLER_TYPE>
						bool Value<CALLER_TYPE>::IsSetGlobalValue() const
						{
							return m_tag == TagType::global_value;
						}

						template<typename CALLER_TYPE>
						bool Value<CALLER_TYPE>::IsSetLocalValue() const
						{
							return m_tag == TagType::local_value;
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_CALL_VALUE_H_