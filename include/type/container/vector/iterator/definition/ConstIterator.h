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
						template<BrainMuscles::type::iterator::tag::Type TAG, typename TYPE>
						struct ConstIterator
						{
						};

						template<typename TYPE>
						struct ConstIterator<BrainMuscles::type::iterator::tag::random_access, TYPE> :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::vector::Iterator<
									ConstIterator<BrainMuscles::type::iterator::tag::random_access, TYPE>,
									BrainMuscles::type::container::vector::iterator::random_access::ConstIterator<TYPE>>>,
								TYPE, const TYPE&, const TYPE*, const TYPE&, const TYPE*>
						{
						};

						template<typename TYPE>
						struct ConstIterator<BrainMuscles::type::iterator::tag::input, TYPE> :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::vector::Iterator<
									ConstIterator<BrainMuscles::type::iterator::tag::input, TYPE>,
									BrainMuscles::type::container::vector::iterator::input::ConstIterator<TYPE>>, 
								TYPE, const TYPE&, const TYPE*, const TYPE&, const TYPE*>
						{
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_CONSTITERATOR_H_