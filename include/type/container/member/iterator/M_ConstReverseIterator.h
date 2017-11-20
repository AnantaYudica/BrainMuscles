#ifndef TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_


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
					class M_ConstReverseIterator;
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
					class M_ConstReverseIterator
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type					DefinitionType;
						typedef typename DefinitionType::RandomAccessConstReverseIteratorType	RandomAccessConstReverseIteratorType;
					protected:
						M_ConstReverseIterator();
					public:
						virtual ~M_ConstReverseIterator();
						virtual RandomAccessConstReverseIteratorType ConstReverseBegin() = 0;
						virtual RandomAccessConstReverseIteratorType ConstReverseEnd() = 0;
					};

					template<typename DEFINITION_TYPE>
					M_ConstReverseIterator<DEFINITION_TYPE>::M_ConstReverseIterator()
					{}

					template<typename DEFINITION_TYPE>
					M_ConstReverseIterator<DEFINITION_TYPE>::~M_ConstReverseIterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_