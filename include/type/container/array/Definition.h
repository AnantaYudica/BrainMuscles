#ifndef TYPE_CONTAINER_ARRAY_DEFINITION_H_
#define TYPE_CONTAINER_ARRAY_DEFINITION_H_

#include <cstdlib>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, std::size_t SIZE>
				struct Definition;
			}
		}
	}
}

#include <array>

#include "type\Container.h"
#include "type\container\definition\Base.h"
#include "type\container\Element.h"

#include "type\container\array\Iterator.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template<typename TYPE, std::size_t SIZE>
				struct Definition :
					public BrainMuscles::type::container::definition::Base
				{
					typedef typename BrainMuscles::type
						::container::Element<TYPE>												ElementType;
					typedef typename BrainMuscles::type::Container<
						BrainMuscles::type::container::array::Definition<TYPE, SIZE>>			ContainerType;
					typedef std::array<TYPE, SIZE>												HandleContainerType;
					typedef BrainMuscles::type::container::array::Iterator<
						TYPE, SIZE, typename std::array<TYPE, SIZE>::iterator>					RandomAccessIteratorType;
					typedef BrainMuscles::type::container::array::Iterator<
						TYPE, SIZE, typename std::array<TYPE, SIZE>::const_iterator>			RandomAccessConstIteratorType;
					typedef BrainMuscles::type::container::array::Iterator<
						TYPE, SIZE, typename std::array<TYPE, SIZE>::reverse_iterator>			RandomAccessReverseIteratorType;
					typedef BrainMuscles::type::container::array::Iterator<
						TYPE, SIZE, typename std::array<TYPE, SIZE>::const_reverse_iterator>	RandomAccessConstReverseIteratorType;
					typedef void InputIteratorType;
					typedef void InputConstIteratorType;
					typedef void InputReverseIteratorType;
					typedef void InputConstReverseIteratorType;

					static constexpr std::size_t Size = SIZE;
				};
			}
		}
	}
}


#endif //!TYPE_CONTAINER_ARRAY_DEFINITION_H_