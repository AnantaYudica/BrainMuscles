#ifndef TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_
#define TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_

#include "type\iterator\Base.h"
#include "type\iterator\handle\info\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				class M_Assignment :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef DERIVED DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
					typedef M_Assignment<DERIVED, HANDLE, HANDLE_INFO> AssignmentType;
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

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::M_Assignment() :
					BaseType()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::M_Assignment(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::M_Assignment(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::M_Assignment(ARGS... args) :
					BaseType(args...)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::~M_Assignment()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				typename M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::DerivedType&
				M_Assignment<DERIVED, HANDLE, HANDLE_INFO>::operator=(const DerivedType& rhs)
				{
					BaseType::operator=(rhs);
					return *ThisDerived();
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_ASSIGNMENT_H_