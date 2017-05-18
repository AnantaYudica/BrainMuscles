#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace iterator
				{
					template<typename REVERSE_ITERATOR, typename CONST_REVERSE_ITERATOR>
					class M_ReverseIterator;
				}
			}
		}
	}
}

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace iterator
				{
					template<typename REVERSE_ITERATOR, typename CONST_REVERSE_ITERATOR>
					class M_ReverseIterator
					{
					protected:
						M_ReverseIterator();
					public:
						virtual ~M_ReverseIterator();
						virtual REVERSE_ITERATOR ReverseBegin() = 0;
						virtual REVERSE_ITERATOR ReverseEnd() = 0;
						virtual CONST_REVERSE_ITERATOR ReverseBegin() const = 0;
						virtual CONST_REVERSE_ITERATOR ReverseEnd() const = 0;
					};

					template<typename REVERSE_ITERATOR, typename CONST_REVERSE_ITERATOR>
					M_ReverseIterator<REVERSE_ITERATOR, CONST_REVERSE_ITERATOR>::M_ReverseIterator()
					{}

					template<typename REVERSE_ITERATOR, typename CONST_REVERSE_ITERATOR>
					M_ReverseIterator<REVERSE_ITERATOR, CONST_REVERSE_ITERATOR>::~M_ReverseIterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_REVERSEITERATOR_H_