#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include "test\simple\functional\Function.h"

#include "test\simple\log\output\Signal.h"
#include "test\simple\log\output\format\Value.h"
#include "test\simple\log\output\Format.h"
#include "test\simple\log\output\call\Value.h"

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
					class Handle :
						public BrainMuscles::test::simple::log::output::Format
					{
					public:
						typedef BrainMuscles::test::simple::log::output::Format			BaseType;
						typedef BrainMuscles::test::simple::log::output::format::Value	FormatValueType;
						typedef BrainMuscles::test::simple::log::output::Handle			HandleType;
						typedef BrainMuscles::test::simple::log::output::call::Value	CallValueType;
					protected:
						typedef BrainMuscles::test::simple::log::output::Signal			SignalType;
					public:
						template<typename... ARGS>
						using FunctionPrintType = BrainMuscles::test::simple::functional::Function<void, 
							HandleType*, ARGS...>;
					public:
						template<typename... ARGS>
						using FunctionMemberFormatValueType = BrainMuscles::test::simple::functional::Function<
							void, FormatValueType*, ARGS...>;
					private:
						ValueType m_globalValue;
						ValueType m_outputValue;
						SignalType m_outputSignal;
					protected:
						Handle();
					public:
						virtual ~Handle();
					protected:
						virtual void OnBeginPrintOutput(std::FILE* outfile) = 0;
						virtual void OnEndPrintOutput(std::FILE* outfile) = 0;
					public:
						void SetValueFormat(const CallValueType& call_value);
					public:
						void SetGlobalValue();
						void SetLocalValue();
					protected:
						void BeginPrintOutput();
						void NewlineOutput();
					public:
						void EndPrintOutput();
					public:
						template<typename ARG>
						void PrintOutput(ARG arg);
					public:
						void PrintDelegate(FunctionPrintType<> function_print);
						template<typename ARG>
						void PrintDelegate(FunctionPrintType<const char*, ARG> function_print, FunctionMemberFormatValueType<> function_member_value, ARG value);
					public:
						template<typename... ARGS>
						void Print(const char* format, ARGS... args);
					public:
						template<typename ITERATOR_TYPE,
							typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
							typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
							typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
						void PrintLoop(ITERATOR_TYPE iterator_begin,
							ITERATOR_TYPE iterator_end,
							CONJUNCTION_TYPE conjunction = ConstantType::LoopConjunctionDefault,
							BEFORE_PRINT_TYPE before_print = ConstantType::LoopBeforePrintDefault,
							AFTER_PRINT_TYPE after_print = ConstantType::LoopAfterPrintDefault);
					public:
						Handle& operator<< (const CallValueType& call_value);
					};

					void Handle::SetValueFormat(const CallValueType& call_value)
					{
						if (call_value.IsSetGlobalValue())
						{
							call_value(&m_globalValue);
						}
						if (call_value.IsSetLocalValue())
						{
							call_value(&m_outputValue);
						}
					}

					void Handle::SetGlobalValue()
					{
						m_globalValue = m_outputValue;
					}

					void Handle::SetLocalValue()
					{
						m_outputValue = m_globalValue;
					}

					void Handle::BeginPrintOutput()
					{
						if (m_outputSignal.IsPrintEnd())
						{
							SetLocalValue();
							m_outputSignal.PrintStartSignal();
						}
						if (m_outputSignal.IsOutputEnd() || m_outputSignal.IsNewline())
						{
							OnBeginPrintOutput(m_fileOutput);
							if (m_outputSignal.IsOutputEnd())
							{
								m_outputSignal.OutputStartSignal();
							}
							if (m_outputSignal.IsNewline())
							{
								m_outputSignal.CurrentlineSignal();
							}
						}
					}

					void Handle::NewlineOutput()
					{
						if (!m_outputSignal.IsNewline())
						{
							OnEndPrintOutput(m_fileOutput);
							m_outputSignal.NewlineSignal();
						}
					}

					void Handle::EndPrintOutput()
					{
						if (!m_outputSignal.IsOutputEnd())
						{
							OnEndPrintOutput(m_fileOutput);
							m_outputSignal.OutputEndSignal();
						}
					}

					template<typename ARG>
					void Handle::PrintOutput(ARG arg)
					{
						BeginPrintOutput();
						BaseType::Output(PrototypeType(m_outputValue), arg);
						if (!m_outputSignal.IsPrintLoop())
						{
							m_outputSignal.PrintEndSignal();
						}
					}

					void Handle::PrintDelegate(FunctionPrintType<> function_print)
					{
						m_outputSignal.PassiveNewlineSignal();
						function_print(this);
					}

					template<typename ARG>
					void Handle::PrintDelegate(FunctionPrintType<const char*, ARG> function_print, FunctionMemberFormatValueType<> function_member_value, ARG value)
					{
						m_outputSignal.PassiveNewlineSignal();
						PrototypeType proto(m_outputValue);
						function_member_value(&proto.GetValue());
						function_print(this, proto.GetFormat<ARG>(), value);
					}

					template<typename... ARGS>
					void Handle::Print(const char* format, ARGS... args)
					{
						if (m_outputSignal.IsForceNewline())
						{
							NewlineOutput();
							BeginPrintOutput();
							BaseType::Print(format, args...);
							NewlineOutput();
						}
						else
						{
							BeginPrintOutput();
							BaseType::Print(format, args...);
							m_outputSignal.ForceNewlineSignal();
						}
					}

					template<typename ITERATOR_TYPE, typename CONJUNCTION_TYPE, typename BEFORE_PRINT_TYPE, typename AFTER_PRINT_TYPE>
					void Handle::PrintLoop(ITERATOR_TYPE iterator_begin, ITERATOR_TYPE iterator_end, CONJUNCTION_TYPE conjunction, BEFORE_PRINT_TYPE before_print, AFTER_PRINT_TYPE after_print)
					{
						BeginPrintOutput();
						m_outputSignal.BeginPrintLoopSignal();
						*this << before_print;
						bool reverse = itrator_begin > iterator_end;
						ITERATOR_TYPE it = itrator_begin;
						while ((reverse ? it > iterator_end : it < iterator_end))
						{
							if (it != itrator_begin)
							{
								*this << conjunction;
							}
							*this << *it;
							(reverse ? --it : ++it);
						}
						*this << after_print;
						m_outputSignal.EndPrintLoopSignal();
						m_outputSignal.PrintEndSignal();
					}

					Handle& Handle::operator<< (const CallValueType& call_value)
					{
						SetValueFormat(call_value);
						return *this;
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_H_