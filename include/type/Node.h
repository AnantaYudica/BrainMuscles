#ifndef TYPE_NODE_H_
#define TYPE_NODE_H_

namespace BrainMuscles
{
	namespace type
	{
		template<typename TYPE, size_t DEGREE>
		class Node;
	}
}


#include "type/node/Child.h"
#include "type/container/Element.h"

namespace BrainMuscles
{
	namespace type
	{
		template<typename TYPE, size_t DEGREE>
		class Node
		{};

		template<typename TYPE, size_t DEGREE>
		class Node<container::Element<TYPE>, DEGREE>
		{
		public:
			typedef Node<container::Element<TYPE>, DEGREE> NodeType;
			typedef Node<container::Element<TYPE>, DEGREE>* NodePointer;
			typedef container::Element<TYPE> ElementType;
			typedef typename ElementType::Pointer ValueType;
			static constexpr size_t Degree = DEGREE;
			typedef typename node::Child<container::Element<TYPE>, DEGREE> ChildType;
			typedef ChildType* ChildPointer;
		private:
			ValueType m_value;
			ChildPointer m_childs;
		public:
			Node(ValueType value);
			template<typename... ARGS>
			Node(ValueType value, ARGS... childs);
			~Node();
			ValueType GetValue();
			void SetValue(ValueType value);
			template<size_t INDEX>
			ValueType GetChild();
			template<size_t INDEX>
			void SetChild(ValueType child);
		};

		template<typename TYPE, size_t DEGREE>
		Node<container::Element<TYPE>, DEGREE>::Node(ValueType value) :
			m_childs(new ChildType(0)),
			m_value(value)
		{}

		template<typename TYPE, size_t DEGREE>
		template<typename ARG, typename... ARGS>
		Node<container::Element<TYPE>, DEGREE>::Node(ValueType value, ARGS... childs) :
			m_childs(new ChildType(childs...)),
			m_value(value)
		{}

		template<typename TYPE, size_t DEGREE>
		Node<container::Element<TYPE>, DEGREE>::~Node()
		{
			delete m_childs;
		}

		template<typename TYPE, size_t DEGREE>
		typename Node<container::Element<TYPE>, DEGREE>::ValueType 
			Node<container::Element<TYPE>, DEGREE>::GetValue()
		{
			return m_value;
		}

		template<typename TYPE, size_t DEGREE>
		void Node<container::Element<TYPE>, DEGREE>::SetValue(ValueType value)
		{
			m_value = value;
		}

		template<size_t INDEX>
		typename Node<container::Element<TYPE>, DEGREE>::ValueType 
			Node<container::Element<TYPE>, DEGREE>::GetChild()
		{
			return 0;
		}

		template<size_t INDEX>
		void Node<container::Element<TYPE>, DEGREE>::SetChild(ValueType child)
		{
		
		}
	}
}

#endif //!TYPE_NODE_H_