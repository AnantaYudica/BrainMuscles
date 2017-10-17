#ifndef EXPERIMENT_TEST_SIMPLE_JSON_MEMORY_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_MEMORY_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				struct Memory;
			}
		}
	}
}

struct experiment::test::simple::json::Memory final :
	public BrainMuscles::test::Source<Memory>
{
	friend class BrainMuscles::test::Source<Memory>;
private:
	Memory() = default;
public:
	static void Test();
private:
	struct ExampleBase;
	struct ExampleDerivedA;
	struct ExampleDerivedB;
};

struct experiment::test::simple::json::Memory::ExampleBase
{
	int Value;
	ExampleBase() = default;
	ExampleBase(const ExampleBase&) = default;
	virtual ~ExampleBase() = default;
};

struct experiment::test::simple::json::Memory::ExampleDerivedA :
	public Memory::ExampleBase
{
	ExampleDerivedA() = default;
	ExampleDerivedA(const ExampleDerivedA&) = default;
};

struct experiment::test::simple::json::Memory::ExampleDerivedB :
	public Memory::ExampleBase
{
	ExampleDerivedB() = default;
	ExampleDerivedB(const ExampleDerivedB&) = default;
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_MEMORY_H_