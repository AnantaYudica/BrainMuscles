#ifndef TYPE_TRAIT_POINTER_H_
#define TYPE_TRAIT_POINTER_H_

namespace BrainMuscles
{
	namespace type
	{
		namespace trait
		{
			template<typename TYPE>
			class Pointer;
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
			class Pointer
			{
				static_assert(std::is_pointer<TYPE>::value, "Pointer<TYPE> [TYPE != pointer]");
				typedef TYPE Type;
				typedef TYPE* Pointer;
				typedef TYPE& LeftValueReference;
				typedef const TYPE& ConstLeftValueReference;
				typedef TYPE&& RightValueReference;
			};
		}
	}
}


#endif //!TYPE_TRAIT_POINTER_H_