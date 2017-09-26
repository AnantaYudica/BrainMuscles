#define _USING_TEST_
#define _USING_TEST_SOURCE_

#include "exception\BadCast.h"
#include "exception\UndefinedType.h"
#include "Value.h"

using namespace experiment::test::simple::json;

int main(int argc, char *argv[])
{
	exception::BadCast::RunTest();
	exception::UndefinedType::RunTest();
	Value::RunTest();
	return 1;
}