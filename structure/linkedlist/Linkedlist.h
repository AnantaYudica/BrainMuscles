/*
 * Linkedlist.h
 *
 *  Created on: Jun 11, 2016
 *      Author: ananta.yudica
 */

#ifndef STRUCTURE_LINKEDLIST_LINKEDLIST_H_
#define STRUCTURE_LINKEDLIST_LINKEDLIST_H_

#include "linkedlist/Node.h"
#include "linkedlist/Point.h"

namespace BrainMuscles {

namespace Structure {

template<typename T,size_t SIZE_POINT, size_t SIZE_LINKED>
class Linkedlist {
public:
	typedef Node<SIZE_LINKED, T> NodeType;
	typedef Point<SIZE_POINT, NodeType*> PointType;
private:
	PointType* m_point;
public:
	Linkedlist() {
		m_point = new Point<SIZE_POINT, NodeType*>();
	};
	~Linkedlist() {
		delete m_point;
	};

	template <size_t POINT>
	void SetPoint(NodeType* node) {
		m_point->template Set<POINT>(node);
	};

	template<size_t POINT>
	NodeType* GetPoint() {
		return *m_point->template Get<POINT>();
	};
protected:
	NodeType* NodeInstance(T data) {
		return new NodeType(data);
	};

	template<size_t LINK>
	const size_t Size(NodeType* node) {
		static size_t count = 0;
		if (!node) {
			size_t ret = count;
			count = 0;
			return ret;
		}
		++count;
		return Size<LINK>(node->template GetLinked<LINK>());
	};

	template <size_t POINT>
	void SetData(T data) {
		NodeType* l_node = *m_point->template Get<POINT>();
		if (!l_node)return;
		l_node->SetData(data);
	};

	template <size_t POINT>
	T GetData(T zero) {
		NodeType* l_node = *m_point->template Get<POINT>();
		if (!l_node)return zero;
		return l_node->GetData();
	};

	template <size_t POINT, size_t LINK>
	bool SetLink(NodeType* node) {
		NodeType* l_node = *m_point->template Get<POINT>();
		if (!l_node)return false;
		l_node->template SetLinked<LINK>(node);
		return true;
	};

	template <size_t POINT, size_t LINK>
	NodeType* GetLink() {
		NodeType* l_node = *m_point->template Get<POINT>();
		if (!l_node) return 0;
		return l_node->template GetLinked<LINK>();
	};
};

}

}

#endif /* STRUCTURE_LINKEDLIST_LINKEDLIST_H_ */
