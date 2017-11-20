#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename DEFINITION_TYPE>
					class M_PushBack;
				}
			}
		}
	}
}

#include "type/container/element/IsType.h"
#include "type/container/definition/IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename DEFINITION_TYPE>
					class M_PushBack
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type									ElementType;
						typedef typename ElementType::Type								Type;
					protected:
						M_PushBack();
					public:
						virtual ~M_PushBack();
					public:
						virtual void PushBack(const Type& val) = 0;
						virtual void PushBack(Type&& val) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_PushBack<DEFINITION_TYPE>::M_PushBack()
					{}

					template<typename DEFINITION_TYPE>
					M_PushBack<DEFINITION_TYPE>::~M_PushBack()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_PUSHBACK_H_