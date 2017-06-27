#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_

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
					class M_EmplaceBack;
				}
			}
		}
	}
}

#include "type\container\element\IsType.h"
#include "type\container\definition\IsType.h"

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
					class M_EmplaceBack
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::Type						Type;
					protected:
						M_EmplaceBack();
					public:
						virtual ~M_EmplaceBack();
					protected:
						virtual void DerivedEmplaceBack(Type& constructor) = 0;
					public:
						template<typename... ARGS>
						void EmplaceBack(ARGS&&... args);
					};

					template<typename DEFINITION_TYPE>
					M_EmplaceBack<DEFINITION_TYPE>::M_EmplaceBack()
					{}

					template<typename DEFINITION_TYPE>
					M_EmplaceBack<DEFINITION_TYPE>::~M_EmplaceBack()
					{}

					template<typename DEFINITION_TYPE>
					template<typename... ARGS>
					void M_EmplaceBack<DEFINITION_TYPE>::EmplaceBack(ARGS&&... args)
					{
						Type constructor(args...);
						DerivedEmplaceBack(constructor);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACEBACK_H_