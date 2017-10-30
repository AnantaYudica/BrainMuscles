#ifndef EXPERIMENT_TEST_SIMPLE_JSON_HELPER_TAG_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_HELPER_TAG_H_

#include "test\Source.h"

namespace experiment
{
	namespace test
	{
		namespace simple
		{
			namespace json
			{
				namespace helper
				{
					struct Tag;
				}
			}
		}
	}
}

struct experiment::test::simple::json::helper::Tag final :
	public BrainMuscles::test::Source<Tag>
{
	friend class BrainMuscles::test::Source<Tag>;
private:
	Tag() = default;
public:
	static void PreTest();
	static void Test();
};

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_HELPER_TAG_H_