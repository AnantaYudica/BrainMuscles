#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace iterator
				{
					template<typename DEFINITION_TYPE>
					class M_Iterator;
				}
			}
		}
	}
}

#include "type/container/definition/IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace iterator
				{
					template<typename DEFINITION_TYPE>
					class M_Iterator
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename DefinitionType::RandomAccessIteratorType		RandomAccessIteratorType;
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
					protected:
						M_Iterator();
					public:
						virtual ~M_Iterator();
						virtual RandomAccessIteratorType Begin() = 0;
						virtual RandomAccessIteratorType End() = 0;
						virtual RandomAccessConstIteratorType Begin() const = 0;
						virtual RandomAccessConstIteratorType End() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_Iterator<DEFINITION_TYPE>::M_Iterator()
					{}

					template<typename DEFINITION_TYPE>
					M_Iterator<DEFINITION_TYPE>::~M_Iterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_