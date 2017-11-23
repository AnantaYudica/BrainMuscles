#ifndef TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOOP_H_
#define TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOOP_H_

#include "test/Configure.h"

#if defined(_USING_TEST_)

#include <cstddef>

#include "test/simple/log/output/Constant.h"

#include "test/simple/log/output/call/Handle.h"

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
						class Loop
						{
						public:
							typedef BrainMuscles::test::simple::log::output::delegate::Loop<
								OUTPUT_TYPE>													LoopType;
							typedef BrainMuscles::test::simple::log::output::Constant			ConstantType;
							typedef BrainMuscles::test::simple::log::output::Handle<
								OUTPUT_TYPE>													HandleType;
							typedef BrainMuscles::test::simple::log::output::call::Handle<
								LoopType, OUTPUT_TYPE>											CallHandleType;
							template<typename ITERATOR_TYPE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							using FunctionMemberHandlePrintLoopType = BrainMuscles::test::simple::functional::Function<
								void, ITERATOR_TYPE, ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>;
						public:
							template<typename TYPE, 
								std::size_t SIZE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							CallHandleType operator()(TYPE(&arr)[SIZE], 
									CONJUNCTION_TYPE conjunction = ConstantType::LoopConjunctionDefault,
									BEFORE_PRINT_TYPE before_print = ConstantType::LoopBeforePrintDefault,
									AFTER_PRINT_TYPE after_print = ConstantType::LoopAfterPrintDefault) const;
							
							template<typename ITERATOR_TYPE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							CallHandleType operator()(ITERATOR_TYPE begin_iterator, 
									ITERATOR_TYPE end_iterator, 
									CONJUNCTION_TYPE conjunction = ConstantType::LoopConjunctionDefault,
									BEFORE_PRINT_TYPE before_print = ConstantType::LoopBeforePrintDefault,
									AFTER_PRINT_TYPE after_print = ConstantType::LoopAfterPrintDefault) const;
						};

						template<typename OUTPUT_TYPE>
						template<typename TYPE, std::size_t SIZE, typename CONJUNCTION_TYPE, typename BEFORE_PRINT_TYPE, typename AFTER_PRINT_TYPE>
						typename Loop<OUTPUT_TYPE>::CallHandleType
							Loop<OUTPUT_TYPE>::operator()(TYPE(&arr)[SIZE], CONJUNCTION_TYPE conjunction, BEFORE_PRINT_TYPE before_print, AFTER_PRINT_TYPE after_print) const
						{
							return std::bind(static_cast<void (HandleType::*)(TYPE*, TYPE*, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE)>
								(&HandleType::PrintLoop), std::placeholders::_1, arr, arr + SIZE, conjunction, before_print, after_print);
						}

						template<typename OUTPUT_TYPE>
						template<typename ITERATOR_TYPE, typename CONJUNCTION_TYPE, typename BEFORE_PRINT_TYPE, typename AFTER_PRINT_TYPE>
						typename Loop<OUTPUT_TYPE>::CallHandleType
							Loop<OUTPUT_TYPE>::operator()(ITERATOR_TYPE begin_iterator, ITERATOR_TYPE end_iterator, CONJUNCTION_TYPE conjunction , BEFORE_PRINT_TYPE before_print, AFTER_PRINT_TYPE after_print) const
						{
							return std::bind(static_cast<void (HandleType::*)(ITERATOR_TYPE, ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE)>
								(&HandleType::PrintLoop), std::placeholders::_1, begin_iterator, end_iterator, conjunction, before_print, after_print);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_DELEGATE_LOOP_H_