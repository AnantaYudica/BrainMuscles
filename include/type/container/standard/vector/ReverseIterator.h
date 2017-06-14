#ifndef TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_

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
					class ReverseIterator;
				}
			}
		}
	}
}

#include "type\container\Vector.h"
#include "type\container\vector\iterator\handle\ReverseIterator.h"
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
					class ReverseIterator :
						std::vector<TYPE>::reverse_iterator
					{
					public:
						typedef BrainMuscles::type::container::Vector<TYPE> VectorType;
						typedef typename VectorType::Iterator VectorReverseIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::Iterator<TYPE> HandleReverseIteratorType;
					public:
						ReverseIterator(VectorReverseIteratorType& iterator);
					};

					template<typename TYPE>
					ReverseIterator<TYPE>::ReverseIterator(VectorReverseIteratorType& iterator)
					{
						HandleReverseIteratorType* castToReverseIterator = dynamic_cast<HandleReverseIteratorType*>(&iterator.GetHandle());
						assert(castToReverseIterator != 0);
						std::vector<TYPE>::reverse_iterator::operator=(*castToReverseIterator);
					}

				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_REVERSEITERATOR_H_