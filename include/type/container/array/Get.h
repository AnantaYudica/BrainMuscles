#ifndef TYPE_CONTAINER_ARRAY_GET_H_
#define TYPE_CONTAINER_ARRAY_GET_H_

#include <cstddef>
#include <array>
#include "type/Container.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				template <std::size_t I, typename T, std::size_t N>
				T& Get(BrainMuscles::type::Container<std::array<T, N>>& arr)
				{
					return arr[I];
				}

				template <std::size_t I, typename T, std::size_t N>
				T&& Get(BrainMuscles::type::Container<std::array<T, N>>&& arr)
				{
					return arr[I];
				}

				template <std::size_t I, typename T, std::size_t N>
				const T& Get(const BrainMuscles::type::Container<std::array<T, N>>& arr)
				{
					return arr[I];
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_GET_H_