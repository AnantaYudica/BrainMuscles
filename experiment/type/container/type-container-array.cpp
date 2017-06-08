#define USING_TEST
#include "test\Test.h"

#include "type\container\Array.h"
#include "type\constant\String.h"
#include "type\Singleton.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <sstream>

typedef BrainMuscles::type::constant::String BM_CString;

class DebugOutput :
	BrainMuscles::type::Singleton<DebugOutput, DebugOutput, DebugOutput&>
{
	friend class BrainMuscles::type::Singleton<DebugOutput, DebugOutput, DebugOutput&>;
private:
	size_t m_shift;
	DebugOutput() :
		m_shift(0)
	{}
public:
	static  BrainMuscles::Test& Function(
		BrainMuscles::Test& tout,
		const BrainMuscles::test::test::info::Base & information,
		const BrainMuscles::test::test::message::Base & message)
	{
		tout << "(line=" << information.Line() << ") : ";
		for (size_t i = 0; i < GetInstance().m_shift; ++i)
		{
			tout << " ";
		}
		tout << message << "\n";
		return tout;
	}
	static void ShiftToNextMessage(size_t val = 1)
	{
		if (val != 0)
		{
			GetInstance().m_shift += val;
		}
	}
	static void ShiftToPrevMessage(size_t val = 1)
	{
		if (val != 0)
		{
			if (GetInstance().m_shift != 0)
			{
				if (GetInstance().m_shift <= val)
				{
					GetInstance().m_shift = 0;
				}
				else
				{
					GetInstance().m_shift -= val;
				}
			}
		}
	}
};

