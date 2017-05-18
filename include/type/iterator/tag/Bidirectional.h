#ifndef TYPE_ITERATOR_TAG_BIDIRECTIONAL_H_
#define TYPE_ITERATOR_TAG_BIDIRECTIONAL_H_


namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace tag
			{
				template<typename VALUE_TYPE, typename OUT_TYPE = VALUE_TYPE>
				class Bidirectional;
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
				template<typename TYPE, typename OUT_TYPE>
				class Bidirectional :
					public iterator::Tag,
					public std::iterator<std::bidirectional_iterator_tag, OUT_TYPE>
				{
				public:
					typedef TYPE Type;
					typedef TYPE * PointerType;
					typedef OUT_TYPE OutType;
					typedef Bidirectional<TYPE, OUT_TYPE> CurrentType;
				private:
					TYPE * m_pointer;
				protected:
					virtual OUT_TYPE Increment() = 0;
					virtual OUT_TYPE Decrement() = 0;
					virtual OUT_TYPE& Reference() = 0;
					Bidirectional(TYPE * pointer);
				public:
					Bidirectional(CurrentType * pointer);
					Bidirectional(const CurrentType& rhs);
					virtual ~Bidirectional();
					CurrentType& operator++();
					CurrentType operator++(int);
					CurrentType& operator--();
					CurrentType operator--(int);
					bool operator==(const CurrentType& rhs);
					bool operator!=(const CurrentType& rhs);
					OUT_TYPE& operator*();
				};

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>::Bidirectional(TYPE* pointer) :
					Tag(tag::Type::Bidirectional),
					m_pointer(pointer) 
				{	
				}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>::Bidirectional(CurrentType* pointer) :
					m_pointer(pointer->m_pointer)
				{}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>::Bidirectional(const CurrentType& rhs) :
					m_pointer(rhs.m_pointer)
				{}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>::~Bidirectional()
				{
				}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>& Bidirectional<TYPE, OUT_TYPE>::operator++()
				{
					m_pointer = Increment();
					return *this;
				}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE> Bidirectional<TYPE, OUT_TYPE>::operator++(int)
				{
					CurrentType copy = CurrentType(this);
					operator++();
					return copy;
				}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE>& Bidirectional<TYPE, OUT_TYPE>::operator--()
				{
					m_pointer = Decrement();
					return *this;
				}

				template<typename TYPE, typename OUT_TYPE>
				Bidirectional<TYPE, OUT_TYPE> Bidirectional<TYPE, OUT_TYPE>::operator--(int)
				{
					Bidirectional<TYPE> copy = Bidirectional<TYPE>(this);
					operator--();
					return copy;
				}

				template<typename TYPE, typename OUT_TYPE>
				bool Bidirectional<TYPE, OUT_TYPE>::operator==(const CurrentType& rhs)
				{
					return m_pointer == rhs.m_pointer;
				}

				template<typename TYPE, typename OUT_TYPE>
				bool Bidirectional<TYPE, OUT_TYPE>::operator!=(const CurrentType& rhs)
				{
					return m_pointer != rhs.m_pointer;
				}

				template<typename TYPE, typename OUT_TYPE>
				OUT_TYPE& Bidirectional<TYPE, OUT_TYPE>::operator*()
				{
					return Reference();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TAG_BIDIRECTIONAL_H_