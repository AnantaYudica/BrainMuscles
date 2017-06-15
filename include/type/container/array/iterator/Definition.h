#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_

#include <array>
#include "type\container\array\iterator\definition\ConstIterator.h"
#include "type\container\array\iterator\definition\Iterator.h"
#include "type\iterator\derived\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				namespace iterator
				{
					template<typename TYPE, size_t SIZE, typename HANDLE>
					struct Definition :
						public BrainMuscles::type::iterator::derived::definition::Base
					{};

					template<typename TYPE, size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::ConstIterator<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_iterator>
					{};

					template<typename TYPE, size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_reverse_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::ConstIterator<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_reverse_iterator>
					{};

					template<typename TYPE, size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::iterator> :
						public BrainMuscles::type::container::array::iterator::definition::Iterator<TYPE, SIZE, typename std::array<TYPE, SIZE>::iterator>
					{};

					template<typename TYPE, size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::reverse_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::Iterator<TYPE, SIZE, typename std::array<TYPE, SIZE>::reverse_iterator>
					{};
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_