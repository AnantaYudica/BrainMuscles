#ifndef TYPE_ITERATOR_TAG_FORWARD_H_
#define TYPE_ITERATOR_TAG_FORWARD_H_


namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE>
				class Forward;
			}
		}
	}
}

#include "type\iterator\Tag.h"
#include <iterator>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename TYPE>
				class Forward :
					public iterator::Tag,
					public type::Iterator<TYPE>,
					public std::iterator<std::forward_iterator_tag, TYPE>
				{
				protected:
					Forward();
					Forward(TYPE* pointer);
				public:
					Forward(Bidirectional<TYPE>* pointer);
					Forward(const Bidirectional<TYPE>& rhs);
					virtual ~Forward();
					virtual TYPE* Increment() = 0;
					Forward<TYPE>& operator++();
					Forward<TYPE> operator++(int);
					bool operator==(const Forward<TYPE>& rhs);
					bool operator!=(const Forward<TYPE>& rhs);
					TYPE& operator*();
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TAG_FORWARD_H_