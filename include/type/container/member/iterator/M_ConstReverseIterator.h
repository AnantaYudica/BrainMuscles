#ifndef TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_
#define TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_


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
					template<typename CONST_REVERSE_ITERATOR>
					class M_ConstReverseIterator;
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
					template<typename CONST_REVERSE_ITERATOR>
					class M_ConstReverseIterator
					{
					protected:
						M_ConstReverseIterator();
					public:
						virtual ~M_ConstReverseIterator();
						virtual CONST_REVERSE_ITERATOR ConstReverseBegin() = 0;
						virtual CONST_REVERSE_ITERATOR ConstReverseEnd() = 0;
					};

					template<typename CONST_REVERSE_ITERATOR>
					M_ConstReverseIterator<CONST_REVERSE_ITERATOR>::M_ConstReverseIterator()
					{}

					template<typename CONST_REVERSE_ITERATOR>
					M_ConstReverseIterator<CONST_REVERSE_ITERATOR>::~M_ConstReverseIterator()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_TRAIT_ITERATOR_CONSTREVERSEITERATOR_H_