/*
 * Node.h
 *
 *  Created on: Jun 10, 2016
 *      Author: ananta.yudica
 */

#ifndef STRUCTURE_LINKEDLIST_NODE_H_
#define STRUCTURE_LINKEDLIST_NODE_H_

#include "Link.h"

namespace BrainMuscles {

namespace Structure {

namespace Linkedlist {

template<size_t SIZE, typename T>
class Node {
private:
	typedef Node<SIZE, T> Type;
	T m_data;
	Link<SIZE, Type*>* m_link;
public:
	Node() : m_data(0){
		m_link = new Link<SIZE, Type*>();
	};
	Node(const T& data) : m_data(data) {
		m_link = new Link<SIZE, Type*>();
	};
	Node(T* data) : m_data(*data){
		m_link = new Link<SIZE, Type*>();
	};
	Node(const Type& object) : m_data(object.m_data), m_link(object.m_link) { };

	Node(Type* pointer) : m_data(pointer->m_data), m_link(pointer->m_link) { };
	~Node() {
		delete m_link;
	};

	void SetData(T data) {
		m_data = data;
	};

	T GetData() {
		return m_data;
	};

	template <size_t INDEX>
	void SetLinked(Type* node) {
		m_link->template SetLink<INDEX>(node);
	};

	template <size_t INDEX>
	Type* GetLinked() {
		return *this->m_link->template GetLink<INDEX>();
	};

	template <size_t INDEX>
	bool IsHasLinked() {
		return GetLinked<INDEX>() == 0;
	};
};

}

} /* namespace Strucuture */

} /* namespace BrainMuscles */

#endif /* STRUCTURE_LINKEDLIST_NODE_H_ */
