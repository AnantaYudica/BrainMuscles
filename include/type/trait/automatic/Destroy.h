#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				class Destroy;
			}
		}
	}
}

#include "type\trait\Singleton.h"
#include "type\trait\automatic\destroy\Base.h"
#include <vector>

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				class Destroy :
					public Singleton<Destroy, Destroy, Destroy&>
				{
				private:
					Destroy();
					std::vector<destroy::Base&> m_list;
				public:
					~Destroy();
				};

			}
		}
	}
}

#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_H_