int main()
{	
	BrainMuscles::Test::SetOut(DebugOutput::Function);
	Debug("Experiment For BrainMuscles::type::container::Array<>");
	//Test Empty Array
	Debug("Begin Test, Empty Array : ");
	DebugOutput::ShiftToNextMessage();
	Debug("BrainMuscles::type::container::Array<int, 0> arr_a{}");
	BrainMuscles::type::container::Array<int, 0> arr_a{};

	Debug("arr_a == empty (arr_a.Empty()) ? %s", BM_CString(arr_a.Empty()).Value());
	Debug("Maximum Size of arr_a (arr_a.MaximumSize()) ? %d", arr_a.MaximumSize());
	Debug("Size of arr_a (arr_a.Size()) ? %d", arr_a.Size());
	auto data_of_arr_a = arr_a.Data();
	DebugOutput::ShiftToPrevMessage();
	Debug("End Test Empty Array\n");

	//Test Array with length = 4
	Debug("Begin Test, Array (length = 4) : ");
	DebugOutput::ShiftToNextMessage();
	BrainMuscles::type::container::Array<int, 4> arr_b{ 1, 2, 3, 4 };
	Debug("Array<int,4> arr_b = {%d, %d, %d, %d}", arr_b[0], arr_b[1], arr_b[2], arr_b[3]);
	Debug("arr_b == empty (arr_b.Empty()) ? %s", BM_CString(arr_b.Empty()).Value());
	Debug("Maximum Size of arr_b (arr_b.MaximumSize()) ? %d", arr_b.MaximumSize());
	Debug("Size of arr_b (arr_b.Size()) ? %d", arr_b.Size());
	Debug("Front value arr_b ? %d", arr_b.Front());
	Debug("Back value arr_b ? %d", arr_b.Back());
	Debug("Element of arr_b : ");
	DebugOutput::ShiftToNextMessage();
	for (size_t i = 0; i < arr_b.Size(); ++i)
	{
		Debug("arr_b[%d] = 0x%x(%d)", i, &*(arr_b.Begin() + i), *(arr_b.Begin() + i));
	}
	DebugOutput::ShiftToPrevMessage();
	auto data_of_arr_b = arr_b.Data();
	DebugOutput::ShiftToPrevMessage();
	Debug("End Test\n");

	Debug("   arr_b.Begin()           = %x(%d)", &*arr_b.Begin(),*(arr_b.Begin()));
	Debug("  (arr_b.End() -1)         = %x(%d)", &*(arr_b.End() - 1), *(arr_b.End() - 1));
	Debug("   arr_b.Begin()++         = %x(%d)", &*arr_b.Begin()++, *(arr_b.Begin()++));
	Debug("  (arr_b.End() - 1)--   = %x(%d)", &*(arr_b.End() - 1)--, *((arr_b.End() - 1)--));
	Debug(" ++arr_b.Begin()         = %x(%d)", &*++arr_b.Begin(), *(++arr_b.Begin()));
	Debug("--(arr_b.End() - 1)   = %x(%d)", &*--(arr_b.End() - 1), *(--(arr_b.End() - 1)));
	

	Debug("arr_b.ConstBegin()           = %x(%d)", &*arr_b.ConstBegin(), *(arr_b.ConstBegin()));
	Debug("arr_b.ConstBegin()++         = %x(%d)", &*arr_b.ConstBegin()++, *(arr_b.ConstBegin()++));
	Debug("(arr_b.ConstBegin() + 1)--   = %x(%d)", &*(arr_b.ConstBegin() + 1)--, *((arr_b.ConstBegin() + 1)--));
	Debug("++arr_b.ConstBegin()         = %x(%d)", &*++arr_b.ConstBegin(), *(++arr_b.ConstBegin()));
	Debug("--(arr_b.ConstBegin() + 1)   = %x(%d)", &*--(arr_b.ConstBegin() + 1), *(--(arr_b.ConstBegin() + 1)));
	Debug("arr_b.ConstEnd() - 1         = %x(%d)", &*(arr_b.ConstEnd() - 1), *(arr_b.ConstEnd() - 1));

	Debug("arr_b.ReverseBegin()           = %x(%d)", &*arr_b.ReverseBegin(), *(arr_b.ReverseBegin()));
	Debug("arr_b.ReverseBegin()++         = %x(%d)", &*arr_b.ReverseBegin()++, *(arr_b.ReverseBegin()++));
	Debug("(arr_b.ReverseBegin() + 1)--   = %x(%d)", &*(arr_b.ReverseBegin() + 1)--, *((arr_b.ReverseBegin() + 1)--));
	Debug("++arr_b.ReverseBegin()         = %x(%d)", &*++arr_b.ReverseBegin(), *(++arr_b.ReverseBegin()));
	Debug("--(arr_b.ReverseBegin() + 1)   = %x(%d)", &*--(arr_b.ReverseBegin() + 1), *(--(arr_b.ReverseBegin() + 1)));
	Debug("arr_b.ReverseEnd() - 1         = %x(%d)", &*(arr_b.ReverseEnd() - 1), *(arr_b.ReverseEnd() - 1));

	Debug("arr_b.ConstReverseBegin()           = %x(%d)", &*arr_b.ConstReverseBegin(), *(arr_b.ConstReverseBegin()));
	Debug("arr_b.ConstReverseBegin()++         = %x(%d)", &*arr_b.ConstReverseBegin()++, *(arr_b.ConstReverseBegin()++));
	Debug("(arr_b.ConstReverseBegin() + 1)--   = %x(%d)", &*(arr_b.ConstReverseBegin() + 1)--, *((arr_b.ConstReverseBegin() + 1)--));
	Debug("++arr_b.ConstReverseBegin()         = %x(%d)", &*++arr_b.ConstReverseBegin(), *(++arr_b.ConstReverseBegin()));
	Debug("--(arr_b.ConstReverseBegin() + 1)   = %x(%d)", &*--(arr_b.ConstReverseBegin() + 1), *(--(arr_b.ConstReverseBegin() + 1)));
	Debug("arr_b.ConstReverseEnd() - 1         = %x(%d)", &*(arr_b.ConstReverseEnd() - 1), *(arr_b.ConstReverseEnd() - 1));

	BrainMuscles::type::container::Array<int, 4> arr_c;
	arr_b.Swap(arr_c);
	Debug("arr_b = [%d, %d, %d, %d]", arr_b[0], arr_b[1], arr_b[2], arr_b[3]);
	Debug("arr_c = [%d, %d, %d, %d]", arr_c[0], arr_c[1], arr_c[2], arr_c[3]);

	arr_b.Fill(10);
	Debug("arr_b = [%d, %d, %d, %d]", arr_b[0], arr_b[1], arr_b[2], arr_b[3]);

	std::srand(std::time(NULL));

	BrainMuscles::type::container::Array<int, 100> arr_d;

	std::stringstream string_in; 
	string_in << "Array<int, 100> arr_d = {";
	for (size_t i = 0; i < 100; ++i)
	{
		arr_d[i] = rand() % 1000;
		if (i != 0)
		{
			string_in << ", ";
		}
		string_in << arr_d[i];
	}
	string_in << "}";
	Debug(string_in.str().c_str());
	std::sort(arr_d.Begin(), arr_d.End());
	string_in.str("");
	string_in << "arr_d = [";
	for (size_t i = 0; i < 100; ++i)
	{
		if (i != 0)
		{
			string_in << ", ";
		}
		string_in << arr_d[i];
	}
	string_in << "]";
	Debug(string_in.str().c_str());
	return 1;
}