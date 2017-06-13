#ifndef TYPE_ITERATOR_DERIVED_INFO_ISTYPE_H_
#define TYPE_ITERATOR_DERIVED_INFO_ISTYPE_H_

#include "type\iterator\derived\Info.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				namespace info
				{
					template<typename INFO>
					struct IsType
					{
						static constexpr bool Value = false;
					};

					template<typename DEFINITION>
					struct IsType<BrainMuscles::type::iterator::derived::Info<DEFINITION>>
					{
						static constexpr bool Value = true;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_INFO_ISTYPE_H_
