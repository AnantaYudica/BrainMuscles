#ifndef TYPE_CONTAINER_ARRAY_GET_H_
#define TYPE_CONTAINER_ARRAY_GET_H_

#include "type\container\Array.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template <size_t I, typename T, size_t N>
				T& Get(BrainMuscles::type::container::Array<T, N>& arr)
				{
					return arr[I];
				}

				template <size_t I, typename T, size_t N>
				T&& Get(BrainMuscles::type::container::Array<T, N>&& arr)
				{
					return arr[I];
				}

				template <size_t I, typename T, size_t N> 
				const T& Get(const BrainMuscles::type::container::Array<T, N>& arr)
				{
					return arr[I];
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_GET_H_