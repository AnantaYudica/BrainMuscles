#ifndef TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_
#define TYPE_CONTAINER_VECTOR_ITERATOR_HANDLE_H_

#include <vector>
#include "type\iterator\handle\Definition.h"
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
					template<typename TYPE>
					class Handle :
						public Cloneable,
						public BrainMuscles::type::iterator::handle::Definition<TYPE>
					{
					public:
						typedef TYPE ValueType;
						typedef BrainMuscles::type::iterator::handle::Definition<TYPE>::DifferenceType DifferenceType;
					protected:
						Handle();
					public:
						virtual ~Handle();
					public:
						virtual Cloneable * Clone() = 0;
						virtual Cloneable& operator=(Cloneable& lhs) = 0;
					public:
						virtual Cloneable& operator-=(const DifferenceType& rhs) = 0;
						virtual Cloneable& operator+=(const DifferenceType& rhs) = 0;
						virtual DifferenceType operator-(Cloneable& lhs) = 0;
						virtual Cloneable& operator++() = 0;
						virtual Cloneable& operator--() = 0;
						virtual bool operator==(Cloneable& lhs) = 0;
						virtual bool operator!=(Cloneable& lhs) = 0;
						virtual bool operator<(Cloneable& lhs) = 0;
						virtual bool operator<=(Cloneable& lhs) = 0;
						virtual bool operator>(Cloneable& lhs) = 0;
						virtual bool operator>=(Cloneable& lhs) = 0;
						virtual ValueType * operator*() = 0;
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