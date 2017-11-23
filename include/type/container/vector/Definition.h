#ifndef TYPE_CONTAINER_VECTOR_DEFINITION_H_
#define TYPE_CONTAINER_VECTOR_DEFINITION_H_

#include <cstddef>
#include <vector>

#include "type/iterator/Tag.h"

#include "type/container/definition/Base.h"

#include "type/container/Element.h"

#include "type/container/Base.h"

#include "type/container/vector/Iterator.h"

#include "type/container/vector/iterator/handle/definition/ConstIterator.h"
#include "type/container/vector/iterator/handle/definition/Iterator.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace vector
			{
				template<typename TYPE>
				struct Definition :
					public BrainMuscles::type::container::definition::Base
				{
					typedef BrainMuscles::type
						::container::Element<TYPE>									ElementType;
					typedef BrainMuscles::type::Container<std::vector<TYPE>>		ContainerType;
					typedef std::vector<TYPE>										HandleContainerType;
					typedef BrainMuscles::type
						::container::Base<std::vector<TYPE>>						BaseType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::random_access, 
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								Iterator<ElementType>>>								RandomAccessIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::random_access,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								ConstIterator<ElementType>>>						RandomAccessConstIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::random_access, 
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								Iterator<ElementType>>>								RandomAccessReverseIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::random_access,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								ConstIterator<ElementType>>>						RandomAccessConstReverseIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::input,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								Iterator<ElementType>>>								InputIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::input,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								ConstIterator<ElementType>>>						InputConstIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::input,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								Iterator<ElementType>>>								InputReverseIteratorType;
					typedef BrainMuscles::type::container::vector::Iterator<
						BrainMuscles::type::iterator::tag::input,
						ElementType, BrainMuscles::type::container::vector
							::iterator::Handle<BrainMuscles::type::container
								::vector::iterator::handle::definition::
								ConstIterator<ElementType>>>						InputConstReverseIteratorType;
				};
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_DEFINITION_H_