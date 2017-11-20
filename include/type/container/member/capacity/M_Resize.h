#ifndef TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_
#define TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace capacity
				{
					template<typename DEFINITION_TYPE>
					class M_Resize;
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
				namespace capacity
				{
					template<typename DEFINITION_TYPE>
					class M_Resize
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type		DefinitionType;
						typedef typename BrainMuscles::type::container
							::element::IsType<typename DefinitionType
							::ElementType, true>::Type								ElementType;
						typedef typename ElementType::SizeType						SizeType;
						typedef typename ElementType::ConstLeftValueReferenceType	ConstLeftValueReferenceType;
					protected:
						M_Resize();
					public:
						virtual ~M_Resize();
						virtual void Resize(SizeType n) = 0;
						virtual void Resize(SizeType n, ConstLeftValueReferenceType val) = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Resize<DEFINITION_TYPE>::M_Resize()
					{}

					template<typename DEFINITION_TYPE>
					M_Resize<DEFINITION_TYPE>::~M_Resize()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_CAPACITY_M_RESIZE_H_