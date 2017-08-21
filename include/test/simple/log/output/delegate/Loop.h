#ifndef TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOOP_H_
#define TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOOP_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

#include <cstddef>

#include "test\simple\log\output\Constant.h"

#include "test\simple\log\output\Arguments.h"

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
						class Loop
						{
						public:
							typedef BrainMuscles::test::simple::log::output::Constant ConstantType;
							template<typename ITERATOR_TYPE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							using ArgumentsType = BrainMuscles::test::simple::log::output::Arguments<Loop, ITERATOR_TYPE, ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>;
						public:
							template<typename TYPE, 
								std::size_t SIZE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							ArgumentsType<TYPE*, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE> 
								operator()(TYPE(&arr)[SIZE], 
									CONJUNCTION_TYPE conjunction = ConstantType::LoopConjunctionDefault,
									BEFORE_PRINT_TYPE before_print = ConstantType::LoopBeforePrintDefault,
									AFTER_PRINT_TYPE after_print = ConstantType::LoopAfterPrintDefault) const;
							
							template<typename ITERATOR_TYPE, 
								typename CONJUNCTION_TYPE = ConstantType::LoopConjunctionDefaultType,
								typename BEFORE_PRINT_TYPE = ConstantType::LoopBeforePrintDefaultType,
								typename AFTER_PRINT_TYPE = ConstantType::LoopAfterPrintDefaultType>
							ArgumentsType<ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>
								operator()(ITERATOR_TYPE begin_iterator, 
									ITERATOR_TYPE end_iterator, 
									CONJUNCTION_TYPE conjunction = ConstantType::LoopConjunctionDefault,
									BEFORE_PRINT_TYPE before_print = ConstantType::LoopBeforePrintDefault,
									AFTER_PRINT_TYPE after_print = ConstantType::LoopAfterPrintDefault) const;
						};

						template<typename TYPE, std::size_t SIZE, typename CONJUNCTION_TYPE, typename BEFORE_PRINT_TYPE, typename AFTER_PRINT_TYPE>
						Loop::ArgumentsType<TYPE*, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE> 
							Loop::operator()(TYPE(&arr)[SIZE], CONJUNCTION_TYPE conjunction, BEFORE_PRINT_TYPE before_print, AFTER_PRINT_TYPE after_print) const
						{
							return ArgumentsType<TYPE*, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>(arr, arr + SIZE, conjunction, before_print, after_print);
						}

						template<typename ITERATOR_TYPE, typename CONJUNCTION_TYPE, typename BEFORE_PRINT_TYPE, typename AFTER_PRINT_TYPE>
						Loop::ArgumentsType<ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>
							Loop::operator()(ITERATOR_TYPE begin_iterator, ITERATOR_TYPE end_iterator, CONJUNCTION_TYPE conjunction , BEFORE_PRINT_TYPE before_print, AFTER_PRINT_TYPE after_print) const
						{
							return ArgumentsType<ITERATOR_TYPE, CONJUNCTION_TYPE, BEFORE_PRINT_TYPE, AFTER_PRINT_TYPE>(begin_iterator, end_iterator, conjunction, before_print, after_print);
						}
					}
				}
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_LOG_OUTPUT_HANDLE_LOOP_H_