#ifndef TYPE_ITERATOR_HANDLE_DEFINITION_BASE_H_
#define TYPE_ITERATOR_HANDLE_DEFINITION_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace handle
			{
				namespace definition
				{
					struct Base
					{
						typedef void ValueType;
						typedef void DifferenceType;
						typedef void Pointer;
						typedef void Reference;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_HANDLE_DEFINITION_BASE_H_