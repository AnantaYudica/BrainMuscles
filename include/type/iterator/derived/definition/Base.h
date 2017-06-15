#ifndef TYPE_ITERATOR_DERIVED_DEFINITION_BASE_H_
#define TYPE_ITERATOR_DERIVED_DEFINITION_BASE_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace derived
			{
				namespace definition
				{
					struct Base
					{
						typedef void DerivedType;
						typedef void Type;
						typedef void ReferenceType;
						typedef void PointerType;
						typedef void ConstReferenceType;
						typedef void ConstPointerType;
					};
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_DERIVED_DEFINITION_BASE_H_