#ifndef TYPE_CONTAINER_ELEMENT_BASE_H_
#define TYPE_CONTAINER_ELEMENT_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace element 
			{
				struct Base
				{
					typedef void Type;
					typedef void DifferenceType;
					typedef void SizeType;
					typedef void PointerType;
					typedef void LeftValueReferenceType;
					typedef void RightValueReferenceType;
					typedef void ConstPointerType;
					typedef void ConstLeftValueReferenceType;
					typedef void ConstRightValueReferenceType;
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ELEMENT_BASE_H_