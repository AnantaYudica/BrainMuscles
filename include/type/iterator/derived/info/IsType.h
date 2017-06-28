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
					template<typename INFO_TYPE>
					struct IsType
					{
						static constexpr bool Value = false;
					};

					template<typename DERIVED_TYPE, typename DEFINITION_TYPE>
					struct IsType<BrainMuscles::type::iterator::derived::Info<DERIVED_TYPE, DEFINITION_TYPE>>
					{
						static constexpr bool Value = true;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_INFO_ISTYPE_H_
