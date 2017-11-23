#ifndef EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_

#include "test/Source.h"

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
					struct UndefinedType;
				}
			}
		}
	}
}

struct experiment::test::simple::json::exception::UndefinedType final :
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

struct experiment::test::simple::json::exception::UndefinedType::Int
{
	int Value;
};

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
					std::string 
					to_string(const typename UndefinedType::Int& obj);
				}
			}
		}
	}
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_UNDEFINEDTYPE_H_