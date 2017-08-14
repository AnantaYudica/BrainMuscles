#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
#include "test\simple\functional\Function.h"

using namespace BrainMuscles::test::simple;
using namespace std;

struct Person
{
	static constexpr int SizeFirstAndLast = 20;
	char m_first_name[SizeFirstAndLast];
	char m_last_name[SizeFirstAndLast];
	unsigned char m_age;

	void SetFirstName(const char * first)
	{
		copy(first, first + strlen(first) + 1, m_first_name);
	}

	void SetLastName(const char * last)
	{
		copy(last, last + strlen(last) + 1, m_last_name);
	}

	void SetName(const char * first, const char * last)
	{
		SetFirstName(first);
		SetLastName(last);
	}

	const char * GetFirstName() const
	{
		return m_first_name;
	}

	const char * GetLastName() const
	{
		return m_last_name;
	}

	void SetAge(const unsigned char& age)
	{
		m_age = age;
	}

	unsigned char GetAge() const
	{
		return m_age;
	}
};

template<typename T, typename R, typename... ARGS>
R CallMemberFunction(R (T::*function)(ARGS...), T& object, ARGS... args)
{
	return (object.*function)(args...);
}

template<typename T, typename R, typename... ARGS>
R CallMemberFunction(R(T::*function)(ARGS...) const, const T& object, ARGS... args)
{
	return (object.*function)(args...);
}

template<typename... ARGS>
int CallPrintf(const char * format, ARGS... args)
{
	return printf(format, args...);
}

template<typename T>
int PrintInteger(const T& value)
{
	return printf("PrintInteger : %d\n", value);
}

int PrintString(const char* str)
{
	return printf("PrintString : %s\n", str);
}

int main(int argc, char *argv[])
{
	{
		//declaration f_PrintIntegerInt and initializing with function PrintInteger where T = int
		functional::Function<int, const int&> f_PrintIntegerInt(&PrintInteger);
		//call f_PrintIntegerInt with value = 4
		f_PrintIntegerInt(4);
	}

	{
		//declaration f_PrintString and initializing with function PrintString
		functional::Function<int, const char*> f_PrintString(&PrintString);
		//call f_PrintString with str = "test print with PrintString"
		f_PrintString("test print with PrintString");
	}

	{
		//declaration f_CallPrintf and initializing with function CallPrintf where ARGS = {int}
		functional::Function<int, const char*, int> f_CallPrintf(&CallPrintf);
		//call f_CallPrintf with format = "call CallPrintf with integer %d\n" and args = {4}
		f_CallPrintf("call CallPrintf with integer %d\n", 4);
	}

	{
		//declaration f_printf and initializing with function printf
		functional::Function<int, const char*, int> f_printf(&printf);
		//call f_printf with format = "call printf with integer %d\n" and args = {4}
		f_printf("call printf with integer %d\n", 4);
	}

	{
		//declaration person1
		Person person1;

		//declaration f_callPersonMemberFunction1 and initializing with function CallMemberFunction 
		//where T = Person, R = void and ARGS = {const char *, const char *}
		functional::Function<void, decltype(&Person::SetName), Person&, const char *, const char * >
			f_callPersonMemberFunction1(&CallMemberFunction);
		//Call f_callPersonMemberFunction1 with 
		//function = &Person::SetName, object = person1, args = {"person1", "test"}
		f_callPersonMemberFunction1(&Person::SetName, person1, "person1", "test");

		//declaration f_callPersonMemberFunction2 and initionalize with function CallMemberFunction
		//where T = Person, R = const char*, and ARGS = {}
		functional::Function<const char*, const char*(Person::*)() const, const Person&>
			f_callPersonMemberFunction2(&CallMemberFunction);

		//call printf with format = "First Name from person1 : %s\n" and args = { 
		// {from return call f_callPersonMemberFunction2 with function = &Person::GetFirstName and object = person1}}
		printf("First Name from person1 : %s\n", f_callPersonMemberFunction2(&Person::GetFirstName, person1));
		
		//call printf with format = "Last Name from person1 : %s\n" and args = { 
		// {from return call f_callPersonMemberFunction2 with function = &Person::GetLastName and object = person1}}
		printf("Last Name form person1 : %s\n", f_callPersonMemberFunction2(&Person::GetLastName, person1));

		//declaration f_callPersonMemberFunction3 and initionalize with function CallMemberFunction
		//where T = Person, R = void, and ARGS = {const unsigned char&}
		functional::Function<void, void(Person::*)(const unsigned char&), Person&, const unsigned char&>
			f_callPersonMemberFunction3(&CallMemberFunction);

		//Call f_callPersonMemberFunction1 with 
		//function = &Person::SetAge, object = person1, args = {26}
		f_callPersonMemberFunction3(&Person::SetAge, person1, 26);

		//declaration f_callPersonMemberFunction4 and initionalize with function CallMemberFunction
		//where T = Person, R = unsigned char, and ARGS = {}
		functional::Function<unsigned char, unsigned char(Person::*)() const, const Person&>
			f_callPersonMemberFunction4(&CallMemberFunction);

		//call printf with format = "Age from person1 : %u\n" and args = { 
		// {from return call f_callPersonMemberFunction4 with function = &Person::GetAge and object = person1}}
		printf("Age from person1 : %u\n", f_callPersonMemberFunction4(&Person::GetAge, person1));

	}
	return 1;
}