#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_

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
					template<typename HANDLE_DEFINITION_TYPE>
					class Handle;
				}
			}
		}
	}
}

#include <vector>
#include "type\container\vector\iterator\handle\definition\IsType.h"
#include "type\Cloneable.h"

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
					namespace handle
					{
						namespace definition
						{
							template<typename TYPE>
							using ByConstIterator = BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::ConstIterator<TYPE>>;

							template<typename TYPE>
							using ByIterator = BrainMuscles::type::container::vector::iterator::Handle<
								BrainMuscles::type::container::vector::iterator::handle::definition::Iterator<TYPE>>;
						}
					}

					template<typename HANDLE_DEFINITION_TYPE>
					class Handle :
						public Cloneable,
						public HANDLE_DEFINITION_TYPE
					{
						static_assert(BrainMuscles::type::container::vector::iterator::handle::definition::IsType<HANDLE_DEFINITION_TYPE>::Value, 
							"[HANDLE_DEFINITION_TYPE Requires class BrainMuscles::type::iterator::handle::definition::ConstIterator or BrainMuscles::type::iterator::handle::definition::Iterator");
					public:
						typedef HANDLE_DEFINITION_TYPE							HandleDefinitionType;
						typedef typename HandleDefinitionType::Type				Type;
						typedef typename HandleDefinitionType::ValueType		ValueType;
						typedef typename HandleDefinitionType::DifferenceType	DifferenceType;
						typedef typename HandleDefinitionType::Pointer			Pointer;
						typedef typename HandleDefinitionType::Reference		Reference;
					public:
						Handle();
					public:
						virtual ~Handle();
					public:
						virtual Cloneable* Clone() = 0;
						virtual Cloneable* Clone() const = 0;
						virtual Cloneable& operator=(Cloneable& lhs) = 0;
					public:
						virtual Cloneable& operator-=(const DifferenceType& rhs) = 0;
						virtual Cloneable& operator+=(const DifferenceType& rhs) = 0;
						virtual DifferenceType operator-(const Cloneable& lhs) = 0;
						virtual Cloneable& operator++() = 0;
						virtual Cloneable& operator--() = 0;
						virtual bool operator==(Cloneable& lhs) = 0;
						virtual bool operator!=(Cloneable& lhs) = 0;
						virtual bool operator<(Cloneable& lhs) = 0;
						virtual bool operator<=(Cloneable& lhs) = 0;
						virtual bool operator>(Cloneable& lhs) = 0;
						virtual bool operator>=(Cloneable& lhs) = 0;
						virtual ValueType& operator*() = 0;
					};

					template<typename TYPE>
					Handle<TYPE>::Handle()
					{}

					template<typename TYPE>
					Handle<TYPE>::~Handle()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_