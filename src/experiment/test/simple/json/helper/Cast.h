#ifndef EXPERIMENT_TEST_SIMPLE_JSON_HELPER_CAST_H_
#define EXPERIMENT_TEST_SIMPLE_JSON_HELPER_CAST_H_

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
					struct Cast;
				}
			}
		}
	}
}

struct experiment::test::simple::json::helper::Cast final :
	public BrainMuscles::test::Source<Cast>
{
	friend class BrainMuscles::test::Source<Cast>;
private:
	Cast() = default;
private:
	template<typename RETURN_TYPE, typename TYPE>
	static bool IsThrowException(
		RETURN_TYPE(*function)(TYPE&) , TYPE& val);
public:
	static void PreTest();
	static void Test();
};

template<typename RETURN_TYPE, typename TYPE>
bool experiment::test::simple::json::helper::Cast::IsThrowException(
	RETURN_TYPE(*function)(TYPE&), TYPE& val)
{
	try
	{
		function(val);
	}
	catch (std::exception e)
	{
		return true;
	}
	return false;
}

#endif //!EXPERIMENT_TEST_SIMPLE_JSON_HELPER_CAST_H_