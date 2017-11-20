#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_


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
					class M_ConstIterator;
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
					class M_ConstIterator
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type			DefinitionType;
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
					protected:
						M_ConstIterator();
					public:
						virtual ~M_ConstIterator();
						virtual RandomAccessConstIteratorType ConstBegin() = 0;
						virtual RandomAccessConstIteratorType ConstEnd() = 0;
					};

					template<typename DEFINITION_TYPE>
					M_ConstIterator<DEFINITION_TYPE>::M_ConstIterator()
					{}

					template<typename DEFINITION_TYPE>
					M_ConstIterator<DEFINITION_TYPE>::~M_ConstIterator()
					{}
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_