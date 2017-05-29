#ifndef TYPE_ITERATOR_HANDLE_INFO_H_
#define TYPE_ITERATOR_HANDLE_INFO_H_

#include "type\iterator\handle\Definition.h"
#include "type\iterator\handle\definition\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				template<typename DEFINITION, typename = void>
				struct Info
				{
					typedef typename DEFINITION::value_type ValueType;
					typedef typename DEFINITION::difference_type DifferenceType;
					typedef typename DEFINITION::pointer Pointer;
					typedef typename DEFINITION::reference Reference;
				};

				template<typename DEFINITION>
				struct Info<DEFINITION, typename std::enable_if<BrainMuscles::type::iterator::handle::definition::IsType<DEFINITION>::Value, void>::type>
				{
					typedef typename DEFINITION::ValueType ValueType;
					typedef typename DEFINITION::DifferenceType DifferenceType;
					typedef typename DEFINITION::Pointer Pointer;
					typedef typename DEFINITION::Reference Reference;
				};
			}
		}
	}
}


#endif //!TYPE_ITERATOR_HANDLE_INFO_H_