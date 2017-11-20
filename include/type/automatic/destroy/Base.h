#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace automatic
		{
			namespace destroy
			{
				class Base;
			}
		}
	}
}

#include "type/automatic/Destroy.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace automatic
		{
			namespace destroy
			{
				class Base
				{
				public:
					typedef void(*FUNCTION_DESTROY_TYPE)();
				protected:
					Base();
				public:
					virtual void Destructor() = 0;
					virtual ~Base();
				};

				Base::Base()
				{}

				Base:: ~Base()
				{}
			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_BASE_H_