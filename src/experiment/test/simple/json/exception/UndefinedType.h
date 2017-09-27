#ifndef EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace exception
				{
					struct UndefinedType final :
						public BrainMuscles::test::Source<UndefinedType>
					{
						friend class BrainMuscles::test::Source<UndefinedType>;
					private:
						UndefinedType() = default;
					public:
						static void Test();
						static void StaticTest();
					public:
						struct Int;
					};

					struct UndefinedType::Int
					{
						int Value;
					};
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_