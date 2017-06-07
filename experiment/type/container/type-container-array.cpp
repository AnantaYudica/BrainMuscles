#define USING_TEST
#include "test\Test.h"

#include "type\container\Array.h"

int main()
{
	Debug("ARRAY");
	BrainMuscles::type::container::Array<int, 4> arr_0{ 1, 2, 3, 4 };
	Debug("Array<int,4> = {%d, %d, %d, %d,}", arr_0[0], arr_0[1], arr_0[2], arr_0[3]);
	return 1;
}