#define USING_TEST
#include "Test.h"

BrainMuscles::Test& PrintOutput_a(
	BrainMuscles::Test& tout, 
	const BrainMuscles::test::test::info::Base & information, 
	const BrainMuscles::test::test::message::Base & message)
{
	tout << "============Output With Customize============\n";
	tout << " Absolute Path : " << information.AbsolutePath() << "\n";
	tout << " Relative Path : " << information.RelativePath() << "\n";
	tout << " Filename      : " << information.Filename() << "\n";
	tout << " Name          : " << information.Name() << "\n";
	tout << " Extension     : " << information.Extension() << "\n";
	tout << " Line          : " << information.Line() << "\n";
	tout << " Message       : " << message << "\n";
	tout << "=============================================\n";
	return tout;
}

int main()
{
	//test Output Debug with Right value
	Debug("output with right value");

	//test Output Debug with Left value
	const char * const var_a = "output var_a";
	Debug(var_a);

	//test Output Debug with Format Right value
	Debug("%s", var_a);

	Debug("%d %d", 1, 2);

	//test Output Debug with Format Left Value
	const char * const var_b = "output var_b (%s, %d, %f)";
	Debug(var_b, "string", 123, 0.234);
	
	//test Output Debug with Pointer & reference
	int * var_c = new int(4);
	int& var_d = *var_c;
	Debug("var_c = %x %d", var_c, *var_c);
	Debug("var_d = %x %d", &var_d, var_d);
	delete var_c;

	//test Output Debug with Output Customize
	BrainMuscles::Test::SetOut(&PrintOutput_a);
	Debug("test output");

	//test Output Debug with Output Customize (with lambda function)
	BrainMuscles::Test::SetOut([](BrainMuscles::Test& tout,
			const BrainMuscles::test::test::info::Base & information,
			const BrainMuscles::test::test::message::Base & message) -> BrainMuscles::Test& 
		{
			tout << information.AbsolutePath() << information.Filename();
			tout << " (line=" << information.Line() << ") : " << message << "\n";
			return tout;
		});
	Debug("test output with lambda function");

	//test output Debug with output file
	BrainMuscles::Test::OutFile("output.txt");
	Debug("test output.txt")
	return 1;
}