#ifndef TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_
#define TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_

#include <cstddef>

#include <array>
#include "type\container\array\iterator\definition\ConstIterator.h"
#include "type\container\array\iterator\definition\Iterator.h"
#include "type\iterator\derived\definition\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace container
		{
			namespace array
			{
				namespace iterator
				{
					template<typename TYPE, std::size_t SIZE, typename HANDLE_TYPE>
					struct Definition :
						public BrainMuscles::type::iterator::derived::definition::Base
					{
						typedef void Type;
						typedef void ReferenceType;
						typedef void PointerType;
						typedef void ConstReferenceType;
						typedef void ConstPointerType;
					};

					template<typename TYPE, std::size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::ConstIterator<TYPE, SIZE>
					{
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::Type					Type;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ReferenceType			ReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::PointerType			PointerType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ConstReferenceType		ConstReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ConstPointerType		ConstPointerType;
					};

					template<typename TYPE, std::size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::const_reverse_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::ConstIterator<TYPE, SIZE>
					{
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::Type					Type;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ReferenceType			ReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::PointerType			PointerType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ConstReferenceType		ConstReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::ConstIterator<TYPE, SIZE>::ConstPointerType		ConstPointerType;
					};

					template<typename TYPE, std::size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::iterator> :
						public BrainMuscles::type::container::array::iterator::definition::Iterator<TYPE, SIZE>
					{
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::Iterator<TYPE, SIZE>::Type					Type;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::Iterator<TYPE, SIZE>::ReferenceType			ReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::Iterator<TYPE, SIZE>::PointerType				PointerType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::Iterator<TYPE, SIZE>::ConstReferenceType		ConstReferenceType;
						typedef typename BrainMuscles::type::container::array::iterator
							::definition::Iterator<TYPE, SIZE>::ConstPointerType		ConstPointerType;
					};

					template<typename TYPE, std::size_t SIZE>
					struct Definition<TYPE, SIZE, typename std::array<TYPE, SIZE>::reverse_iterator> :
						public BrainMuscles::type::container::array::iterator::definition::Iterator<TYPE, SIZE>
					{
						typedef typename BrainMuscles::type::container::array
							::iterator::definition::Iterator<TYPE, SIZE>::Type					Type;
						typedef typename BrainMuscles::type::container::array
							::iterator::definition::Iterator<TYPE, SIZE>::ReferenceType			ReferenceType;
						typedef typename BrainMuscles::type::container::array
							::iterator::definition::Iterator<TYPE, SIZE>::PointerType			PointerType;
						typedef typename BrainMuscles::type::container::array
							::iterator::definition::Iterator<TYPE, SIZE>::ConstReferenceType	ConstReferenceType;
						typedef typename BrainMuscles::type::container::array
							::iterator::definition::Iterator<TYPE, SIZE>::ConstPointerType		ConstPointerType;
					};
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_ARRAY_ITERATOR_DEFINITION_H_