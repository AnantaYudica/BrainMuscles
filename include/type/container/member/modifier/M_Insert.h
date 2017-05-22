#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_

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
					template<typename VALUE_TYPE, typename SIZE_TYPE, typename ITERATOR, typename CONST_ITERATOR, typename INPUT_ITERATOR>
					class M_Insert;
				}
			}
		}
	}
}

#include <initializer_list>

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
					template<typename VALUE_TYPE, typename SIZE_TYPE, typename ITERATOR, typename CONST_ITERATOR, typename INPUT_ITERATOR>
					class M_Insert
					{
					protected:
						M_Insert();
					public:
						virtual ~M_Insert();
						virtual ITERATOR Insert(CONST_ITERATOR position, const VALUE_TYPE& val) = 0;
						virtual ITERATOR Insert(CONST_ITERATOR position, SIZE_TYPE n, const VALUE_TYPE& val) = 0;
						virtual ITERATOR Insert(CONST_ITERATOR position, INPUT_ITERATOR first, INPUT_ITERATOR last) = 0;
						virtual ITERATOR Insert(CONST_ITERATOR position, VALUE_TYPE&& val) = 0;
						virtual ITERATOR Insert(CONST_ITERATOR position, std::initializer_list<VALUE_TYPE> il) = 0;
					};

					template<typename VALUE_TYPE, typename SIZE_TYPE, typename ITERATOR, typename CONST_ITERATOR, typename INPUT_ITERATOR>
					M_Insert<VALUE_TYPE, SIZE_TYPE, ITERATOR, CONST_ITERATOR, INPUT_ITERATOR>::M_Insert()
					{}

					template<typename VALUE_TYPE, typename SIZE_TYPE, typename ITERATOR, typename CONST_ITERATOR, typename INPUT_ITERATOR>
					M_Insert<VALUE_TYPE, SIZE_TYPE, ITERATOR, CONST_ITERATOR, INPUT_ITERATOR>::~M_Insert()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_INSERT_H_