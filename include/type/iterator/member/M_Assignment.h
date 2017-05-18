#ifndef TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_
#define TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_

#include "type\iterator\Base.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename HANDLE, typename DERIVED>
				class M_Assignment :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
				public:
					typedef DERIVED DerivedType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef M_Assignment<HANDLE, DERIVED> AssignmentType;
				protected:
					M_Assignment();
					M_Assignment(const DerivedType& derived);
					M_Assignment(const HandleType& handle);
					template<typename... ARGS>
					M_Assignment(ARGS... args);
				public:
					virtual ~M_Assignment();
				protected:
					virtual DERIVED* ThisDerived() = 0;
				public:
					DerivedType& operator=(const DerivedType& rhs);
				};

				template<typename HANDLE, typename DERIVED>
				M_Assignment<HANDLE, DERIVED>::M_Assignment() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED>
				M_Assignment<HANDLE, DERIVED>::M_Assignment(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Assignment<HANDLE, DERIVED>::M_Assignment(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED>
				template<typename... ARGS>
				M_Assignment<HANDLE, DERIVED>::M_Assignment(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED>
				M_Assignment<HANDLE, DERIVED>::~M_Assignment()
				{}

				template<typename HANDLE, typename DERIVED>
				typename M_Assignment<HANDLE, DERIVED>::DerivedType&
				M_Assignment<HANDLE, DERIVED>::operator=(const DerivedType& rhs)
				{
					BrainMuscles::type::iterator::Base<HANDLE>::operator=(rhs);
					return *this;
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_