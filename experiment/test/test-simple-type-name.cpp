#define _USING_TEST_

#include <cassert>
#include <cstdio>
#include <typeindex>
#include <cstring>
#include <string>

#include "test\simple\type\Name.h"

using namespace std;
using namespace BrainMuscles::test::simple;

char OtherAliasName[] = "T";

namespace std
{
	string to_string(int * value)
	{
		return to_string(*value);
	}
}

int main(int argc, char *argv[])
{
	//experiment class type::Name with TYPE = int and value = void
	{
		assert(strcmp(type::Name<int>::Value().c_str(), "TYPE [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&>::Value().c_str(), "TYPE& [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&&>::Value().c_str(), "TYPE&& [TYPE = int]") == 0);
		assert(strcmp(type::Name<int*>::Value().c_str(), "TYPE* [TYPE = int]") == 0);
		assert(strcmp(type::Name<int**>::Value().c_str(), "TYPE** [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const>::Value().c_str(), "TYPE* const [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const>::Value().c_str(), "TYPE** const [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* volatile>::Value().c_str(), "TYPE* volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** volatile>::Value().c_str(), "TYPE** volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const volatile>::Value().c_str(), "TYPE* const volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const volatile>::Value().c_str(), "TYPE** const volatile [TYPE = int]") == 0);

		assert(strcmp(type::Name<const int>::Value().c_str(), "const TYPE [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&>::Value().c_str(), "const TYPE& [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&&>::Value().c_str(), "const TYPE&& [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int*>::Value().c_str(), "const TYPE* [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int**>::Value().c_str(), "const TYPE** [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const>::Value().c_str(), "const TYPE* const [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const>::Value().c_str(), "const TYPE** const [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* volatile>::Value().c_str(), "const TYPE* volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** volatile>::Value().c_str(), "const TYPE** volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile>::Value().c_str(), "const TYPE* const volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile>::Value().c_str(), "const TYPE** const volatile [TYPE = int]") == 0);

		assert(strcmp(type::Name<volatile int>::Value().c_str(), "volatile TYPE [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&>::Value().c_str(), "volatile TYPE& [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&&>::Value().c_str(), "volatile TYPE&& [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int*>::Value().c_str(), "volatile TYPE* [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int**>::Value().c_str(), "volatile TYPE** [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const>::Value().c_str(), "volatile TYPE* const [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const>::Value().c_str(), "volatile TYPE** const [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile>::Value().c_str(), "volatile TYPE* volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile>::Value().c_str(), "volatile TYPE** volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile>::Value().c_str(), "volatile TYPE* const volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile>::Value().c_str(), "volatile TYPE** const volatile [TYPE = int]") == 0);

		assert(strcmp(type::Name<const volatile int>::Value().c_str(), "const volatile TYPE [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&>::Value().c_str(), "const volatile TYPE& [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&>::Value().c_str(), "const volatile TYPE&& [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int*>::Value().c_str(), "const volatile TYPE* [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int**>::Value().c_str(), "const volatile TYPE** [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const>::Value().c_str(), "const volatile TYPE* const [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const>::Value().c_str(), "const volatile TYPE** const [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile>::Value().c_str(), "const volatile TYPE* volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile>::Value().c_str(), "const volatile TYPE** volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile>::Value().c_str(), "const volatile TYPE* const volatile [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile>::Value().c_str(), "const volatile TYPE** const volatile [TYPE = int]") == 0);

		assert(strcmp(type::Name<int, OtherAliasName>::Value().c_str(), "T [T = int]") == 0);
		assert(strcmp(type::Name<int&, OtherAliasName>::Value().c_str(), "T& [T = int]") == 0);
		assert(strcmp(type::Name<int&&, OtherAliasName>::Value().c_str(), "T&& [T = int]") == 0);
		assert(strcmp(type::Name<int*, OtherAliasName>::Value().c_str(), "T* [T = int]") == 0);
		assert(strcmp(type::Name<int**, OtherAliasName>::Value().c_str(), "T** [T = int]") == 0);
		assert(strcmp(type::Name<int* const, OtherAliasName>::Value().c_str(), "T* const [T = int]") == 0);
		assert(strcmp(type::Name<int** const, OtherAliasName>::Value().c_str(), "T** const [T = int]") == 0);
		assert(strcmp(type::Name<int* volatile, OtherAliasName>::Value().c_str(), "T* volatile [T = int]") == 0);
		assert(strcmp(type::Name<int** volatile, OtherAliasName>::Value().c_str(), "T** volatile [T = int]") == 0);
		assert(strcmp(type::Name<int* const volatile, OtherAliasName>::Value().c_str(), "T* const volatile [T = int]") == 0);
		assert(strcmp(type::Name<int** const volatile, OtherAliasName>::Value().c_str(), "T** const volatile [T = int]") == 0);

		assert(strcmp(type::Name<const int, OtherAliasName>::Value().c_str(), "const T [T = int]") == 0);
		assert(strcmp(type::Name<const int&, OtherAliasName>::Value().c_str(), "const T& [T = int]") == 0);
		assert(strcmp(type::Name<const int&&, OtherAliasName>::Value().c_str(), "const T&& [T = int]") == 0);
		assert(strcmp(type::Name<const int*, OtherAliasName>::Value().c_str(), "const T* [T = int]") == 0);
		assert(strcmp(type::Name<const int**, OtherAliasName>::Value().c_str(), "const T** [T = int]") == 0);
		assert(strcmp(type::Name<const int* const, OtherAliasName>::Value().c_str(), "const T* const [T = int]") == 0);
		assert(strcmp(type::Name<const int** const, OtherAliasName>::Value().c_str(), "const T** const [T = int]") == 0);
		assert(strcmp(type::Name<const int* volatile, OtherAliasName>::Value().c_str(), "const T* volatile [T = int]") == 0);
		assert(strcmp(type::Name<const int** volatile, OtherAliasName>::Value().c_str(), "const T** volatile [T = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile, OtherAliasName>::Value().c_str(), "const T* const volatile [T = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile, OtherAliasName>::Value().c_str(), "const T** const volatile [T = int]") == 0);

		assert(strcmp(type::Name<volatile int, OtherAliasName>::Value().c_str(), "volatile T [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&, OtherAliasName>::Value().c_str(), "volatile T& [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&&, OtherAliasName>::Value().c_str(), "volatile T&& [T = int]") == 0);
		assert(strcmp(type::Name<volatile int*, OtherAliasName>::Value().c_str(), "volatile T* [T = int]") == 0);
		assert(strcmp(type::Name<volatile int**, OtherAliasName>::Value().c_str(), "volatile T** [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const, OtherAliasName>::Value().c_str(), "volatile T* const [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const, OtherAliasName>::Value().c_str(), "volatile T** const [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile, OtherAliasName>::Value().c_str(), "volatile T* volatile [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile, OtherAliasName>::Value().c_str(), "volatile T** volatile [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile, OtherAliasName>::Value().c_str(), "volatile T* const volatile [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile, OtherAliasName>::Value().c_str(), "volatile T** const volatile [T = int]") == 0);

		assert(strcmp(type::Name<const volatile int, OtherAliasName>::Value().c_str(), "const volatile T [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&, OtherAliasName>::Value().c_str(), "const volatile T& [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&, OtherAliasName>::Value().c_str(), "const volatile T&& [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int*, OtherAliasName>::Value().c_str(), "const volatile T* [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int**, OtherAliasName>::Value().c_str(), "const volatile T** [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const, OtherAliasName>::Value().c_str(), "const volatile T* const [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const, OtherAliasName>::Value().c_str(), "const volatile T** const [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile, OtherAliasName>::Value().c_str(), "const volatile T* volatile [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile, OtherAliasName>::Value().c_str(), "const volatile T** volatile [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile, OtherAliasName>::Value().c_str(), "const volatile T* const volatile [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile, OtherAliasName>::Value().c_str(), "const volatile T** const volatile [T = int]") == 0);
	}

	//experiment class type::Name with TYPE = int and value = int
	{
		assert(strcmp(type::Name<int>::Value(4).c_str(), "TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&>::Value(4).c_str(), "TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&&>::Value(4).c_str(), "TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int*>::Value(4).c_str(), "TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int**>::Value(4).c_str(), "TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const>::Value(4).c_str(), "TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const>::Value(4).c_str(), "TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* volatile>::Value(4).c_str(), "TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** volatile>::Value(4).c_str(), "TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const volatile>::Value(4).c_str(), "TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const volatile>::Value(4).c_str(), "TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const int>::Value(4).c_str(), "const TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&>::Value(4).c_str(), "const TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&&>::Value(4).c_str(), "const TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int*>::Value(4).c_str(), "const TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int**>::Value(4).c_str(), "const TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const>::Value(4).c_str(), "const TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const>::Value(4).c_str(), "const TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* volatile>::Value(4).c_str(), "const TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** volatile>::Value(4).c_str(), "const TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile>::Value(4).c_str(), "const TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile>::Value(4).c_str(), "const TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<volatile int>::Value(4).c_str(), "volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&>::Value(4).c_str(), "volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&&>::Value(4).c_str(), "volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int*>::Value(4).c_str(), "volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int**>::Value(4).c_str(), "volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const>::Value(4).c_str(), "volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const>::Value(4).c_str(), "volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile>::Value(4).c_str(), "volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile>::Value(4).c_str(), "volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile>::Value(4).c_str(), "volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile>::Value(4).c_str(), "volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const volatile int>::Value(4).c_str(), "const volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&>::Value(4).c_str(), "const volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&>::Value(4).c_str(), "const volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int*>::Value(4).c_str(), "const volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int**>::Value(4).c_str(), "const volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const>::Value(4).c_str(), "const volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const>::Value(4).c_str(), "const volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile>::Value(4).c_str(), "const volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile>::Value(4).c_str(), "const volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile>::Value(4).c_str(), "const volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile>::Value(4).c_str(), "const volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<int, OtherAliasName>::Value(4).c_str(), "T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&, OtherAliasName>::Value(4).c_str(), "T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&&, OtherAliasName>::Value(4).c_str(), "T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int*, OtherAliasName>::Value(4).c_str(), "T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int**, OtherAliasName>::Value(4).c_str(), "T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const, OtherAliasName>::Value(4).c_str(), "T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const, OtherAliasName>::Value(4).c_str(), "T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* volatile, OtherAliasName>::Value(4).c_str(), "T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** volatile, OtherAliasName>::Value(4).c_str(), "T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const volatile, OtherAliasName>::Value(4).c_str(), "T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const volatile, OtherAliasName>::Value(4).c_str(), "T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const int, OtherAliasName>::Value(4).c_str(), "const T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&, OtherAliasName>::Value(4).c_str(), "const T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&&, OtherAliasName>::Value(4).c_str(), "const T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int*, OtherAliasName>::Value(4).c_str(), "const T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int**, OtherAliasName>::Value(4).c_str(), "const T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const, OtherAliasName>::Value(4).c_str(), "const T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const, OtherAliasName>::Value(4).c_str(), "const T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* volatile, OtherAliasName>::Value(4).c_str(), "const T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** volatile, OtherAliasName>::Value(4).c_str(), "const T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile, OtherAliasName>::Value(4).c_str(), "const T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile, OtherAliasName>::Value(4).c_str(), "const T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<volatile int, OtherAliasName>::Value(4).c_str(), "volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&, OtherAliasName>::Value(4).c_str(), "volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&&, OtherAliasName>::Value(4).c_str(), "volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int*, OtherAliasName>::Value(4).c_str(), "volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int**, OtherAliasName>::Value(4).c_str(), "volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const, OtherAliasName>::Value(4).c_str(), "volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const, OtherAliasName>::Value(4).c_str(), "volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile, OtherAliasName>::Value(4).c_str(), "volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile, OtherAliasName>::Value(4).c_str(), "volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile, OtherAliasName>::Value(4).c_str(), "volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile, OtherAliasName>::Value(4).c_str(), "volatile T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const volatile int, OtherAliasName>::Value(4).c_str(), "const volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&, OtherAliasName>::Value(4).c_str(), "const volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&, OtherAliasName>::Value(4).c_str(), "const volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int*, OtherAliasName>::Value(4).c_str(), "const volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int**, OtherAliasName>::Value(4).c_str(), "const volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const, OtherAliasName>::Value(4).c_str(), "const volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const, OtherAliasName>::Value(4).c_str(), "const volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile, OtherAliasName>::Value(4).c_str(), "const volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile, OtherAliasName>::Value(4).c_str(), "const volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile, OtherAliasName>::Value(4).c_str(), "const volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile, OtherAliasName>::Value(4).c_str(), "const volatile T** const volatile = 4 [T = int]") == 0);
	}

	//experiment class type::Name with TYPE = int and value = const char*
	{
		assert(strcmp(type::Name<int>::Value("4").c_str(), "TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&>::Value("4").c_str(), "TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&&>::Value("4").c_str(), "TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int*>::Value("4").c_str(), "TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int**>::Value("4").c_str(), "TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const>::Value("4").c_str(), "TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const>::Value("4").c_str(), "TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* volatile>::Value("4").c_str(), "TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** volatile>::Value("4").c_str(), "TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const volatile>::Value("4").c_str(), "TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const volatile>::Value("4").c_str(), "TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const int>::Value("4").c_str(), "const TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&>::Value("4").c_str(), "const TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&&>::Value("4").c_str(), "const TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int*>::Value("4").c_str(), "const TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int**>::Value("4").c_str(), "const TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const>::Value("4").c_str(), "const TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const>::Value("4").c_str(), "const TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* volatile>::Value("4").c_str(), "const TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** volatile>::Value("4").c_str(), "const TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile>::Value("4").c_str(), "const TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile>::Value("4").c_str(), "const TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<volatile int>::Value("4").c_str(), "volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&>::Value("4").c_str(), "volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&&>::Value("4").c_str(), "volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int*>::Value("4").c_str(), "volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int**>::Value("4").c_str(), "volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const>::Value("4").c_str(), "volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const>::Value("4").c_str(), "volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile>::Value("4").c_str(), "volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile>::Value("4").c_str(), "volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile>::Value("4").c_str(), "volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile>::Value("4").c_str(), "volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const volatile int>::Value("4").c_str(), "const volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&>::Value("4").c_str(), "const volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&>::Value("4").c_str(), "const volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int*>::Value("4").c_str(), "const volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int**>::Value("4").c_str(), "const volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const>::Value("4").c_str(), "const volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const>::Value("4").c_str(), "const volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile>::Value("4").c_str(), "const volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile>::Value("4").c_str(), "const volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile>::Value("4").c_str(), "const volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile>::Value("4").c_str(), "const volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<int, OtherAliasName>::Value("4").c_str(), "T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&, OtherAliasName>::Value("4").c_str(), "T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&&, OtherAliasName>::Value("4").c_str(), "T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int*, OtherAliasName>::Value("4").c_str(), "T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int**, OtherAliasName>::Value("4").c_str(), "T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const, OtherAliasName>::Value("4").c_str(), "T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const, OtherAliasName>::Value("4").c_str(), "T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* volatile, OtherAliasName>::Value("4").c_str(), "T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** volatile, OtherAliasName>::Value("4").c_str(), "T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const volatile, OtherAliasName>::Value("4").c_str(), "T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const volatile, OtherAliasName>::Value("4").c_str(), "T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const int, OtherAliasName>::Value("4").c_str(), "const T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&, OtherAliasName>::Value("4").c_str(), "const T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&&, OtherAliasName>::Value("4").c_str(), "const T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int*, OtherAliasName>::Value("4").c_str(), "const T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int**, OtherAliasName>::Value("4").c_str(), "const T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const, OtherAliasName>::Value("4").c_str(), "const T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const, OtherAliasName>::Value("4").c_str(), "const T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* volatile, OtherAliasName>::Value("4").c_str(), "const T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** volatile, OtherAliasName>::Value("4").c_str(), "const T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile, OtherAliasName>::Value("4").c_str(), "const T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile, OtherAliasName>::Value("4").c_str(), "const T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<volatile int, OtherAliasName>::Value("4").c_str(), "volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&, OtherAliasName>::Value("4").c_str(), "volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&&, OtherAliasName>::Value("4").c_str(), "volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int*, OtherAliasName>::Value("4").c_str(), "volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int**, OtherAliasName>::Value("4").c_str(), "volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const, OtherAliasName>::Value("4").c_str(), "volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const, OtherAliasName>::Value("4").c_str(), "volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile, OtherAliasName>::Value("4").c_str(), "volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile, OtherAliasName>::Value("4").c_str(), "volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile, OtherAliasName>::Value("4").c_str(), "volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile, OtherAliasName>::Value("4").c_str(), "volatile T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const volatile int, OtherAliasName>::Value("4").c_str(), "const volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&, OtherAliasName>::Value("4").c_str(), "const volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&, OtherAliasName>::Value("4").c_str(), "const volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int*, OtherAliasName>::Value("4").c_str(), "const volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int**, OtherAliasName>::Value("4").c_str(), "const volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const, OtherAliasName>::Value("4").c_str(), "const volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const, OtherAliasName>::Value("4").c_str(), "const volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile, OtherAliasName>::Value("4").c_str(), "const volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile, OtherAliasName>::Value("4").c_str(), "const volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile, OtherAliasName>::Value("4").c_str(), "const volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile, OtherAliasName>::Value("4").c_str(), "const volatile T** const volatile = 4 [T = int]") == 0);
	}

	//experiment class type::Name with TYPE = int and value = int*
	{
		int value_int = 4;

		assert(strcmp(type::Name<int>::Value(&value_int).c_str(), "TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&>::Value(&value_int).c_str(), "TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int&&>::Value(&value_int).c_str(), "TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int*>::Value(&value_int).c_str(), "TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int**>::Value(&value_int).c_str(), "TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const>::Value(&value_int).c_str(), "TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const>::Value(&value_int).c_str(), "TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* volatile>::Value(&value_int).c_str(), "TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** volatile>::Value(&value_int).c_str(), "TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int* const volatile>::Value(&value_int).c_str(), "TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<int** const volatile>::Value(&value_int).c_str(), "TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const int>::Value(&value_int).c_str(), "const TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&>::Value(&value_int).c_str(), "const TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int&&>::Value(&value_int).c_str(), "const TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int*>::Value(&value_int).c_str(), "const TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int**>::Value(&value_int).c_str(), "const TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const>::Value(&value_int).c_str(), "const TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const>::Value(&value_int).c_str(), "const TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* volatile>::Value(&value_int).c_str(), "const TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** volatile>::Value(&value_int).c_str(), "const TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile>::Value(&value_int).c_str(), "const TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile>::Value(&value_int).c_str(), "const TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<volatile int>::Value(&value_int).c_str(), "volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&>::Value(&value_int).c_str(), "volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int&&>::Value(&value_int).c_str(), "volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int*>::Value(&value_int).c_str(), "volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int**>::Value(&value_int).c_str(), "volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const>::Value(&value_int).c_str(), "volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const>::Value(&value_int).c_str(), "volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile>::Value(&value_int).c_str(), "volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile>::Value(&value_int).c_str(), "volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile>::Value(&value_int).c_str(), "volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile>::Value(&value_int).c_str(), "volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<const volatile int>::Value(&value_int).c_str(), "const volatile TYPE = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&>::Value(&value_int).c_str(), "const volatile TYPE& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&>::Value(&value_int).c_str(), "const volatile TYPE&& = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int*>::Value(&value_int).c_str(), "const volatile TYPE* = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int**>::Value(&value_int).c_str(), "const volatile TYPE** = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const>::Value(&value_int).c_str(), "const volatile TYPE* const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const>::Value(&value_int).c_str(), "const volatile TYPE** const = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile>::Value(&value_int).c_str(), "const volatile TYPE* volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile>::Value(&value_int).c_str(), "const volatile TYPE** volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile>::Value(&value_int).c_str(), "const volatile TYPE* const volatile = 4 [TYPE = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile>::Value(&value_int).c_str(), "const volatile TYPE** const volatile = 4 [TYPE = int]") == 0);

		assert(strcmp(type::Name<int, OtherAliasName>::Value(&value_int).c_str(), "T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&, OtherAliasName>::Value(&value_int).c_str(), "T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int&&, OtherAliasName>::Value(&value_int).c_str(), "T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int*, OtherAliasName>::Value(&value_int).c_str(), "T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int**, OtherAliasName>::Value(&value_int).c_str(), "T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const, OtherAliasName>::Value(&value_int).c_str(), "T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const, OtherAliasName>::Value(&value_int).c_str(), "T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* volatile, OtherAliasName>::Value(&value_int).c_str(), "T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** volatile, OtherAliasName>::Value(&value_int).c_str(), "T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int* const volatile, OtherAliasName>::Value(&value_int).c_str(), "T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<int** const volatile, OtherAliasName>::Value(&value_int).c_str(), "T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const int, OtherAliasName>::Value(&value_int).c_str(), "const T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&, OtherAliasName>::Value(&value_int).c_str(), "const T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int&&, OtherAliasName>::Value(&value_int).c_str(), "const T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int*, OtherAliasName>::Value(&value_int).c_str(), "const T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int**, OtherAliasName>::Value(&value_int).c_str(), "const T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const, OtherAliasName>::Value(&value_int).c_str(), "const T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const, OtherAliasName>::Value(&value_int).c_str(), "const T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* volatile, OtherAliasName>::Value(&value_int).c_str(), "const T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** volatile, OtherAliasName>::Value(&value_int).c_str(), "const T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int* const volatile, OtherAliasName>::Value(&value_int).c_str(), "const T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const int** const volatile, OtherAliasName>::Value(&value_int).c_str(), "const T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<volatile int, OtherAliasName>::Value(&value_int).c_str(), "volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&, OtherAliasName>::Value(&value_int).c_str(), "volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int&&, OtherAliasName>::Value(&value_int).c_str(), "volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int*, OtherAliasName>::Value(&value_int).c_str(), "volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int**, OtherAliasName>::Value(&value_int).c_str(), "volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const, OtherAliasName>::Value(&value_int).c_str(), "volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const, OtherAliasName>::Value(&value_int).c_str(), "volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* volatile, OtherAliasName>::Value(&value_int).c_str(), "volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** volatile, OtherAliasName>::Value(&value_int).c_str(), "volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int* const volatile, OtherAliasName>::Value(&value_int).c_str(), "volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<volatile int** const volatile, OtherAliasName>::Value(&value_int).c_str(), "volatile T** const volatile = 4 [T = int]") == 0);

		assert(strcmp(type::Name<const volatile int, OtherAliasName>::Value(&value_int).c_str(), "const volatile T = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&, OtherAliasName>::Value(&value_int).c_str(), "const volatile T& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int&&, OtherAliasName>::Value(&value_int).c_str(), "const volatile T&& = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int*, OtherAliasName>::Value(&value_int).c_str(), "const volatile T* = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int**, OtherAliasName>::Value(&value_int).c_str(), "const volatile T** = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const, OtherAliasName>::Value(&value_int).c_str(), "const volatile T* const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const, OtherAliasName>::Value(&value_int).c_str(), "const volatile T** const = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* volatile, OtherAliasName>::Value(&value_int).c_str(), "const volatile T* volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** volatile, OtherAliasName>::Value(&value_int).c_str(), "const volatile T** volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int* const volatile, OtherAliasName>::Value(&value_int).c_str(), "const volatile T* const volatile = 4 [T = int]") == 0);
		assert(strcmp(type::Name<const volatile int** const volatile, OtherAliasName>::Value(&value_int).c_str(), "const volatile T** const volatile = 4 [T = int]") == 0);

	}

	return 1;
}
