#define _USING_TEST_
#include "test/File.h"

#include <cstdio>

using namespace std;
using namespace BrainMuscles;

int main(int argc, char *argv[])
{
	test::File::SetInfo(stdout);
	test::File::SetError(stderr);

	return 1;
}