#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_

#include <vector>
#include "type\iterator\handle\Definition.h"
#include "type\iterator\derived\definition\IsType.h"
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
					template<typename DEFINITION>
					class Handle :
						public Cloneable,
						public BrainMuscles::type::iterator::handle::Definition<typename DEFINITION::Type>
					{
						static_assert(BrainMuscles::type::iterator::derived::definition::IsType<DEFINITION>::Value, "[DEFINITION Requires class BrainMuscles::type::iterator::derived::Definition")
					public:
						typedef typename DEFINITION::Type ValueType;
						typedef typename BrainMuscles::type::iterator::handle::Definition<TYPE>::DifferenceType DifferenceType;
					public:
						Handle();
					public:
						virtual ~Handle();
					public:
						virtual Cloneable * Clone() = 0;
						virtual Cloneable * Clone() const = 0;
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

					template<typename DEFINITION>
					Handle<DEFINITION>::Handle()
					{}

					template<typename DEFINITION>
					Handle<DEFINITION>::~Handle()
					{}
				}
			}
		}
	}
}

#endif //!TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_