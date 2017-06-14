#ifndef TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_

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
					class ConstReverseIterator;
				}
			}
		}
	}
}

#include "type\container\Vector.h"
#include "type\container\vector\iterator\handle\ReverseIterator.h"
#include "type\container\vector\iterator\handle\ConstReverseIterator.h"
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
					class ConstReverseIterator :
						std::vector<TYPE>::const_reverse_iterator
					{
					public:
						typedef BrainMuscles::type::container::Vector<TYPE> VectorType;
						typedef typename VectorType::ReverseIterator VectorReverseIteratorType;
						typedef typename VectorType::ConstReverseIterator VectorConstReverseIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<TYPE> HandleReverseIteratorType;
						typedef BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<TYPE> HandleConstReverseIteratorType;
					public:
						ConstReverseIterator(VectorReverseIteratorType& reverse_iterator);
						ConstReverseIterator(VectorConstReverseIteratorType& const_reverse_iterator);
					};

					template<typename TYPE>
					ConstReverseIterator<TYPE>::ConstReverseIterator(VectorReverseIteratorType& reverse_iterator)
					{
						HandleReverseIteratorType* castToReverseIterator = dynamic_cast<HandleReverseIteratorType*>(&reverse_iterator.GetHandle());
						assert(castToReverseIterator != 0);
						std::vector<TYPE>::const_reverse_iterator::operator=(*castToReverseIterator);
					}

					template<typename TYPE>
					ConstReverseIterator<TYPE>::ConstReverseIterator(VectorConstReverseIteratorType& const_reverse_iterator)
					{
						HandleConstReverseIteratorType* castToConstReverseIterator = dynamic_cast<HandleConstReverseIteratorType*>(&const_reverse_iterator.GetHandle());
						assert(castToConstReverseIterator != 0);
						std::vector<TYPE>::const_reverse_iterator::operator=(*castToConstReverseIterator);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_STANDARD_VECTOR_CONSTREVERSEITERATOR_H_