#ifndef TYPE_CONTAINER_NODE_TRACK_H_
#define TYPE_CONTAINER_NODE_TRACK_H_

#include "type\container\Node.h"
namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				template<typename NODE, size_t TRACK_INDEX>
				class Track;
			}
		}
	}
}

#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				template<typename NODE, size_t TRACK_INDEX>
				class Track
				{
				};

				template<size_t TRACK_INDEX>
				class Track<void, TRACK_INDEX>
				{
				public:
					typedef Track<void, TRACK_INDEX> Current;
					typedef void Next;
					typedef void Node;
				};

				template<typename ELEMENT, size_t SIZE_TRACK, size_t SIZE_DIRECTION, size_t... NEXT_SIZE_DIRECTION>
				class Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>, 0>
				{
				public:
					typedef Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>, 0> Current;
					typedef void Next;
					typedef container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...> Node;
				};

				template<typename ELEMENT, size_t SIZE_TRACK, size_t SIZE_DIRECTION>
				class Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>, 0>
				{
				public:
					typedef Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>, 0> Current;
					typedef void Next;
					typedef container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION> Node;
				};

				template<size_t TRACK_INDEX, typename ELEMENT, size_t SIZE_TRACK, size_t SIZE_DIRECTION, size_t... NEXT_SIZE_DIRECTION>
				class Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>, TRACK_INDEX> :
					public Track<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>::Next, TRACK_INDEX - 1>
				{
				public:
					typedef Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>, TRACK_INDEX> Current;
					static_assert(!std::is_void<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>::Next>::value, "Out of Index Track");
					typedef Track<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION, NEXT_SIZE_DIRECTION...>::Next, TRACK_INDEX - 1> Next;
					typedef typename Next::Node Node;
				};

				template<size_t TRACK_INDEX, typename ELEMENT, size_t SIZE_TRACK, size_t SIZE_DIRECTION>
				class Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>, TRACK_INDEX> :
					public Track<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>::Next, TRACK_INDEX - 1>
				{
				public:
					typedef Track<container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>, TRACK_INDEX> Current;
					static_assert(!std::is_void<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>::Next>::value, "Out of Index Track");
					typedef Track<typename container::Node<ELEMENT, SIZE_TRACK, SIZE_DIRECTION>::Next, TRACK_INDEX - 1> Next;
					typedef typename Next::Node Node;
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_NODE_TRACK_H_