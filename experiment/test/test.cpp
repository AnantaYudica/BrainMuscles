
#define USING_TEST
#include "test\Test.h"

int main()
{
	//Debug With string
	Debug("==============test=============");
	const char * const var_a = "test out out";
	Debug(var_a);
	Debug("%s", var_a);
	Debug("%d %d", 1, 2);
	return 1;
}