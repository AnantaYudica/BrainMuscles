#ifndef TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_

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
					class Iterator;
				}
			}
		}
	}
}

#include "type\container\Vector.h"
#include "type\container\vector\iterator\handle\Iterator.h"
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
					class Iterator :
						std::vector<TYPE>::iterator
					{
					public:
						typedef BrainMuscles::type::container::Vector<TYPE> VectorType;
						typedef typename VectorType::Iterator VectorIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::Iterator<TYPE> HandleIteratorType;
					public:
						Iterator(VectorIteratorType& iterator);
					};

					template<typename TYPE>
					Iterator<TYPE>::Iterator(VectorIteratorType& iterator)
					{
						HandleIteratorType* castToIterator = dynamic_cast<HandleIteratorType*>(&iterator.GetHandle());
						assert(castToIterator != 0);
						std::vector<TYPE>::iterator::operator=(*castToIterator);
					}

				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_ITERATOR_H_