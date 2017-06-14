#ifndef TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_

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
					class ConstIterator;
				}
			}
		}
	}
}

#include "type\container\Vector.h"
#include "type\container\vector\iterator\handle\Iterator.h"
#include "type\container\vector\iterator\handle\ConstIterator.h"
#include <cassert>
#include <vector>

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
						std::vector<TYPE>::const_iterator
					{
					public:
						typedef BrainMuscles::type::container::Vector<TYPE> VectorType;
						typedef typename VectorType::Iterator VectorIteratorType;
						typedef typename VectorType::ConstIterator VectorConstIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::Iterator<TYPE> HandleIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstIterator<TYPE> HandleConstIteratorType;
					public:
						ConstIterator(VectorIteratorType& iterator);
						ConstIterator(VectorConstIteratorType& const_iterator);
					};

					template<typename TYPE>
					ConstIterator<TYPE>::ConstIterator(VectorIteratorType& iterator)
					{
						HandleIteratorType* castToIterator = dynamic_cast<HandleIteratorType*>(&iterator.GetHandle());
						assert(castToIterator != 0);
						std::vector<TYPE>::const_iterator::operator=(*castToIterator);
					}

					template<typename TYPE>
					ConstIterator<TYPE>::ConstIterator(VectorConstIteratorType& const_iterator)
					{
						HandleConstIteratorType* castToConstIterator = dynamic_cast<HandleConstIteratorType*>(&const_iterator.GetHandle());
						assert(castToConstIterator != 0);
						std::vector<TYPE>::const_iterator::operator=(*castToConstIterator);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_CONSTITERATOR_H_