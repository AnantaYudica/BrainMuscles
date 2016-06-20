/*
 * SingleLink.h
 *
 *  Created on: Jun 10, 2016
 *      Author: ananta.yudica
 */

#ifndef STRUCTURE_LINKEDLIST_SINGLELINKLIST_H_
#define STRUCTURE_LINKEDLIST_SINGLELINKLIST_H_

#include "linkedlist/Linkedlist.h"

namespace BrainMuscles {

namespace Structure {

template <typename T>
class SingleLinklist : public Linkedlist<T, 2, 1>{
public:
	static const size_t HEAD = 0;
	static const size_t TAIL = 1;
	static const size_t NEXT = 0;
private:
	typedef Linkedlist<T, 2, 1> LinkedlistType;
public:
	SingleLinklist() : LinkedlistType(){
	};
	~SingleLinklist() {
		while (LinkedlistType::template GetPoint<HEAD>() != 0) {
			Pop();
		}
	};
	void Push(T data) {
		typename LinkedlistType::NodeType* l_newnode = LinkedlistType::NodeInstance(data);
		if (LinkedlistType::template GetPoint<HEAD>() == 0) {
			LinkedlistType::template SetPoint<HEAD>(l_newnode);
			LinkedlistType::template SetPoint<TAIL>(l_newnode);
		}
		LinkedlistType::template SetLink<TAIL, NEXT>(l_newnode);
		LinkedlistType::template SetPoint<TAIL>(l_newnode);
	};

	T Pop(T zero = 0) {
		T data = LinkedlistType::template GetData<HEAD>(zero);
		typename LinkedlistType::NodeType* node = LinkedlistType::template GetPoint<HEAD>();
		if (!node->template IsHasLinked<NEXT>()) {
			LinkedlistType::template SetPoint<HEAD>(0);
			LinkedlistType::template SetPoint<TAIL>(0);
		} else {
			LinkedlistType::template SetPoint<HEAD>(LinkedlistType::template GetLink<HEAD, NEXT>());
		}
		delete node;
		return data;
	};

	size_t Size() {
		return LinkedlistType::template Size<NEXT>(LinkedlistType::template GetPoint<HEAD>());
	};
};

} /* namespace Strucutre*/

} /* namespace BrainMuscles */

#endif /* STRUCTURE_LINKEDLIST_SINGLELINKLIST_H_ */
