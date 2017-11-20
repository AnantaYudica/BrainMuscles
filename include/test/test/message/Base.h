#ifndef TEST_TEST_MESSAGE_BASE_H_
#define TEST_TEST_MESSAGE_BASE_H_

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			namespace message
			{
				class Base;
			}
		}
	}
}

#include "test/test/Message.h"

namespace BrainMuscles
{
	namespace test
	{
		namespace test
		{
			namespace message
			{
				class Base
				{
				protected:
					Base();
				public:
					virtual ~Base();
					virtual void Call_fprintf(FILE * out) const = 0;
				};

				Base::Base()
				{
				}

				Base::~Base()
				{
				}
			}
		}
	}
}

#endif //!TEST_TEST_MESSAGE_BASE_H_