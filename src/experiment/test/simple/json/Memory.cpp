#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\Memory.h"

#include "experiment\test\simple\json\Memory.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				void Memory::Test()
				{
					//declare namespace from BrainMuscles::test::simple to BMTestSimple for simplify
					namespace BMTestSimple = BrainMuscles::test::simple;

					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> 
					// with direct initialization from direct initialization of int
					BMTestSimple::json::Memory::SharedPointerType<int> sharedpointer_int(new int(123));

					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const int> 
					// with direct initialization from class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> 
					BMTestSimple::json::Memory::SharedPointerType<const int> sharedpointer_const_int(sharedpointer_int);
					
					//check value between value of pointer and value of initialization from class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> is same
					SourceAssert(*sharedpointer_int == 123, 
						"value between value of pointer and value of initialization from class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> is not same");
					
					//check value between value of pointer from class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> 
					// and value of pointer from BrainMuscles::test::simple::json::Memory::SharedPointerType<const int> is same
					SourceAssert(*sharedpointer_const_int == *sharedpointer_int, 
						"value between value of pointer from class BrainMuscles::test::simple::json::Memory::SharedPointerType<int>"
						" and value of pointer from BrainMuscles::test::simple::json::Memory::SharedPointerType<const int> is not same");

					//check return value from static function member 'IsBaseOfSharedPointer()' of class BrainMuscles::test::simple::json::Memory
					// and argument template with class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> is true
					SourceAssert(BMTestSimple::json::Memory::IsBaseOfSharedPointer<BMTestSimple::json::Memory::SharedPointerType<int>>() == true,
						"return value from static function member 'IsBaseOfSharedPointer()' of class BrainMuscles::test::simple::json::Memory"
						" and argument template with class BrainMuscles::test::simple::json::Memory::SharedPointerType<int> is false");
					
					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> 
					// with direct initialization from default initialization of class experiment::test::simple::json::Memory::ExampleDerivedA
					BMTestSimple::json::Memory::SharedPointerType<const ExampleBase> pointer_const_examplebase1(new ExampleDerivedA);
					
					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// with copy initalization from return static function member 'ConstPointerCast<const ExampleBase, ExampleBase>()' 
					// of class BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> 
					BMTestSimple::json::Memory::SharedPointerType<ExampleBase> pointer_examplebase1 = 
						BMTestSimple::json::Memory::ConstPointerCast<const ExampleBase, ExampleBase>(pointer_const_examplebase1);

					//assignment variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// with copy initialization of int
					pointer_examplebase1->Value = 4;

					//check value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> is same
					SourceAssert(pointer_const_examplebase1->Value == pointer_examplebase1->Value,
						"value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> "
						"and variable member 'value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> is not same");

					//check address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> is same
					SourceAssert(&pointer_const_examplebase1->Value == &pointer_examplebase1->Value, 
						"address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<const ExampleBase> "
						"and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> is not same");
					
					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// with direct initialize from default initialize of class experiment::test::simple::json::Memory::ExampleDerivedA
					BMTestSimple::json::Memory::SharedPointerType<ExampleBase> pointer_examplebase2(new ExampleDerivedA);
					
					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA>
					// with copy initalization from static function member 'StaticPointerCast<ExampleBase, ExampleDerivedA>'
					// of class BrainMuscles::test::simple::json::Memory and argument with variable of BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase>
					BMTestSimple::json::Memory::SharedPointerType<ExampleDerivedA> pointer_examplederivedA1 =
						BMTestSimple::json::Memory::StaticPointerCast<ExampleBase, ExampleDerivedA>(pointer_examplebase2);

					//assignment variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA>
					// with copy initialization of int
					pointer_examplederivedA1->Value = 8;

					//check value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is same
					SourceAssert(pointer_examplebase2->Value == pointer_examplederivedA1->Value,
						"value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> "
						"and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is not same");

					//check address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is same
					SourceAssert(&pointer_examplebase2->Value == &pointer_examplederivedA1->Value,
						"address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> "
						"and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is not same");


					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// with direct initialize from default initalization of class experiment::test::simple::json::Memory::ExampleDerivedA
					BMTestSimple::json::Memory::SharedPointerType<ExampleBase> pointer_examplebase3(new ExampleDerivedA);

					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> 
					// with copy initalization from static function member 'DynamicPointerCast<ExampleBase, ExampleDerivedA>'
					// of class BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					BMTestSimple::json::Memory::SharedPointerType<ExampleDerivedA> pointer_examplederivedA2
						= BMTestSimple::json::Memory::DynamicPointerCast<ExampleBase, ExampleDerivedA>(pointer_examplebase3);

					//assignment variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA>
					// with copy initialization of int
					pointer_examplederivedA2->Value = 16;

					//check value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is same
					SourceAssert(pointer_examplebase3->Value == pointer_examplederivedA2->Value,
						"value between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> "
						"and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is not same");

					//check address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					// and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is same
					SourceAssert(&pointer_examplebase3->Value == &pointer_examplederivedA2->Value,
						"address between variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> "
						"and variable member 'Value' of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedA> is not same");

					//declare variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedB> 
					// with copy initalization from static function member 'DynamicPointerCast<ExampleBase, ExampleDerivedB>' 
					// of class BrainMuscles::test::simple::json::Memory and argument with variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleBase> 
					BMTestSimple::json::Memory::SharedPointerType<ExampleDerivedB> pointer_examplederivedB2 = 
						BMTestSimple::json::Memory::DynamicPointerCast<ExampleBase, ExampleDerivedB>(pointer_examplebase3);
					
					//check variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedB> is null pointer
					SourceAssert(pointer_examplederivedB2 == nullptr, 
						"variable of class BrainMuscles::test::simple::json::Memory::SharedPointerType<ExampleDerivedB> is not null pointer");
				}
			}
		}
	}
}