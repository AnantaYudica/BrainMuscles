#ifndef TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_

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
					class Iterator :
						private BrainMuscles::type::container::vector::Definition<TYPE>::RandomAccessIteratorType,
						public std::vector<TYPE>::iterator
					{
					private:
						typedef BrainMuscles::type::container::vector::Definition<TYPE>	DefinitionType;
						typedef typename DefinitionType::ElementType					ElementType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::Iterator<ElementType>								HandleIteratorType;
					public:
						typedef typename std::vector<TYPE>::const_iterator				StandardHandleType;
						typedef typename DefinitionType::RandomAccessIteratorType		RandomAccessIteratorType;
					private:
						typedef typename RandomAccessIteratorType::HandleBaseType		HandleBaseType;
					public:
						Iterator(const RandomAccessIteratorType& iterator);
					};

					template<typename TYPE>
					Iterator<TYPE>::Iterator(const RandomAccessIteratorType& iterator) :
						HandleBaseType(iterator),
						RandomAccessIteratorType(iterator)
					{
						HandleIteratorType* castToIterator = dynamic_cast<HandleIteratorType*>(&GetHandle());
						if (castToIterator)
						{
							StandardHandleType::operator=(*castToIterator);
						} 
						assert(castToIterator != 0);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_