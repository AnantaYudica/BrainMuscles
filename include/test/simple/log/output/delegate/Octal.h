#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_OCTAL_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_OCTAL_H_

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
						template<typename OUTPUT_TYPE>
						class Octal :
							public BrainMuscles::test::simple::log::output::call::Value<
								BrainMuscles::test::simple::log::output::delegate::Octal<OUTPUT_TYPE>>
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::Octal<
								OUTPUT_TYPE>													OctalType;
							typedef BrainMuscles::test::simple::log::output::call::Value<
								OctalType>														BaseType;
							typedef BrainMuscles::test::simple::log::output::call::value::Tag	ValueTagType;
							typedef BrainMuscles::test::simple::log::output::format::Value		FormatValueType;
							typedef BrainMuscles::test::simple::functional::Function<void,
								FormatValueType*>												FunctionMemberFormatValueType;

							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								OctalType, OUTPUT_TYPE>											CallHandleType;
						public:
							template<typename ARG>
							using FunctionMemberHandlePrintType = BrainMuscles::test::simple::functional::Function<void,
								HandleType*, const char*, ARG>;
						public:
							Octal();
						public:
							CallHandleType operator()(const unsigned char& value) const;
							CallHandleType operator()(const char& value)  const;
							CallHandleType operator()(const unsigned short& value)  const;
							CallHandleType operator()(const short& value)  const;
							CallHandleType operator()(const unsigned int& value)  const;
							CallHandleType operator()(const int& value)  const;
							CallHandleType operator()(const unsigned long& value) const;
							CallHandleType operator()(const long& value) const;
							CallHandleType operator()(const unsigned long long& value) const;
							CallHandleType operator()(const long long& value) const;
						};

						template<typename OUTPUT_TYPE>
						Octal<OUTPUT_TYPE>::Octal() :
							BaseType(ValueTagType::local_value, &FormatValueType::OctalEnable)
						{}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const unsigned char& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<unsigned char>, FunctionMemberFormatValueType, unsigned char)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<unsigned char>>(&HandleType::Print<unsigned char>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const char& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<char>, FunctionMemberFormatValueType, char)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<char>>(&HandleType::Print<char>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const unsigned short& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<unsigned short>, FunctionMemberFormatValueType, unsigned short)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<unsigned short>>(&HandleType::Print<unsigned short>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const short& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<short>, FunctionMemberFormatValueType, short)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<short>>(&HandleType::Print<short>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const unsigned int& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<unsigned int>, FunctionMemberFormatValueType, unsigned int)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<unsigned int>>(&HandleType::Print<unsigned int>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const int& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<int>, FunctionMemberFormatValueType, int)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<int>>(&HandleType::Print<int>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const unsigned long& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<unsigned long>, FunctionMemberFormatValueType, unsigned long)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<unsigned long>>(&HandleType::Print<unsigned long>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const long& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<long>, FunctionMemberFormatValueType, long)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<long>>(&HandleType::Print<long>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const unsigned long long& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<unsigned long long>, FunctionMemberFormatValueType, unsigned long long)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<unsigned long long>>(&HandleType::Print<unsigned long long>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}

						template<typename OUTPUT_TYPE>
						typename Octal<OUTPUT_TYPE>::CallHandleType
							Octal<OUTPUT_TYPE>::operator()(const long long& value) const
						{
							return std::bind(static_cast<void(HandleType::*)(FunctionMemberHandlePrintType<long long>, FunctionMemberFormatValueType, long long)>
								(&HandleType::PrintDelegate), std::placeholders::_1, static_cast<FunctionMemberHandlePrintType<long long>>(&HandleType::Print<long long>),
								static_cast<FunctionMemberFormatValueType>(&FormatValueType::OctalEnable), value);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_OCTAL_H_