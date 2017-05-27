#ifndef TYPE_ITERATOR_HANDLE_DEFINITION_H_
#define TYPE_ITERATOR_HANDLE_DEFINITION_H_

#include <cstddef>
#include <iterator>

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				template<typename TYPE, typename DISTANCE = std::ptrdiff_t, typename POINTER = TYPE*, typename REFERENCE = TYPE&>
				struct Definition
				{
					typedef TYPE ValueType;
					typedef DISTANCE DifferenceType;
					typedef POINTER Pointer;
					typedef REFERENCE Reference;
				};
			}
		}
	}
}

#endif //!TYPE_ITERATOR_HANDLE_DEFINITION_H_
