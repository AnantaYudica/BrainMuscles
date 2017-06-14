#ifndef TYPE_ITERATOR_MEMBER_M_EQUALITY_H_
#define TYPE_ITERATOR_MEMBER_M_EQUALITY_H_

#include "type\iterator\Base.h"
#include "type\iterator\handle\info\IsType.h"
#include "type\iterator\derived\info\IsType.h"

namespace BrainMuscles
{
	namespace type
	{
		namespace iterator
		{
			namespace member
			{
				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				class M_Equality :
					public virtual BrainMuscles::type::iterator::Base<HANDLE, DERIVED>
				{
					static_assert(BrainMuscles::type::iterator::derived::info::IsType<DERIVED_INFO>::Value, "[DERIVED_INFO Requires class derived::Info<Definition>");
					static_assert(BrainMuscles::type::iterator::handle::info::IsType<HANDLE_INFO>::Value, "Requires class Info<Definition>");
				public:
					typedef typename DERIVED_INFO::DerivedType DerivedType;
					typedef HANDLE HandleType;
					typedef BrainMuscles::type::iterator::Base<HANDLE, DERIVED_INFO> BaseType;
				protected:
					M_Equality();
					M_Equality(const DerivedType& derived);
					M_Equality(const HandleType& handle);
					template<typename... ARGS>
					M_Equality(ARGS... args);
				public:
					virtual ~M_Equality();
				protected:
					virtual DerivedType* ThisDerived() = 0;

					virtual bool OnRequestEqual(DerivedType& rhs) = 0;
				public:
					bool operator==(DerivedType& rhs);
					bool operator!=(DerivedType& rhs);

				};

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Equality() :
					BaseType()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Equality(const DerivedType& derived) :
					BaseType(derived)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Equality(const HandleType& handle) :
					BaseType(handle)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				template<typename... ARGS>
				M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::M_Equality(ARGS... args) :
					BaseType(args...)
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::~M_Equality()
				{}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator==(DerivedType& rhs)
				{
					return OnRequestEqual(rhs);
				}

				template<typename HANDLE, typename DERIVED_INFO, typename HANDLE_INFO>
				bool M_Equality<HANDLE, DERIVED_INFO, HANDLE_INFO>::operator!=(DerivedType& rhs)
				{
					return !OnRequestEqual(rhs);
				}
			}
		}
	}
}

#endif //!TYPE_ITERATOR_MEMBER_M_EQUALITY_H_