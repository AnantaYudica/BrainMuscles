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
				struct Memory final :
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

				struct Memory::ExampleBase
				{
					int Value;
					ExampleBase() = default;
					ExampleBase(const ExampleBase&) = default;
					virtual ~ExampleBase() = default;
				};

				struct Memory::ExampleDerivedA : 
					public Memory::ExampleBase
				{
					ExampleDerivedA() = default;
					ExampleDerivedA(const ExampleDerivedA&) = default;
				};

				struct Memory::ExampleDerivedB : 
					public Memory::ExampleBase
				{
					ExampleDerivedB() = default;
					ExampleDerivedB(const ExampleDerivedB&) = default;
				};
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_MEMORY_H_