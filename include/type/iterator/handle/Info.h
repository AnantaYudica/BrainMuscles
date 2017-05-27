#ifndef TYPE_ITERATOR_HANDLE_INFO_H_
#define TYPE_ITERATOR_HANDLE_INFO_H_

#include "type\iterator\handle\Definition.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				template<typename DEFINITION>
				struct Info
				{
					typedef typename DEFINITION::value_type ValueType;
					typedef typename DEFINITION::difference_type DifferenceType;
					typedef typename DEFINITION::pointer Pointer;
					typedef typename DEFINITION::reference Reference;
				};

				template<typename TYPE, typename DISTANCE, typename POINTER, typename REFERENCE>
				struct Info<BrainMuscles::type::iterator::handle::Definition<TYPE, DISTANCE, POINTER, REFERENCE>>
				{
					typedef typename BrainMuscles::type::iterator::handle::Definition<TYPE, DISTANCE, POINTER, REFERENCE>::ValueType ValueType;
					typedef typename BrainMuscles::type::iterator::handle::Definition<TYPE, DISTANCE, POINTER, REFERENCE>::DifferenceType DifferenceType;
					typedef typename BrainMuscles::type::iterator::handle::Definition<TYPE, DISTANCE, POINTER, REFERENCE>::Pointer Pointer;
					typedef typename BrainMuscles::type::iterator::handle::Definition<TYPE, DISTANCE, POINTER, REFERENCE>::Reference Reference;
				};
			}
		}
	}
}


#endif //!TYPE_ITERATOR_HANDLE_INFO_H_