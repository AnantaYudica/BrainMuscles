#ifndef TYPE_CONTAINER_MEMBER_M_STANDARTCONTAINER_H_
#define TYPE_CONTAINER_MEMBER_M_STANDARTCONTAINER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				template<typename CONTAINER_TYPE>
				class M_StandartContainer;
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
				class M_StandartContainer
				{
				protected:
					M_StandartContainer();
				public:
					virtual ~M_StandartContainer();
					virtual STD_CONTAINER_TYPE& StdContainer() = 0;
					virtual const STD_CONTAINER_TYPE& StdContainer() const = 0;
				};

				template<typename STD_CONTAINER_TYPE>
				M_StandartContainer<STD_CONTAINER_TYPE>::M_StandartContainer()
				{}

				template<typename STD_CONTAINER_TYPE>
				M_StandartContainer<STD_CONTAINER_TYPE>::~M_StandartContainer()
				{}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_M_STANDARTCONTAINER_H_