#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace member
			{
				namespace modifier
				{
					template<typename ITERATOR, typename CONST_ITERATOR>
					class M_Erase;
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
				namespace modifier
				{
					template<typename ITERATOR, typename CONST_ITERATOR>
					class M_Erase
					{
					protected:
						M_Erase();
					public:
						virtual ~M_Erase();
					public:
						virtual ITERATOR Erase(CONST_ITERATOR position) = 0;
						virtual ITERATOR Erase(CONST_ITERATOR first, CONST_ITERATOR last) = 0;
					};

					template<typename ITERATOR, typename CONST_ITERATOR>
					M_Erase<ITERATOR, CONST_ITERATOR>::M_Erase()
					{}

					template<typename ITERATOR, typename CONST_ITERATOR>
					M_Erase<ITERATOR, CONST_ITERATOR>::~M_Erase()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_ERASE_H_