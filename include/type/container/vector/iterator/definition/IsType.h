#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ISTYPE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ISTYPE_H_

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
						template<typename DEFINITION_TYPE, bool VALIDATION = false>
						struct IsType;
					}
				}
			}
		}
	}
}

#include "type\container\vector\iterator\definition\ConstIterator.h"
#include "type\container\vector\iterator\definition\Iterator.h"


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
						template<typename DEFINITION_TYPE, bool VALIDATION>
						struct IsType
						{
							static constexpr bool Value = false;
							static_assert((VALIDATION ? BrainMuscles::type::container::vector::iterator::definition::IsType<DEFINITION_TYPE>::Value : true),
								"[DEFINITION_TYPE] Requires class BrainMuscles::type::container::vector::iterator::definition::ConstIterator "
									"or BrainMuscles::type::container::vector::iterator::definition::Iterator");
							typedef DEFINITION_TYPE Type;
						};

						template<typename ELEMENT_TYPE, bool VALIDATION>
						struct IsType<BrainMuscles::type::container::vector::iterator::definition::ConstIterator<ELEMENT_TYPE>, VALIDATION>
						{
							static constexpr bool Value = true;
							typedef BrainMuscles::type::container::vector::iterator::definition::ConstIterator<ELEMENT_TYPE> Type;
						};

						template<typename ELEMENT_TYPE, bool VALIDATION>
						struct IsType<BrainMuscles::type::container::vector::iterator::definition::Iterator<ELEMENT_TYPE>, VALIDATION>
						{
							static constexpr bool Value = true;
							typedef BrainMuscles::type::container::vector::iterator::definition::Iterator<ELEMENT_TYPE> Type;
						};
					}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_ISTYPE_H_