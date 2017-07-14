#ifndef TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_

#include <cstddef>
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
					class ConstIterator :
						private BrainMuscles::type::container::vector::Definition<TYPE>::RandomAccessConstIteratorType,
						std::vector<TYPE>::const_iterator
					{
					private:
						typedef BrainMuscles::type::container::vector::Definition<TYPE>	DefinitionType;
						typedef typename DefinitionType::ElementType					ElementType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::ConstIterator<ElementType>						HandleConstIteratorType;
						typedef BrainMuscles::type::container::vector::iterator
							::handle::Iterator<ElementType>								HandleIteratorType;
					public:
						typedef typename std::vector<TYPE>::const_iterator				StandardHandleType;
						typedef typename DefinitionType::RandomAccessConstIteratorType	RandomAccessConstIteratorType;
					private:
						typedef typename RandomAccessConstIteratorType::HandleBaseType	HandleBaseType;
					public:
						ConstIterator(const RandomAccessConstIteratorType& const_iterator);
					};

					template<typename TYPE>
					ConstIterator<TYPE>::ConstIterator(const RandomAccessConstIteratorType& const_iterator) :
						HandleBaseType(const_iterator),
						RandomAccessConstIteratorType(const_iterator)
					{
						HandleConstIteratorType* castToConstIterator = dynamic_cast<HandleConstIteratorType*>(&GetHandle());
						if (castToConstIterator)
						{
							std::vector<TYPE>::const_iterator::operator=(*castToConstIterator);
						}
						else
						{
							HandleIteratorType* castToIterator = dynamic_cast<HandleIteratorType*>(&GetHandle());
							if (castToIterator)
							{
								std::vector<TYPE>::const_iterator::operator=(*castToIterator);
							}
							assert(castToConstIterator != 0 || castToIterator != 0);
						}
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_