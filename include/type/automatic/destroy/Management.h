#ifndef TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_
#define TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_

namespace BrainMuscles
{
	namespace type
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

#include "type/automatic/destroy/Base.h"
#include <vector>

namespace BrainMuscles
{
	namespace type
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
					static void Register(Base* base);
					static void Unregister(Base * base);
				};

				Management Management::ms_instance = Management();

				Management::Management()
				{}

				Management::~Management()
				{
					std::vector<Base*> temp;
					std::swap(temp, m_list);
					m_list.clear();
					for (auto i = temp.begin(); i != temp.end(); i++)
					{
						(*i)->Destructor();
					}
				}

				void Management::Register(Base * base)
				{
					auto found = std::find(ms_instance.m_list.begin(), ms_instance.m_list.end(), base);
					if (found == ms_instance.m_list.end())
					{
						ms_instance.m_list.push_back(base);
					}
				}

				void Management::Unregister(Base * base)
				{
					auto found = std::find(ms_instance.m_list.begin(), ms_instance.m_list.end(), base);
					if (found != ms_instance.m_list.end())
					{
						ms_instance.m_list.erase(found);
					}
				}
			}
		}
	}
}


#endif //!TYPE_TRAIT_AUTOMATIC_DESTROY_MANAGEMENT_H_