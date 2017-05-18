#ifndef TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_
#define TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_


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
					template<typename CONST_ITERATOR>
					class M_ConstIterator;
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
					template<typename CONST_ITERATOR>
					class M_ConstIterator
					{
					protected:
						M_ConstIterator();
					public:
						virtual ~M_ConstIterator();
						virtual CONST_ITERATOR ConstBegin() = 0;
						virtual CONST_ITERATOR ConstEnd() = 0;
					};

					template<typename CONST_ITERATOR>
					M_ConstIterator<CONST_ITERATOR>::M_ConstIterator()
					{}

					template<typename CONST_ITERATOR>
					M_ConstIterator<CONST_ITERATOR>::~M_ConstIterator()
					{}
				}
			}
		}
	}
}


#endif //!TYPE_CONTAINER_MEMBER_ITERATOR_M_CONSTITERATOR_H_