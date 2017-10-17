#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "test\simple\json\Memory.h"

#include "experiment\test\simple\json\Memory.h"

void experiment::test::simple::json::Memory::Test()
{
	//	Declare namespace from 
	//		'BrainMuscles::test::simple'
	//	to 
	//		'BMTestSimple'
	namespace BMTestSimple = BrainMuscles::test::simple;

	//	Declare alias type 'Memory' 
	//	with prototype class
	//		'BrainMuscles::test::simple::json::Memory'
	typedef BMTestSimple::json::Memory Memory;

	//	Declare variable of
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<int>'
	//	with direct initialization from direct initialization of int
	Memory::SharedPointerType<int> sharedpointer_int(new int(123));

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<const int>'
	//	with direct initialization from 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<int>'
	Memory::SharedPointerType<const int> 
		sharedpointer_const_int(sharedpointer_int);

	//	Check value between 
	//		pointer value of variable 'sharedpointer_int' 
	//	and 
	//		123 from int
	//	is same
	SourceAssert(*sharedpointer_int == 123,
		"value between pointer value of variable 'sharedpointer_int' "
		"and 123 from int is not same");

	//	Check value between 
	//		pointer value of variable 'sharedpointer_const_int'
	//	and 
	//		pointer value of variable  'sharedpointer_int' 
	//	is same
	SourceAssert(*sharedpointer_const_int == *sharedpointer_int,
		"value between pointer value of variable 'sharedpointer_const_int' "
		" and pointer value of variable  'sharedpointer_int' is not same");

	//	Check return value from 
	//		function static member 'IsBaseOfSharedPointer<
	//				BMTestSimple::json::Memory::SharedPointerType<int>>' of 
	//			class 'BrainMuscles::test::simple::json::Memory'
	//	is true
	SourceAssert(Memory::IsBaseOfSharedPointer<
		Memory::SharedPointerType<int>>() == true,
		"return value from function static member 'IsBaseOfSharedPointer<"
		"BrainMuscles::test::simple::json::Memory::SharedPointerType<int>>' "
		"of class BrainMuscles::test::simple::json::Memory is false");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json::Memory
	//			::SharedPointerType<const ExampleBase> '
	//	with direct initialization from default initialization of 
	//		class 'experiment::test::simple::json::Memory::ExampleDerivedA'
	Memory::SharedPointerType<const ExampleBase>
		pointer_const_examplebase1(new ExampleDerivedA);

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleBase>'
	//	with copy initalization from 
	//		return function static member 'ConstPointerCast<
	//			const ExampleBase, ExampleBase>' of 
	//				class 'BrainMuscles::test::simple::json::Memory'
	//	where variable 'pointer_const_examplebase1' as first argument to 
	//		function static member 'ConstPointerCast<
	//			const ExampleBase, ExampleBase>'
	Memory::SharedPointerType<ExampleBase> pointer_examplebase1 
		= Memory::ConstPointerCast<const ExampleBase, 
			ExampleBase>(pointer_const_examplebase1);

	//	Assignment to
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase1'
	//	with copy initialization of int
	pointer_examplebase1->Value = 4;

	//	Check value between 
	//		variable member 'Value' of
	//			variable 'pointer_const_examplebase1'
	//	and 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase1'
	//	is same
	SourceAssert(pointer_const_examplebase1->Value 
		== pointer_examplebase1->Value,
		"value between variable member 'Value' of "
		"variable 'pointer_const_examplebase1' and variable member 'value' of "
		"variable 'pointer_examplebase1' is not same");

	//	Check address between 
	//		variable member 'Value' of 
	//			variable 'pointer_const_examplebase1'
	//	and 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase1' 
	//	is same
	SourceAssert(&pointer_const_examplebase1->Value 
		== &pointer_examplebase1->Value,
		"address between variable member 'Value' of "
		"variable 'pointer_const_examplebase1' and variable member 'Value' of "
		"variable 'pointer_examplebase1' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleBase>'
	//	with direct initialize from default initialize of 
	//		class 'experiment::test::simple::json::Memory::ExampleDerivedA'
	Memory::SharedPointerType<ExampleBase> 
		pointer_examplebase2(new ExampleDerivedA);

	//	Declare variable of 
	//		class BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleDerivedA>
	//	with copy initalization from 
	//		return function static member 'StaticPointerCast<
	//			ExampleBase, ExampleDerivedA>' of 
	//				class BrainMuscles::test::simple::json::Memory 
	//	where variable 'pointer_examplebase2' as first argument to
	//		function static member 'StaticPointerCast<
	//			ExampleBase, ExampleDerivedA>'
	Memory::SharedPointerType<ExampleDerivedA> pointer_examplederivedA1
		= Memory::StaticPointerCast<ExampleBase, 
			ExampleDerivedA>(pointer_examplebase2);

	//	Assignment to 
	//		variable member 'Value' of 
	//			variable 'pointer_examplederivedA1'
	//	with copy initialization of int
	pointer_examplederivedA1->Value = 8;

	//	Check value between 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase2'
	//	and 
	//		variable member 'Value' of 
	//			variable 'pointer_examplederivedA1' 
	//	is same
	SourceAssert(pointer_examplebase2->Value 
		== pointer_examplederivedA1->Value,
		"value between variable member 'Value' of "
		"variable 'pointer_examplebase2' and variable member 'Value' of "
		"variable 'pointer_examplederivedA1' is not same");

	//	Check address between 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase2'
	//	and variable member 'Value' of 
	//		variable 'pointer_examplederivedA1' 
	//	is same
	SourceAssert(&pointer_examplebase2->Value 
		== &pointer_examplederivedA1->Value,
		"address between variable member 'Value' "
		"of variable 'pointer_examplebase2' and variable member 'Value' of "
		"variable 'pointer_examplederivedA1'  is not same");


	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleBase>'
	//	with direct initialize from default initalization of 
	//		class 'experiment::test::simple::json::Memory::ExampleDerivedA'
	Memory::SharedPointerType<ExampleBase> 
		pointer_examplebase3(new ExampleDerivedA);

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleDerivedA> '
	//	with copy initalization from 
	//		function static member 'DynamicPointerCast<
	//			ExampleBase, ExampleDerivedA>' of 
	//				class 'BrainMuscles::test::simple::json::Memory' 
	//	where variable 'pointer_examplebase3' as first argument to
	//		function static member 'DynamicPointerCast<
	//			ExampleBase, ExampleDerivedA>'
	Memory::SharedPointerType<ExampleDerivedA> pointer_examplederivedA2
		= Memory::DynamicPointerCast<ExampleBase, 
			ExampleDerivedA>(pointer_examplebase3);

	//	Assignment to
	//		variable member 'Value' of 
	//			variable 'pointer_examplederivedA2'
	//	 with copy initialization of int
	pointer_examplederivedA2->Value = 16;

	//	Check value between 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase3'
	//	and 
	//		variable member 'Value' of 
	//			variable 'pointer_examplederivedA2' 
	//	is same
	SourceAssert(pointer_examplebase3->Value
		== pointer_examplederivedA2->Value,
		"value between variable member 'Value' of "
		"variable 'pointer_examplebase3' and variable member 'Value' of "
		"variable 'pointer_examplederivedA2' is not same");

	//	Check address between 
	//		variable member 'Value' of 
	//			variable 'pointer_examplebase3'
	//	and 
	//		variable member 'Value' of 
	//			variable 'pointer_examplederivedA2' 
	//	is same
	SourceAssert(&pointer_examplebase3->Value 
		== &pointer_examplederivedA2->Value,
		"address between variable member 'Value' of "
		"variable 'pointer_examplebase3' and variable member 'Value' of "
		"variable 'pointer_examplederivedA2' is not same");

	//	Declare variable of 
	//		class 'BrainMuscles::test::simple::json
	//			::Memory::SharedPointerType<ExampleDerivedB>'
	//	with copy initalization from 
	//		function static member 'DynamicPointerCast<
	//			ExampleBase, ExampleDerivedB>' of 
	//				class BrainMuscles::test::simple::json::Memory
	//	where variable 'pointer_examplebase3' as first argument to 
	//		function static member 'DynamicPointerCast<
	//			ExampleBase, ExampleDerivedB>'
	Memory::SharedPointerType<ExampleDerivedB> pointer_examplederivedB2 =
		Memory::DynamicPointerCast<ExampleBase, 
			ExampleDerivedB>(pointer_examplebase3);

	//	Check variable
	//		'pointer_examplederivedB2'
	//	is null pointer
	SourceAssert(pointer_examplederivedB2 == nullptr,
		"variable 'pointer_examplederivedB2' is not null pointer");
}