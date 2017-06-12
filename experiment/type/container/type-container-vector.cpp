#define USING_TEST
#include "test\Test.h"

#include "type\container\Vector.h"
#include "type\constant\String.h"
#include <algorithm>

int main()
{
	BrainMuscles::Test::SetOut([](
		BrainMuscles::Test& tout,
		const BrainMuscles::test::test::info::Base & information,
		const BrainMuscles::test::test::message::Base & message)->BrainMuscles::Test& {
		tout << "Line(" << information.Line() << ") : " << message << "\n";
		return tout;
	});
	Debug("Vector");
	BrainMuscles::type::container::Vector<int> vec_a{2, 3, 4, 1};
	auto it_vec_a = vec_a.Begin();
	auto rit_vec_a = vec_a.ReverseBegin();
	Debug("different End - Begin : %d", vec_a.End() - vec_a.Begin());
	for (auto c_rit = vec_a.ConstReverseBegin(); c_rit != vec_a.ConstReverseEnd(); ++c_rit)
	{
		Debug("%d", *c_rit);
		//if (c_rit + 1 != vec_a.ConstReverseEnd())
		{
			Debug("diference size : %d", vec_a.ConstReverseEnd() - c_rit);
			Debug("Iterator = 0x%x {%d}", &*(it_vec_a), *it_vec_a);
			Debug("Reverse Iterator = 0x%x {%d}", &*(rit_vec_a), *rit_vec_a);
			it_vec_a++;
			++rit_vec_a;
		}

	}
	BrainMuscles::type::container::Vector<int>::Iterator it_mid_vec_a = vec_a.Begin() + (vec_a.End() - vec_a.Begin()) / 2;
	Debug("Iterator Mid : 0x%x {%d}", &*(it_mid_vec_a), *it_mid_vec_a);
	BrainMuscles::type::container::Vector<int>::Iterator it_0_vec_a = vec_a.Begin();
	//_Partition_by_median_guess_unchecked(vec_a.Begin(), vec_a.End(), std::less<>());
	//_Guess_median_unchecked(vec_a.Begin(), it_mid_vec_a, vec_a.End(), std::less<>());
	std::sort(vec_a.Begin(), vec_a.End());
	Debug("diff vec_a reverse iterator : %s", BrainMuscles::type::constant::String(vec_a.ReverseEnd() > vec_a.ReverseBegin()).Value());
	Debug("vec_a = [%d, %d, %d, %d]", vec_a[0], vec_a[1], vec_a[2], vec_a[3]);
	for (auto it = vec_a.ReverseBegin(); it != vec_a.ReverseEnd(); ++it)
	{
		Debug("Reverse Iterator = 0x%x {%d}", &*(it), *it);
	}
	std::sort(vec_a.ReverseBegin(), vec_a.ReverseEnd());
	Debug("vec_a = [%d, %d, %d, %d]", vec_a[0], vec_a[1], vec_a[2], vec_a[3]);
	return 1;
}