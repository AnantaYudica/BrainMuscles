#define _USING_TEST_SOURCE_

#include "exception\BadCast.h"

using namespace experiment::test::simple::json;

int main(int argc, char *argv[])
{
	exception::BadCast::RunTest();
	return 1;
}