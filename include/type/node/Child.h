#ifndef TYPE_NODE_CHILD_H_
#define TYPE_NODE_CHILD_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace node
		{
			template<typename TYPE, size_t SIZE_CHILD>
			class Child;
		}
	}
}

#include "type/container/Element.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace node
		{
			template<typename TYPE, size_t SIZE_CHILD>
			class Child
			{};

			template<typename TYPE, size_t SIZE_CHILD>
			class Child<container::Element<TYPE>, SIZE_CHILD> :
				public Child<container::Element<TYPE>, SIZE_CHILD - 1>
			{
			public:
				typedef Child<container::Element<TYPE>, DEGREE> Current;
				typedef Child<container::Element<TYPE>, DEGREE - 1> Next;
				typedef container::Element<TYPE> ElementType;
				typedef typename ElementType::Pointer ValueType;
			private:
				ValueType m_value;
			};

			template<typename TYPE>
			class Child<container::Element<TYPE>, 0>
			{
			public:
				typedef Child<container::Element<TYPE>, 0> Current;
				typedef void Next;
				typedef container::Element<TYPE> ElementType;
				typedef typename ElementType::Pointer ValueType;
			private:
				ValueType m_value;
			};
		}
	}
}

#endif //!TYPE_NODE_CHILD_H_