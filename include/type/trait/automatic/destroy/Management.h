#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			namespace automatic
			{
				namespace destroy
				{
					class Management;
				}
			}
		}
	}
}

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
				namespace destroy
				{
					class Management
					{
					private:
						Management();
						static Management ms_instance;
						std::vector<Base*> m_list;
					public:
						~Management();
						static void Register(Base*);
						//void UnRegister(const destroy::Base&);
					};
				}
			}
		}
	}
}


#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_