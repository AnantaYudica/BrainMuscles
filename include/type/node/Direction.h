#ifndef TYPE_CONTAINER_NODE_DIRECTION_H_
#define TYPE_CONTAINER_NODE_DIRECTION_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				template<typename ELEMENT, size_t SIZE_DIRECTION>
				class Direction;


			}
		}
	}
}

#include "type\container\Element.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace node
			{
				template<typename ELEMENT, size_t SIZE_DIRECTION>
				class Direction
				{
				};

				template<typename TYPE, size_t SIZE_DIRECTION>
				class Direction<container::Element<TYPE>, SIZE_DIRECTION> :
					public Direction<container::Element<TYPE>, SIZE_DIRECTION - 1>
				{
				public:
					typedef Direction<container::Element<TYPE>, SIZE_DIRECTION> Current;
					typedef Direction<container::Element<TYPE>, SIZE_DIRECTION - 1> Next;
				private:
					typename container::Element<TYPE>::Pointer m_value;
				public:
					Direction();
					template<typename ARG, typename... ARGS>
					Direction(ARG value, ARGS... values);
					typename container::Element<TYPE>::LeftValueReference Value();
				};

				template<typename TYPE>
				class Direction<container::Element<TYPE>, 0>
				{
				public:
					typedef Direction<container::Element<TYPE>, 0> Current;
					typedef void Next;
				private:
					typename container::Element<TYPE>::Pointer m_value;
				public:
					Direction();
					template<typename ARG>
					Direction(ARG value);
					typename container::Element<TYPE>::LeftValueReference Value();
				};

				template<typename TYPE, size_t SIZE_DIRECTION>
				Direction<container::Element<TYPE>, SIZE_DIRECTION>::Direction() :
					Direction<container::Element<TYPE>, SIZE_DIRECTION - 1>(),
					m_value(0)
				{
				}

				template<typename TYPE>
				Direction<container::Element<TYPE>, 0>::Direction() :
					m_value(0)
				{}

				template<typename TYPE, size_t SIZE_DIRECTION>
				template<typename ARG, typename... ARGS>
				Direction<container::Element<TYPE>, SIZE_DIRECTION>::Direction(ARG value, ARGS... values) :
					Direction<container::Element<TYPE>, SIZE_DIRECTION - 1>(values...),
					m_value(value)
				{}

				template<typename TYPE>
				template<typename ARG>
				Direction<container::Element<TYPE>, 0>::Direction(ARG value) :
					m_value(value)
				{}

				template<typename TYPE, size_t SIZE_DIRECTION>
				typename container::Element<TYPE>::LeftValueReference Direction<container::Element<TYPE>, SIZE_DIRECTION>::Value()
				{
					return m_value;
				}

				template<typename TYPE>
				typename container::Element<TYPE>::LeftValueReference Direction<container::Element<TYPE>, 0>::Value()
				{
					return m_value;
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_NODE_DIRECTION_H_