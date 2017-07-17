#ifndef TEST_SIMPLE_MEMORY_H_
#define TEST_SIMPLE_MEMORY_H_

#include "test\Configure.h"

#if defined(_USING_TEST_)

namespace BrainMuscles
{
	namespace test
	{
		namespace simple 
		{
			class Memory final
			{
			private:
				static Memory ms_instance;
			private:
				Memory();
			};

			Memory Memory::ms_instance = Memory();

			Memory::Memory()
			{
				
			}
		}
	}
}

#endif

#endif //!TEST_SIMPLE_MEMORY_H_