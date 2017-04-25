#ifndef TYPE_TRAIT_AUTODESTROY_H_
#define TYPE_TRAIT_AUTODESTROY_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			class AutoDestroy;
		}
	}

}

#include "type\trait\Singleton.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			class AutoDestroy :
				public Singleton<AutoDestroy, AutoDestroy, AutoDestroy&>
			{
			private:
				AutoDestroy();
			public:
				~AutoDestroy();
			};
		}
	}
}

#endif //!TYPE_TRAIT_AUTODESTROY_H_