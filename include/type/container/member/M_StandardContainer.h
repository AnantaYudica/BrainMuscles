#ifndef TYPE_CONTAINER_MEMBER_M_STANDARDCONTAINER_H_
#define TYPE_CONTAINER_MEMBER_M_STANDARDCONTAINER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				template<typename STD_CONTAINER_TYPE>
				class M_StandardContainer;
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				template<typename STD_CONTAINER_TYPE>
				class M_StandardContainer
				{
				protected:
					M_StandardContainer();
				public:
					virtual ~M_StandardContainer();
					virtual STD_CONTAINER_TYPE& StandardContainer() = 0;
					virtual const STD_CONTAINER_TYPE& StandardContainer() const = 0;
				};

				template<typename STD_CONTAINER_TYPE>
				M_StandardContainer<STD_CONTAINER_TYPE>::M_StandardContainer()
				{}

				template<typename STD_CONTAINER_TYPE>
				M_StandardContainer<STD_CONTAINER_TYPE>::~M_StandardContainer()
				{}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_M_STANDARDCONTAINER_H_