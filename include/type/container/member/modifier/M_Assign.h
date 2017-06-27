#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_

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
					template <typename DEFINITION_TYPE>
					class M_Assign;
				}
			}
		}
	}
}

#include <initializer_list>
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
					template <typename DEFINITION_TYPE>
					class M_Assign
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type		DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type								ElementType;
						typedef typename DefinitionType::InputConstIteratorType		InputConstIteratorType;
						typedef typename ElementType::Type							Type;
						typedef typename ElementType::DifferenceType				DifferenceType;
					protected:
						M_Assign();
					public:
						virtual ~M_Assign();
						virtual void Assign(InputConstIteratorType first, InputConstIteratorType last) = 0;
						virtual void Assign(Type* first, Type* last) = 0;
						virtual void Assign(DifferenceType n, const DifferenceType& val) = 0;
						virtual void Assign(std::initializer_list<Type> il) = 0;
					};

					template <typename DEFINITION_TYPE>
					M_Assign<DEFINITION_TYPE>::M_Assign()
					{}

					template <typename DEFINITION_TYPE>
					M_Assign<DEFINITION_TYPE>::~M_Assign()
					{}
				}
			}
		}
	}
}





#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_