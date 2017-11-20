#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_

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
					class M_ReverseIterator;
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
					class M_ReverseIterator
					{
					protected:
						typedef typename BrainMuscles::type::container
							::definition::IsType<DEFINITION_TYPE, true>::Type					DefinitionType;
						typedef typename DefinitionType::RandomAccessReverseIteratorType		RandomAccessReverseIteratorType;
						typedef typename DefinitionType::RandomAccessConstReverseIteratorType	RandomAccessConstReverseIteratorType;
					protected:
						M_ReverseIterator();
					public:
						virtual ~M_ReverseIterator();
						virtual RandomAccessReverseIteratorType ReverseBegin() = 0;
						virtual RandomAccessReverseIteratorType ReverseEnd() = 0;
						virtual RandomAccessConstReverseIteratorType ReverseBegin() const = 0;
						virtual RandomAccessConstReverseIteratorType ReverseEnd() const = 0;
					};

					template<typename DEFINITION_TYPE>
					M_ReverseIterator<DEFINITION_TYPE>::M_ReverseIterator()
					{}

					template<typename DEFINITION_TYPE>
					M_ReverseIterator<DEFINITION_TYPE>::~M_ReverseIterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_