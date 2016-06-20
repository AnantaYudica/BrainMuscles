/*
 * Point.h
 *
 *  Created on: Jun 12, 2016
 *      Author: ananta.yudica
 */

#ifndef STRUCTURE_LINKEDLIST_POINT_H_
#define STRUCTURE_LINKEDLIST_POINT_H_

#include <cstdio>

#include "Link.h"

namespace BrainMuscles {

namespace Structure {

namespace Linkedlist {

template<size_t SIZE, typename T>
class Point {
private:
	Link<SIZE, T>* m_point;
public:
	typedef Point<SIZE, T> Type;
	Point() {
		m_point = new Link<SIZE,T>();
	};
	Point(const T& default_value) {
		m_point = new Link<SIZE,T>(default_value);
	};
	Point(T* default_value) {
		m_point = new Link<SIZE,T>(default_value);
	};
	Point(const Point& object) {
		m_point = new Link<SIZE,T>(object.m_point);
	};
	Point(Point* pointer) {
		m_point = new Link<SIZE,T>(pointer->m_point);
	};
	~Point() {
		delete m_point;
	};

	template <size_t POINT>
	void Set(T* node) {
		m_point->template SetLink<POINT>(node);
	};

	template <size_t POINT>
	T* Get() {
		return m_point->template GetLink<POINT>();
	};

	template <size_t POINT>
	bool IsPoint() {
		if (POINT >= SIZE)return false;
		return true;
	};

	template <size_t POINT>
	bool IsHasPointer() {
		if (!IsPoint<POINT>())return false;
		return m_point->template LinkIndex<POINT>() != 0;
	};

	template<size_t POINT, size_t INDEX>
	bool IsEnd() {
		if (!IsHasPointer<POINT>()) return true;
		return m_point->template LinkIndex<POINT>()->template GetLinked<INDEX>() == 0;
	};

	template <size_t POINT>
	bool Set(const T& object) {
		if (!IsPoint<POINT>())return false;
		T* get = m_point->template GetLink<POINT>();
		*get = object;
		return true;
	};

	template <size_t POINT>
	bool Set(T* pointer) {
		if (!IsPoint<POINT>())return false;
		T* get = m_point->template SetLink<POINT>(pointer);
		return true;
	};

	template<size_t POINT, size_t INDEX>
	Type* Shift() {
		if (!IsHasPointer<POINT>()) return this;
		T* l_point = m_point->template LinkIndex<POINT>();
		*l_point = l_point->template GetLinked<INDEX>();
		return this;
	};


};

}

}

}

#endif /* STRUCTURE_LINKEDLIST_POINT_H_ */
