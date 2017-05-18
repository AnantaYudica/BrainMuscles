#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_

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
					template<typename ITERATOR, typename CONST_ITERATOR>
					class M_Iterator;
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
					template<typename ITERATOR, typename CONST_ITERATOR>
					class M_Iterator
					{
					protected:
						M_Iterator();
					public:
						virtual ~M_Iterator();
						virtual ITERATOR Begin() = 0;
						virtual ITERATOR End() = 0;
						virtual CONST_ITERATOR Begin() const = 0;
						virtual CONST_ITERATOR End() const = 0;
					};

					template<typename ITERATOR, typename CONST_ITERATOR>
					M_Iterator< ITERATOR, CONST_ITERATOR>::M_Iterator()
					{}

					template<typename ITERATOR, typename CONST_ITERATOR>
					M_Iterator<ITERATOR, CONST_ITERATOR>::~M_Iterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_ITERATOR_H_