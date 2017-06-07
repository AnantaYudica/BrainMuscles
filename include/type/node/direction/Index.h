#ifndef TYPE_CONTAINER_NODE_DIRECTION_INDEX_H_
#define TYPE_CONTAINER_NODE_DIRECTION_INDEX_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				namespace direction
				{
					template<typename DIRECTION, size_t INDEX>
					class Index;
				}
			}
		}
	}
}

#include "type\container\node\Direction.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				namespace direction
				{
					template<typename DIRECTION, size_t INDEX>
					class Index
					{};

					template<typename ELEMENT, size_t SIZE_DIRECTION>
					class Index<node::Direction<ELEMENT, SIZE_DIRECTION>, 0>
					{
					
					};

					template<size_t INDEX, typename ELEMENT, size_t SIZE_DIRECTION>
					class Index<node::Direction<ELEMENT, SIZE_DIRECTION>, INDEX> :
						public Index<node::Direction<ELEMENT, SIZE_DIRECTION>::Next, INDEX - 1>
					{
					
					};
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_NODE_DIRECTION_INDEX_H_