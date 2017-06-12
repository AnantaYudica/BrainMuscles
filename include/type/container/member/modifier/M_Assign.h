#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_

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
					template <typename INPUT_ITERATOR_TYPE, typename VALUE_TYPE, typename SIZE_TYPE>
					class M_Assign;
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
					template <typename INPUT_ITERATOR_TYPE, typename VALUE_TYPE, typename SIZE_TYPE>
					class M_Assign
					{
					protected:
						M_Assign();
					public:
						virtual ~M_Assign();
						virtual void Assign(INPUT_ITERATOR_TYPE first, INPUT_ITERATOR_TYPE last) = 0;
						virtual void Assign(SIZE_TYPE n, const VALUE_TYPE& val) = 0;
						virtual void Assign(std::initializer_list<VALUE_TYPE> il) = 0;
					};

					template <typename INPUT_ITERATOR_TYPE, typename VALUE_TYPE, typename SIZE_TYPE>
					M_Assign<INPUT_ITERATOR_TYPE, VALUE_TYPE, SIZE_TYPE>::M_Assign()
					{}

					template <typename INPUT_ITERATOR_TYPE, typename VALUE_TYPE, typename SIZE_TYPE>
					M_Assign<INPUT_ITERATOR_TYPE, VALUE_TYPE, SIZE_TYPE>::~M_Assign()
					{}
				}
			}
		}
	}
}





#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_ASSIGN_H_