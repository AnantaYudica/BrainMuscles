#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ITERATOR_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ITERATOR_H_

#include "type\iterator\derived\Definition.h"
#include "type\iterator\Tag.h"

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
						struct Iterator;
					}
				}
			}
		}
	}
}

#include "type\container\vector\Iterator.h"
#include "type\container\vector\iterator\RandomAccess.h"
#include "type\container\vector\iterator\Input.h"

#include "type\container\vector\iterator\Handle.h"

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
						struct Iterator
						{
							typedef void IteratorTagType;
							typedef void HandleType;
						};

						template<typename TYPE>
						struct Iterator<BrainMuscles::type::iterator::tag::random_access, TYPE> :
							public BrainMuscles::type::iterator::derived::Definition<
								BrainMuscles::type::container::vector::Iterator<
									Iterator<BrainMuscles::type::iterator::tag::random_access, TYPE>,
									BrainMuscles::type::container::vector::iterator::RandomAccess<
										Iterator<BrainMuscles::type::iterator::tag::random_access, TYPE>>>,
								TYPE, TYPE&, TYPE*, const TYPE&, const TYPE*>
						{
							typedef BrainMuscles::type::container::vector::iterator::RandomAccess<
								Iterator<BrainMuscles::type::iterator::tag::random_access, TYPE>>	IteratorTagType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::ByIterator<TYPE>								HandleType;

						};

						template<typename TYPE>
						struct Iterator<BrainMuscles::type::iterator::tag::input, TYPE> :
							public BrainMuscles::type::iterator::derived::Definition<
							BrainMuscles::type::container::vector::Iterator<
								Iterator<BrainMuscles::type::iterator::tag::input, TYPE>,
								BrainMuscles::type::container::vector::iterator::Input<
									Iterator<BrainMuscles::type::iterator::tag::input, TYPE>>>,
							TYPE, TYPE&, TYPE*, const TYPE&, const TYPE*>
						{
							typedef BrainMuscles::type::container::vector::iterator::Input<
								Iterator<BrainMuscles::type::iterator::tag::input, TYPE>>	IteratorTagType;
							typedef BrainMuscles::type::container::vector::iterator
								::handle::definition::ByIterator<TYPE>						HandleType;
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ITERATOR_H_