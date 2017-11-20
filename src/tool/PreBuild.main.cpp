#include "PreBuild.h"

int main(int argc, char *argv[])
{
	tool::PreBuild::GetInstance().Run(argc, argv);
	return tool::PreBuild::GetInstance().Result();
}