#ifndef TYPE_TRAIT_OBJECT_H_
#define TYPE_TRAIT_OBJECT_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename TYPE>
			class Object;
		}
	}
}

#include <type_traits>

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename TYPE>
			class Object
			{
				static_assert(std::is_object<TYPE>::value, "Object<TYPE> [TYPE != object]");
				typedef TYPE Type;
				typedef TYPE* Pointer;
				typedef TYPE& LeftValueReference;
				typedef const TYPE& ConstLeftValueReference;
				typedef TYPE&& RightValueReference;
			};
		}
	}
}


#endif //!TYPE_TRAIT_OBJECT_H_