#ifndef TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_

#include <cstddef>
#include <cassert>
#include <vector>

#include "type\container\vector\Definition.h"

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
					class ConstReverseIterator :
						private BrainMuscles::type::container::vector::Definition<TYPE>::RandomAccessConstReverseIteratorType,
						public std::vector<TYPE>::const_reverse_iterator
					{
					private:
						typedef BrainMuscles::type::container::vector::Definition<TYPE>	DefinitionType;
						typedef typename DefinitionType::ElementType					ElementType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::ConstReverseIterator<ElementType>					HandleConstReverseIteratorType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::ReverseIterator<ElementType>						HandleReverseIteratorType;
					public:
						typedef typename std::vector<TYPE>::const_reverse_iterator		StandardHandleType;
						typedef typename DefinitionType
							::RandomAccessConstReverseIteratorType						RandomAccessConstReverseIteratorType;
					private:
						typedef typename RandomAccessConstReverseIteratorType
							::HandleBaseType											HandleBaseType;
					public:
						ConstReverseIterator(const RandomAccessConstReverseIteratorType& const_reverse_iterator);
					};

					template<typename TYPE>
					ConstReverseIterator<TYPE>::ConstReverseIterator(const RandomAccessConstReverseIteratorType& const_reverse_iterator) :
						HandleBaseType(const_reverse_iterator),
						RandomAccessConstReverseIteratorType(const_reverse_iterator)
					{
						HandleConstReverseIteratorType* castToConstReverseIterator = dynamic_cast<HandleConstReverseIteratorType*>(&GetHandle());
						if (castToConstReverseIterator)
						{
							StandardHandleType::operator=(*castToConstReverseIterator);
						}
						else
						{
							HandleReverseIteratorType* castToReverseIterator = dynamic_cast<HandleReverseIteratorType*>(&GetHandle());
							if (castToReverseIterator)
							{
								StandardHandleType::operator=(*castToReverseIterator);
							}
							assert(castToConstReverseIterator != 0 || castToReverseIterator != 0);
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_