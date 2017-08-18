#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include "test\simple\functional\Function.h"
#include "test\simple\functional\function\Member.h"
#include "test\simple\functional\function\helper\parameter\Element.h"
#include "test\simple\functional\function\helper\parameter\Size.h"

using namespace BrainMuscles::test::simple;
using namespace std;

struct Person
{
	static constexpr int SizeFirstAndLast = 20;
	char m_first_name[SizeFirstAndLast];
	char m_last_name[SizeFirstAndLast];
	unsigned char m_age;

	Person() :
		m_first_name{0},
		m_last_name{0},
		m_age(0)
	{};

	Person(Person& copy) :
		m_age(copy.m_age)
	{
		SetFirstName(copy.m_first_name);
		SetLastName(copy.m_last_name);
	}

	Person(Person&& move) :
		m_age(move.m_age)
	{
		SetFirstName(move.m_first_name);
		SetLastName(move.m_last_name);
	}

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
		printf("call GetFirstName(first = %s, last = %s) const\n", first, last);
		SetFirstName(first);
		SetLastName(last);
	}

	const char * GetFirstName() const
	{
		printf("call GetFirstName() const\n");
		return m_first_name;
	}

	const char * GetLastName() const
	{
		printf("call GetLastName() const\n");
		return m_last_name;
	}

	void SetAge(const unsigned char& age)
	{
		printf("call SetAge(age = %u)\n", age);
		m_age = age;
	}

	unsigned char GetAge()
	{
		printf("call GetAge()\n");
		return m_age;
	}

	unsigned char GetAge() const
	{
		printf("call GetAge() const\n");
		return m_age;
	}

	unsigned char GetAge() volatile
	{
		printf("call  GetAge() volatile\n");
		return m_age;
	}

	unsigned char GetAge() const volatile
	{
		printf("call  GetAge() const volatile\n");
		return m_age;
	}

	template<typename T>
	T AddAge(T value)
	{
		return (m_age += value);
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

template<typename TYPE>
struct TestFunctionMember
{
	typedef TYPE Type;
};

template<typename R, typename T >
TestFunctionMember<R T::*> CallTestFunctionMember(R T::* function_member)
{
	return TestFunctionMember<R T::*>();
}

void TestArgs(int a, int b, int c, int d, int e, int f)
{
	printf("TestArgs(a = %d, b = %d, c = %d, d = %d, e = %d, f = %d)\n", a, b, c, d, e, f);
}

int main(int argc, char *argv[])
{
	//experiment with test\simple\functional\Function.h
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

			//declaration f_callPersonMemberFunction2 and initialization with function CallMemberFunction
			//where T = Person, R = const char*, and ARGS = {}
			functional::Function<const char*, const char*(Person::*)() const, const Person&>
				f_callPersonMemberFunction2(&CallMemberFunction);

			//call printf with format = "First Name from person1 : %s\n" and args = { 
			// {from return call f_callPersonMemberFunction2 with function = &Person::GetFirstName and object = person1}}
			printf("First Name from person1 : %s\n", f_callPersonMemberFunction2(&Person::GetFirstName, person1));

			//call printf with format = "Last Name from person1 : %s\n" and args = { 
			// {from return call f_callPersonMemberFunction2 with function = &Person::GetLastName and object = person1}}
			printf("Last Name form person1 : %s\n", f_callPersonMemberFunction2(&Person::GetLastName, person1));

			//declaration f_callPersonMemberFunction3 and initialization with function CallMemberFunction
			//where T = Person, R = void, and ARGS = {const unsigned char&}
			functional::Function<void, void(Person::*)(const unsigned char&), Person&, const unsigned char&>
				f_callPersonMemberFunction3(&CallMemberFunction);

			//Call f_callPersonMemberFunction1 with 
			//function = &Person::SetAge, object = person1, args = {26}
			f_callPersonMemberFunction3(&Person::SetAge, person1, 26);

			//declaration f_callPersonMemberFunction4 and initialization with function CallMemberFunction
			//where T = Person, R = unsigned char, and ARGS = {}
			functional::Function<unsigned char, unsigned char(Person::*)() const, const Person&>
				f_callPersonMemberFunction4(&CallMemberFunction);

			//call printf with format = "Age from person1 : %u\n" and args = { 
			// {from return call f_callPersonMemberFunction4 with function = &Person::GetAge and object = person1}}
			printf("Age from person1 : %u\n", f_callPersonMemberFunction4(&Person::GetAge, person1));
		}
	}

	//experiment with test\simple\functional\function\Member.h
	{
		//declaration person1
		Person person1;

		//declaration f_callFunctionMemberPersonSetName and initialization with function Person::SetName and &person1
		//where R = void, T = Person and ARGS = {const char*, const char*}
		functional::function::Member<void, Person, const char*, const char*>
			f_callFunctionMemberPersonSetName(&Person::SetName, &person1);

		//declaration f_callFunctionConstMemberPersonGetFirstName and initialization with function Person::GetFirstName and &person1
		//where R = const char*, T = const Person
		functional::function::Member<const char*, const Person>
			f_callFunctionConstMemberPersonGetFirstName(&Person::GetFirstName, &person1);

		//declaration f_callFunctionConstMemberPersonGetLastName and initialization with function Person::GetLastName and &person1
		//where R = const char*, T = const Person
		functional::function::Member<const char*, const Person>
			f_callFunctionConstMemberPersonGetLastName(&Person::GetLastName, &person1);

		//declaration f_copy_f_callFunctionConstMemberPersonGetFirstName and initialization with f_callFunctionConstMemberPersonGetFirstName
		//where R = const char*, T = const Person
		functional::function::Member<const char*, const Person>
			f_copy_f_callFunctionConstMemberPersonGetFirstName(f_callFunctionConstMemberPersonGetFirstName);

		//declaration f_copy_f_callFunctionConstMemberPersonGetFirstName and initialization with std::move(f_callFunctionConstMemberPersonGetLastName)
		//where R = const char*, T = const Person
		functional::function::Member<const char*, const Person>
			f_move_f_callFunctionConstMemberPersonGetLastName = std::move(f_callFunctionConstMemberPersonGetLastName);

		//call f_callFunctionMemberPersonSetName with args = {"test", "name"} 
		f_callFunctionMemberPersonSetName("test", "name");

		//call printf with format = "First Name from person1 : %s\n" and args = {
		// {from return call f_copy_f_callFunctionConstMemberPersonGetFirstName}}
		printf("First Name from person1 : %s\n", f_copy_f_callFunctionConstMemberPersonGetFirstName());

		//call printf with format = "Last Name form person1 : %s\n" and args = {
		// {from returnh call f_move_f_callFunctionConstMemberPersonGetLastName}}
		printf("Last Name form person1 : %s\n", f_move_f_callFunctionConstMemberPersonGetLastName());

		//declaration f_callFunctionFrom_f_callFunctionConstMemberPersonGetFirstName and initialization with f_callFunctionConstMemberPersonGetFirstName
		// where R = const char*
		functional::Function<const char*>
			f_callFunctionFrom_f_callFunctionConstMemberPersonGetFirstName = f_callFunctionConstMemberPersonGetFirstName;

		//declaration f_callFunctionFrom_f_callFunctionConstMemberPersonGetLastName and initialization with f_callFunctionConstMemberPersonGetLastName
		// where R = const char*
		functional::Function<const char*>
			f_callFunctionFrom_f_callFunctionConstMemberPersonGetLastName = f_callFunctionConstMemberPersonGetLastName;

		//call printf with format = "First Name from person1 with function::Function : %s\n" and args = {
		// {from returnh call f_callFunctionFrom_f_callFunctionConstMemberPersonGetFirstName}}
		printf("First Name from person1 with function::Function : %s\n", f_callFunctionFrom_f_callFunctionConstMemberPersonGetFirstName());

		//call printf with format = "Last Name form person1 with function::Function : %s\n" and args = {
		// {from return call f_callFunctionFrom_f_callFunctionConstMemberPersonGetLastName}}
		printf("Last Name form person1 with function::Function : %s\n", f_callFunctionFrom_f_callFunctionConstMemberPersonGetLastName());

		//declaration f_callFunctionMemberPersonSetAge and initialization with &Person::SetAge and &person1
		// where R = void, T = Person, ARGS = {const unsigned char&}
		functional::function::Member<void, Person, const unsigned char&> 
			f_callFunctionMemberPersonSetAge(&Person::SetAge, &person1);

		//call f_callFunctionMemberPersonSetAge with args = {24}
		f_callFunctionMemberPersonSetAge(24);
		
		//declaration f_callFunctionMemberPersonGetAge and initialization with &Person::GetAge and &person1
		// where R = unsigned char, T = Person, ARGS = {}
		functional::function::Member<unsigned char, Person> 
			f_callFunctionMemberPersonGetAge(&Person::GetAge, &person1);

		//call printf with format = "get Age of person1 = %u\n" args = {
		//{from return call f_callFunctionMemberPersonGetAge}}
		printf("get Age of person1 : %u\n", f_callFunctionMemberPersonGetAge());

		//declaration f_callFunctionFrom_f_callFunctionMemberPersonGetAge and initialization with f_callFunctionMemberPersonGetAge
		// where R = unsigned char
		functional::Function<unsigned char>
			f_callFunctionFrom_f_callFunctionMemberPersonGetAge = f_callFunctionMemberPersonGetAge;

		//call printf with format = "get Age of person1 with function::Function : %u\n" args = {
		//{from return call f_callFunctionFrom_f_callFunctionMemberPersonGetAge}}
		printf("get Age of person1 with function::Function : %u\n", f_callFunctionFrom_f_callFunctionMemberPersonGetAge());
		
		//declaration f_callFunctonConstMemberPersonGetAge and initialization with &Person::GetAge and &person1
		// where R = unsigned char, T = const Person, ARGS = {}
		functional::function::Member<unsigned char, const Person> 
			f_callFunctonConstMemberPersonGetAge(&Person::GetAge, &person1);
	
		//call printf with format = "get Age of person1 = %u\n" args = {
		//{from return call f_callFunctonConstMemberPersonGetAge}}
		printf("get Age of person1 : %u\n", f_callFunctonConstMemberPersonGetAge());

		//declaration f_callFunctionFrom_f_callFunctonConstMemberPersonGetAge and initialization with f_callFunctonConstMemberPersonGetAge
		// where R = unsigned char
		functional::Function<unsigned char>
			f_callFunctionFrom_f_callFunctonConstMemberPersonGetAge = f_callFunctonConstMemberPersonGetAge;

		//call printf with format = "get Age of person1 with function::Function : %u\n" args = {
		//{from return call f_callFunctionFrom_f_callFunctonConstMemberPersonGetAge}}
		printf("get Age of person1 with function::Function : %u\n", f_callFunctionFrom_f_callFunctonConstMemberPersonGetAge());

		//declaration f_callFunctionVolatileMemberPersonGetAge and initialization with &Person::GetAge and &person1
		// where R = unsigned char, T = const Person, ARGS = {}
		functional::function::Member<unsigned char, volatile Person> 
			f_callFunctionVolatileMemberPersonGetAge(&Person::GetAge, &person1);

		//call printf with format = "get Age of person1 = %u\n" args = {
		//{from return call f_callFunctonConstMemberPersonGetAge}}
		printf("get Age of person1 = %u\n", f_callFunctionVolatileMemberPersonGetAge());

		//declaration f_callFunctionFrom_f_callFunctionVolatileMemberPersonGetAge and initialization with f_callFunctionVolatileMemberPersonGetAge
		// where R = unsigned char
		functional::Function<unsigned char>
			f_callFunctionFrom_f_callFunctionVolatileMemberPersonGetAge = f_callFunctionVolatileMemberPersonGetAge;

		//call printf with format = "get Age of person1 with function::Function : %u\n" args = {
		//{from return call f_callFunctionFrom_f_callFunctionVolatileMemberPersonGetAge}}
		printf("get Age of person1 with function::Function : %u\n", f_callFunctionFrom_f_callFunctionVolatileMemberPersonGetAge());

		//declaration f_callFunctionConstVolatileMemberPersonGetAge and initialization with &Person::GetAge and &person1
		// where R = unsigned char, T = const Person, ARGS = {}
		functional::function::Member<unsigned char, const volatile Person> 
			f_callFunctionConstVolatileMemberPersonGetAge(&Person::GetAge, &person1);

		//call printf with format = "get Age of person1 = %u\n" args = {
		//{from return call f_callFunctionConstVolatileMemberPersonGetAge}}
		printf("get Age of person1 = %u\n", f_callFunctionConstVolatileMemberPersonGetAge());

		//declaration f_callFunctionFrom_f_callFunctionConstVolatileMemberPersonGetAge and initialization with f_callFunctionConstVolatileMemberPersonGetAge
		// where R = unsigned char
		functional::Function<unsigned char>
			f_callFunctionFrom_f_callFunctionConstVolatileMemberPersonGetAge = f_callFunctionConstVolatileMemberPersonGetAge;

		//call printf with format = "get Age of person1 with function::Function : %u\n" args = {
		//{from return call f_callFunctionFrom_f_callFunctionConstVolatileMemberPersonGetAge}}
		printf("get Age of person1 with function::Function : %u\n", f_callFunctionFrom_f_callFunctionConstVolatileMemberPersonGetAge());

		//declaration f_callFunctionVolatileMemberPersonAddAge and initialization with &Person::AddAge and &person1
		// where R = int, T = Person, ARGS = {int}
		functional::function::Member<int, Person, int>
			f_callFunctionVolatileMemberPersonAddAge(&Person::AddAge, &person1);

		//call printf with format = "add age of person1, age : %d\n" args = {
		//{from return call f_callFunctionVolatileMemberPersonAddAge with args = {2}}}
		printf("add age of person1, age : %d\n", f_callFunctionVolatileMemberPersonAddAge(2));
	}

	//experiment with test\simple\functional\function\helper\parameter\Element.h
	{
		//declaration type Func_1_Type with functional::Function 
		// where RETURN_TYPE = void and ARGS = {char, short, int, long, long long}
		typedef functional::Function<void, char, short, int, long, long long> Func_1_Type;

		//declaration type Func_1_param_1_type with functional::function::helper::parameter::Element
		// where INDEX = 0 and FUNCTION_TYPE = Func_1_Type
		typedef typename functional::function::helper::parameter::Element<0, Func_1_Type>::Type Func_1_param_1_type;

		//call printf with format = "1st parameter function Func_1_Type : %s\n" and args = {
		// {from return call typeid(Func_1_param_1_type).name()}}
		printf("1st parameter function Func_1_Type : %s\n", typeid(Func_1_param_1_type).name());
		
		//declaration type Func_1_param_2_type with functional::function::helper::parameter::Element
		// where INDEX = 1 and FUNCTION_TYPE = Func_1_Type
		typedef typename functional::function::helper::parameter::Element<1, Func_1_Type>::Type Func_1_param_2_type;

		//call printf with format "2nd parameter function Func_1_Type : %s\n" and args = 
		// {from return call typeof(Func_1_param_2_type).name()}
		printf("2nd parameter function Func_1_Type : %s\n", typeid(Func_1_param_2_type).name());
		
		//declaration type Func_1_param_3_type with functional::function::helper::parameter::Element
		// where INDEX = 2 and FUNCTION_TYPE = Func_1_Type
		typedef typename functional::function::helper::parameter::Element<2, Func_1_Type>::Type Func_1_param_3_type;

		//call printf with format "3rd parameter function Func_1_Type : %s\n" and args = 
		// {from return call typeof(Func_1_param_3_type).name()}
		printf("3rd parameter function Func_1_Type : %s\n", typeid(Func_1_param_3_type).name());

		//declaration type Func_1_param_4_type with functional::function::helper::parameter::Element
		// where INDEX = 3 and FUNCTION_TYPE = Func_1_Type
		typedef typename functional::function::helper::parameter::Element<3, Func_1_Type>::Type Func_1_param_4_type;

		//call printf with format "4th parameter function Func_1_Type : %s\n" and args = 
		// {from return call typeof(Func_1_param_4_type).name()}
		printf("4th parameter function Func_1_Type : %s\n", typeid(Func_1_param_4_type).name());

		//declaration type Func_1_param_5_type with functional::function::helper::parameter::Element
		// where INDEX = 4 and FUNCTION_TYPE = Func_1_Type
		typedef typename functional::function::helper::parameter::Element<4, Func_1_Type>::Type Func_1_param_5_type;

		//call printf with format "5th parameter function Func_1_Type : %s\n" and args = 
		// {from return call typeof(Func_1_param_5_type).name()}
		printf("5th parameter function Func_1_Type : %s\n", typeid(Func_1_param_5_type).name());

		//declaration type Func_2_Type with functional::Function 
		// where RETURN_TYPE = void and ARGS = {}
		typedef functional::Function<void> Func_2_Type;

		//error undefined type because index 0 of ARGS is undefied type 
		//typedef typename functional::function::helper::parameter::Element<0, Func_2_Type>::Type Func_1_param_1_type;
	}

	//expriment with test\simple\functional\function\helper\parameter\Size.h
	{
		//declaration type Func_1_Type with functional::Function 
		// where RETURN_TYPE = void and ARGS = {char, short, int, long, long long}
		typedef functional::Function<void, char, short, int, long, long long> Func_1_Type;

		//call printf with format = "size parameter of Func_1_Type : %d\n" and args = {
		// {from get value from functional::function::helper::parameter::Size<Func_1_Type>::Value 
		// where FUNCTION_TYPE = Func_1_Type}}
		printf("size parameter of Func_1_Type : %d\n", functional::function::helper::parameter::Size<Func_1_Type>::Value);
	
		//declaration type Func_2_Type with functional::Function 
		// where RETURN_TYPE = void and ARGS = {}
		typedef functional::Function<void> Func_2_Type;

		//call printf with format = "size parameter of Func_2_Type : %d\n" and args = {
		// {from get value from functional::function::helper::parameter::Size<Func_2_Type>::Value 
		// where FUNCTION_TYPE = Func_2_Type}}
		printf("size parameter of Func_2_Type : %d\n", functional::function::helper::parameter::Size<Func_2_Type>::Value);

	}

	return 1;
}