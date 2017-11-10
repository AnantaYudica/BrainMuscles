#ifndef TEST_SOURCE_TASK_DEFAULT_H_
#define TEST_SOURCE_TASK_DEFAULT_H_

#ifdef _USING_TEST_SOURCE_

#include <string>

#include "test\Source.h"
#include "test\source\Environment.h"
#include "test\source\Interface.h"
#include "test\source\Result.h"
#include "test\source\task\Interface.h"

#include "test\source\task\default\Stage.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace source
		{
			namespace task
			{
				template<typename IMPLEMENT_TYPE>
				class Default;
			}
		}
	}
}

template<typename IMPLEMENT_TYPE>
class BrainMuscles::test::source::task::Default :
	public BrainMuscles::test::source::task::Interface<Default<IMPLEMENT_TYPE>>
{
private:
	typedef BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE> TestType;
	typedef BrainMuscles::test::source::Environment EnvironmentType;
	typedef BrainMuscles::test::source::Constant ConstantType;
private:
	typedef BrainMuscles::test::source::Interface<
		BrainMuscles::test::Source<IMPLEMENT_TYPE>, IMPLEMENT_TYPE> SourceInterfaceType;
	typedef  BrainMuscles::test::source::interface::Flags SourceInterfaceFlagsType;
public:
	typedef BrainMuscles::test::source::Result ResultType;
private:
	typedef BrainMuscles::test::source::task::default::Stage StageType;
private:
	StageType m_stage;
	static TestType ms_instance;
private:
	Default();
private:
	static StageType& Stage();
private:
	static std::string CallerPreTest();
	static std::string CallerTest();
	static std::string CallerPostTest();
private:
	static void StageBegin();
	static void StagePreTest();
	static void StageTest();
	static void StagePostTest();
	static void StageEnd();
public:
	static bool Runnable();
	static bool Run();
	static ResultType Status();
};

template<typename IMPLEMENT_TYPE>
typename BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::TestType
	ms_instance;

template<typename IMPLEMENT_TYPE>
BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::Default()
{}

template<typename IMPLEMENT_TYPE>
typename BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StageType&
	BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::Stage()
{
	return ms_instance.m_stage;
}

template<typename IMPLEMENT_TYPE>
std::string BrainMuscles::test::source::task::Default<
	IMPLEMENT_TYPE>::CallerPreTest()
{
	return ConstantType::CallerPreTest<IMPLEMENT_TYPE>();
}

template<typename IMPLEMENT_TYPE>
std::string BrainMuscles::test::source::task::Default<
	IMPLEMENT_TYPE>::CallerTest()
{
	return ConstantType::CallerTest<IMPLEMENT_TYPE>();
}

template<typename IMPLEMENT_TYPE>
std::string BrainMuscles::test::source::task::Default<
	IMPLEMENT_TYPE>::CallerPostTest()
{
	return ConstantType::CallerPostTest<IMPLEMENT_TYPE>();
}

template<typename IMPLEMENT_TYPE>
void BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StageBegin()
{
	if (Stage().CanBeginStage())
	{
		Stage().Update(ResultType::not_completed);
	}
}

template<typename IMPLEMENT_TYPE>
void BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StagePreTest()
{
	if (SourceImplementType::Has(SourceInterfaceFlagsType::pre_test)
		&& Stage().CanPreTestStage())
	{
		EnvironmentType::CallerFunction(CallerPreTest());
		InterfaceType::Call(InterfaceFlagsType::pre_test);
		EnvironmentType::PopCallerFunction();
	}
}

template<typename IMPLEMENT_TYPE>
void BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StageTest()
{
	if (SourceInterfaceType::Has(SourceInterfaceFlagsType::test)
		&& Stage().CanTestStage())
	{
		EnvironmentType::CallerFunction(CallerTest());
		InterfaceType::Call(InterfaceFlagsType::test);
		EnvironmentType::PopCallerFunction();
		Stage().Update(ResultType::pass);
	}
}

template<typename IMPLEMENT_TYPE>
void BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StagePostTest()
{
	if (SourceInterfaceType::Has(SourceInterfaceFlagsType::post_test)
		&& Stage().CanPostTestStage())
	{
		EnvironmentType::CallerFunction(CallerPostTest());
		InterfaceType::Call(InterfaceFlagsType::post_test);
		EnvironmentType::PopCallerFunction();
	}
}

template<typename IMPLEMENT_TYPE>
void BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::StageEnd()
{
	Stage().CanEndStage();
}

template<typename IMPLEMENT_TYPE>
bool BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::Runnable()
{
	return SourceInterfaceType::Has(FlagsType::test);
}

template<typename IMPLEMENT_TYPE>
bool BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::Run()
{
	if (Runnable())
	{
		StageBegin();
		StagePreTest();
		StageTest();
		StagePostTest();
		StageEnd();
		return true;
	}
	return false;
}

template<typename IMPLEMENT_TYPE>
typename BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::ResultType
	BrainMuscles::test::source::task::Default<IMPLEMENT_TYPE>::Status()
{
	return Stage();
}


#endif //!_USING_TEST_SOURCE_

#endif //!TEST_SOURCE_TASK_DEFAULT_H_