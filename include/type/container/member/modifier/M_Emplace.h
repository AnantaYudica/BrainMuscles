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
					template<typename ITERATOR_TYPE, typename CONST_ITERATOR_TYPE, typename VALUE_TYPE>
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
					template<typename ITERATOR_TYPE, typename ITERATOR_CONST_TYPE, typename VALUE_TYPE>
					class M_Emplace
					{
					protected:
						M_Emplace();
					public:
						virtual ~M_Emplace();
					protected:
						virtual ITERATOR_TYPE DerivedEmplace(ITERATOR_TYPE iterator, VALUE_TYPE& constructor) = 0;
					public:
						template<typename... ARGS>
						ITERATOR_TYPE Emplace(ITERATOR_TYPE constIterator, ARGS... args);
					};

					template<typename ITERATOR_TYPE, typename ITERATOR_CONST_TYPE, typename VALUE_TYPE>
					M_Emplace<ITERATOR_TYPE, ITERATOR_CONST_TYPE, VALUE_TYPE>::M_Emplace()
					{}

					template<typename ITERATOR_TYPE, typename ITERATOR_CONST_TYPE, typename VALUE_TYPE>
					M_Emplace<ITERATOR_TYPE, ITERATOR_CONST_TYPE, VALUE_TYPE>::~M_Emplace()
					{}

					template<typename ITERATOR_TYPE, typename ITERATOR_CONST_TYPE, typename VALUE_TYPE>
					template<typename... ARGS>
					ITERATOR_TYPE 
					M_Emplace<ITERATOR_TYPE, ITERATOR_CONST_TYPE, VALUE_TYPE>::Emplace(ITERATOR_TYPE constIterator, ARGS... args)
					{
						VALUE_TYPE constructor(args...);
						return DerivedEmplace(constIterator, constructor);
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_MEMBER_MODIFIER_M_EMPLACE_H_