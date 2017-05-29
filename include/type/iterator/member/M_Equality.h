#ifndef TYPE_ITERATOR_MEMBER_M_EQUALITY_H_
#define TYPE_ITERATOR_MEMBER_M_EQUALITY_H_

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
				class M_Equality :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef DERIVED DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED> BaseType;
				protected:
					M_Equality();
					M_Equality(const DerivedType& derived);
					M_Equality(const HandleType& handle);
					template<typename... ARGS>
					M_Equality(ARGS... args);
				public:
					virtual ~M_Equality();
				protected:
					virtual DERIVED* ThisDerived() = 0;

					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
				public:
					bool operator==(DerivedType& rhs);
					bool operator!=(DerivedType& rhs);

				};

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Equality<DERIVED, HANDLE, HANDLE_INFO>::M_Equality() :
					BaseType()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Equality<DERIVED, HANDLE, HANDLE_INFO>::M_Equality(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Equality<DERIVED, HANDLE, HANDLE_INFO>::M_Equality(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Equality<DERIVED, HANDLE, HANDLE_INFO>::M_Equality(ARGS... args) :
					BaseType(args...)
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				M_Equality<DERIVED, HANDLE, HANDLE_INFO>::~M_Equality()
				{}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Equality<DERIVED, HANDLE, HANDLE_INFO>::operator==(DerivedType& rhs)
				{
					return OnRequestEqual(rhs);
				}

				template<typename DERIVED, typename HANDLE, typename HANDLE_INFO>
				bool M_Equality<DERIVED, HANDLE, HANDLE_INFO>::operator!=(DerivedType& rhs)
				{
					return !OnRequestEqual(rhs);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_EQUALITY_H_