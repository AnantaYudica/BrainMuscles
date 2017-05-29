#ifndef TYPE_ITERATOR_HANDLE_INFO_ISTYPE_H_
#define TYPE_ITERATOR_HANDLE_INFO_ISTYPE_H_

#include "type\iterator\handle\Info.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				namespace info
				{
					template<typename INFO>
					struct IsType
					{
						static constexpr bool Value = false;
					};

					template<typename DEFINITION>
					struct IsType<BrainMuscles::type::iterator::handle::Info<DEFINITION>>
					{
						static constexpr bool Value = true;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_HANDLE_INFO_ISTYPE_H_