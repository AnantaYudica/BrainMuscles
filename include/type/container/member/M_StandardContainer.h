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
				template<typename DEFINITION_TYPE>
				class M_StandardContainer;
			}
		}
	}
}

#include "type\container\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				template<typename DEFINITION_TYPE>
				class M_StandardContainer
				{
				protected:
					typedef typename BrainMuscles::type::container
						::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
					typedef typename DefinitionType::HandleContainerType			StandardContainerType;
				protected:
					M_StandardContainer();
				public:
					virtual ~M_StandardContainer();
					virtual StandardContainerType& StandardContainer() = 0;
					virtual const StandardContainerType& StandardContainer() const = 0;
				};

				template<typename DEFINITION_TYPE>
				M_StandardContainer<DEFINITION_TYPE>::M_StandardContainer()
				{}

				template<typename DEFINITION_TYPE>
				M_StandardContainer<DEFINITION_TYPE>::~M_StandardContainer()
				{}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_M_STANDARDCONTAINER_H_