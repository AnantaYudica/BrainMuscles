#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_

#include "type\iterator\derived\Definition.h"
#include "type\iterator\Tag.h"

#include "type\container\vector\Iterator.h"
#include "type\container\vector\iterator\RandomAccess.h"
#include "type\container\vector\iterator\Input.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				namespace iterator
				{
					namespace definition
					{
						template<BrainMuscles::type::iterator::Tag TAG, typename TYPE, typename HANDLE>
						struct ConstIterator
						{
						};

						template<typename TYPE, typename HANDLE>
						struct ConstIterator<BrainMuscles::type::iterator::tag::random_access, TYPE, HANDLE> :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::vector::Iterator<
									BrainMuscles::type::container::vector::iterator::RandomAccess<
										TYPE, HANDLE>>, TYPE, const TYPE&, const TYPE*, const TYPE&, const TYPE*>
						{
						};

						template<typename TYPE, typename HANDLE>
						struct ConstIterator<BrainMuscles::type::iterator::tag::input, TYPE, HANDLE> :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::vector::Iterator<
									BrainMuscles::type::container::vector::iterator::Input<
										TYPE, HANDLE>>, TYPE, const TYPE&, const TYPE*, const TYPE&, const TYPE*>
						{
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_