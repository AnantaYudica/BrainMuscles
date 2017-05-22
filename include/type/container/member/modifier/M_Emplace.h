#ifndef TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_
#define TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_

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
					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename DERIVED>
					class M_Emplace;
				}
			}
		}
	}
}

#include "type\trait\Types.h"

#include <vector>

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
					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename DERIVED>
					class M_Emplace
					{
					protected:
						M_Emplace();
					public:
						virtual ~M_Emplace();
					protected:
						virtual DERIVED* ThisDerived() = 0;
					public:
						template<typename... ARGS>
						ITERATOR_TYPE Emplace(CONST_ITERATOR_TYPE constIterator, ARGS... args);
					};

					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename DERIVED>
					M_Emplace<ITERATOR_TYPE, CONST_ITERATOR_TYPE, DERIVED>::M_Emplace()
					{}

					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename DERIVED>
					M_Emplace<ITERATOR_TYPE, CONST_ITERATOR_TYPE, DERIVED>::~M_Emplace()
					{}

					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename DERIVED>
					template<typename... ARGS>
					ITERATOR_TYPE 
					M_Emplace<ITERATOR_TYPE, CONST_ITERATOR_TYPE, DERIVED>::Emplace(CONST_ITERATOR_TYPE constIterator, ARGS... args)
					{
						return ThisDerived()->OnRequestEmplace(constIterator, args...);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_