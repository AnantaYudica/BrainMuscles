#ifndef TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_

#include <cstddef>
#include <cassert>
#include <vector>

#include "type/container/vector/Definition.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace standard
			{
				namespace vector
				{
					template<typename TYPE>
					class ReverseIterator :
						private BrainMuscles::type::container::vector::Definition<TYPE>::RandomAccessReverseIteratorType,
						public std::vector<TYPE>::reverse_iterator
					{
					private:
						typedef BrainMuscles::type::container::vector::Definition<TYPE>	DefinitionType;
						typedef typename DefinitionType::ElementType					ElementType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::ReverseIterator<ElementType>						HandleReverseIteratorType;
					public:
						typedef typename std::vector<TYPE>::const_reverse_iterator		StandardHandleType;
						typedef typename DefinitionType
							::RandomAccessReverseIteratorType							RandomAccessReverseIteratorType;
					private:
						typedef typename RandomAccessReverseIteratorType
							::HandleBaseType											HandleBaseType;
					public:
						ReverseIterator(const RandomAccessReverseIteratorType& reverse_iterator);
					};

					template<typename TYPE>
					ReverseIterator<TYPE>::ReverseIterator(const RandomAccessReverseIteratorType& reverse_iterator) :
						HandleBaseType(reverse_iterator),
						RandomAccessReverseIteratorType(reverse_iterator)
					{
						HandleReverseIteratorType* castToReverseIterator = dynamic_cast<HandleReverseIteratorType*>(&GetHandle());
						if (castToReverseIterator)
						{
							StandardHandleType::operator=(*castToReverseIterator);
						}
						assert(castToReverseIterator != 0);
					}

				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_