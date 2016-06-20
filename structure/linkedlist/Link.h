/*
 * Link.h
 *
 *  Created on: Jun 10, 2016
 *      Author: ananta.yudica
 */

#ifndef STRUCTURE_LINKEDLIST_LINK_H_
#define STRUCTURE_LINKEDLIST_LINK_H_

#include <cstdio>

namespace BrainMuscles {

namespace Structure {

namespace Linkedlist {

template <size_t SIZE, typename T>
class Link : public Link<SIZE - 1, T>{
private:
	typedef Link<SIZE - 1, T> NextType;
	T m_link;
public:
	Link() {
		m_link = 0;
	};
	Link(const T& value) : NextType(value) {
		m_link = value;
	};
	Link(T* value) : NextType(value){
		m_link = *value;
	};
	~Link() {};

	template<size_t INDEX>
	void SetLink(T node) {
		if (INDEX == 0) m_link = node;
		NextType::template SetLink<INDEX - 1>(node);
	};

	template<size_t INDEX>
	T* GetLink() {
		if (INDEX == 0)return &m_link;
		return NextType::template GetLink<INDEX - 1>();
	};

};

template <typename T>
class Link<1, T> {
private:
	T m_link;
public:
	Link() {
		m_link = 0;
	};
	~Link() {};

	template<size_t INDEX>
	void SetLink(T node) {
		if (INDEX == 0) m_link = node;
	};

	template<size_t INDEX>
	T* GetLink() {
		if (INDEX == 0)return &m_link;
		return 0;
	};

};

template <typename T>
class Link<0, T> {
public:
	template<size_t INDEX>
	void SetLink(T node) { };

	template<size_t INDEX>
	T* GetLink() {
		return 0;
	};
};

}

}

} /* namespace BrainMuscles */

#endif /* STRUCTURE_LINKEDLIST_LINK_H_ */
