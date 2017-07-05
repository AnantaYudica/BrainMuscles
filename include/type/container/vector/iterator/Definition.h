#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_H_

#include "type\iterator\derived\definition\Base.h"

#include "type\container\vector\iterator\definition\ConstIterator.h"

#include "type\container\vector\iterator\definition\Iterator.h"

#include "type\container\vector\iterator\handle\ConstIterator.h"

#include "type\container\vector\iterator\handle\ConstReverseIterator.h"

#include "type\container\vector\iterator\handle\Iterator.h"

#include "type\container\vector\iterator\handle\ReverseIterator.h"

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
					template<typename ELEMENT_TYPE, typename HANDLE_TYPE>
					struct Definition :
						public BrainMuscles::type::iterator::derived::definition::Base
					{
						typedef void Type;
						typedef void ReferenceType;
						typedef void PointerType;
						typedef void ConstReferenceType;
						typedef void ConstPointerType;
					};

					template<typename ELEMENT_TYPE>
					struct Definition<ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::handle::ConstIterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::container::vector::iterator::definition::ConstIterator<ELEMENT_TYPE>
					{
					protected:
						typedef BrainMuscles::type::container::vector::iterator
							::definition::ConstIterator<ELEMENT_TYPE>				IteratorDefinitionType;
					public:
						typedef typename IteratorDefinitionType::Type				Type;
						typedef typename IteratorDefinitionType::ReferenceType		ReferenceType;
						typedef typename IteratorDefinitionType::PointerType		PointerType;
						typedef typename IteratorDefinitionType::ConstReferenceType	ConstReferenceType;
						typedef typename IteratorDefinitionType::ConstPointerType	ConstPointerType;
					};

					template<typename ELEMENT_TYPE>
					struct Definition<ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::handle::ConstReverseIterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::container::vector::iterator::definition::ConstIterator<ELEMENT_TYPE>
					{
					protected:
						typedef BrainMuscles::type::container::vector::iterator
							::definition::ConstIterator<ELEMENT_TYPE>				IteratorDefinitionType;
					public:
						typedef typename IteratorDefinitionType::Type				Type;
						typedef typename IteratorDefinitionType::ReferenceType		ReferenceType;
						typedef typename IteratorDefinitionType::PointerType		PointerType;
						typedef typename IteratorDefinitionType::ConstReferenceType	ConstReferenceType;
						typedef typename IteratorDefinitionType::ConstPointerType	ConstPointerType;
					};

					template<typename ELEMENT_TYPE>
					struct Definition<ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::handle::Iterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::container::vector::iterator::definition::Iterator<ELEMENT_TYPE>
					{
					protected:
						typedef BrainMuscles::type::container::vector::iterator
							::definition::Iterator<ELEMENT_TYPE>					IteratorDefinitionType;
					public:
						typedef typename IteratorDefinitionType::Type				Type;
						typedef typename IteratorDefinitionType::ReferenceType		ReferenceType;
						typedef typename IteratorDefinitionType::PointerType		PointerType;
						typedef typename IteratorDefinitionType::ConstReferenceType	ConstReferenceType;
						typedef typename IteratorDefinitionType::ConstPointerType	ConstPointerType;
					};

					template<typename ELEMENT_TYPE>
					struct Definition<ELEMENT_TYPE, BrainMuscles::type::container::vector::iterator::handle::ReverseIterator<ELEMENT_TYPE>> :
						public BrainMuscles::type::container::vector::iterator::definition::Iterator<ELEMENT_TYPE>
					{
					protected:
						typedef BrainMuscles::type::container::vector::iterator
							::definition::Iterator<ELEMENT_TYPE>					IteratorDefinitionType;
					public:
						typedef typename IteratorDefinitionType::Type				Type;
						typedef typename IteratorDefinitionType::ReferenceType		ReferenceType;
						typedef typename IteratorDefinitionType::PointerType		PointerType;
						typedef typename IteratorDefinitionType::ConstReferenceType	ConstReferenceType;
						typedef typename IteratorDefinitionType::ConstPointerType	ConstPointerType;
					};
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_DEFINITION_H_