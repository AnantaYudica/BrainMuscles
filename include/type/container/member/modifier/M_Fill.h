#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_

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
					class M_Fill;
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
					class M_Fill
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type	DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type							ElementType;
						typedef typename ElementType::Type						Type;
					protected:
						M_Fill();
					public:
						virtual ~M_Fill();
						virtual void Fill(const Type& value) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Fill<DEFINITION_TYPE>::M_Fill()
					{}

					template<typename DEFINITION_TYPE>
					M_Fill<DEFINITION_TYPE>::~M_Fill()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_FILL_H_