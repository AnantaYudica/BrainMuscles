#ifndef TYPE_ITERATOR_TYPE_INFO_ISTYPE_H_
#define TYPE_ITERATOR_TYPE_INFO_ISTYPE_H_

#include "type\iterator\type\Info.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace type
			{
				namespace info
				{
					template<typename INFO>
					struct IsType
					{
						static constexpr bool Value = false;
					};

					template<typename DEFINITION>
					struct IsType<BrainMuscles::type::iterator::type::Info<DEFINITION>>
					{
						static constexpr bool Value = true;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_TYPE_INFO_ISTYPE_H_
