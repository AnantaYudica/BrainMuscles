#ifndef TYPE_CONTAINER_DEFINITION_BASE_H_
#define TYPE_CONTAINER_DEFINITION_BASE_H_

namespace BrainMuscles
{
	namespace container
	{
		namespace definition
		{
			struct Base
			{
				typedef void ElementType;
				typedef void ContainerType;
				typedef void HandleContainerType;
				typedef void RandomAccessIteratorType;
				typedef void RandomAccessConstIteratorType;
				typedef void RandomAccessReverseIteratorType;
				typedef void RandomAccessConstReverseIteratorType;
				typedef void InputIteratorType;
				typedef void InputConstIteratorType;
				typedef void InputReverseIteratorType;
				typedef void InputConstReverseIteratorType;
			};
		}
	}
}

#endif //!TYPE_CONTAINER_DEFINITION_BASE_H_